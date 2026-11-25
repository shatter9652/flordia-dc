// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400cdaa0  size: 481 bytes
// Name:    FUN_1400cdaa0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_143406a00, FUN_143406530, FUN_143406440, FUN_144f63830
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400cdaa0(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5,undefined4 param_6,int param_7,char param_8)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  if (((*(byte *)(param_5 + 0xc) & 1) == 0) && (*(float *)(param_3 + 0x90) <= 0.0))
  goto LAB_1400cdad2;
  if (param_7 == 1) {
    if ((*(int *)(param_1 + 0x380) == 0) && ((*(byte *)(param_2 + 0x140) & 8) != 0)) {
      FUN_143406a00(param_1,param_2,param_4,param_3,param_5,param_6,0,0);
    }
    FUN_143406530(param_1,param_2,param_4,param_3,param_6);
    uVar2 = 0;
  }
  else {
    if (param_7 != 2) goto LAB_1400cdad2;
    if (param_8 == '\0') {
      FUN_143406a00(param_1,param_2,param_4,param_3,param_5,param_6,1,0);
      FUN_143406530(param_1,param_2,param_4,param_3,param_6);
      goto LAB_1400cdad2;
    }
    if (0.0 < *(float *)(param_2 + 0xec)) {
      FUN_143406440(param_1,param_2,param_3,param_5,param_6);
    }
    FUN_143406530(param_1,param_2,param_4,param_3,param_6);
    uVar2 = 1;
  }
  FUN_143406a00(param_1,param_2,param_4,param_3,param_5,param_6,uVar2,1);
LAB_1400cdad2:
  uStack_58 = *(undefined8 *)(param_3 + 0x40);
  uStack_50 = *(undefined8 *)(param_3 + 0x48);
  uStack_68 = *(undefined8 *)(param_4 + 0xc0);
  uStack_60 = *(undefined8 *)(param_4 + 200);
  FUN_144f63830(&uStack_48,&uStack_68,&uStack_58,*(undefined4 *)(param_2 + 0xec),
                (*(byte *)(param_1 + 0x91) & 4) >> 2);
  *(undefined8 *)(param_3 + 0x40) = uStack_48;
  *(undefined8 *)(param_3 + 0x48) = uStack_40;
  uVar1 = *(undefined8 *)(param_4 + 0xb8);
  *(undefined8 *)(param_3 + 0x30) = *(undefined8 *)(param_4 + 0xb0);
  *(undefined8 *)(param_3 + 0x38) = uVar1;
  return;
}

