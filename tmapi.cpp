#include "tmapi.h"

TMAPI::TMAPI() : _lib_loaded(false), _target(0xFFFFFFFE), hlib(LoadLibrary(L"ps3tmapi.dll"))
{
    _lib_loaded = init();
}

TMAPI::~TMAPI()
{
    _lib_loaded = false;
}

bool TMAPI::init()
{
    if(!hlib)
        return false;

    InitTargetComms = (int(__cdecl*)())GetProcAddress(hlib, "SNPS3InitTargetComms");
    ProcConnectTarget = (int(__cdecl*)(int, LPWSTR))GetProcAddress(hlib, "SNPS3Connect");
    ProcDisconnectTarget = (int(__cdecl*)(int))GetProcAddress(hlib, "SNPS3Disconnect");
    ProcProcessList = (int(__cdecl*)(int, UINT32*, UINT32*))GetProcAddress(hlib, "SNPS3ProcessList");
    ProcProcessAttach = (int(__cdecl*)(int, UINT32, UINT32))GetProcAddress(hlib, "SNPS3ProcessAttach");
    ProcProcessContinue = (int(__cdecl*)(int, UINT32))GetProcAddress(hlib, "SNPS3ProcessContinue");
    ProcGetMemory = (int(__cdecl*)(int, UINT32, UINT32, UINT64, UINT64, int, BYTE*))GetProcAddress(hlib, "SNPS3ProcessGetMemory");
    ProcSetMemory = (int(__cdecl*)(int, UINT32, UINT32, UINT64, UINT64, int, BYTE*))GetProcAddress(hlib, "SNPS3ProcessSetMemory");
    GetProcessInfo = (int(__cdecl*)(int, UINT32, UINT32*, SNPS3PROCESSINFO*))GetProcAddress(hlib, "SNPS3ProcessInfo");

    bool loaded = (InitTargetComms != NULL)
            && (ProcConnectTarget != NULL)
            && (ProcDisconnectTarget != NULL)
            && (ProcProcessList != NULL)
            && (ProcProcessAttach != NULL)
            && (ProcProcessContinue != NULL)
            && (ProcGetMemory != NULL)
            && (ProcSetMemory != NULL)
            && (GetProcessInfo != NULL);

    return loaded;
}

bool TMAPI::getLibraryState() const
{
    return _lib_loaded;
}

const char* TMAPI::getGame() const
{
    SNPS3PROCESSINFO* info = new SNPS3PROCESSINFO;
    UINT32 buffsz[32];

    while(info->hdr.szPath[0] != '/')
    {
        GetProcessInfo(_target, _process_id, buffsz, info);
        Sleep(4500);
    }
    return info->hdr.szPath;
}

bool TMAPI::SUCCEEDEDS(long res) const
{
    return (res >= 0);
}

bool TMAPI::connect()
{
    InitTargetComms();
    if(!SUCCEEDEDS(ProcConnectTarget(_target, NULL)))
    {
        //if using Qt: QMessageBox::critical(0, QString("Error"), QString("Cannot Connect to PS3"));
        return false;
    }
    else
    {
        ProcProcessList(_target, _puCount, &_process_id);
        Sleep(100);
        InitTargetComms();
        ProcConnectTarget(_target, NULL);
        ProcProcessList(_target, _puCount, &_process_id);
        //if using Qt: QMessageBox::information(0, QString("Success"), QString("Connected to PS3!"));
        return true;
    }
}
bool TMAPI::attach() const
{
    if(!SUCCEEDEDS(ProcProcessAttach(_target, 0, _process_id)))
    {
        //if using Qt: QMessageBox::critical(0, QString("Error"), QString("An Error Occured while Attaching to the Game Process"));
        return false;
    }
    else
    {
        ProcProcessContinue(_target, _process_id);
        //if using Qt: QMessageBox::information(0, QString("Success"), QString("Attached to Game Process!"));
        return true;
    }
}
void TMAPI::setMemory(UINT32 Address, BYTE *bytes, int sizeOfArray) const
{
    InitTargetComms();
    ProcSetMemory(_target, 0, _process_id, 0, Address, sizeOfArray, bytes);
}

BYTE* TMAPI::getMemory(UINT32 Address, INT32 Length) const
{
    InitTargetComms();
    BYTE* ret = new BYTE[Length];
    ProcGetMemory(_target, 0, _process_id, 0, Address, Length, ret);
    return ret;
}

signed char TMAPI::readSByte(UINT32 Address) const
{
    return (signed char)getMemory(Address, 1)[0];
}
BYTE TMAPI::readByte(UINT32 Address)const
{
    return (BYTE)getMemory(Address, 1)[0];
}
bool TMAPI::readBool(UINT32 Address)const
{
    return getMemory(Address, 1)[0] != 0;
}
void TMAPI::writeByte(UINT32 Address, BYTE input) const
{
    BYTE bytes[] = { input };
    setMemory(Address, bytes, 1);
}
void TMAPI::writeSByte(UINT32 Address, signed char input) const
{
    BYTE bytes[] = { (BYTE)input };
    setMemory(Address, bytes, 1);
}
void TMAPI::writeBool(UINT32 Address, bool input) const
{
    BYTE bytes[] = { input };
    bytes[0] = input ? (BYTE)1 : (BYTE)0;
    setMemory(Address, bytes, 1);
}

void TMAPI::writeSingle(UINT32 Address, float* input)
{
    int len = (sizeof(input)/sizeof(*input));
    for(int i = 0; i < (len * 4); i += 4)
    {
        for(int j = 0; j < len; len++)
        {
            writeData<float>(Address + i, input[j]);
        }
    }
}

void TMAPI::writeString(UINT32 Address, const char* text) const
{
    setMemory(Address, (unsigned char*)text, strlen(text) + 1);
}

bool TMAPI::compareByteArray(BYTE* a, BYTE* b, INT32 ArrayLength) const
{
    INT32 CheckArray = 0;
    for (INT32 i = 0; i < ArrayLength; i++)
    if (a[i] == b[i])
        CheckArray++;
    return CheckArray == ArrayLength;
}

std::string TMAPI::readString(UINT32 Address, INT32 Length) const
{
    return (reinterpret_cast<const char*>(getMemory(Address, Length)));
}
