// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140140f80  size: 791 bytes
// Name:    FUN_140140f80
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145abfe50, FUN_14516b930
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140140f80(longlong param_1,undefined8 *param_2,float param_3,undefined8 param_4,
                  uint *param_5)

{
  byte bVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  ulonglong uVar8;
  byte bVar9;
  longlong lVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auVar23 [64];
  float fVar24;
  undefined1 auVar25 [64];
  char cStack_cc;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  
  uVar11 = _DAT_147bde628;
  auVar23 = ZEXT464((uint)_DAT_145fc6ed8);
  auVar16 = vmaxss_avx(ZEXT416((uint)_DAT_145fc6ed8),ZEXT416(_DAT_149a62ee4));
  auVar25 = ZEXT1664(auVar16);
  fVar15 = auVar16._0_4_;
  fVar19 = _DAT_14854ff10;
  fVar20 = fRam000000014854ff14;
  fVar21 = fRam000000014854ff18;
  fVar22 = fRam000000014854ff1c;
  fVar14 = _DAT_145fc6ed8;
  if ((param_5[1] < _DAT_147bde628) && (*param_5 < _DAT_147bde628)) {
    FUN_145abfe50(param_5,_DAT_147bde628);
    fVar14 = auVar23._0_4_;
    fVar15 = auVar25._0_4_;
  }
  param_5[1] = uVar11;
  lVar4 = _DAT_14983be00;
  uVar6 = (ulonglong)_DAT_14983bdfc;
  if (uVar6 == 0) {
    uVar11 = 0;
  }
  else {
    auVar16._0_4_ = fVar19 * fVar19;
    auVar16._4_4_ = fVar20 * fVar20;
    auVar16._8_4_ = fVar21 * fVar21;
    auVar16._12_4_ = fVar22 * fVar22;
    auVar17._0_12_ = ZEXT812(0);
    auVar17._12_4_ = 0;
    lVar10 = 0;
    uVar11 = 0;
    auVar16 = vblendps_avx(auVar16,auVar17,8);
    auVar18._4_4_ = _DAT_146159ef4;
    auVar18._0_4_ = _DAT_146159ef4;
    auVar18._8_4_ = _DAT_146159ef4;
    auVar18._12_4_ = _DAT_146159ef4;
    auVar16 = vhaddps_avx(auVar16,auVar16);
    lVar13 = _DAT_14983be00 + 0xd0;
    auVar16 = vhaddps_avx(auVar16,auVar16);
    auVar16 = vcmpps_avx(auVar16,auVar18,5);
    uVar7 = vmovmskps_avx(auVar16);
    fVar14 = fVar14 / fVar15;
    auVar23 = ZEXT464((uint)(fVar14 * fVar14));
    fVar14 = fVar15 * param_3 * fVar14;
    auVar25 = ZEXT464((uint)(fVar14 * fVar14));
    do {
      lVar12 = *(longlong *)(lVar13 + lVar10);
      if (((lVar12 != 0) && ((*(byte *)(lVar12 + 0xcb) & 1) == 0)) &&
         (*(longlong *)(lVar12 + 0x40) != 0)) {
        puVar2 = *(undefined8 **)(lVar4 + 0x40 + lVar10);
        lVar12 = (ulonglong)((uint)DAT_14abbe8d0 * 2) * 3;
        bVar9 = *(byte *)((longlong)puVar2 + lVar12 + 0x18);
        if ((((bVar9 == 0x1e) &&
             (bVar9 = *(byte *)((longlong)puVar2 + lVar12 + 0x19), bVar9 == 0x1e)) &&
            ((bVar9 = *(byte *)((longlong)puVar2 + lVar12 + 0x1a), bVar9 == 0x1e &&
             ((bVar9 = *(byte *)((longlong)puVar2 + lVar12 + 0x1b), bVar9 == 0x1e &&
              (bVar9 = *(byte *)((longlong)puVar2 + lVar12 + 0x1c), bVar9 == 0x1e)))))) &&
           (bVar9 = *(byte *)((longlong)puVar2 + lVar12 + 0x1d), bVar9 == 0x1e)) {
          lVar12 = 0;
        }
        else {
          lVar12 = puVar2[(ulonglong)bVar9 + 0x14];
        }
        if (_DAT_149e39c50 != (code *)0x0) {
          cVar5 = (*_DAT_149e39c50)(0x149e39c00,*puVar2);
          if (cVar5 != '\0') {
            *(byte *)(lVar12 + 0x119) = *(byte *)(lVar12 + 0x119) | 0x10;
            goto LAB_140141216;
          }
        }
        cStack_cc = (char)uVar7;
        *(byte *)(lVar12 + 0x119) = *(byte *)(lVar12 + 0x119) & 0xef;
        bVar9 = *(byte *)(lVar4 + 200 + lVar10);
        bVar1 = *(byte *)(lVar4 + 0xcc + lVar10);
        fVar14 = *(float *)(lVar4 + 0x4c + lVar10);
        uStack_a8 = *param_2;
        uStack_a0 = param_2[1];
        puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar10);
        uStack_b8 = *puVar2;
        uStack_b0 = puVar2[1];
        lVar12 = **(longlong **)(lVar4 + 0x40 + lVar10);
        fStack_98 = fVar19;
        fStack_94 = fVar20;
        fStack_90 = fVar21;
        fStack_8c = fVar22;
        fVar15 = (float)FUN_14516b930(*(undefined4 *)(lVar12 + 0x9c),&uStack_b8,param_4,
                                      (byte)((bVar9 & 2) >> 1) & cStack_cc != '\0',&uStack_a8,
                                      &fStack_98,(bVar1 & 2) >> 1,*(undefined4 *)(param_1 + 0x50),
                                      (bVar1 & 4) >> 2,*(undefined4 *)(param_1 + 0x54));
        fVar24 = auVar25._0_4_;
        if ((bVar9 & 0xfb) != 0) {
          fVar24 = auVar23._0_4_;
        }
        uVar8 = (ulonglong)uVar11;
        uVar11 = uVar11 + 1;
        lVar3 = *(longlong *)(param_5 + 2);
        *(longlong *)(lVar3 + uVar8 * 0x18) = lVar12;
        *(float *)(lVar3 + 0x10 + uVar8 * 0x18) = fVar14 * fVar15 * fVar14 * fVar15 * fVar24;
      }
LAB_140141216:
      lVar10 = lVar10 + 0xe0;
    } while (uVar6 * 0xe0 - lVar10 != 0);
    if ((param_5[1] < uVar11) && (*param_5 < uVar11)) {
      FUN_145abfe50(param_5,uVar11);
    }
  }
  param_5[1] = uVar11;
  return;
}

