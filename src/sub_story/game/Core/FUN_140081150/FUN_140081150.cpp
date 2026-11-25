// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140081150  size: 477 bytes
// Name:    FUN_140081150
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_141c8a130, FUN_144ef60c0, FUN_140081040, FUN_14037e5d0, FUN_144ef6160, FUN_1401331f0, FUN_14037dc10, FUN_140bb0d90, FUN_1400834e0, FUN_14037d3c0, FUN_144ef3e20
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_140081150(ulonglong param_1,undefined8 param_2)

{
  uint uVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined8 unaff_R14;
  ulonglong uVar8;
  byte bVar9;
  float fVar10;
  int iStack_4c;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [16];
  
  param_1 = param_1 & 0xfffffffffffffff0;
  cVar2 = FUN_144ef6160(param_1);
  if ((cVar2 == '\0') && (cVar2 = FUN_144ef60c0(param_1), cVar2 == '\0')) {
    uVar8 = 0;
    goto LAB_14008131e;
  }
  lVar5 = FUN_144ef3e20(param_2);
  bVar3 = 0;
  if (lVar5 == 0) {
LAB_1400812d6:
    uVar8 = 0;
  }
  else {
    cVar2 = FUN_140081040(param_1,lVar5);
    if (cVar2 == '\0') {
      bVar3 = FUN_1401331f0(&iStack_4c,param_1);
      if (iStack_4c != 0) {
        uStack_48 = *(undefined8 *)(lVar5 + 0x70);
        uStack_40 = *(undefined8 *)(lVar5 + 0x78);
        func_0x000144dc3790(&uStack_48,auStack_38);
        cVar2 = FUN_14037dc10(iStack_4c,*(undefined4 *)(lVar5 + 0x9c),0x1ffff,auStack_38);
        bVar3 = 0;
        if (cVar2 != '\0') {
          bVar9 = 0;
          lVar6 = FUN_14037e5d0(iStack_4c,lVar5,0,1);
          if (lVar6 != 0) {
            bVar9 = *(byte *)(lVar6 + 0x5e);
          }
          lVar6 = FUN_1400834e0(iStack_4c,lVar5,0,1);
          if (lVar6 != 0) {
            bVar9 = bVar9 | *(byte *)(lVar6 + 0x40);
          }
          unaff_R14 = 0;
          cVar2 = FUN_141c8a130(iStack_4c,lVar5,0);
          if ((cVar2 != '\0') || (bVar3 = 0, (bVar9 & 1) != 0)) goto LAB_1400811a8;
        }
      }
      goto LAB_1400812d6;
    }
LAB_1400811a8:
    uVar7 = *(undefined4 *)(lVar5 + 0x9c);
    cVar2 = func_0x000144e238f0(uVar7);
    if ((cVar2 == '\0') && (lVar6 = func_0x000145226dc0(uVar7), lVar6 != 0)) {
      uVar4 = *(uint *)(lVar6 + 0x664);
      if (uVar4 == 0x1ffff) {
LAB_1400812d8:
        lVar6 = 0;
      }
      else {
        uVar1 = *(uint *)(_DAT_14abb6918[5] + (ulonglong)(uVar4 & 0x1ffff) * 4);
        if (((~uVar1 & *(uint *)(_DAT_14abb6918 + 6)) != 0) ||
           ((uVar1 & 0x7fe0000) != (uVar4 & 0xfffe0000))) goto LAB_1400812d8;
        lVar6 = (ulonglong)((uVar4 & 0x1ffff) * (int)_DAT_14abb6918[1]) + *_DAT_14abb6918;
      }
      if (lVar6 != 0) {
        lVar5 = lVar6;
      }
      uVar7 = *(undefined4 *)(lVar5 + 0x9c);
    }
    lVar5 = func_0x000144ef4370(uVar7);
    uVar8 = CONCAT71((int7)((ulonglong)unaff_R14 >> 8),1);
    if ((lVar5 == 0) || (fVar10 = (float)FUN_14037d3c0(lVar5,param_1), fVar10 < _DAT_146159ef4)) {
      bVar3 = 0;
    }
    else {
      uVar4 = FUN_140bb0d90(uVar7);
      uVar8 = (ulonglong)uVar4;
      bVar3 = 1;
    }
  }
  uVar8 = CONCAT71((int7)(uVar8 >> 8),(byte)uVar8 & bVar3);
LAB_14008131e:
  return uVar8 & 0xffffffff;
}

