// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14012dda0  size: 628 bytes
// Name:    FUN_14012dda0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140130850, FUN_14012e020, FUN_14012e040, FUN_145357620, FUN_140130420
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_14012dda0(longlong param_1,ulonglong param_2,char param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined7 uVar11;
  undefined *apuStack_1e8 [14];
  undefined4 uStack_174;
  longlong lStack_170;
  undefined2 uStack_148;
  undefined1 uStack_146;
  undefined1 auStack_140 [32];
  undefined1 auStack_120 [32];
  undefined2 uStack_100;
  undefined1 auStack_f8 [32];
  undefined4 uStack_d8;
  undefined1 auStack_d0 [32];
  undefined1 auStack_b0 [32];
  undefined1 auStack_90 [32];
  unkbyte10 Stack_70;
  undefined1 auStack_66 [22];
  unkbyte10 Stack_50;
  
  iVar7 = 0;
  uVar10 = 0;
  iVar2 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x140 + (param_2 & 0xffffffff) * 4);
  iVar3 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x128 + (param_2 & 0xffffffff) * 4);
  iVar8 = iVar2 - iVar3;
  if (iVar8 == 0 || iVar2 < iVar3) goto LAB_14012dddc;
  auStack_66._0_12_ = ZEXT812(0);
  auStack_66._12_4_ = 0;
  uStack_148 = 0;
  uStack_146 = 1;
  auStack_140 = ZEXT1632(auStack_66._0_16_);
  uStack_100 = 0;
  auStack_f8 = ZEXT1632(auStack_66._0_16_);
  uStack_d8 = 0;
  Stack_70 = auStack_66._0_10_;
  auStack_90 = ZEXT1632(auStack_66._0_16_);
  auStack_66._16_6_ = 0;
  Stack_50 = 0;
  auStack_120 = auStack_140;
  auStack_d0 = auStack_f8;
  auStack_b0 = auStack_f8;
  FUN_145357620(apuStack_1e8,&uStack_148);
  uVar5 = func_0x000144fdec40(*(undefined8 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x38));
  func_0x000144ed0120(&uStack_148,0,uVar5);
  uVar5 = func_0x00014012e080(*(undefined8 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x38));
  FUN_14012e040(apuStack_1e8,uVar5);
  if (*(char *)(*(longlong *)(param_1 + 0x10) + 0x14) == '\x01') {
    _DAT_146df5b88 = (_DAT_146df5b88 & 0xffffffff) * 0x5cdcfaa7 + (_DAT_146df5b88 >> 0x20);
    iVar7 = (int)((float)iVar8 * _DAT_14615a3a8 * (float)((uint)_DAT_146df5b88 & 0x7fff));
  }
  uVar11 = (undefined7)((ulonglong)&uStack_148 >> 8);
  if (param_3 == '\0') {
    uVar10 = CONCAT71(uVar11,1);
    iVar6 = 1;
    do {
      lVar9 = (ulonglong)(uint)(iVar7 + iVar3) * 0xb8 + *(longlong *)(param_1 + 0x18);
      if (((*(longlong *)(param_1 + 0x48) == 0) || (lVar9 != *(longlong *)(param_1 + 0x48))) &&
         ((cVar4 = FUN_14012e020(lVar9,&uStack_148), cVar4 != '\0' &&
          (cVar4 = FUN_140130850(lVar9,param_4), cVar4 != '\0')))) goto LAB_14012df5b;
      iVar7 = (iVar7 + 1) % iVar8;
      iVar1 = (iVar3 - iVar2) + 1 + iVar6;
      uVar10 = CONCAT71((int7)(uVar10 >> 8),iVar6 < iVar8);
      iVar6 = iVar6 + 1;
    } while (iVar1 != 1);
  }
  else {
    uVar10 = CONCAT71(uVar11,1);
    iVar6 = 1;
    do {
      lVar9 = (ulonglong)(uint)(iVar7 + iVar3) * 0xb8 + *(longlong *)(param_1 + 0x18);
      if (((*(longlong *)(param_1 + 0x48) == 0) || (lVar9 != *(longlong *)(param_1 + 0x48))) &&
         (cVar4 = FUN_14012e020(lVar9,&uStack_148), cVar4 != '\0')) goto LAB_14012df5b;
      iVar7 = (iVar7 + 1) % iVar8;
      iVar1 = (iVar3 - iVar2) + 1 + iVar6;
      uVar10 = CONCAT71((int7)(uVar10 >> 8),iVar6 < iVar8);
      iVar6 = iVar6 + 1;
    } while (iVar1 != 1);
  }
  goto LAB_14012df18;
LAB_14012df5b:
  FUN_140130420(param_1,lVar9,0);
LAB_14012df18:
  apuStack_1e8[0] = &UNK_146713e68;
  uStack_174 = 0;
  if (lStack_170 != 0) {
    func_0x000144d9c130();
  }
LAB_14012dddc:
  return uVar10 & 0xffffffff;
}

