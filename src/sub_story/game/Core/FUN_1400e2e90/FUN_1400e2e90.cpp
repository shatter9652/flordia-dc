// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400e2e90  size: 259 bytes
// Name:    FUN_1400e2e90
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1400cb830, FUN_144f63830
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400e2e90(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  int aiStack_78 [4];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  lVar1 = *(longlong *)(param_1 + 0x2e8);
  func_0x000144f65360(aiStack_78);
  if (((lVar1 != 0) && (*(int *)(lVar1 + 0x20) == 4)) && (*(short *)(lVar1 + 0x1e) != 0)) {
    FUN_1400cb830(param_1,lVar1,aiStack_78,param_2,0,1,0);
    if (aiStack_78[0] != -1) {
      *(undefined8 *)(param_2 + 0xb0) = uStack_68;
      *(undefined8 *)(param_2 + 0xb8) = uStack_60;
      *(undefined8 *)(param_2 + 0xc0) = uStack_58;
      *(undefined8 *)(param_2 + 200) = uStack_50;
      uStack_98 = *(undefined8 *)(param_1 + 0x200);
      uStack_90 = *(undefined8 *)(param_1 + 0x208);
      uStack_a8 = uStack_58;
      uStack_a0 = uStack_50;
      FUN_144f63830(&uStack_88,&uStack_a8,&uStack_98,*(undefined4 *)(param_2 + 0xec),
                    (*(byte *)(param_1 + 0x91) & 4) >> 2);
      *(undefined8 *)(param_1 + 0x200) = uStack_88;
      *(undefined8 *)(param_1 + 0x208) = uStack_80;
      uVar2 = *(undefined8 *)(param_1 + 0x208);
      *(undefined8 *)(param_2 + 0xc0) = *(undefined8 *)(param_1 + 0x200);
      *(undefined8 *)(param_2 + 200) = uVar2;
    }
  }
  return;
}

