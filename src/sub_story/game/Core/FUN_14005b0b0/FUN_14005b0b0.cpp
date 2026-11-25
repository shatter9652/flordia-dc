// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14005b0b0  size: 437 bytes
// Name:    FUN_14005b0b0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144dd13d0, FUN_144ee9de0, FUN_1451f5410, FUN_14033c5e0, FUN_143be2650, FUN_144ee9d60, FUN_1451f54f0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14005b0b0(longlong param_1)

{
  longlong *plVar1;
  undefined1 *puVar2;
  char cVar3;
  ulonglong uVar4;
  float fVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [64];
  float fVar9;
  undefined1 auVar10 [64];
  float fVar11;
  float fVar12;
  undefined1 auVar13 [64];
  float fVar14;
  undefined8 uStack_c50;
  undefined1 *puStack_c48;
  undefined8 uStack_c40;
  undefined8 auStack_c38 [2];
  undefined4 uStack_c24;
  undefined1 auStack_718 [1768];
  undefined1 extraout_var [56];
  
  uVar4 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffff0;
  if ((*(byte *)(uVar4 + 0x36) & 0x10) != 0) {
    FUN_144ee9d60(auStack_c38,uVar4);
    cVar3 = FUN_144ee9de0(auStack_c38[0],uStack_c24);
    if (cVar3 != '\0') {
      FUN_1451f54f0(auStack_718,auStack_c38,0);
      uStack_c40 = 0;
      puStack_c48 = auStack_718;
      uVar6 = FUN_14033c5e0(&puStack_c48);
      if (puStack_c48 == (undefined1 *)0x0) {
        auVar10 = ZEXT864(0);
      }
      else {
        auVar13 = ZEXT464(_DAT_145fc6f78);
        fVar11 = 0.0;
        auVar10 = ZEXT864(0);
        fVar12 = _DAT_145fc6ed8;
        do {
          puVar2 = puStack_c48;
          fVar14 = *(float *)(puStack_c48 + 0x66c);
          if ((fVar14 != fVar11) || (NAN(fVar14) || NAN(fVar11))) {
            plVar1 = *(longlong **)(uVar4 + 0x38);
            if (plVar1 == (longlong *)0x0) {
              auVar8._0_8_ = FUN_144dd13d0(*(undefined8 *)(param_1 + 8));
              fVar9 = auVar10._0_4_;
              auVar8._8_56_ = extraout_var;
              auVar7 = vcmpss_avx(auVar8._0_16_,auVar13._0_16_,1);
              fVar5 = (float)(~auVar7._0_4_ & (uint)(fVar12 / (float)auVar8._0_8_));
            }
            else {
              func_0x000144e3ba40(*(undefined8 *)(puStack_c48 + 0x650),&uStack_c50);
              fVar5 = (float)(**(code **)(*plVar1 + 0x40))(plVar1,uStack_c50,0,0);
              fVar9 = auVar10._0_4_;
            }
            auVar7._0_4_ = (fVar14 * fVar5) / (fVar12 + *(float *)(puVar2 + 0x58c));
            auVar7._4_12_ = SUB6012((undefined1  [60])0x0,0);
            uVar6 = auVar7._0_8_;
            auVar10 = ZEXT464((uint)(auVar7._0_4_ + fVar9));
          }
          uVar6 = FUN_14033c5e0(uVar6);
        } while (puStack_c48 != (undefined1 *)0x0);
      }
      FUN_1451f5410(auStack_718);
      FUN_143be2650(uVar4,auStack_c38,auVar10._0_8_);
    }
  }
  return;
}

