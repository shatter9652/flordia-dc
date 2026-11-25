// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14001cc30  size: 155 bytes
// Name:    FUN_14001cc30
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14543ae30
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14001cc30(undefined8 param_1,undefined8 *param_2,undefined4 *param_3,float *param_4)

{
  float fVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [16];
  float fStack_68;
  float fStack_58;
  float fStack_38;
  float fStack_28;
  float fStack_24;
  
  uStack_88 = *param_2;
  uStack_80 = param_2[1];
  FUN_14543ae30(uStack_88,&uStack_88,auStack_78,0);
  auVar4._4_4_ = _DAT_145fc6ed8;
  auVar4._0_4_ = _DAT_145fc6ed8;
  auVar4._8_4_ = _DAT_145fc6ed8;
  auVar4._12_4_ = _DAT_145fc6ed8;
  auVar3._0_12_ = ZEXT812(0);
  auVar3._12_4_ = 0;
  auVar2._0_4_ = fStack_68 / fStack_58;
  auVar2._4_12_ = SUB6012((undefined1  [60])0x0,0);
  auVar3 = vcmpss_avx(ZEXT416((uint)fStack_58),auVar3,4);
  auVar3 = vblendvps_avx(auVar4,auVar2,auVar3);
  *param_3 = auVar3._0_4_;
  if (0.0 <= fStack_38) {
    fStack_28 = fStack_24;
  }
  if ((fStack_28 != 0.0) || (fVar1 = _DAT_145fc6ed8, NAN(fStack_28))) {
    fVar1 = fStack_38 / fStack_28;
  }
  *param_4 = fVar1;
  return;
}

