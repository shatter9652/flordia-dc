// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 143dccd90  size: 413 bytes
// Name:    netHttpRequest::Succeeded
// Subsystem: core
// Class:   netHttpRequest
//
// Evidence:
//   GTAVSRC: netHttpRequest::Succeeded  (rage/base/src/net/http.cpp)
//   literal: If-Modified-Since
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_141c27a60, FUN_1457d1ec0, netHttpRequest::MakeDateString, FUN_1411d0210, FUN_143da4fb0, FUN_1441d60f0, FUN_142218f50
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"
#include "gta6decomp/netHttpRequest.h"


undefined8
netHttpRequest__Succeeded
          (longlong param_1,undefined4 param_2,longlong param_3,undefined8 *param_4,longlong param_5
          ,ushort param_6,undefined8 *param_7)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_178 [8];
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined1 uStack_14e;
  longlong lStack_148;
  short sStack_13e;
  undefined1 auStack_138 [264];
  
  if (param_3 == 0) {
    uVar3 = 0xbd7;
    uVar4 = 0xbc113f8c;
  }
  else {
    cVar2 = FUN_142218f50(param_3,param_1 + 0x2138,0,0);
    if (cVar2 != '\0') {
      lVar1 = param_1 + 0x128;
      func_0x000145f055c0(lVar1);
      FUN_1441d60f0(lVar1,(uint)param_6 | *(uint *)(param_1 + 8000));
      *(undefined8 **)(param_1 + 0x25c0) = param_7;
      if (param_7 != (undefined8 *)0x0) {
        *param_7 = 0;
        *(undefined4 *)(param_7 + 1) = 0;
        *(undefined1 *)((longlong)param_7 + 0xc) = 0;
        *(undefined1 *)((longlong)param_7 + 0x18c) = 0;
        *(undefined1 *)((longlong)param_7 + 0x1cc) = 0;
        *(undefined4 *)(param_7 + 0x4a) = 0;
        *(undefined1 *)((longlong)param_7 + 0x254) = 0;
        *(undefined1 *)((longlong)param_7 + 0x269) = 0;
      }
      FUN_141c27a60(auStack_178);
      uStack_14e = 1;
      uStack_170 = *param_4;
      uStack_168 = param_4[1];
      uStack_160 = param_4[2];
      cVar2 = FUN_143da4fb0(param_1,param_2,auStack_178);
      if (cVar2 == '\0') {
        FUN_1457d1ec0(0x146c69b20,1,0xbec,0x4257ffcd);
      }
      else if (param_5 != 0) {
        netHttpRequest__MakeDateString(param_5,auStack_138);
        FUN_1411d0210(lVar1,&UNK_146783a6a,auStack_138);
      }
      if ((sStack_13e != 0) && (lStack_148 != 0)) {
        func_0x000144d9c130();
      }
      if (cVar2 == '\0') {
        return 0;
      }
      return 1;
    }
    uVar3 = 0xbda;
    uVar4 = 0x489b3726;
  }
  FUN_1457d1ec0(0x146c69b20,1,uVar3,uVar4);
  return 0;
}

