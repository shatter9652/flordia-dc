// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140036ff0  size: 161 bytes
// Name:    FUN_140036ff0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1400370a0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140036ff0(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar4 = *(longlong *)(param_2 + 0x40);
  uVar3 = *(uint *)(lVar4 + 0x44);
  if ((ulonglong)uVar3 != 0) {
    lVar4 = *(longlong *)(lVar4 + 0x48);
    lVar5 = 0;
    do {
      puVar1 = *(undefined8 **)(lVar4 + lVar5);
      cVar2 = (**(code **)*puVar1)(puVar1,0xbadc239);
      if (cVar2 != '\0') {
        uVar6 = puVar1[2];
        uVar7 = puVar1[3];
        goto LAB_14003706a;
      }
      lVar5 = lVar5 + 8;
    } while ((ulonglong)uVar3 << 3 != lVar5);
    lVar4 = *(longlong *)(param_2 + 0x40);
  }
  uVar3 = FUN_1400370a0(lVar4);
  uVar6 = _UNK_146170448;
  if ((uVar3 == 0x3ff) ||
     (lVar4 = *(longlong *)(*(longlong *)(_DAT_14a9ec8e0 + 0x90) + (ulonglong)uVar3 * 8), lVar4 == 0
     )) {
    *param_1 = _DAT_146170440;
    param_1[1] = uVar6;
  }
  else {
    uVar6 = *(undefined8 *)(lVar4 + 0x80);
    uVar7 = *(undefined8 *)(lVar4 + 0x88);
LAB_14003706a:
    *param_1 = uVar6;
    param_1[1] = uVar7;
  }
  return;
}

