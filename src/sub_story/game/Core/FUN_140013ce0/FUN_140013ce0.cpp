// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140013ce0  size: 280 bytes
// Name:    FUN_140013ce0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144835f10
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_140013ce0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [64];
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined1 auStack_a8 [16];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [16];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uStack_d8 = *param_1;
  uStack_d0 = param_1[1];
  uStack_e8 = *param_2;
  uStack_e0 = param_2[1];
  auStack_a8._0_12_ = ZEXT812(0);
  auStack_a8._12_4_ = 0;
  uStack_88 = _DAT_147528f30;
  uStack_80 = uRam0000000147528f38;
  uStack_98 = _DAT_147528f10;
  uStack_90 = uRam0000000147528f18;
  uStack_c8 = *param_3;
  uStack_c0 = param_3[1];
  uStack_b8 = _DAT_147528f50;
  uStack_b4 = _DAT_147528f50;
  uStack_b0 = _DAT_147528f50;
  uStack_ac = _DAT_147528f50;
  uStack_68 = _DAT_147528e90;
  uStack_60 = uRam0000000147528e98;
  uStack_58 = uRam0000000147528ea0;
  uStack_50 = uRam0000000147528ea8;
  uStack_48 = _DAT_147528eb0;
  uStack_40 = uRam0000000147528eb8;
  uStack_38 = uRam0000000147528ec0;
  uStack_30 = uRam0000000147528ec8;
  auVar2 = ZEXT1664(auStack_a8);
  FUN_144835f10(auStack_78,0,&uStack_68,&uStack_b8,_DAT_147528f58,param_4,&uStack_c8,&uStack_d8,
                &uStack_e8,auStack_a8,&uStack_98,&uStack_88);
  auVar1 = vcmpps_avx(auVar2._0_16_,auStack_78,5);
  return (((SUB161(auVar1 >> 0x1f,0) & 1) != 0 || (SUB161(auVar1 >> 0x3f,0) & 1) != 0) ||
         (SUB161(auVar1 >> 0x5f,0) & 1) != 0) || auVar1[0xf] < '\0';
}

