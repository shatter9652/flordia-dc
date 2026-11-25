// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140007b80  size: 104 bytes
// Name:    FUN_140007b80
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


int FUN_140007b80(ulonglong *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  bool bVar4;
  
  uVar2 = *param_1;
  do {
    while ((char)uVar2 == '\0') {
      LOCK();
      uVar1 = *param_1;
      if (uVar2 == uVar1) {
        *param_1 = uVar2 + 0x100;
        uVar1 = uVar2;
      }
      UNLOCK();
      bVar4 = uVar2 == uVar1;
      uVar2 = uVar1;
      if (bVar4) {
        func_0x0001402a1be0(param_1[1],1);
        uVar2 = *param_1;
      }
    }
    uVar3 = -uVar2 & uVar2;
    LOCK();
    uVar1 = *param_1;
    if (uVar2 == uVar1) {
      *param_1 = uVar3 ^ uVar2;
      uVar1 = uVar2;
    }
    UNLOCK();
    bVar4 = uVar2 != uVar1;
    uVar2 = uVar1;
  } while (bVar4);
  return 0x3f - (int)LZCOUNT(uVar3);
}

