// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14004b430  size: 317 bytes
// Name:    FUN_14004b430
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14004b570
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14004b430(longlong param_1,undefined8 param_2,float param_3,float param_4,
                  undefined8 param_5)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  float fVar6;
  undefined1 in_ZMM1 [64];
  undefined1 auVar7 [64];
  undefined1 auVar8 [16];
  float fVar10;
  undefined1 auVar9 [64];
  
  fVar10 = _DAT_146159e10;
  uVar2 = *(uint *)(param_1 + 0x54);
  if (((ulonglong)uVar2 != 0) &&
     (param_4 = param_4 + *(float *)(param_1 + 0xd4), *(float *)(param_1 + 0xd4) = param_4,
     fVar10 < param_4)) {
    fVar10 = 0.0;
    if ((param_3 != 0.0) || (NAN(param_3))) {
      auVar7 = ZEXT1664(in_ZMM1._0_16_);
      fVar6 = (float)func_0x00014519bf00(*(undefined4 *)(param_1 + 0x34),
                                         *(undefined4 *)(param_1 + 0x70));
      lVar3 = *(longlong *)(param_1 + 0x58);
      lVar5 = (ulonglong)uVar2 << 3;
      lVar4 = 0;
      do {
        plVar1 = (longlong *)(lVar3 + lVar4);
        lVar4 = lVar4 + 8;
        fVar10 = fVar10 + *(float *)(*plVar1 + 4);
      } while (lVar5 != lVar4);
      auVar8._0_12_ = ZEXT812(0);
      auVar8._12_4_ = 0;
      auVar9 = ZEXT1664(auVar8);
      lVar4 = 0;
      auVar8 = vcmpss_avx(ZEXT416((uint)*(float *)(param_1 + 0x30)),auVar8,0);
      auVar8 = vblendvps_avx(ZEXT416((uint)(*(float *)(param_1 + 0x30) *
                                            fVar6 * (param_3 - auVar7._0_4_) + auVar7._0_4_)),
                             auVar7._0_16_,auVar8);
      auVar7 = ZEXT1664(auVar8);
      fVar10 = _DAT_145fc6ed8 / fVar10;
      do {
        FUN_14004b570(*(longlong *)(lVar3 + lVar4),
                      fVar10 * auVar7._0_4_ * *(float *)(*(longlong *)(lVar3 + lVar4) + 4) *
                               *(float *)(param_1 + 0xd4),param_5);
        plVar1 = (longlong *)(lVar3 + lVar4);
        lVar4 = lVar4 + 8;
        fVar6 = auVar9._0_4_ + *(float *)(*plVar1 + 4);
        auVar9 = ZEXT464((uint)fVar6);
      } while (lVar5 != lVar4);
      if (((fVar6 == 0.0) && (!NAN(fVar6))) && (*(char *)(param_1 + 0xec) == '\x01')) {
        *(undefined1 *)(param_1 + 0xec) = 0;
      }
    }
    *(undefined4 *)(param_1 + 0xd4) = 0;
  }
  return;
}

