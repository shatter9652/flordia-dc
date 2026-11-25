// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401cb460  size: 312 bytes
// Name:    FUN_1401cb460
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1401cb630
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401cb460(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  float fVar8;
  float fVar9;
  undefined1 auStack_48 [40];
  
  if (param_2 != 0) {
    auStack_48._0_12_ = ZEXT812(0);
    auStack_48._12_4_ = 0;
    FUN_1401cb630(0,param_2,auStack_48);
    fVar8 = _DAT_145fc6ed8;
    uVar7 = (ulonglong)(uint)auStack_48._4_4_;
    uVar2 = auStack_48._8_8_;
    if (uVar7 == 0) {
      func_0x0001401cb5a0(param_1,0,0);
      if ((undefined8 *)uVar2 == (undefined8 *)0x0) {
        return;
      }
    }
    else {
      lVar4 = 0;
      uVar5 = 0;
      do {
        fVar9 = *(float *)(auStack_48._8_8_ + uVar5 * 0x18 + 0x14);
        if (((fVar9 != fVar8) || (NAN(fVar9) || NAN(fVar8))) &&
           (0.0 < *(float *)(auStack_48._8_8_ + (uVar5 * 3 + 2) * 8))) {
          lVar6 = 0;
          do {
            if (lVar4 != lVar6) {
              *(float *)(auStack_48._8_8_ + lVar6 + 0x10) =
                   fVar9 * *(float *)(auStack_48._8_8_ + lVar6 + 0x10);
            }
            lVar6 = lVar6 + 0x18;
          } while (uVar7 * 0x18 != lVar6);
        }
        uVar5 = uVar5 + 1;
        lVar4 = lVar4 + 0x18;
      } while (uVar5 != uVar7);
      fVar8 = 0.0;
      lVar4 = 0;
      do {
        fVar8 = fVar8 + *(float *)(auStack_48._8_8_ + lVar4 + 0x10);
        lVar4 = lVar4 + 0x18;
      } while (uVar7 * 0x18 != lVar4);
      fVar9 = 0.0;
      fVar8 = (float)func_0x0001401cb5a0(param_1,0,fVar8);
      puVar3 = (undefined8 *)uVar2;
      do {
        fVar8 = fVar8 - *(float *)(puVar3 + 2);
        if (fVar8 <= fVar9) {
          uVar1 = puVar3[1];
          *param_3 = *puVar3;
          param_3[1] = uVar1;
          break;
        }
        puVar3 = puVar3 + 3;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
    func_0x000144d9c130(uVar2);
  }
  return;
}

