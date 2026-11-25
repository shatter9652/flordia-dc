// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14012d9c0  size: 699 bytes
// Name:    FUN_14012d9c0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1424d9360, FUN_14012dd50, FUN_14012e040, FUN_140bebd60, FUN_145357620, FUN_14058c900, FUN_140130420, FUN_14012dc80
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14012d9c0(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 unaff_RBX;
  undefined7 uVar7;
  char cStack_1c9;
  undefined *apuStack_1c8 [14];
  undefined4 uStack_154;
  longlong lStack_150;
  undefined2 uStack_128;
  undefined1 uStack_126;
  undefined1 auStack_120 [32];
  undefined1 auStack_100 [32];
  undefined2 uStack_e0;
  undefined1 auStack_d8 [32];
  undefined4 uStack_b8;
  undefined1 auStack_b0 [32];
  undefined1 auStack_90 [32];
  undefined1 auStack_70 [32];
  unkbyte10 Stack_50;
  undefined1 auStack_46 [22];
  unkbyte10 Stack_30;
  
  if (*(char *)(param_1 + 0x28) != '\x01') {
    return;
  }
  cStack_1c9 = '\0';
  uVar7 = (undefined7)((ulonglong)unaff_RBX >> 8);
  if (*(longlong *)(param_1 + 0x48) == 0) {
    if ((*(char *)(*(longlong *)(param_1 + 0x40) + 0x62) == '\x01') &&
       (*(char *)(*(longlong *)(param_1 + 0x40) + 99) == '\0')) {
      lVar2 = FUN_1424d9360(param_1,&cStack_1c9);
      if (lVar2 != 0) {
        lVar4 = *(longlong *)(param_1 + 0x10);
        if ((*(int *)(lVar4 + 0x18) != 100) &&
           (_DAT_146df5b88 = (_DAT_146df5b88 & 0xffffffff) * 0x5cdcfaa7 + (_DAT_146df5b88 >> 0x20),
           *(int *)(lVar4 + 0x18) < (int)((float)((uint)_DAT_146df5b88 & 0x7fff) * _DAT_14615d3e0)))
        {
          cStack_1c9 = '\0';
          FUN_14012dd50(param_1,0xffffffff,0);
          lVar4 = *(longlong *)(param_1 + 0x48);
          if (lVar4 != lVar2 && lVar4 != 0) {
            *(undefined2 *)(*(longlong *)(param_1 + 0x40) + 99) = 1;
            return;
          }
          if ((lVar4 == 0) && (cStack_1c9 != '\0')) {
            return;
          }
          FUN_140bebd60(param_1);
          lVar4 = *(longlong *)(param_1 + 0x10);
        }
        *(undefined2 *)(*(longlong *)(param_1 + 0x40) + 99) = 0x101;
        FUN_140130420(param_1,lVar2,*(undefined1 *)(lVar4 + 0x1c));
        return;
      }
      if (cStack_1c9 != '\0') {
        return;
      }
      *(undefined2 *)(*(longlong *)(param_1 + 0x40) + 99) = 1;
      uVar6 = (undefined4)CONCAT71(uVar7,*(undefined1 *)(*(longlong *)(param_1 + 0x10) + 0x1d));
      if (*(longlong *)(param_1 + 0x48) != 0) goto LAB_14012d9ea;
    }
    else {
      uVar6 = (undefined4)CONCAT71(uVar7,*(undefined1 *)(*(longlong *)(param_1 + 0x10) + 0x1d));
    }
    cStack_1c9 = '\0';
    FUN_14012dd50(param_1,0xffffffff,uVar6,&cStack_1c9);
    if (((cStack_1c9 == '\0') && ((char)uVar6 == '\0' && *(longlong *)(param_1 + 0x48) == 0)) &&
       (lVar2 = func_0x00014012d970(*(undefined4 *)(*(longlong *)(param_1 + 0x40) + 200)),
       lVar2 != 0)) {
      FUN_14012dd50(param_1,0xffffffff,1,&cStack_1c9);
    }
  }
  else {
    uVar6 = (undefined4)CONCAT71(uVar7,*(undefined1 *)(*(longlong *)(param_1 + 0x10) + 0x1d));
LAB_14012d9ea:
    cVar1 = FUN_14012dc80();
    if (cVar1 != '\0') {
      auStack_46._0_12_ = ZEXT812(0);
      auStack_46._12_4_ = 0;
      uStack_128 = 0;
      uStack_126 = 1;
      auStack_120 = ZEXT1632(auStack_46._0_16_);
      uStack_e0 = 0;
      auStack_d8 = ZEXT1632(auStack_46._0_16_);
      uStack_b8 = 0;
      Stack_50 = auStack_46._0_10_;
      auStack_70 = ZEXT1632(auStack_46._0_16_);
      auStack_46._16_6_ = 0;
      Stack_30 = 0;
      auStack_100 = auStack_120;
      auStack_b0 = auStack_d8;
      auStack_90 = auStack_d8;
      FUN_145357620(apuStack_1c8,&uStack_128);
      uVar3 = func_0x000144fdec40(*(undefined8 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x38));
      func_0x000144ed0120(&uStack_128,0,uVar3);
      uVar3 = func_0x00014012e080(*(undefined8 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x38));
      FUN_14012e040(apuStack_1c8,uVar3);
      cVar1 = FUN_14058c900(*(undefined8 *)(param_1 + 0x48),&uStack_128);
      if (cVar1 == '\0') {
        uVar5 = **(undefined4 **)(*(longlong *)(param_1 + 0x48) + 0x10);
      }
      else {
        uVar5 = 0xffffffff;
      }
      FUN_14012dd50(param_1,uVar5,uVar6,0);
      apuStack_1c8[0] = &UNK_146713e68;
      uStack_154 = 0;
      if (lStack_150 != 0) {
        func_0x000144d9c130();
      }
    }
  }
  return;
}

