#pragma once

#ifndef TMAPI_H
#define TMAPI_H

/**
    milky4444's PS3Lib was released as a beta version. I have basically went in, cut out CCAPI,
and turned the rest into a completed (not beta) library. This has made it neater, cleaner,
and gotten rid of many compiler warnings. Not to say anything against milky's work though...
this is still mostly his work but polished up.
    The intentions of this are mostly to be used in conjunction with Enstone's CCAPI C++
library. They are similar and have turned out to work cleanly together.

Credits:
* milky4444 (creating library, 90% of work)
* seb5594   (credited by milky)
* Enstone   (Inspiration from a coding standpoint;
                   his CCAPI library in C++)
* Me (Hacked Tutorials) Putting this together

**/

#include <windows.h>
#include <stdlib.h>
#include <string>
#include <sstream>
#include <algorithm>

typedef unsigned int uint;
typedef unsigned long ulong;

///TMAPI Library 1.1

class TMAPI
{
public:
    TMAPI();
    ~TMAPI();

private:
    bool init();
    bool _lib_loaded;

public:
    struct SNPS3PROCESSINFO_HDR
    {
        UINT32	uStatus;            /// Process status (see \link PS3tmapi.h::ESNPS3PROCESSSTATUS ESNPS3PROCESSSTATUS\endlink).
        UINT32	uNumPPUThreads;     /// Number of PPU threads.
        UINT32	uNumSPUThreads;     /// Number of SPU threads.
        UINT32	uParentProcessID;   /// Parent process ID.
        UINT64	uMaxMemorySize;     /// Maximum memory size for process.
        char	szPath[512];        /// Path to the loaded elf. UTF-8 null-terminated string.
    };
    struct SNPS3PROCESSINFO
    {
        SNPS3PROCESSINFO_HDR hdr;
        UINT64 thread_ids[];
    };

private:
    HMODULE hlib;

    int(__cdecl *InitTargetComms)(void);
    int(__cdecl *ProcConnectTarget)(int, LPWSTR);
    int(__cdecl *ProcDisconnectTarget)(int);
    int(__cdecl *ProcProcessList)(int, UINT32*, UINT32*);
    int(__cdecl *ProcProcessAttach)(int, UINT32, UINT32);
    int(__cdecl *ProcProcessContinue) (int, UINT32);
    int(__cdecl *ProcSetMemory)(int, UINT32, UINT32, UINT64, UINT64, int, BYTE*);
    int(__cdecl *ProcGetMemory)(int, UINT32, UINT32, UINT64, UINT64, int, BYTE*);
    int(__cdecl *GetProcessInfo)(int,UINT32, UINT32*, SNPS3PROCESSINFO*);

private:
    bool SUCCEEDEDS(long res) const;
    INT32 _target;
    UINT32 _puCount[32];
    UINT32 _process_id;

public:     // Have fun with these :)
    bool getLibraryState() const;
    const char* getGame() const;
    bool connect();
    bool attach() const;
    void setMemory(UINT32 Address, BYTE *bytes, int sizeOfArray) const;
    BYTE* getMemory(UINT32 Address, INT32 Length) const;
    signed char readSByte(UINT32 Address) const;
    BYTE readByte(UINT32 Address) const;
    bool readBool(UINT32 Address) const;
    std::string readString(UINT32 Address, INT32 Length) const;
    void writeByte(UINT32 Address, BYTE input) const;
    void writeSByte(UINT32 Address, signed char input) const;
    void writeBool(UINT32 Address, bool input) const;
    void writeSingle(UINT32 Address, float* input);
    void writeString(UINT32 Address, const char* text) const;
    bool compareByteArray(BYTE* a, BYTE* b, INT32 ArrayLength) const;

    template<class T>
    T readData(UINT32 addr) const
    {
        BYTE* read = getMemory(addr, sizeof(T));
        std::reverse(read, read + sizeof(T));
        return *reinterpret_cast<T*>(read);
    }

    template<class T>
    void writeData(UINT32 addr, T input)
    {
        BYTE bytes[sizeof(T)];
        *reinterpret_cast<T*>(bytes) = input;
        std::reverse(bytes, bytes + sizeof(T));
        setMemory(addr, bytes, sizeof(T));
    }

    /**
     Reading Data:
     Use ReadSByte for reading a signed char
     Use ReadByte for reading an unsigned char
     Use ReadBool for reading a bool
     Use ReadString for reading an std::string.
     Use readData for reading anything else.
      Example (how to read an int):
     readData<int>(address_goes_here)
    **/

    /**
     Writing Data:
     Use WriteSByte for writing a signed char
     Use WriteByte for writing an unsigned char
     Use WriteBool for writing a bool
     Use WriteString for writing a const char* (string).
     Use writeData for writing anything else.
      Example (how to write an int):
     writeData<int>(address_goes_here, data_goes_here)
    **/

private:    //Useful functions
    template<class T>
    static std::string toString(T buf)
    {
        std::stringstream a;
        a << buf;
        return a.str();
    }

    static char* WStrToCStr(wchar_t* wstr)
    {
        char* buff = new char[wcslen(wstr)];
        wcstombs(buff, wstr, wcslen(wstr));
        buff[wcslen(wstr)] = '\0';
        return buff;
    }

    static wchar_t* CStrToWStr(char* cstr)
    {
        wchar_t* buff = new wchar_t[strlen(cstr)];
        mbstowcs(buff,cstr,strlen(cstr));
        buff[strlen(cstr) - 1] = '\0';
        return buff;
    }

    static unsigned long int Endian_DWord_Conversion(unsigned long int dword) // for reversing bits
    {
        return ((dword>>24)&0x000000FF) | ((dword>>8)&0x0000FF00) | ((dword<<8)&0x00FF0000) | ((dword<<24)&0xFF000000);
    }
};

#endif // TMAPI_H
