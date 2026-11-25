// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140081520  size: 537 bytes
// Name:    FUN_140081520
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_141c8a130, FUN_14037e5d0, FUN_14506c670, FUN_144ef6160, FUN_1400f1800, FUN_1401141c0, FUN_14037dc10, FUN_144f81f90, FUN_1400834e0, FUN_140113ea0, FUN_1402eb220, FUN_1401331f0, FUN_1413ca6e0, FUN_144dd7510, FUN_144ef4620, FUN_144ef3e20, FUN_14513b880
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


ulonglong FUN_140081520(longlong param_1,longlong *param_2)

{
  uint uVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong unaff_RBP;
  ulonglong uVar10;
  undefined4 uStack_80;
  int iStack_7c;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [16];
  undefined7 uVar11;
  
  lVar5 = (**(code **)(*param_2 + 0x10))(param_2);
  if (lVar5 != 0) {
    uVar9 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffff0;
    FUN_1401331f0(&iStack_7c,uVar9);
    if (iStack_7c != 0) {
      lVar6 = FUN_144ef4620(param_2);
      lVar7 = FUN_144ef3e20(param_2);
      if (lVar7 != 0 && lVar6 == 0) {
        lVar6 = FUN_144dd7510(*(undefined4 *)(lVar7 + 0x9c));
      }
      if (lVar6 != 0) {
        cVar2 = FUN_14506c670(*(undefined8 *)(lVar6 + 0x20),*(undefined4 *)(lVar6 + 0x9c));
        if (cVar2 != '\0') goto LAB_140081724;
      }
      if (lVar7 != 0) {
        uVar1 = *(uint *)(uVar9 + 0x9c);
        unaff_RBP = (ulonglong)uVar1;
        lVar6 = func_0x000144ef6110(unaff_RBP);
        if (lVar6 != 0) {
          lVar8 = func_0x000144ef6310(uVar1);
          if (lVar8 != 0) {
            cVar2 = FUN_14513b880(*(undefined4 *)(lVar8 + 0x14),*(undefined1 *)(lVar8 + 0x30));
            if (cVar2 != '\0') goto LAB_14008166f;
          }
          lVar8 = FUN_144f81f90(*(undefined4 *)(lVar6 + 0x128));
          if (lVar8 != 0) {
            lVar7 = func_0x000144fc0590(*(undefined4 *)(lVar7 + 0x9c));
            if (lVar7 != 0) {
              auStack_58._0_12_ = ZEXT812(0);
              auStack_58._12_4_ = 0;
              uVar3 = FUN_140113ea0(lVar6);
              FUN_1400f1800(*(undefined4 *)(lVar6 + 0x128),&uStack_80);
              uVar10 = 0;
              unaff_RBP = 0;
              iVar4 = FUN_1401141c0(lVar7,uStack_80,uVar3,0,auStack_58);
              if (iVar4 == 0) goto LAB_140081726;
            }
          }
        }
      }
LAB_14008166f:
      cVar2 = FUN_1402eb220(iStack_7c,0,1);
      if (cVar2 == '\0') {
LAB_1400816a2:
        uStack_78 = *(undefined8 *)(lVar5 + 0x70);
        uStack_70 = *(undefined8 *)(lVar5 + 0x78);
        func_0x000144dc3790(&uStack_78,auStack_68);
        cVar2 = FUN_14037dc10(iStack_7c,*(undefined4 *)(lVar5 + 0x9c),0x1ffff,auStack_68);
        if (cVar2 != '\0') {
          uVar11 = (undefined7)(unaff_RBP >> 8);
          uVar10 = CONCAT71(uVar11,1);
          lVar6 = FUN_14037e5d0(iStack_7c,lVar5,0,1);
          if ((lVar6 != 0) && (*(char *)(lVar6 + 0x5e) != '\0')) goto LAB_140081726;
          uVar10 = CONCAT71(uVar11,1);
          lVar6 = FUN_1400834e0(iStack_7c,lVar5,0,1);
          if ((lVar6 != 0) && ((*(byte *)(lVar6 + 0x40) & 1) != 0)) goto LAB_140081726;
          cVar2 = FUN_141c8a130(iStack_7c,lVar5,0);
          if (cVar2 != '\0') goto LAB_140081726;
        }
      }
      else {
        cVar2 = FUN_144ef6160(uVar9);
        if (cVar2 != '\0') {
          cVar2 = FUN_1413ca6e0(uVar9,lVar5);
          if (cVar2 == '\0') goto LAB_1400816a2;
        }
      }
    }
  }
LAB_140081724:
  uVar10 = 0;
LAB_140081726:
  return uVar10 & 0xffffffff;
}

