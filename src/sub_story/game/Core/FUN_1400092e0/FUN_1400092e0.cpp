// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400092e0  size: 242 bytes
// Name:    FUN_1400092e0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144dbbb30, FUN_144e4ef70, FUN_144e2ac90
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


bool FUN_1400092e0(undefined8 param_1,longlong *param_2,longlong param_3,longlong *param_4,
                  undefined8 param_5,undefined8 param_6,float param_7)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  float fVar4;
  longlong lStack_78;
  longlong *plStack_70;
  undefined8 uStack_68;
  uint uStack_60;
  
  uVar1 = (**(code **)(*param_4 + 0x30))(param_4);
  uStack_60 = FUN_144dbbb30(param_6,param_3,uVar1);
  param_7 = (float)*(uint *)(param_3 + 0x30) * param_7;
  fVar4 = (float)uStack_60;
  if (fVar4 <= param_7) {
    lVar2 = FUN_144e4ef70(*(undefined8 *)(param_3 + 0x28),param_4,param_5);
    if ((longlong *)*param_2 == (longlong *)0x0) {
      lVar3 = 0;
    }
    else {
      lVar3 = *(longlong *)*param_2;
    }
    if (lVar3 != lVar2) {
      uStack_68 = param_6;
      lStack_78 = param_3;
      plStack_70 = param_4;
      FUN_144e2ac90(param_1,lVar2,10,&UNK_14049be40,FUN_14078f630,&lStack_78,param_2);
    }
  }
  return fVar4 <= param_7;
}

