// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140018bd0  size: 36 bytes
// Name:    FUN_140018bd0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140018c00
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140018bd0(undefined8 *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  *param_1 = &UNK_14633aac0;
  FUN_140018c00();
  *param_1 = &UNK_14633aaa8;
  puVar2 = (undefined8 *)param_1[0x40];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 2);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  param_1[0x40] = 0;
  FUN_144de82a0(param_1);
  FUN_140018e30(param_1);
  uVar4 = *(uint *)(param_1 + 0x38);
  if (uVar4 != 0) {
    uVar5 = 0;
    do {
      lVar6 = *(longlong *)(param_1[0x37] + uVar5 * 8);
      if (lVar6 != 0) {
        do {
          lVar3 = *(longlong *)(lVar6 + 0x18);
          FUN_140018d70(lVar6 + 8);
          FUN_140018ce0(lVar6);
          lVar6 = lVar3;
        } while (lVar3 != 0);
        uVar4 = *(uint *)(param_1 + 0x38);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar4);
  }
  FUN_140018ce0(param_1[0x37]);
  param_1[0x37] = 0;
  *(undefined4 *)(param_1 + 0x39) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  uVar4 = *(uint *)(param_1 + 0x35);
  if (uVar4 != 0) {
    uVar5 = 0;
    do {
      lVar6 = *(longlong *)(param_1[0x34] + uVar5 * 8);
      if (lVar6 != 0) {
        do {
          lVar3 = *(longlong *)(lVar6 + 0x18);
          FUN_140018d40(lVar6 + 8);
          FUN_140018ce0(lVar6);
          lVar6 = lVar3;
        } while (lVar3 != 0);
        uVar4 = *(uint *)(param_1 + 0x35);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar4);
  }
  FUN_140018ce0(param_1[0x34]);
  param_1[0x34] = 0;
  *(undefined4 *)(param_1 + 0x36) = 0;
  *(undefined4 *)(param_1 + 0x35) = 0;
  uVar4 = *(uint *)(param_1 + 0x32);
  if (uVar4 != 0) {
    uVar5 = 0;
    do {
      lVar6 = *(longlong *)(param_1[0x31] + uVar5 * 8);
      if (lVar6 != 0) {
        do {
          lVar3 = *(longlong *)(lVar6 + 0x18);
          FUN_144de8220(lVar6 + 8);
          FUN_140018ce0(lVar6);
          lVar6 = lVar3;
        } while (lVar3 != 0);
        uVar4 = *(uint *)(param_1 + 0x32);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar4);
  }
  FUN_140018ce0(param_1[0x31]);
  param_1[0x31] = 0;
  *(undefined4 *)(param_1 + 0x33) = 0;
  *(undefined4 *)(param_1 + 0x32) = 0;
  FUN_144de8250(param_1 + 0x24);
  FUN_140018dc0(param_1 + 0x1c);
  FUN_144de8250(param_1 + 0xf);
  FUN_144de8250(param_1 + 2);
  *param_1 = &UNK_146675610;
  param_1[1] = 0;
  return;
}

