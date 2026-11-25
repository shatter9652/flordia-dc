// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140193690  size: 58 bytes
// Name:    FUN_140193690
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144eb3750
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_140193690(ulonglong param_1)

{
  undefined1 auVar1 [16];
  undefined4 uVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined8 extraout_XMM0_Qa;
  undefined1 extraout_var [56];
  undefined1 auVar8 [16];
  undefined1 auVar9 [64];
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined1 auVar7 [64];
  
  lVar4 = FUN_144eb3750(*(undefined4 *)((param_1 & 0xfffffffffffffff0) + 0x9c));
  if (lVar4 != 0) {
    lVar4 = func_0x0001450718b0(lVar4,1);
    if (lVar4 != 0) {
      FUN_14501bda0(*(undefined8 *)(lVar4 + 0x308),*(undefined1 *)(lVar4 + 0x2a45),&uStack_20,
                    *(undefined2 *)(lVar4 + 0x2cf8),*(undefined1 *)(lVar4 + 0x2cfa));
      uVar2 = _DAT_14a9b3f50;
      uVar5 = func_0x00014501bc50(uStack_20);
      cVar3 = FUN_1452d2970(uVar5,0,_DAT_145fc6edc,uVar2);
      uVar6 = 1;
      if (cVar3 == '\0') {
        cVar3 = FUN_142233e30();
        if (cVar3 != '\0') {
          FUN_14501bda0(*(undefined8 *)(lVar4 + 0x308),*(undefined1 *)(lVar4 + 0x2a45),&uStack_28,
                        *(undefined2 *)(lVar4 + 0x2cfc),*(undefined1 *)(lVar4 + 0x2cfe));
          uVar5 = func_0x00014501bc50(uStack_28);
          auVar9 = ZEXT464(_DAT_145fc6edc);
          FUN_144db8640(uVar5,0,uVar2);
          auVar7._8_56_ = extraout_var;
          auVar7._0_8_ = extraout_XMM0_Qa;
          auVar8._0_12_ = ZEXT812(0);
          auVar8._12_4_ = 0;
          if ((auVar9._0_4_ < 0.0) || ((float)extraout_XMM0_Qa < auVar9._0_4_)) {
            auVar1 = vcmpps_avx(auVar7._0_16_,auVar9._0_16_,2);
            auVar8 = vcmpps_avx(auVar9._0_16_,auVar8,1);
            uVar6 = auVar8._0_4_ & auVar1._0_4_;
          }
          else {
            uVar6 = 1;
          }
          return uVar6 & 0xffffff01;
        }
        uVar6 = 0;
      }
      return uVar6;
    }
  }
  return 0;
}

