// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1418410a0  size: 62 bytes
// Name:    netXblHttp::FreeAuthToken
// Subsystem: core
// Class:   netXblHttp
//
// Evidence:
//   GTAVSRC: netXblHttp::FreeAuthToken  (rage/base/src/net/http.cpp)
//   literal: Content-Length
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1418410e0, FUN_141841110
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"
#include "gta6decomp/netXblHttp.h"


void netXblHttp__FreeAuthToken(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_58 [72];
  
  FUN_1418410e0(param_2,auStack_58);
  uVar1 = func_0x000145f407f0(auStack_58);
  FUN_141841110(param_1,&UNK_146780af2,auStack_58,uVar1);
  return;
}

