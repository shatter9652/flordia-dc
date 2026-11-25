// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140072810  size: 97 bytes
// Name:    FUN_140072810
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1400728a0, FUN_144e587b0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_140072810(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined1 auVar8 [16];
  undefined8 unaff_XMM6_Qa;
  undefined8 unaff_XMM6_Qb;
  undefined1 auVar9 [64];
  undefined8 unaff_XMM7_Qa;
  undefined8 unaff_XMM7_Qb;
  undefined1 auVar10 [64];
  
  lVar5 = FUN_144e587b0(param_2,*(undefined4 *)(param_1 + 0x10));
  if (lVar5 == 0) {
    return 0;
  }
  cVar1 = func_0x000140072880(lVar5);
  if (cVar1 == '\0') {
    uVar7 = CONCAT71((int7)((ulonglong)param_3 >> 8),*(undefined1 *)(param_1 + 0x18));
    if (*(char *)(param_1 + 0x19) != '\x01') {
      bVar2 = FUN_1400728a0(lVar5);
      return bVar2 ^ 1;
    }
    if (lVar5 != 0) {
      auVar10 = ZEXT464(_DAT_149e43f40);
      auVar9 = ZEXT464(*(uint *)(param_1 + 0x14));
      lVar6 = func_0x000144f1bf10(*(undefined4 *)(lVar5 + 0x9c));
      if ((lVar6 != 0) && (iVar4 = FUN_144ed5a70(lVar5,9), iVar4 != -1)) {
        lVar5 = FUN_140072980(lVar6,iVar4);
        lVar6 = FUN_1400729e0(lVar6,iVar4);
        if (lVar6 != 0 && lVar5 != 0) {
          auVar8._0_12_ = ZEXT812(0);
          auVar8._12_4_ = 0;
          auVar8 = vcmpss_avx(auVar9._0_16_,auVar8,1);
          auVar8 = vblendvps_avx(auVar9._0_16_,auVar10._0_16_,auVar8);
          auVar9 = ZEXT1664(auVar8);
          bVar2 = func_0x000140072a40(lVar5,auVar8._0_8_,uVar7 & 0xffffffff,param_4,unaff_XMM6_Qa,
                                      unaff_XMM6_Qb,unaff_XMM7_Qa,unaff_XMM7_Qb);
          bVar3 = func_0x000140072a40(lVar6,auVar9._0_8_,uVar7 & 0xffffffff);
          return bVar3 ^ bVar2;
        }
      }
    }
    return 0;
  }
  return 1;
}

