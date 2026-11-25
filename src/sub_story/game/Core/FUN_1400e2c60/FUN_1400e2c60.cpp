// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400e2c60  size: 390 bytes
// Name:    FUN_1400e2c60
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144e23010
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400e2c60(undefined8 param_1,longlong *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 auStack_138 [2];
  undefined8 auStack_128 [2];
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 auStack_108 [2];
  undefined8 auStack_f8 [2];
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  longlong alStack_c8 [21];
  
  iVar1 = (**(code **)(*param_2 + 8))(param_2);
  if (iVar1 == 0) {
    uStack_d8 = *param_3;
    uStack_d0 = param_3[1];
    FUN_144e23010(param_1,param_2);
    return;
  }
  switch(iVar1) {
  case 1:
    func_0x000144df4640(param_1,(int)param_2[1]);
    break;
  case 2:
    FUN_14180dc40(param_1,(int)param_2[1],*(undefined4 *)((longlong)param_2 + 0xc));
    break;
  case 3:
    uStack_e8 = *param_3;
    uStack_e0 = param_3[1];
    FUN_144df4430(param_1,param_2);
    break;
  case 5:
    param_2 = alStack_c8;
    func_0x000144e0acd0(param_2);
    func_0x000140090630(param_2);
    uVar3 = *param_3;
    uVar4 = param_3[1];
    puVar2 = auStack_138;
    goto code_r0x0001400e2d69;
  case 6:
    uVar3 = *param_3;
    uVar4 = param_3[1];
    puVar2 = auStack_128;
code_r0x0001400e2d69:
    *puVar2 = uVar3;
    puVar2[1] = uVar4;
    FUN_140025f40(param_1,param_2);
    break;
  case 8:
    uVar3 = *param_3;
    uVar4 = param_3[1];
    puVar2 = auStack_108;
    goto code_r0x0001400e2db9;
  case 9:
    func_0x000144f13810(alStack_c8);
    FUN_14436f070(alStack_c8,param_2);
    uVar3 = *param_3;
    uVar4 = param_3[1];
    puVar2 = auStack_f8;
    param_2 = alStack_c8;
code_r0x0001400e2db9:
    *puVar2 = uVar3;
    puVar2[1] = uVar4;
    FUN_144e1bd20(param_1,param_2);
    break;
  case 10:
    uStack_118 = *param_3;
    uStack_110 = param_3[1];
    func_0x000140026270(param_1,param_2);
  }
  return;
}

