// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14002c3a0  size: 329 bytes
// Name:    FUN_14002c3a0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14001ebc0, FUN_144db6f00, FUN_14001e960
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14002c3a0(longlong param_1,undefined8 *param_2,longlong *param_3,undefined4 param_4)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  float fVar4;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined1 auStack_d8 [48];
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 auStack_88 [2];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 auStack_68 [7];
  
  uVar2 = (**(code **)(*param_3 + 0x28))(param_3);
  (**(code **)(*param_3 + 0x18))(param_3,auStack_d8,&uStack_e8);
  cVar1 = *(char *)(*(longlong *)(param_1 + 0x88) + 0x1be);
  if (cVar1 == '\0') {
    fVar4 = *(float *)(*(longlong *)(param_1 + 0x88) + 0x178);
    if ((fVar4 == 0.0) && (!NAN(fVar4))) {
      return;
    }
    puVar3 = auStack_68;
  }
  else {
    if (cVar1 != '\x01') {
      return;
    }
    FUN_144db6f00(*(undefined8 *)(param_1 + 0x10),&uStack_78,uVar2);
    uStack_98 = *param_2;
    uStack_90 = param_2[1];
    uStack_a8 = uStack_78;
    uStack_a0 = uStack_70;
    fVar4 = (float)FUN_14001e960();
    if ((fVar4 == 0.0) && (!NAN(fVar4))) {
      return;
    }
    puVar3 = auStack_88;
  }
  *puVar3 = uStack_e8;
  puVar3[1] = uStack_e0;
  FUN_14001ebc0(*(undefined8 *)(param_1 + 0x10),param_3,param_4,puVar3,fVar4);
  return;
}

