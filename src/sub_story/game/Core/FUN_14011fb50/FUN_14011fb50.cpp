// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14011fb50  size: 61 bytes
// Name:    FUN_14011fb50
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1415298e0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


ulonglong FUN_14011fb50(longlong param_1)

{
  byte bVar1;
  ulonglong uVar2;
  
  uVar2 = func_0x00014011fa10();
  if (((char)uVar2 == '\0') || (DAT_14801335c == '\x01')) {
    uVar2 = 0;
    LOCK();
    bVar1 = *(byte *)(param_1 + 0x694);
    if (bVar1 == 0) {
      *(byte *)(param_1 + 0x694) = 1;
    }
    else {
      uVar2 = (ulonglong)bVar1;
    }
    UNLOCK();
    if (bVar1 == 0) {
      uVar2 = FUN_1415298e0(param_1);
      *(undefined1 *)(param_1 + 0x694) = 0;
    }
  }
  return uVar2;
}

