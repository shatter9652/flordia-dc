// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140117880  size: 286 bytes
// Name:    FUN_140117880
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1401179a0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140117880(longlong param_1,undefined8 param_2,double *param_3,longlong param_4,
                  longlong param_5)

{
  longlong lVar1;
  double dVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  double dVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 in_ZMM1 [64];
  double dVar8;
  undefined1 auVar9 [64];
  double dVar10;
  
  if ((param_3 == (double *)0x0) || (param_4 == 0)) {
    *(undefined8 *)(param_1 + 0x50) = 0;
    *(undefined8 *)(param_1 + 0x58) = 0;
  }
  else {
    dVar10 = *param_3;
    auVar9 = ZEXT1664(in_ZMM1._0_16_);
    dVar2 = (double)FUN_1401179a0(param_4);
    if ((*(longlong *)(param_4 + 0x2f0) == 0) ||
       (*(int *)(*(longlong *)(param_4 + 0x2f0) + 8) != *(int *)(param_1 + 0x38))) {
      dVar8 = 0.0;
      lVar1 = 0x58;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = dVar2 - dVar10;
      auVar7 = vminsd_avx(auVar9._0_16_,auVar6);
      dVar5 = auVar7._0_8_ + *(double *)(param_1 + 0x50);
      *(double *)(param_1 + 0x50) = dVar5;
    }
    else {
      lVar1 = 0x50;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = dVar2 - dVar10;
      auVar7 = vminsd_avx(auVar9._0_16_,auVar7);
      dVar8 = auVar7._0_8_ + *(double *)(param_1 + 0x58);
      dVar5 = 0.0;
      *(double *)(param_1 + 0x58) = dVar8;
    }
    *(undefined8 *)(param_1 + lVar1) = 0;
    if ((param_5 != 0) && (dVar10 = dVar10 + auVar9._0_8_, dVar2 < dVar10)) {
      if ((*(longlong *)(param_5 + 0x2f0) == 0) ||
         (*(int *)(*(longlong *)(param_5 + 0x2f0) + 8) != *(int *)(param_1 + 0x38))) {
        auVar3._8_8_ = 0;
        auVar3._0_8_ = dVar10 - *(double *)(param_5 + 0x80);
        auVar7 = vmaxsd_avx(ZEXT816(0),auVar3);
        *(double *)(param_1 + 0x50) = auVar7._0_8_ + dVar5;
        *(undefined8 *)(param_1 + 0x58) = 0;
      }
      else {
        auVar4._8_8_ = 0;
        auVar4._0_8_ = dVar10 - *(double *)(param_5 + 0x80);
        auVar7 = vmaxsd_avx(ZEXT816(0),auVar4);
        *(double *)(param_1 + 0x58) = auVar7._0_8_ + dVar8;
        *(undefined8 *)(param_1 + 0x50) = 0;
      }
    }
  }
  return;
}

