// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140053b90  size: 987 bytes
// Name:    FUN_140053b90
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140743910, FUN_1400b6b80, FUN_144ec0a70, FUN_144e258f0, FUN_14540c4c0, FUN_1447f2db0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140053b90(undefined8 *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  uint uVar8;
  char *pcVar9;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  char cVar13;
  int iVar14;
  undefined4 uVar15;
  int iVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  longlong *plVar22;
  longlong lVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [64];
  float fVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [64];
  float fVar42;
  undefined1 auVar43 [64];
  undefined1 auVar44 [64];
  uint uStack_100;
  short sStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  undefined1 auStack_d8 [16];
  undefined1 auStack_c8 [16];
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  
  pcVar9 = (char *)*param_1;
  if (pcVar9 != (char *)0x0) {
    uVar7 = *(uint *)(pcVar9 + 4);
    uVar17 = (ulonglong)uVar7 & 0x1ffff;
    if ((((uVar17 != 0x1ffff) &&
         (plVar22 = *(longlong **)((ulonglong)(uVar7 >> 0x11 & 0x1f) * 8 + 0x14abbe7c0),
         plVar22 != (longlong *)0x0)) &&
        (uVar8 = *(uint *)(plVar22[5] + uVar17 * 4), (uVar8 >> 0x11 & 0x3ff) == uVar7 >> 0x16)) &&
       (((uVar8 & *(uint *)(plVar22 + 6)) == *(uint *)(plVar22 + 6) && (*plVar22 != 0)))) {
      lVar23 = *plVar22 + (ulonglong)(uint)((int)uVar17 * (int)plVar22[1]);
      if ((byte)(*pcVar9 - 3U) < 2) {
        cVar13 = func_0x000144f60190(*(undefined4 *)(lVar23 + 0x9c));
        if (cVar13 == '\0') {
          return;
        }
      }
      else if (*pcVar9 == '\x06') {
        if (*(longlong *)(pcVar9 + 8) == 0) {
          return;
        }
        if ((*(byte *)(*(longlong *)(pcVar9 + 8) + 0xec) & 0x10) != 0) {
          return;
        }
      }
      lVar18 = FUN_144e258f0(lVar23);
      if (lVar18 != 0) {
        uVar10 = *(undefined8 *)(lVar18 + 0x170);
        lVar19 = func_0x000144e98ae0(uVar10);
        lVar20 = func_0x000144e25940(uVar10,*(undefined8 *)(lVar18 + 0x1a0));
        if ((lVar20 != 0 && lVar19 != 0) &&
           (iVar16 = *(int *)(pcVar9 + 0x10), iVar16 < *(int *)(lVar20 + 0x1d4))) {
          auVar41 = ZEXT1664(_DAT_14614f7f0);
          auVar43 = ZEXT864(_DAT_146159bc0);
          auVar44 = ZEXT464(_DAT_145fc6ed8);
          auVar38 = ZEXT1264(ZEXT812(0));
          if (((0x1cU >> (*(uint *)(lVar23 + 0x30) & 0x1f) & 1) != 0) &&
             (iVar14 = FUN_1400b6b80(*(undefined8 *)(lVar23 + 0x20)), iVar14 != 0)) {
            iVar14 = iVar16 - *(int *)(lVar20 + 0x1d0);
            if (iVar16 < *(int *)(lVar20 + 0x1d0)) {
              plVar22 = (longlong *)(*(longlong *)(lVar20 + 0x18) + 0x30);
              iVar14 = iVar16;
            }
            else {
              plVar22 = (longlong *)(lVar20 + 0x1a0);
            }
            lVar23 = *plVar22;
            lVar21 = (longlong)iVar14 * 0x40;
            auVar44 = ZEXT1664(*(undefined1 (*) [16])(lVar23 + lVar21));
            auVar43 = ZEXT1664(*(undefined1 (*) [16])(lVar23 + 0x10 + lVar21));
            auVar41 = ZEXT1664(*(undefined1 (*) [16])(lVar23 + 0x20 + lVar21));
            auVar38 = ZEXT1664(*(undefined1 (*) [16])(lVar23 + 0x30 + lVar21));
          }
          FUN_144ec0a70(lVar20,iVar16,&fStack_b8);
          fVar39 = auVar44._0_4_;
          auVar40 = auVar44._0_16_;
          auVar11 = vshufps_avx(auVar40,auVar40,0x55);
          auVar40 = vshufps_avx(auVar40,auVar40,0xaa);
          fVar1 = *(float *)((longlong)param_1 + 100);
          fVar42 = auVar43._0_4_;
          fVar24 = fStack_98 * auVar40._0_4_ + fStack_a8 * auVar11._0_4_ + fStack_b8 * fVar39;
          fVar25 = fStack_94 * auVar40._4_4_ + fStack_a4 * auVar11._4_4_ + fStack_b4 * fVar39;
          fVar26 = fStack_90 * auVar40._8_4_ + fStack_a0 * auVar11._8_4_ + fStack_b0 * fVar39;
          fVar27 = fStack_8c * auVar40._12_4_ + fStack_9c * auVar11._12_4_ + fStack_ac * fVar39;
          auVar40 = auVar43._0_16_;
          auVar11 = vshufps_avx(auVar40,auVar40,0x55);
          auVar40 = vshufps_avx(auVar40,auVar40,0xaa);
          fVar39 = auVar41._0_4_;
          fVar28 = fStack_98 * auVar40._0_4_ + fStack_a8 * auVar11._0_4_ + fStack_b8 * fVar42;
          fVar29 = fStack_94 * auVar40._4_4_ + fStack_a4 * auVar11._4_4_ + fStack_b4 * fVar42;
          fVar30 = fStack_90 * auVar40._8_4_ + fStack_a0 * auVar11._8_4_ + fStack_b0 * fVar42;
          fVar31 = fStack_8c * auVar40._12_4_ + fStack_9c * auVar11._12_4_ + fStack_ac * fVar42;
          auVar40 = auVar41._0_16_;
          auVar11 = vshufps_avx(auVar40,auVar40,0x55);
          auVar40 = vshufps_avx(auVar40,auVar40,0xaa);
          auVar37 = auVar38._0_16_;
          auVar12 = vshufps_avx(auVar37,auVar37,0x55);
          fVar32 = fStack_98 * auVar40._0_4_ + fStack_a8 * auVar11._0_4_ + fStack_b8 * fVar39;
          fVar33 = fStack_94 * auVar40._4_4_ + fStack_a4 * auVar11._4_4_ + fStack_b4 * fVar39;
          fVar34 = fStack_90 * auVar40._8_4_ + fStack_a0 * auVar11._8_4_ + fStack_b0 * fVar39;
          fVar35 = fStack_8c * auVar40._12_4_ + fStack_9c * auVar11._12_4_ + fStack_ac * fVar39;
          fVar36 = auVar38._0_4_;
          auVar11 = vshufps_avx(auVar37,auVar37,0xaa);
          fVar39 = *(float *)((longlong)param_1 + 0x34);
          fVar42 = *(float *)(param_1 + 7);
          fVar2 = *(float *)(param_1 + 0xd);
          fVar3 = *(float *)(param_1 + 6);
          fVar4 = *(float *)(param_1 + 9);
          fVar5 = *(float *)(param_1 + 0xb);
          fVar6 = *(float *)(param_1 + 8);
          auStack_c8._0_4_ =
               fVar32 * fVar42 +
               fVar28 * fVar39 +
               fVar24 * fVar3 +
               fStack_98 * auVar11._0_4_ +
               fStack_a8 * auVar12._0_4_ + fStack_b8 * fVar36 + fStack_88;
          auStack_c8._4_4_ =
               fVar33 * fVar42 +
               fVar29 * fVar39 +
               fVar25 * fVar3 +
               fStack_94 * auVar11._4_4_ +
               fStack_a4 * auVar12._4_4_ + fStack_b4 * fVar36 + fStack_84;
          auStack_c8._8_4_ =
               fVar34 * fVar42 +
               fVar30 * fVar39 +
               fVar26 * fVar3 +
               fStack_90 * auVar11._8_4_ +
               fStack_a0 * auVar12._8_4_ + fStack_b0 * fVar36 + fStack_80;
          auStack_c8._12_4_ =
               fVar35 * fVar42 +
               fVar31 * fVar39 +
               fVar27 * fVar3 +
               fStack_8c * auVar11._12_4_ +
               fStack_9c * auVar12._12_4_ + fStack_ac * fVar36 + fStack_7c;
          fVar39 = *(float *)((longlong)param_1 + 0x44);
          fVar42 = *(float *)(param_1 + 10);
          fStack_f8 = fVar32 * fVar4 + fVar28 * fVar39 + fVar6 * fVar24;
          fStack_f4 = fVar33 * fVar4 + fVar29 * fVar39 + fVar6 * fVar25;
          fStack_f0 = fVar34 * fVar4 + fVar30 * fVar39 + fVar6 * fVar26;
          fStack_ec = fVar35 * fVar4 + fVar31 * fVar39 + fVar6 * fVar27;
          fVar39 = *(float *)((longlong)param_1 + 0x54);
          fVar3 = *(float *)(param_1 + 0xc);
          fStack_e8 = fVar32 * fVar5 + fVar28 * fVar39 + fVar42 * fVar24;
          fStack_e4 = fVar33 * fVar5 + fVar29 * fVar39 + fVar42 * fVar25;
          fStack_e0 = fVar34 * fVar5 + fVar30 * fVar39 + fVar42 * fVar26;
          fStack_dc = fVar35 * fVar5 + fVar31 * fVar39 + fVar42 * fVar27;
          auStack_d8._0_4_ = fVar32 * fVar2 + fVar28 * fVar1 + fVar3 * fVar24;
          auStack_d8._4_4_ = fVar33 * fVar2 + fVar29 * fVar1 + fVar3 * fVar25;
          auStack_d8._8_4_ = fVar34 * fVar2 + fVar30 * fVar1 + fVar3 * fVar26;
          auStack_d8._12_4_ = fVar35 * fVar2 + fVar31 * fVar1 + fVar3 * fVar27;
          FUN_14540c4c0(lVar18,&uStack_100,iVar16);
          uVar15 = 0xffff;
          uVar17 = (ulonglong)((uStack_100 & 0xffff) << 4);
          if (((*(short *)(*(longlong *)(_DAT_14abbf348 + 0x28) + 8 + uVar17) ==
                (short)(uStack_100 >> 0x10)) &&
              (lVar23 = *(longlong *)(*(longlong *)(_DAT_14abbf348 + 0x28) + uVar17), lVar23 != 0))
             && (uVar15 = 0xfffe, sStack_fc != -2)) {
            uVar15 = func_0x0001403dc2f0(lVar23,sStack_fc);
          }
          iVar16 = FUN_1447f2db0(lVar19,uVar15);
          if (iVar16 != 0xffff) {
            FUN_140743910(*(undefined8 *)(lVar19 + 0x78),*(undefined8 *)(lVar19 + 0x140),iVar16,
                          &fStack_f8,param_1 + 0x32);
          }
        }
      }
      *(byte *)((longlong)param_1 + 0x25d) = *(byte *)((longlong)param_1 + 0x25d) & 0xfd;
    }
  }
  return;
}

