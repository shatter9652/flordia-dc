// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140037650  size: 248 bytes
// Name:    FUN_140037650
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1451f43d0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140037650(undefined8 *param_1,undefined8 param_2,undefined8 param_3,
                  undefined1 (*param_4) [16],undefined1 (*param_5) [16],undefined8 *param_6,
                  undefined8 param_7,undefined8 param_8)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [16];
  undefined1 auStack_38 [16];
  undefined1 auStack_28 [16];
  undefined8 uStack_18;
  undefined8 uStack_10;
  
  uStack_88 = *(undefined8 *)*param_4;
  uStack_80 = *(undefined8 *)(*param_4 + 8);
  auVar1 = *param_4;
  auVar2 = *param_5;
  auStack_78 = vblendps_avx(auVar1,auVar2,1);
  auStack_68 = vblendps_avx(auVar1,auVar2,2);
  auStack_58 = vblendps_avx(auVar1,auVar2,3);
  auStack_48 = vblendps_avx(auVar1,auVar2,4);
  auStack_38 = vblendps_avx(auVar2,auVar1,10);
  auStack_28 = vblendps_avx(auVar1,auVar2,6);
  uStack_18 = *(undefined8 *)*param_5;
  uStack_10 = *(undefined8 *)(*param_5 + 8);
  uStack_a8 = *param_6;
  uStack_a0 = param_6[1];
  uStack_98 = *param_1;
  uStack_90 = param_1[1];
  FUN_1451f43d0(&DAT_1492d7950,&uStack_98,param_2,param_3,&uStack_88,&UNK_146680e40,8,0x24,1,
                &uStack_a8,param_7,param_8);
  return;
}

