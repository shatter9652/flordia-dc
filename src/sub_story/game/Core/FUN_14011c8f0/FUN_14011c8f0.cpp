// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14011c8f0  size: 266 bytes
// Name:    FUN_14011c8f0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14011c8f0(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uStack_c;
  ulonglong uVar8;
  
  func_0x00014011ca00(param_1,&uStack_c);
  uVar4 = _DAT_146167a60;
  uVar3 = _UNK_146167a58;
  uVar2 = _UNK_146167a50;
  uVar1 = _UNK_146167a48;
  uVar6 = (ulonglong)_DAT_148fdfb30;
  puVar5 = _DAT_148fdfb28;
  uVar8 = uVar6;
  if (uVar6 != 0) {
    do {
      uVar7 = uVar8 >> 1;
      if (puVar5[uVar7 * 0x17] < uStack_c) {
        puVar5 = puVar5 + uVar7 * 0x17 + 0x17;
        uVar7 = ~uVar7 + uVar8;
      }
      uVar8 = uVar7;
    } while (0 < (longlong)uVar7);
    if ((puVar5 != _DAT_148fdfb28 + uVar6 * 0x17) && (*puVar5 == uStack_c)) {
      *(uint *)(param_1 + 0x40) = puVar5[1];
      *(uint *)(param_1 + 0x44) = puVar5[2];
      *(uint *)(param_1 + 0x48) = puVar5[3];
      uVar1 = *(undefined8 *)(puVar5 + 7);
      uVar2 = *(undefined8 *)(puVar5 + 9);
      uVar3 = *(undefined8 *)(puVar5 + 0xb);
      *(undefined8 *)(param_1 + 0x4c) = *(undefined8 *)(puVar5 + 5);
      *(undefined8 *)(param_1 + 0x54) = uVar1;
      *(undefined8 *)(param_1 + 0x5c) = uVar2;
      *(undefined8 *)(param_1 + 100) = uVar3;
      uVar1 = *(undefined8 *)(puVar5 + 0xf);
      *(undefined8 *)(param_1 + 0x6c) = *(undefined8 *)(puVar5 + 0xd);
      *(undefined8 *)(param_1 + 0x74) = uVar1;
      *(undefined8 *)(param_1 + 0x7c) = *(undefined8 *)(puVar5 + 0x11);
      *(uint *)(param_1 + 0x24c) = puVar5[0x13];
      *(uint *)(param_1 + 0x1d8) = puVar5[0x14];
      *(uint *)(param_1 + 0x1dc) = puVar5[0x15];
      *(uint *)(param_1 + 0x1e0) = puVar5[0x16];
      return;
    }
  }
  *(undefined8 *)(param_1 + 0x40) = _DAT_146167a40;
  *(undefined8 *)(param_1 + 0x48) = uVar1;
  *(undefined8 *)(param_1 + 0x50) = uVar2;
  *(undefined8 *)(param_1 + 0x58) = uVar3;
  *(undefined8 *)(param_1 + 0x60) = uVar4;
  *(undefined8 *)(param_1 + 0x68) = uVar4;
  *(undefined4 *)(param_1 + 0x24c) = 1;
  *(undefined8 *)(param_1 + 0x1d8) = 0;
  *(undefined4 *)(param_1 + 0x1e0) = 0;
  return;
}

