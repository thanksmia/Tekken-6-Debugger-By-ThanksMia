# Tekken 6 Debugger By ThanksMia


This Debugger/hacktool was written in C++ using QT 5.15.2 it should be a representation on
how to build a multimedia hack tool, that has good backend but also provides user feedback.


examples: see tmapi and ccapi header files.

"write bytes"
using tmapi: tmapi.writeSByte(0xB8F1B7, 82);
using ccapi: ccapi.WriteMemory(0xB8F1B7, 82);

"writtte array"
BYTE bytes[] = { 0x00, 0x00, 0x00, 0x00 };
                tmapi.setMemory(0xB2C7EF, bytes, sizeof(bytes));
                tmapi.setMemory(0xB2D42F, bytes, sizeof(bytes));



If you'd like to submit code for a hack  just  commit or go over to
https://thanksmianews.com/tekken6debuggerbythanksmiav1-0/ 
it will be tested and then added.

 ![alt text](https://github.com/thanksmia/Tekken-6-Debugger-By-ThanksMia/blob/master/debuggersite2thanksmia.PNG)
