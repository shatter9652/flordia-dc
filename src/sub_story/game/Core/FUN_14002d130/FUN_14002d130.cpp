// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14002d130  size: 335 bytes
// Name:    FUN_14002d130
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144ee9de0, FUN_144e258f0, FUN_144ee9d60, FUN_14002d280, FUN_14002d2d0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14002d130(longlong param_1)

{
  uint *puVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 auVar6 [64];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float fStack_538;
  float fStack_534;
  float fStack_530;
  float fStack_52c;
  undefined4 uStack_524;
  
  uVar5 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffff0;
  cVar2 = FUN_14002d280();
  if (cVar2 == '\0') {
    lVar3 = FUN_144e258f0(uVar5);
    if ((((lVar3 != 0) && (DAT_14abbe2e0 == '\0')) && (cVar2 = func_0x000144f7b6a0(), cVar2 == '\0')
        ) && ((DAT_14abbe2e1 == '\0' && (*(char *)(lVar3 + 0x156) == '\x01')))) {
      FUN_144ee9d60(&fStack_538,uVar5);
      cVar2 = FUN_144ee9de0(CONCAT44(fStack_534,fStack_538),uStack_524);
      if (cVar2 != '\0') {
        return 1;
      }
    }
  }
  else {
    lVar3 = func_0x000144e8f430(*(longlong *)(uVar5 + 0x20) + 0x10,_DAT_14999ec04);
    if (lVar3 != 0) {
      auVar7 = vpunpckhwd_avx(*(undefined1 (*) [16])(uVar5 + 0x70),
                              *(undefined1 (*) [16])(uVar5 + 0x70));
      auVar7 = vpsrad_avx(auVar7,0x10);
      auVar7 = vcvtdq2ps_avx(auVar7);
      vshufpd_avx(auVar7,auVar7,3);
      FUN_14002d2d0(&fStack_538,*(undefined4 *)(uVar5 + 0xa0),*(undefined4 *)(uVar5 + 0xa4));
      if ((ulonglong)*(uint *)(param_1 + 0x24) != 0) {
        auVar6 = ZEXT464(_DAT_145fc6f50);
        lVar4 = 0;
        do {
          puVar1 = (uint *)(param_1 + 0x30 + lVar4);
          lVar4 = lVar4 + 0x30;
          auVar7 = vminss_avx(auVar6._0_16_,
                              ZEXT416(*(uint *)(*(longlong *)
                                                 (*(longlong *)(lVar3 + 8) + (ulonglong)*puVar1 * 8)
                                               + 4)));
          auVar6 = ZEXT1664(auVar7);
        } while ((ulonglong)*(uint *)(param_1 + 0x24) * 0x30 != lVar4);
        auVar9._0_12_ = ZEXT812(0);
        auVar9._12_4_ = 0;
        auVar8._0_4_ = fStack_538 * fStack_538;
        auVar8._4_4_ = fStack_534 * fStack_534;
        auVar8._8_4_ = fStack_530 * fStack_530;
        auVar8._12_4_ = fStack_52c * fStack_52c;
        auVar8 = vblendps_avx(auVar8,auVar9,8);
        auVar8 = vhaddps_avx(auVar8,auVar8);
        auVar8 = vhaddps_avx(auVar8,auVar8);
        if (auVar7._0_4_ * auVar7._0_4_ < auVar8._0_4_) {
          return 1;
        }
      }
    }
  }
  return 0;
}

