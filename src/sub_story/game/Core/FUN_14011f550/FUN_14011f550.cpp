// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14011f550  size: 232 bytes
// Name:    FUN_14011f550
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_14011f550(longlong *param_1,float param_2,float param_3)

{
  undefined1 auVar1 [16];
  char cVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [64];
  undefined1 auVar9 [64];
  
  iVar3 = (int)*(char *)(*param_1 + 0x1b);
  if (iVar3 < 0) {
    fVar5 = _DAT_145fc6ed8 / ((float)-iVar3 * _DAT_14615e548 + _DAT_145fc6ed8);
  }
  else {
    fVar5 = (float)iVar3 * _DAT_14615e548 + _DAT_145fc6ed8;
  }
  auVar8 = ZEXT464(_DAT_146159bd4);
  auVar7._4_4_ = _DAT_145fc6edc;
  auVar7._0_4_ = _DAT_145fc6edc;
  auVar7._8_4_ = _DAT_145fc6edc;
  auVar7._12_4_ = _DAT_145fc6edc;
  auVar6._0_4_ = *(float *)(*param_1 + 0x2b4) /
                 *(float *)(&UNK_1461776e0 +
                           (ulonglong)((*(ushort *)(param_1 + 0x38) >> 8 & 1) == 0) * 4);
  auVar6._4_12_ = SUB6012((undefined1  [60])0x0,0);
  auVar1 = vminss_avx(ZEXT416(_DAT_146159bd4),auVar6);
  auVar6 = vcmpss_avx(auVar6,ZEXT416(_DAT_145fc6edc),1);
  auVar6 = vblendvps_avx(auVar1,auVar7,auVar6);
  auVar9 = ZEXT464((uint)((param_3 * param_2) / (auVar6._0_4_ * fVar5)));
  cVar2 = func_0x000144293430();
  auVar6 = auVar8._0_16_;
  if (cVar2 != '\0') {
    auVar6 = ZEXT416(_DAT_146164998);
  }
  auVar6 = vminss_avx(auVar9._0_16_,auVar6);
  iVar4 = (int)auVar6._0_4_;
  *(float *)(param_1 + 2) = auVar6._0_4_;
  iVar3 = 2;
  if ((byte)iVar4 < 2) {
    iVar3 = iVar4;
  }
  return iVar3;
}

