// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140027e80  size: 233 bytes
// Name:    FUN_140027e80
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_141d4b8d0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140027e80(undefined8 param_1,undefined4 param_2,undefined4 param_3,longlong *param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lStack_70;
  uint uStack_64;
  char cStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uStack_58 = param_2;
  uStack_54 = param_3;
  FUN_141d4b8d0(param_1,&lStack_70,&uStack_58);
  uVar2 = _DAT_145fc6ed8;
  if (cStack_60 == '\x01') {
    lVar5 = (ulonglong)(uStack_64 >> 4) * 0x510 + lStack_70;
    uVar4 = (ulonglong)((uStack_64 & 0xf) * 0x50);
    *(ulonglong *)(uVar4 + 0x10 + lVar5) = CONCAT44(uStack_54,uStack_58);
    *(undefined1 (*) [16])(uVar4 + 0x20 + lVar5) = ZEXT416(uVar2);
    puVar1 = (undefined8 *)(uVar4 + 0x30 + lVar5);
    *puVar1 = _DAT_146159bc0;
    puVar1[1] = 0;
    uVar3 = _UNK_14614f7f8;
    puVar1 = (undefined8 *)(uVar4 + 0x40 + lVar5);
    *puVar1 = _DAT_14614f7f0;
    puVar1[1] = uVar3;
    *(undefined1 (*) [16])(uVar4 + 0x50 + lVar5) = ZEXT816(0) << 0x20;
    if (*param_4 == 0) {
      (*(code *)param_4[1])(&uStack_58);
    }
    else {
      (*(code *)param_4[1])();
    }
    lStack_70 = (ulonglong)(uStack_64 >> 4) * 0x510 + lStack_70;
    uVar4 = (ulonglong)((uStack_64 & 0xf) * 0x50);
    puVar1 = (undefined8 *)(uVar4 + 0x40 + lStack_70);
    *puVar1 = uStack_38;
    puVar1[1] = uStack_30;
    puVar1[2] = uStack_28;
    puVar1[3] = uStack_20;
    puVar1 = (undefined8 *)(uVar4 + 0x20 + lStack_70);
    *puVar1 = CONCAT44(uStack_54,uStack_58);
    puVar1[1] = uStack_50;
    puVar1[2] = uStack_48;
    puVar1[3] = uStack_40;
  }
  return;
}

