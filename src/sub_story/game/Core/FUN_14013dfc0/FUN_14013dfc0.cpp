// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14013dfc0  size: 365 bytes
// Name:    FUN_14013dfc0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14013e130, FUN_144ffa820
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_14013dfc0(longlong param_1,undefined1 (*param_2) [16])

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auVar6 [16];
  longlong lVar7;
  char cVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float fVar14;
  undefined1 auVar15 [64];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 aauStack_58 [3] [16];
  
  cVar8 = FUN_14013e130(*(undefined4 *)(param_1 + 0xf8));
  if (((cVar8 != '\0') && (cVar8 = func_0x000145311e60(param_1 + 0x80), cVar8 != '\0')) &&
     (cVar8 = FUN_144ffa820(*(undefined4 *)(param_1 + 0x90),*(undefined4 *)(param_1 + 200)),
     cVar8 != '\0')) {
    uVar2 = *(uint *)(param_1 + 200);
    uVar10 = (ulonglong)uVar2 & 0x1ffff;
    if ((uVar10 != 0x1ffff) &&
       (plVar4 = *(longlong **)((ulonglong)(uVar2 >> 0x11 & 0x1f) * 8 + 0x14abbe7c0),
       plVar4 != (longlong *)0x0)) {
      uVar3 = *(uint *)(plVar4[5] + uVar10 * 4);
      if ((uVar3 >> 0x11 & 0x3ff) != uVar2 >> 0x16) {
        return false;
      }
      if ((uVar3 & *(uint *)(plVar4 + 6)) != *(uint *)(plVar4 + 6)) {
        return false;
      }
      lVar5 = *plVar4;
      if (lVar5 == 0) {
        return false;
      }
      lVar7 = plVar4[1];
      fVar14 = _DAT_1492dce88;
      if ((*(longlong *)(param_1 + 0x70) != 0) &&
         (lVar9 = func_0x000144edb7b0(*(undefined4 *)(*(longlong *)(param_1 + 0x70) + 0x9c)),
         lVar9 != 0)) {
        fVar14 = *(float *)(lVar9 + 0x1764);
      }
      puVar1 = (undefined8 *)(lVar5 + 0x70 + (ulonglong)(uint)((int)uVar10 * (int)lVar7));
      uStack_68 = *puVar1;
      uStack_60 = puVar1[1];
      auVar15 = ZEXT1664(*param_2);
      func_0x000144dc3790(&uStack_68,aauStack_58);
      auVar12._0_12_ = ZEXT812(0);
      auVar12._12_4_ = 0;
      auVar6 = vsubps_avx(aauStack_58[0],auVar15._0_16_);
      auVar11._0_4_ = auVar6._0_4_ * auVar6._0_4_;
      auVar11._4_4_ = auVar6._4_4_ * auVar6._4_4_;
      auVar11._8_4_ = auVar6._8_4_ * auVar6._8_4_;
      auVar11._12_4_ = auVar6._12_4_ * auVar6._12_4_;
      auVar6 = vblendps_avx(auVar11,auVar12,8);
      fVar14 = fVar14 * fVar14;
      auVar6 = vhaddps_avx(auVar6,auVar6);
      auVar13._4_4_ = fVar14;
      auVar13._0_4_ = fVar14;
      auVar13._8_4_ = fVar14;
      auVar13._12_4_ = fVar14;
      auVar6 = vhaddps_avx(auVar6,auVar6);
      auVar6 = vcmpps_avx(auVar13,auVar6,5);
      return (((SUB161(auVar6 >> 0x1f,0) & 1) != 0 || (SUB161(auVar6 >> 0x3f,0) & 1) != 0) ||
             (SUB161(auVar6 >> 0x5f,0) & 1) != 0) || auVar6[0xf] < '\0';
    }
  }
  return false;
}

