// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400f8e20  size: 550 bytes
// Name:    FUN_1400f8e20
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_141fd5d80, FUN_145246850
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1400f8e20(undefined8 *param_1,int *param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  uint uVar5;
  undefined4 uVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  longlong lStack_138;
  uint uStack_12c;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 auStack_108 [32];
  undefined1 auStack_e8 [32];
  undefined1 auStack_c8 [32];
  undefined1 auStack_a8 [32];
  undefined1 auStack_88 [32];
  undefined1 auStack_68 [32];
  undefined8 uStack_48;
  
  bVar10 = false;
  if (((*param_2 == 0) && (param_2[1] == 0)) && (*(longlong *)(param_2 + 4) == 0)) {
    bVar10 = param_2[2] == 0;
  }
  if (((bVar10) && (param_2[6] == 0)) &&
     ((param_2[7] == 0 && ((*(longlong *)(param_2 + 8) == 0 && (param_2[10] == 0)))))) {
    auVar12._0_12_ = ZEXT812(0);
    auVar12._12_4_ = 0;
    auVar12 = vcmpps_avx(auVar12,*(undefined1 (*) [16])(param_2 + 0xc),0);
    uVar6 = vmovmskps_avx(auVar12);
    if (((~(byte)uVar6 & 7) == 0) && ((char)param_2[0x10] == '\0')) {
      return 0;
    }
  }
  lStack_138 = 0;
  uStack_12c = 0;
  uStack_118 = *param_1;
  uStack_110 = param_1[1];
  FUN_141fd5d80(_DAT_1492def88 + 0x50,&uStack_118,&lStack_138,&uStack_12c);
  lVar3 = lStack_138;
  uVar8 = (ulonglong)uStack_12c;
  if (uVar8 != 0) {
    iVar1 = param_2[0xb];
    auVar11._0_12_ = ZEXT812(0);
    auVar11._12_4_ = 0;
    uStack_48 = 0;
    auStack_68 = ZEXT1632(auVar11);
    auStack_88 = ZEXT1632(auVar11);
    auStack_a8 = ZEXT1632(auVar11);
    auStack_c8 = auStack_a8;
    auStack_e8 = auStack_a8;
    auStack_108 = auStack_a8;
    if (0 < (int)uStack_12c) {
      lVar9 = 0;
      lVar7 = 0;
      do {
        lVar2 = *(longlong *)(lVar3 + 8 + lVar9);
        if (((*(longlong *)(lVar2 + 0x10) != 0) &&
            (uVar5 = (uint)((ulonglong)(lVar2 - *_DAT_14a02e2d0) /
                           (ulonglong)*(uint *)(_DAT_14a02e2d0 + 1)), -1 < (int)uVar5)) &&
           (uVar5 < *(uint *)((longlong)_DAT_14a02e2d0 + 0xc))) {
          uVar5 = uVar5 & 0x7fffffff;
          if (auStack_108[uVar5] == 0) {
            auStack_108[uVar5] = 1;
            cVar4 = FUN_145246850(lVar2);
            if (cVar4 != '\0') goto LAB_1400f8f84;
            auStack_108[uVar5] = 3;
          }
          else if ((auStack_108[uVar5] & 2) == 0) {
LAB_1400f8f84:
            uStack_128 = *param_1;
            uStack_120 = param_1[1];
            cVar4 = (**(code **)(**(longlong **)(lVar3 + lVar9) + 0xb0))();
            if (cVar4 != '\0') {
              if (param_3 == (longlong *)0x0) {
                return 1;
              }
              *param_3 = lVar2;
              if (iVar1 == 0) {
                return 1;
              }
              if (((uint)param_2[(ulonglong)(*(uint *)(lVar2 + 0x9c) >> 5) + 0xb] >>
                   (*(uint *)(lVar2 + 0x9c) & 0x1f) & 1) == 0) {
                return 1;
              }
              if (lVar7 == 0) {
                lVar7 = lVar2;
              }
            }
          }
        }
        lVar9 = lVar9 + 0x10;
      } while (uVar8 << 4 != lVar9);
      if (lVar7 != 0) {
        *param_3 = lVar7;
        return 1;
      }
    }
  }
  return 0;
}

