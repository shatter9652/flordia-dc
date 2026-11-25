// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140164db0  size: 291 bytes
// Name:    FUN_140164db0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1451fbd80
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140164db0(longlong param_1,undefined8 *param_2,undefined4 param_3,uint param_4,byte param_5
                  ,undefined2 param_6,undefined8 *param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  uint uStack_40;
  undefined1 auStack_3c [4];
  
  uVar4 = FUN_1451fbd80(param_2,param_4,&uStack_40,auStack_3c);
  if (((byte)(*(byte *)((longlong)param_2 + 7) + 0xba) < 0xf) ||
     ((uVar5 = *(byte *)((longlong)param_2 + 7) - 0x5e, uVar5 < 0x1f &&
      ((0x7800003fU >> (uVar5 & 0x1f) & 1) != 0)))) {
    iVar6 = func_0x000144d9f3c0();
    uVar5 = iVar6 * 2;
  }
  else {
    uVar5 = func_0x000144d9f3c0();
    uVar5 = uVar5 >> 3;
  }
  func_0x000140320090(param_1,(ulonglong)uStack_40 / (ulonglong)uVar5,(ulonglong)uVar5,param_3,
                      param_4,param_5,0x13,0);
  *(undefined2 *)(param_1 + 0x4c) = param_6;
  uVar2 = *param_2;
  *(undefined8 *)(param_1 + 0x3e) = *(undefined8 *)((longlong)param_2 + 6);
  *(undefined8 *)(param_1 + 0x38) = uVar2;
  *(undefined1 *)(param_1 + 0x40) = uVar4;
  *(undefined2 *)(param_1 + 0x46) = 1;
  *(byte *)(param_1 + 0x4f) = *(byte *)(param_1 + 0x4f) & 0xf0 | param_5 >> 1 & 1;
  if ((param_4 & 0x60) != 0) {
    lVar3 = *(longlong *)(_DAT_14a943ac0 + -8 + (ulonglong)*(ushort *)(param_1 + 0x12) * 8);
    uVar2 = param_7[1];
    puVar1 = (undefined8 *)(lVar3 + 0x84 + (ulonglong)((uint)*(ushort *)(lVar3 + 0x80) * 0x60));
    *puVar1 = *param_7;
    puVar1[1] = uVar2;
  }
  return;
}

