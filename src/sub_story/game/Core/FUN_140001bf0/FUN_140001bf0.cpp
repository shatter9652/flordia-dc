// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140001bf0  size: 536 bytes
// Name:    FUN_140001bf0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1402e5b80, FUN_14501bb20
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140001bf0(longlong param_1)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  longlong *plVar5;
  undefined1 auVar6 [16];
  char cVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong uVar11;
  float fVar12;
  undefined1 auVar13 [16];
  float fVar14;
  undefined1 auVar15 [16];
  undefined1 auStack_98 [16];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  longlong *plStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  longlong lStack_48;
  uint uStack_40;
  float fStack_3c;
  
  if (param_1 != 0) {
    uVar2 = *(undefined4 *)(param_1 + 0x9c);
    cVar7 = func_0x000144ef3230(uVar2);
    if (cVar7 != '\0') {
      lVar8 = func_0x000144da6540(uVar2);
      if ((lVar8 != 0) && (*(longlong *)(lVar8 + 0x10e8) != 0)) {
        cVar7 = FUN_14501bb20(*(longlong *)(lVar8 + 0x10e8),0,1);
        if (cVar7 != '\0') {
          lVar8 = func_0x000144da6540(*(undefined4 *)(param_1 + 0x9c));
          if ((lVar8 != 0) && (lVar8 = *(longlong *)(lVar8 + 0x10c8), lVar8 != 0)) {
            uVar3 = *(uint *)(lVar8 + 0x14f0);
            cVar7 = func_0x00014501bbd0(uVar3,*(undefined1 *)(lVar8 + 0x1540));
            if ((cVar7 != '\0') &&
               (((uVar10 = uVar3 & 0x1ffff, uVar10 != 0x1ffff &&
                 (plVar5 = *(longlong **)((ulonglong)(uVar3 >> 0x11 & 0x1f) * 8 + 0x14abbe7c0),
                 plVar5 != (longlong *)0x0)) &&
                (uVar4 = *(uint *)(plVar5[5] + (ulonglong)uVar10 * 4),
                (uVar4 >> 0x11 & 0x3ff) == uVar3 >> 0x16)))) {
              if ((((uVar4 & *(uint *)(plVar5 + 6)) == *(uint *)(plVar5 + 6)) &&
                  (lVar8 = *plVar5, lVar8 != 0)) &&
                 (uVar11 = (ulonglong)(uVar10 * (int)plVar5[1]),
                 *(char *)(lVar8 + 0x30 + uVar11) == '\x03')) {
                uVar2 = *(undefined4 *)(lVar8 + 0x9c + uVar11);
                cVar7 = func_0x000144ed25d0(uVar2);
                if (cVar7 != '\0') {
                  lVar9 = func_0x0001451585e0(uVar2);
                  if (lVar9 != 0) {
                    fVar12 = (float)func_0x000145158630(lVar9,3,0);
                    uStack_78 = *(undefined8 *)(param_1 + 0x70);
                    uStack_70 = *(undefined8 *)(param_1 + 0x78);
                    func_0x000144dc3790(&uStack_78,&plStack_68);
                    puVar1 = (undefined8 *)(lVar8 + 0x70 + uVar11);
                    uStack_88 = *puVar1;
                    uStack_80 = puVar1[1];
                    func_0x000144dc3790(&uStack_88,auStack_98);
                    if ((fVar12 != 0.0) || (NAN(fVar12))) {
                      auVar15._0_12_ = ZEXT812(0);
                      auVar15._12_4_ = 0;
                      auVar6._8_8_ = pcStack_60;
                      auVar6._0_8_ = plStack_68;
                      pcStack_60 = FUN_14296a760;
                      puStack_58 = &UNK_1408d04c0;
                      auVar6 = vsubps_avx(auVar6,auStack_98);
                      puStack_50 = &SUB_140004380;
                      auVar13._0_4_ = auVar6._0_4_ * auVar6._0_4_;
                      auVar13._4_4_ = auVar6._4_4_ * auVar6._4_4_;
                      auVar13._8_4_ = auVar6._8_4_ * auVar6._8_4_;
                      auVar13._12_4_ = auVar6._12_4_ * auVar6._12_4_;
                      auVar6 = vblendps_avx(auVar13,auVar15,8);
                      auVar6 = vhaddps_avx(auVar6,auVar6);
                      auVar13 = vhaddps_avx(auVar6,auVar6);
                      auVar6 = vrsqrtss_avx(auVar13,auVar13);
                      fVar14 = auVar6._0_4_;
                      auVar6 = vcmpss_avx(ZEXT416(_DAT_146159bfc),auVar13,2);
                      uStack_40 = auVar6._0_4_ &
                                  (uint)(((fVar14 * fVar14 * auVar13._0_4_ * _DAT_145fc6f08 +
                                          _DAT_145fc6edc) * fVar14 + fVar14) * auVar13._0_4_);
                      plStack_68 = &lStack_48;
                      lStack_48 = param_1;
                      fStack_3c = fVar12;
                      FUN_1402e5b80(4);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return;
}

