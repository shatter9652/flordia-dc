// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401cb630  size: 736 bytes
// Name:    FUN_1401cb630
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1401cb9c0, FUN_144dd33e0, FUN_1450865c0, FUN_1401cbb70, FUN_144dd3330, FUN_144dd3360, FUN_144ffdf80
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401cb630(undefined8 param_1,undefined8 param_2,uint *param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  char cVar4;
  uint uVar5;
  undefined8 uVar6;
  longlong lVar7;
  ulonglong uVar8;
  bool bVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  float fVar12;
  undefined1 auVar13 [64];
  undefined1 auVar14 [64];
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  undefined1 in_ZMM10 [64];
  undefined1 auVar18 [64];
  undefined1 in_ZMM11 [64];
  undefined1 auVar19 [64];
  undefined4 uStack_314;
  undefined8 uStack_310;
  undefined1 auStack_308 [16];
  undefined1 auStack_2f8 [16];
  ulonglong uStack_2e8;
  longlong lStack_2e0;
  uint uStack_2d8;
  undefined8 auStack_2c0 [64];
  uint uStack_c0;
  undefined1 auStack_b8 [16];
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [16];
  
  auStack_58 = in_ZMM11._0_16_;
  auStack_68 = in_ZMM10._0_16_;
  auStack_b8._0_12_ = ZEXT812(0);
  auStack_b8._12_4_ = 0;
  auVar13 = ZEXT1664(auStack_b8);
  uStack_c0 = 0;
  uStack_310 = param_1;
  FUN_1401cbb70(param_2,auStack_2c0);
  uVar10 = (ulonglong)uStack_c0;
  if (uVar10 != 0) {
    auVar14 = ZEXT464(_DAT_145fc6ed8);
    uVar11 = 0;
    fVar16 = 0.0;
    fVar15 = _DAT_145fc6f48;
    uStack_2e8 = uVar10;
    do {
      auStack_2f8 = auVar13._0_16_;
      uVar6 = func_0x000144ddb100(2);
      puVar2 = (undefined4 *)auStack_2c0[uVar11];
      cVar4 = FUN_144ffdf80(uVar6,*puVar2,auStack_2f8);
      if ((cVar4 != '\0') && (cVar4 = FUN_1401cb9c0(uStack_310,auStack_2f8), cVar4 != '\0')) {
        lStack_2e0 = 0;
        uStack_2d8 = 0;
        func_0x0001401cbc20(puVar2,&lStack_2e0);
        lVar7 = lStack_2e0;
        uVar8 = (ulonglong)uStack_2d8;
        if (uVar8 != 0) {
          uVar10 = 0;
          bVar9 = false;
          auVar18 = ZEXT1664(auVar14._0_16_);
          auVar19 = ZEXT1664(auVar14._0_16_);
          do {
            FUN_144dd3330(*(undefined4 *)(lVar7 + uVar10 * 4),&uStack_314);
            uVar17 = uStack_314;
            auStack_308 = auVar13._0_16_;
            uVar6 = func_0x000144ddb100(2);
            cVar4 = FUN_144dd3360(uVar6,uVar17,auStack_308);
            if ((cVar4 != '\0') && (cVar4 = FUN_1450865c0(auStack_308), cVar4 != '\0')) {
              uVar6 = auStack_308._0_8_;
              cVar4 = FUN_144dd33e0(auStack_308._0_8_,auStack_308._8_8_,0x20,2);
              if ((cVar4 != '\0') && (uVar6 != 0)) {
                fVar12 = (float)func_0x0001401cb910(uStack_310,uVar6);
                if ((fVar12 != fVar15) || (NAN(fVar12) || NAN(fVar15))) {
                  if ((*(uint *)(uVar6 + 1) & 3) == 1) {
                    auVar18 = ZEXT464((uint)(auVar18._0_4_ * fVar12));
                  }
                  else {
                    auVar19 = ZEXT464((uint)(auVar19._0_4_ * fVar12));
                  }
                  bVar9 = true;
                }
                if ((auVar19._0_4_ == fVar16) && (!NAN(auVar19._0_4_) && !NAN(fVar16))) break;
              }
            }
            uVar10 = uVar10 + 1;
          } while (uVar8 != uVar10);
          uVar10 = uStack_2e8;
          uVar17 = auVar18._0_4_;
          fVar12 = auVar19._0_4_;
          if ((bVar9) && (fVar16 < fVar12)) {
            uVar5 = param_3[1];
            if (uVar5 == *param_3) {
              uVar3 = uVar5 >> 1;
              if (uVar5 < 2) {
                uVar3 = 1;
              }
              lVar7 = func_0x000144d9c140(8,(ulonglong)(uVar3 + uVar5) * 0x18);
              if ((ulonglong)param_3[1] != 0) {
                func_0x000145f40560(lVar7,*(undefined8 *)(param_3 + 2),(ulonglong)param_3[1] * 0x18)
                ;
              }
              uVar17 = auVar18._0_4_;
              fVar12 = auVar19._0_4_;
              if (*(longlong *)(param_3 + 2) != 0) {
                func_0x000144d9c130();
                uVar17 = auVar18._0_4_;
                fVar12 = auVar19._0_4_;
              }
              *(longlong *)(param_3 + 2) = lVar7;
              *param_3 = uVar3 + uVar5;
              uVar5 = param_3[1];
            }
            else {
              lVar7 = *(longlong *)(param_3 + 2);
            }
            uVar8 = (ulonglong)uVar5;
            param_3[1] = uVar5 + 1;
            puVar1 = (undefined8 *)(lVar7 + uVar8 * 0x18);
            *puVar1 = auStack_2f8._0_8_;
            puVar1[1] = auStack_2f8._8_8_;
            *(float *)(lVar7 + 0x10 + uVar8 * 0x18) = fVar12;
            *(undefined4 *)(lVar7 + 0x14 + uVar8 * 0x18) = uVar17;
          }
        }
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 != uVar10);
  }
  return;
}

