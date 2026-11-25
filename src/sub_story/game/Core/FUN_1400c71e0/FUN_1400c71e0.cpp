// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400c71e0  size: 927 bytes
// Name:    FUN_1400c71e0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14112e650, FUN_141d85980, FUN_1457d1ec0, FUN_142f11a40, FUN_142f11b00, FUN_142f11980, FUN_1409e46c0, FUN_1402e5b80
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400c71e0(uint *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  char cVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  ulonglong uVar9;
  float *pfVar10;
  float fVar11;
  undefined1 auVar12 [64];
  undefined1 extraout_var_00 [56];
  undefined1 auVar13 [64];
  uint *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  uint **ppuStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined1 extraout_var [56];
  
  if (*(longlong **)(param_1 + 2) == (longlong *)0x0) {
    return;
  }
  cVar3 = (**(code **)(**(longlong **)(param_1 + 2) + 0x30))();
  bVar4 = (**(code **)(**(longlong **)(param_1 + 2) + 0x1b0))();
  if ((cVar3 == '\0') &&
     (bVar5 = (**(code **)(**(longlong **)(param_1 + 2) + 0x1e0))(), (bVar5 | bVar4) != 1)) {
    return;
  }
  *(byte *)(param_1 + 4) = (byte)param_1[4] | 0x80;
  (**(code **)(**(longlong **)(param_1 + 2) + 0x1d8))();
  (**(code **)(**(longlong **)(param_1 + 2) + 0x1b8))();
  puStack_60 = _UNK_1461692f8;
  puStack_68 = _UNK_1461692f0;
  pcStack_70 = _UNK_1461692e8;
  ppuStack_78 = _DAT_1461692e0;
  *(byte *)(param_1 + 4) = (byte)param_1[4] | 0x40;
  uStack_58 = 0;
  plVar1 = *(longlong **)(param_1 + 2);
  if (plVar1 == (longlong *)0x0) {
    puStack_a0 = (uint *)0x100000000;
  }
  else {
    (**(code **)(*plVar1 + 0x70))(plVar1,&puStack_a0);
  }
  fVar11 = (float)func_0x0001400947e0(&puStack_a0);
  auVar13 = ZEXT1264(ZEXT812(0));
  if ((fVar11 == 0.0) && (!NAN(fVar11))) {
    FUN_1457d1ec0(0x146dd5b58,1,0x138,0x61bee713);
    goto LAB_1400c7333;
  }
  plVar1 = *(longlong **)(param_1 + 2);
  if (plVar1 == (longlong *)0x0) {
    uStack_80 = 0x100000000;
    auVar13._0_8_ = func_0x0001400947e0();
    auVar13._8_56_ = extraout_var_00;
    auVar13 = ZEXT1664(auVar13._0_16_);
LAB_1400c7316:
    uStack_88 = 0x100000000;
  }
  else {
    (**(code **)(*plVar1 + 0x68))(plVar1,&uStack_80);
    plVar1 = *(longlong **)(param_1 + 2);
    auVar12._0_8_ = func_0x0001400947e0(&uStack_80);
    auVar12._8_56_ = extraout_var;
    auVar13 = ZEXT1664(auVar12._0_16_);
    if (plVar1 == (longlong *)0x0) goto LAB_1400c7316;
    (**(code **)(*plVar1 + 0x70))(plVar1,&uStack_88);
  }
  fVar11 = (float)func_0x0001400947e0(&uStack_88);
  auVar13 = ZEXT1664(CONCAT124(auVar13._4_12_,auVar13._0_4_ / fVar11));
LAB_1400c7333:
  if (bVar4 != 0) {
    param_1[10] = 0xbf800000;
  }
  plVar1 = *(longlong **)(param_1 + 2);
  if (plVar1 == (longlong *)0x0) {
    puStack_a0 = (uint *)0x100000000;
  }
  else {
    (**(code **)(*plVar1 + 0x70))(plVar1,&puStack_a0);
  }
  iVar6 = func_0x000144f260b0();
  pfVar10 = (float *)&UNK_14639a830;
  uVar9 = 0;
  do {
    fVar11 = *pfVar10;
    if (fVar11 <= auVar13._0_4_) {
      if ((fVar11 != (float)param_1[10]) || (NAN(fVar11) || NAN((float)param_1[10]))) {
        puStack_a0 = (uint *)(ulonglong)*param_1;
        if ((*(byte *)((longlong)param_1 + 0x13) & 4) == 0) {
          FUN_141d85980(0x447dc,0,&puStack_a0,&ppuStack_78 + uVar9,0);
        }
        param_1[10] = (uint)fVar11;
      }
      break;
    }
    if (iVar6 == 1) break;
    uVar9 = uVar9 + 1;
    pfVar10 = pfVar10 + 1;
  } while (uVar9 < ((ulonglong)bVar4 | 4));
  if (((((*(byte *)((longlong)param_1 + 0x12) & 0x10) == 0) &&
       (cVar3 = (**(code **)(**(longlong **)(param_1 + 2) + 0x150))(), cVar3 != '\0')) &&
      (cVar3 = (**(code **)(**(longlong **)(param_1 + 2) + 0x78))(), cVar3 == '\0')) &&
     ((cVar3 = (**(code **)(**(longlong **)(param_1 + 2) + 0x1e0))(), cVar3 == '\0' &&
      ((param_1[4] & 0x801) == 0)))) {
    pcStack_70 = FUN_142f11920;
    puStack_68 = &UNK_1401167b0;
    puStack_60 = &SUB_140004380;
    puStack_a0 = param_1;
    ppuStack_78 = &puStack_a0;
    FUN_1402e5b80(4);
  }
  if (*(longlong **)(param_1 + 2) == (longlong *)0x0) {
    uVar7 = 0;
  }
  else {
    uVar7 = (**(code **)(**(longlong **)(param_1 + 2) + 400))();
  }
  cVar3 = '\x01';
  if ((param_1[4] & 1) == 0) {
    cVar3 = (**(code **)(**(longlong **)(param_1 + 2) + 0x78))();
  }
  if ((char)uVar7 != '\0') {
    FUN_142f11980(param_1);
    plVar1 = *(longlong **)(param_1 + 6);
    if (plVar1 != (longlong *)0x0) {
      if (*(longlong **)(param_1 + 2) == (longlong *)0x0) {
        uVar8 = 0;
      }
      else {
        uVar8 = (**(code **)(**(longlong **)(param_1 + 2) + 0x178))();
      }
      (**(code **)(*plVar1 + 0x18))(plVar1,uVar8);
      plVar1 = *(longlong **)(param_1 + 2);
      uVar2 = *(undefined8 *)(param_1 + 6);
      if (plVar1 == (longlong *)0x0) {
        uStack_90 = 0x100000000;
      }
      else {
        (**(code **)(*plVar1 + 0x70))(plVar1,&uStack_90);
      }
      FUN_1409e46c0(uVar2,uStack_90);
      plVar1 = *(longlong **)(param_1 + 2);
      uVar2 = *(undefined8 *)(param_1 + 6);
      if (plVar1 == (longlong *)0x0) {
        uStack_98 = 0x100000000;
      }
      else {
        (**(code **)(*plVar1 + 0x68))(plVar1,&uStack_98);
      }
      FUN_14112e650(uVar2,uStack_98);
    }
  }
  if (cVar3 != '\0') {
    FUN_142f11a40(param_1);
  }
  FUN_142f11b00(param_1,uVar7);
  return;
}

