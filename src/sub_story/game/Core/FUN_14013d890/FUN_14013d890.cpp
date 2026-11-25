// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14013d890  size: 245 bytes
// Name:    FUN_14013d890
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145451d80, FUN_144ffa820, FUN_144ffa510
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_14013d890(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  bool bVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fStack_38;
  float fStack_34;
  undefined8 uStack_30;
  
  cVar1 = FUN_144ffa510();
  if (cVar1 != '\0') {
    return true;
  }
  lVar2 = func_0x00014526f770(*(undefined4 *)(param_1 + 0x9c));
  if ((lVar2 != 0) && (lVar2 = FUN_145451d80(lVar2), lVar2 != 0)) {
    if ((*(byte *)(lVar2 + 0x30) & 8) != 0) {
      return true;
    }
    cVar1 = FUN_144ffa820(*(undefined4 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 0x48));
    if (cVar1 != '\0') {
      auVar4 = *(undefined1 (*) [16])(param_1 + 0x70);
      auVar5 = vpunpckhwd_avx(auVar4,auVar4);
      auVar5 = vpsrad_avx(auVar5,0x10);
      auVar5 = vcvtdq2ps_avx(auVar5);
      auVar5 = vshufpd_avx(auVar5,auVar5,3);
      fVar7 = -(auVar5._0_4_ * _DAT_146159c90) - auVar4._0_4_;
      fVar8 = -(auVar5._4_4_ * _UNK_146159c94) - auVar4._4_4_;
      fVar9 = -(auVar5._8_4_ * _UNK_146159c98) - auVar4._8_4_;
      fVar10 = -(auVar5._12_4_ * _UNK_146159c9c) - auVar4._12_4_;
      func_0x000144ff9ee0(param_2,&fStack_38,0);
      auVar5._0_12_ = ZEXT812(0);
      auVar5._12_4_ = 0;
      auVar4._0_4_ = (fVar7 + fStack_38) * (fVar7 + fStack_38);
      auVar4._4_4_ = (fVar8 + fStack_34) * (fVar8 + fStack_34);
      auVar4._8_4_ = (fVar9 + (float)uStack_30) * (fVar9 + (float)uStack_30);
      auVar4._12_4_ = (fVar10 + uStack_30._4_4_) * (fVar10 + uStack_30._4_4_);
      auVar4 = vblendps_avx(auVar4,auVar5,8);
      auVar4 = vhaddps_avx(auVar4,auVar4);
      auVar4 = vhaddps_avx(auVar4,auVar4);
      fVar7 = _DAT_149e4476c * _DAT_149e4476c;
      auVar6._4_4_ = fVar7;
      auVar6._0_4_ = fVar7;
      auVar6._8_4_ = fVar7;
      auVar6._12_4_ = fVar7;
      auVar4 = vcmpps_avx(auVar4,auVar6,5);
      if ((((SUB161(auVar4 >> 0x1f,0) & 1) == 0 && (SUB161(auVar4 >> 0x3f,0) & 1) == 0) &&
          (SUB161(auVar4 >> 0x5f,0) & 1) == 0) && -1 < auVar4[0xf]) {
        return true;
      }
    }
  }
  uStack_30 = &UNK_145430e7c;
  lVar2 = func_0x000144dd7540(*(undefined4 *)(param_1 + 0x9c));
  if (lVar2 == 0) {
    bVar3 = false;
  }
  else {
    bVar3 = (*(uint *)(lVar2 + 0x55c) >> 0x1a & 1) != 0;
  }
  return bVar3;
}

