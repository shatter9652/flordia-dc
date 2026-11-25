// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14007fa20  size: 578 bytes
// Name:    FUN_14007fa20
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145366470, FUN_144ef2f80, FUN_14007c4d0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_14007fa20(longlong param_1,undefined4 param_2,int param_3,undefined4 param_4,
                       undefined4 param_5,float param_6,float param_7)

{
  undefined1 (*pauVar1) [32];
  int iVar2;
  undefined1 auVar3 [16];
  char cVar4;
  ushort uVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint uVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong lVar12;
  int *piVar13;
  int *piVar14;
  float fVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [64];
  float fVar18;
  
  if ((ulonglong)*(uint *)(param_1 + 0xb4) != 0) {
    lVar7 = *(longlong *)(param_1 + 0xb8);
    lVar12 = 0;
    lVar10 = (ulonglong)*(uint *)(param_1 + 0xb4) * 0x90;
    do {
      if (*(int *)(lVar7 + 0x6c) == param_3) {
        lVar12 = lVar7;
      }
      lVar7 = lVar7 + 0x90;
      lVar10 = lVar10 + -0x90;
    } while (lVar10 != 0);
    if (lVar12 != 0) goto LAB_14007fb28;
  }
  uVar8 = FUN_145366470(param_2);
  if (uVar8 != 0) {
    uVar8 = uVar8 - _DAT_14a9246e8;
    if (-1 < (int)(uVar8 / 0x868)) {
      uVar9 = *(uint *)(param_1 + 0xb4);
      *(uint *)(param_1 + 0xb4) = uVar9 + 1;
      lVar12 = (ulonglong)uVar9 * 0x90 + *(longlong *)(param_1 + 0xb8);
      if (*(longlong *)(param_1 + 0xb8) != 0) {
        func_0x00014007c3b0(lVar12);
        *(undefined8 *)(lVar12 + 0x80) = 0x3f800000;
        *(undefined1 *)(lVar12 + 0x88) = 1;
      }
      cVar4 = FUN_14007c4d0(lVar12,uVar8 / 0x868 & 0xffffffff);
      if (cVar4 == '\0') {
        uVar8 = (ulonglong)(*(int *)(param_1 + 0xb4) - 1) * 0x90 + *(longlong *)(param_1 + 0xb8);
        lVar7 = *(longlong *)(param_1 + 0xb8);
        uVar9 = *(uint *)(param_1 + 0xb4);
        piVar14 = (int *)(uVar8 + 0x90);
        piVar13 = (int *)((ulonglong)uVar9 * 0x90 + lVar7);
        if (piVar14 != piVar13) {
          auVar17 = ZEXT864(0) << 0x20;
          do {
            auVar16 = auVar17._0_16_;
            *(undefined1 (*) [16])(piVar14 + -0x24) = auVar16;
            uVar9 = piVar14[1];
            iVar2 = *piVar14;
            if (iVar2 == 0 && (ulonglong)uVar9 != 0) {
              piVar14[-0x24] = uVar9;
              uVar11 = *(undefined8 *)(piVar14 + 2);
              auVar17 = ZEXT1664(auVar16);
              func_0x000145f40560(0,uVar11,(ulonglong)uVar9 * 0x14);
              auVar16 = auVar17._0_16_;
            }
            else {
              uVar11 = *(undefined8 *)(piVar14 + 2);
            }
            piVar14[-0x24] = iVar2;
            piVar14[-0x23] = uVar9;
            *(undefined8 *)(piVar14 + -0x22) = uVar11;
            piVar14[0] = 0;
            piVar14[1] = 0;
            *(undefined1 (*) [16])(piVar14 + -0x20) = auVar16;
            uVar9 = piVar14[5];
            iVar2 = piVar14[4];
            if (iVar2 == 0 && (ulonglong)uVar9 != 0) {
              piVar14[-0x20] = uVar9;
              uVar11 = *(undefined8 *)(piVar14 + 6);
              auVar17 = ZEXT1664(auVar16);
              func_0x000145f40560(0,uVar11,(ulonglong)uVar9 << 2);
              auVar16 = auVar17._0_16_;
            }
            else {
              uVar11 = *(undefined8 *)(piVar14 + 6);
            }
            piVar14[-0x20] = iVar2;
            piVar14[-0x1f] = uVar9;
            *(undefined8 *)(piVar14 + -0x1e) = uVar11;
            piVar14[4] = 0;
            piVar14[5] = 0;
            auVar17 = ZEXT1664(auVar16);
            FUN_140641050(piVar14 + -0x1c,piVar14 + 8);
            *(undefined8 *)(piVar14 + -0x18) = *(undefined8 *)(piVar14 + 0xc);
            *(undefined8 *)(piVar14 + -0x16) = *(undefined8 *)(piVar14 + 0xe);
            *(undefined8 *)(piVar14 + -0x14) = *(undefined8 *)(piVar14 + 0x10);
            *(undefined8 *)(piVar14 + -0x12) = *(undefined8 *)(piVar14 + 0x12);
            auVar17 = ZEXT1664(auVar17._0_16_);
            FUN_1443aac60(piVar14 + -0x10,piVar14 + 0x14);
            *(undefined8 *)(piVar14 + -0xf) = *(undefined8 *)(piVar14 + 0x15);
            *(undefined8 *)(piVar14 + -0xd) = *(undefined8 *)(piVar14 + 0x17);
            *(undefined8 *)(piVar14 + -0xb) = *(undefined8 *)(piVar14 + 0x19);
            *(undefined8 *)(piVar14 + -9) = *(undefined8 *)(piVar14 + 0x1b);
            *(undefined8 *)((longlong)piVar14 + -0x1f) = *(undefined8 *)((longlong)piVar14 + 0x71);
            *(undefined8 *)(piVar14 + -4) = *(undefined8 *)(piVar14 + 0x20);
            *(char *)(piVar14 + -2) = (char)piVar14[0x22];
            piVar14 = piVar14 + 0x24;
          } while (piVar14 != piVar13);
          lVar7 = *(longlong *)(param_1 + 0xb8);
          uVar9 = *(uint *)(param_1 + 0xb4);
        }
        *(uint *)(param_1 + 0xb4) = uVar9 - 1;
        lVar12 = (ulonglong)(uVar9 - 1) * 0x90;
        lVar10 = lVar7 + 0x50 + lVar12;
        pauVar1 = (undefined1 (*) [32])(lVar7 + lVar12);
        FUN_1450267e0(lVar10);
        *(undefined4 *)(lVar10 + -0x2c) = 0;
        if (*(longlong *)(lVar10 + -0x28) != 0) {
          func_0x000144d9c130();
        }
        *(undefined8 *)(pauVar1[1] + 8) = 0;
        *(undefined4 *)pauVar1[1] = 0;
        *pauVar1 = ZEXT1232(ZEXT812(0));
        return uVar8;
      }
LAB_14007fb28:
      *(undefined4 *)(lVar12 + 0x54) = param_5;
      *(undefined4 *)(lVar12 + 0x84) = param_4;
      FUN_144ef2f80(lVar12,param_7 + *(float *)(param_1 + 0x18c),*(undefined4 *)(param_1 + 400));
      iVar2 = *(int *)(param_1 + 0x2c);
      if (iVar2 != 0) {
        lVar7 = *(longlong *)(param_1 + 0x30);
        auVar17 = ZEXT1264(ZEXT812(0));
        uVar6 = func_0x000144f5f380(iVar2,lVar7,*(undefined4 *)(lVar12 + 0x74),0,0x3f800000);
        uVar9 = iVar2 - 1U;
        if ((int)uVar6 < (int)(iVar2 - 1U)) {
          uVar9 = uVar6;
        }
        uVar5 = func_0x000144ef17a0(param_1 + 0x28,*(undefined4 *)(lVar7 + (ulonglong)uVar9 * 0x14))
        ;
        fVar18 = (float)uVar5;
        fVar15 = (float)func_0x000145f40830(param_6 * _DAT_14615b6c0);
        auVar16 = vcmpss_avx(auVar17._0_16_,ZEXT416((uint)(param_6 + _DAT_14615b6b8)),2);
        *(float *)(lVar12 + 0x80) =
             fVar18 * (float)(auVar16._0_4_ & (uint)(fVar15 * _DAT_14615ca94));
      }
      uVar8 = func_0x00014007c210(*(undefined4 *)(param_1 + 0xb4),*(undefined8 *)(param_1 + 0xb8));
      uVar11 = vmovlps_avx(ZEXT416(_DAT_145fc6f50));
      *(undefined8 *)(param_1 + 0x194) = uVar11;
      if ((ulonglong)*(uint *)(param_1 + 0xb4) != 0) {
        auVar17 = ZEXT464(_DAT_145fc6f50);
        uVar8 = *(ulonglong *)(param_1 + 0xb8);
        auVar16._0_12_ = ZEXT812(0);
        auVar16._12_4_ = 0;
        lVar7 = 0;
        do {
          auVar3 = vminss_avx(auVar17._0_16_,ZEXT416(*(uint *)(uVar8 + 0x74 + lVar7)));
          auVar17 = ZEXT1664(auVar3);
          *(int *)(param_1 + 0x194) = auVar3._0_4_;
          auVar16 = vmaxss_avx(auVar16,ZEXT416(*(uint *)(uVar8 + 0x74 + lVar7)));
          lVar7 = lVar7 + 0x90;
          *(int *)(param_1 + 0x198) = auVar16._0_4_;
        } while ((ulonglong)*(uint *)(param_1 + 0xb4) * 0x90 != lVar7);
      }
      return uVar8;
    }
  }
  return uVar8;
}

