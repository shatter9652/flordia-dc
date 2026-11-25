// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400728a0  size: 224 bytes
// Name:    FUN_1400728a0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140072980, FUN_144ed5a70, FUN_1400729e0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Possible PIC construction at 0x00014007292f: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1400728a0(longlong param_1,undefined8 param_2,char param_3)

{
  undefined1 auVar1 [16];
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  float fVar6;
  undefined1 auVar7 [16];
  undefined1 in_ZMM1 [64];
  undefined1 auVar8 [16];
  undefined1 auVar9 [64];
  undefined1 auVar10 [64];
  
  if (param_1 != 0) {
    auVar10 = ZEXT464(_DAT_149e43f40);
    auVar9 = ZEXT1664(in_ZMM1._0_16_);
    lVar3 = func_0x000144f1bf10(*(undefined4 *)(param_1 + 0x9c));
    if ((lVar3 != 0) && (iVar2 = FUN_144ed5a70(param_1,9), iVar2 != -1)) {
      auVar7._0_12_ = ZEXT812(0);
      auVar7._12_4_ = 0;
      auVar1 = vcmpss_avx(auVar9._0_16_,auVar7,1);
      auVar7 = vblendvps_avx(auVar9._0_16_,auVar10._0_16_,auVar1);
      auVar9 = ZEXT1664(auVar7);
      lVar4 = FUN_140072980(auVar1._0_8_,iVar2);
      lVar3 = FUN_1400729e0(lVar3,iVar2);
      if ((lVar4 != 0) || (lVar4 = lVar3, lVar3 != 0)) {
        lVar3 = *(longlong *)(lVar4 + 8);
        if ((*(byte *)(lVar3 + 0x18) & 1) == 0) {
          if (param_3 == '\0') {
            auVar8._0_12_ = ZEXT812(0);
            auVar8._12_4_ = 0;
            auVar1 = vminss_avx(ZEXT416(_DAT_145fc6ed8),ZEXT416(*(uint *)(lVar3 + 8)));
            auVar7 = vcmpss_avx(ZEXT416(*(uint *)(lVar3 + 8)),auVar8,1);
            fVar6 = (float)(~auVar7._0_4_ & auVar1._0_4_);
          }
          else {
            fVar6 = *(float *)(lVar3 + 0xc);
          }
          uVar5 = CONCAT71((int7)((ulonglong)lVar3 >> 8),fVar6 < auVar9._0_4_);
        }
        else {
          uVar5 = 0;
        }
        return uVar5;
      }
    }
  }
  return 0;
}

