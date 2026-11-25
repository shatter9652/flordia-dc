// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140199190  size: 862 bytes
// Name:    FUN_140199190
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145053f30
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140199190(longlong param_1,float *param_2)

{
  float *pfVar1;
  undefined8 *puVar2;
  ushort uVar3;
  uint uVar4;
  float fVar5;
  float *pfVar6;
  undefined1 auVar7 [16];
  float fVar8;
  undefined8 uVar9;
  char cVar10;
  float fVar11;
  longlong lVar12;
  float *pfVar13;
  int iVar14;
  ulonglong uVar15;
  uint uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  longlong lVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined1 auVar24 [64];
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  uVar4 = *(uint *)(param_1 + 0xc4);
  if (uVar4 != 0) {
    auVar24 = ZEXT1664(_DAT_14615d060);
    uVar18 = 0;
    pfVar1 = param_2 + 0x44;
    fVar25 = _DAT_14615ca94;
    fVar26 = _DAT_14615ca94;
    fVar27 = _DAT_14615ca94;
    fVar28 = _DAT_14615ca94;
    do {
      iVar14 = (int)(uVar18 / 0x174);
      lVar19 = *(longlong *)
                (*(longlong *)(*(longlong *)(param_1 + 0x98) + 0x10) +
                (ulonglong)(uint)(iVar14 << 4));
      lVar12 = (ulonglong)(uint)(iVar14 * -0x174 + (int)uVar18) * 0x2c;
      if (((*(byte *)(lVar19 + 9 + lVar12) & 0x80) == 0) &&
         (lVar19 = lVar19 + lVar12, (*(byte *)(lVar19 + 0x19) & 8) == 0)) {
        if (((uint)param_2[0x156] & 2) == 0) {
          if ((((*(short *)(lVar19 + 0xc) < *(short *)((longlong)param_2 + 0x536)) &&
               (*(short *)(lVar19 + 0x10) < *(short *)((longlong)param_2 + 0x53a))) &&
              ((*(short *)(lVar19 + 0x14) < *(short *)((longlong)param_2 + 0x53e) &&
               ((*(short *)(param_2 + 0x14d) < *(short *)(lVar19 + 0xe) &&
                (*(short *)(param_2 + 0x14e) < *(short *)(lVar19 + 0x12))))))) &&
             (*(short *)(param_2 + 0x14f) < *(short *)(lVar19 + 0x16))) {
LAB_1401992c2:
            if (((*(code **)(param_2 + 0x150) == (code *)0x0) ||
                (cVar10 = (**(code **)(param_2 + 0x150))
                                    (param_1,lVar19,*(undefined8 *)(param_2 + 0x154)),
                cVar10 != '\0')) && (*(longlong *)(param_2 + 0x152) != 0)) {
              uVar16 = *(uint *)(lVar19 + 4);
              if ((uVar16 & 0xf) != 0) {
                uVar15 = 0;
                pfVar13 = param_2;
                do {
                  uVar16 = (uVar16 >> 4 & 0xfffff) + (int)uVar15;
                  uVar3 = *(ushort *)
                           (*(longlong *)
                             (*(longlong *)(*(longlong *)(param_1 + 0x80) + 0x10) +
                             (ulonglong)((uVar16 >> 0xd) << 4)) + (ulonglong)(uVar16 & 0x1fff) * 2);
                  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
LAB_140199468:
                    puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0x78) + (ulonglong)uVar3 * 0x10)
                    ;
                    uVar9 = puVar2[1];
                    *(undefined8 *)pfVar13 = *puVar2;
                    *(undefined8 *)(pfVar13 + 2) = uVar9;
                  }
                  else {
                    uVar16 = (uVar3 >> 1) / 0x555;
                    lVar12 = *(longlong *)
                              (*(longlong *)(*(longlong *)(param_1 + 0x70) + 0x10) +
                              (ulonglong)(uVar16 << 4));
                    if (lVar12 == 0) goto LAB_140199468;
                    uVar17 = (ulonglong)((uint)uVar3 + uVar16 * -0xaaa);
                    auVar7 = vpinsrw_avx(ZEXT416(*(uint *)(lVar12 + uVar17 * 6)),
                                         (uint)*(ushort *)(lVar12 + 4 + uVar17 * 6),2);
                    auVar7 = vpshufb_avx(auVar7,auVar24._0_16_);
                    auVar7 = vcvtdq2ps_avx(auVar7);
                    fVar20 = auVar7._0_4_ * fVar25;
                    fVar21 = auVar7._4_4_ * fVar26;
                    fVar22 = auVar7._8_4_ * fVar27;
                    fVar23 = auVar7._12_4_ * fVar28;
                    *pfVar13 = fVar20;
                    pfVar13[1] = fVar21;
                    pfVar13[2] = fVar22;
                    pfVar13[3] = fVar23;
                    fVar20 = fVar20 * *(float *)(param_1 + 0x60);
                    fVar21 = fVar21 * *(float *)(param_1 + 100);
                    fVar22 = fVar22 * *(float *)(param_1 + 0x68);
                    fVar23 = fVar23 * *(float *)(param_1 + 0x6c);
                    *pfVar13 = fVar20;
                    pfVar13[1] = fVar21;
                    pfVar13[2] = fVar22;
                    pfVar13[3] = fVar23;
                    pfVar6 = *(float **)(param_1 + 0xe0);
                    fVar11 = pfVar6[1];
                    fVar5 = pfVar6[2];
                    fVar8 = pfVar6[3];
                    *pfVar13 = fVar20 + *pfVar6;
                    pfVar13[1] = fVar21 + fVar11;
                    pfVar13[2] = fVar22 + fVar5;
                    pfVar13[3] = fVar23 + fVar8;
                  }
                  uVar16 = *(uint *)(lVar19 + 4);
                  uVar15 = uVar15 + 1;
                  pfVar13 = pfVar13 + 4;
                } while (uVar15 < (uVar16 & 0xf));
              }
              param_2[0x41] = 0.0;
              if (((uint)param_2[0x156] & 1) == 0) {
                func_0x000144e9fea0(param_1,lVar19,&uStack_78);
                fVar5 = param_2[0x41];
                fVar11 = (float)((int)fVar5 + 1);
                param_2[0x41] = fVar11;
                *(undefined8 *)(pfVar1 + (ulonglong)(uint)fVar5 * 4) = uStack_78;
                *(undefined8 *)(pfVar1 + (ulonglong)(uint)fVar5 * 4 + 2) = uStack_70;
              }
              else {
                FUN_145053f30(lVar19,param_2,1,param_2 + 0x40);
                fVar11 = param_2[0x41];
              }
              if (fVar11 != 0.0) {
                uVar15 = 0;
                pfVar13 = pfVar1;
                do {
                  uStack_88 = *(undefined8 *)pfVar13;
                  uStack_80 = *(undefined8 *)(pfVar13 + 2);
                  (**(code **)(param_2 + 0x152))
                            (param_1,lVar19,&uStack_88,*(undefined8 *)(param_2 + 0x154));
                  uVar15 = uVar15 + 1;
                  pfVar13 = pfVar13 + 4;
                } while (uVar15 < (uint)param_2[0x41]);
              }
            }
          }
        }
        else if ((((*(short *)(lVar19 + 0xc) < *(short *)((longlong)param_2 + 0x536)) &&
                  (*(short *)(lVar19 + 0x10) < *(short *)((longlong)param_2 + 0x53a))) &&
                 (*(short *)(param_2 + 0x14d) < *(short *)(lVar19 + 0xe))) &&
                (*(short *)(param_2 + 0x14e) < *(short *)(lVar19 + 0x12))) goto LAB_1401992c2;
      }
      uVar16 = (int)uVar18 + 1;
      uVar18 = (ulonglong)uVar16;
    } while (uVar16 != uVar4);
  }
  return;
}

