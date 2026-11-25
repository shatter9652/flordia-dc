// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140054d50  size: 145 bytes
// Name:    FUN_140054d50
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1455ae4b0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_140054d50(longlong param_1,undefined2 param_2,uint param_3)

{
  ushort *puVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  ushort *puVar6;
  
  uVar4 = FUN_1455ae4b0(param_3);
  *(undefined2 *)(_DAT_147649c28 + 2 + (ulonglong)uVar4 * 6) = param_2;
  puVar6 = (ushort *)(param_1 + 0x186);
  do {
    while (*puVar6 != 0xffff) {
      uVar5 = 0xfffe;
      puVar1 = (ushort *)(_DAT_147649c28 + (ulonglong)*puVar6 * 6);
      LOCK();
      uVar3 = *puVar1;
      if (uVar3 == 0xfffe) {
        *puVar1 = uVar4;
      }
      else {
        uVar5 = (uint)uVar3;
      }
      UNLOCK();
      if (uVar3 == 0xfffe) goto LAB_140054dbc;
    }
    uVar5 = 0xffff;
    LOCK();
    uVar3 = *puVar6;
    if (uVar3 == 0xffff) {
      *puVar6 = uVar4;
    }
    else {
      uVar5 = (uint)uVar3;
    }
    UNLOCK();
  } while (uVar3 != 0xffff);
  puVar6 = (ushort *)(param_1 + 0x184);
LAB_140054dbc:
  LOCK();
  *puVar6 = uVar4;
  UNLOCK();
  if (((byte)param_3 < 8) && (uVar5 = param_3 & 0xff, (0xcaU >> (param_3 & 0x1f) & 1) != 0)) {
    LOCK();
    bVar2 = *(byte *)(param_1 + 0x188);
    *(byte *)(param_1 + 0x188) = 1;
    uVar5 = (uint)bVar2;
    UNLOCK();
  }
  return uVar5;
}

