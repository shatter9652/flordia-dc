// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140108550  size: 223 bytes
// Name:    FUN_140108550
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140108550(longlong param_1,byte *param_2)

{
  byte bVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong *puVar6;
  ulonglong uVar7;
  
  uVar5 = (ulonglong)*(byte *)(param_1 + 8);
  *param_2 = *(byte *)(param_1 + 8);
  bVar1 = *(byte *)(param_1 + 9);
  param_2[1] = bVar1;
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 0xc);
  if (uVar5 != 0) {
    puVar6 = (ulonglong *)(param_2 + 0x20);
    uVar4 = 0;
    do {
      uVar2 = *(ulonglong *)(param_1 + 0x10 + uVar4 * 8);
      uVar7 = 0xfffffffffff0;
      uVar3 = (uint)(uVar2 >> 0x2c) & 0xfff0;
      if ((longlong)uVar2 < 0) {
        uVar7 = 0x7fffffffffff0000;
        uVar3 = (int)uVar2 << 0x10;
      }
      uVar4 = uVar4 + 1;
      puVar6[-2] = uVar7 & uVar2;
      puVar6[-1] = uVar7 & uVar2;
      *puVar6 = (ulonglong)uVar3;
      puVar6 = puVar6 + 3;
    } while (uVar5 != uVar4);
  }
  if ((ulonglong)bVar1 != 0) {
    uVar4 = bVar1 + uVar5;
    puVar6 = (ulonglong *)(param_2 + uVar5 * 0x18 + 0x20);
    do {
      uVar2 = *(ulonglong *)(param_1 + 0x10 + uVar5 * 8);
      uVar7 = 0xfffffffffff0;
      uVar3 = (uint)(uVar2 >> 0x2c) & 0xfff0;
      if ((longlong)uVar2 < 0) {
        uVar7 = 0x7fffffffffff0000;
        uVar3 = (int)uVar2 << 0x10;
      }
      uVar5 = uVar5 + 1;
      puVar6[-2] = uVar7 & uVar2;
      puVar6[-1] = uVar7 & uVar2;
      *puVar6 = (ulonglong)uVar3;
      puVar6 = puVar6 + 3;
    } while (uVar5 < uVar4);
  }
  *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_2 + 0x18);
  return;
}

