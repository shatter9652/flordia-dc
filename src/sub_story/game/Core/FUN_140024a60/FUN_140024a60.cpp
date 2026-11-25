// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140024a60  size: 299 bytes
// Name:    FUN_140024a60
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144df4930
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140024a60(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  uint uVar1;
  uint uVar2;
  longlong *plVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 auStack_e8 [32];
  undefined1 auStack_c8 [16];
  undefined1 auStack_b8 [8];
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  
  FUN_144df4930(param_2,*param_1);
  plVar3 = (longlong *)(**(code **)(*(longlong *)*param_1 + 200))();
  if ((int)plVar3[5] == 0xd) {
    plVar3 = (longlong *)plVar3[8];
  }
  func_0x000144f13810(auStack_c8);
  auStack_b8._4_4_ = _DAT_14615af04;
  auStack_b8._0_4_ = _DAT_14615af04;
  fStack_b0 = (float)_DAT_14615af04;
  fStack_ac = (float)_DAT_14615af04;
  (**(code **)(*plVar3 + 0xa0))(plVar3,auStack_e8,auStack_c8);
  uVar2 = _DAT_145fc6f4c;
  fVar4 = (float)(_DAT_145fc6f4c & *(uint *)((longlong)param_1 + 0x24));
  fVar5 = (float)(_DAT_145fc6f4c & *(uint *)(param_1 + 5));
  fVar6 = (float)(_DAT_145fc6f4c & *(uint *)((longlong)param_1 + 0x2c));
  *(float *)(param_3 + 0x10) =
       ((float)(_DAT_145fc6f4c & *(uint *)(param_1 + 4)) +
       (float)(_DAT_145fc6f4c & *(uint *)(param_1 + 4))) * (float)auStack_b8._0_4_;
  *(float *)(param_3 + 0x14) = (fVar4 + fVar4) * (float)auStack_b8._4_4_;
  *(float *)(param_3 + 0x18) = (fVar5 + fVar5) * fStack_b0;
  *(float *)(param_3 + 0x1c) = (fVar6 + fVar6) * fStack_ac;
  uVar1 = *(uint *)(param_1 + 7);
  fVar4 = (float)(uVar2 & *(uint *)((longlong)param_1 + 0x34));
  fVar5 = (float)(uVar2 & *(uint *)((longlong)param_1 + 0x3c));
  *(float *)(param_3 + 0x20) =
       ((float)(uVar2 & *(uint *)(param_1 + 6)) + (float)(uVar2 & *(uint *)(param_1 + 6))) *
       fStack_a8;
  *(float *)(param_3 + 0x24) = (fVar4 + fVar4) * fStack_a4;
  *(float *)(param_3 + 0x28) = ((float)(uVar2 & uVar1) + (float)(uVar2 & uVar1)) * fStack_a0;
  *(float *)(param_3 + 0x2c) = (fVar5 + fVar5) * fStack_9c;
  uVar1 = *(uint *)(param_1 + 9);
  fVar4 = (float)(uVar2 & *(uint *)((longlong)param_1 + 0x44));
  fVar5 = (float)(uVar2 & *(uint *)((longlong)param_1 + 0x4c));
  *(float *)(param_3 + 0x30) =
       ((float)(uVar2 & *(uint *)(param_1 + 8)) + (float)(uVar2 & *(uint *)(param_1 + 8))) *
       fStack_98;
  *(float *)(param_3 + 0x34) = (fVar4 + fVar4) * fStack_94;
  *(float *)(param_3 + 0x38) = ((float)(uVar2 & uVar1) + (float)(uVar2 & uVar1)) * fStack_90;
  *(float *)(param_3 + 0x3c) = (fVar5 + fVar5) * fStack_8c;
  uVar1 = *(uint *)(param_1 + 0xb);
  fVar4 = (float)(uVar2 & *(uint *)((longlong)param_1 + 0x54));
  fVar5 = (float)(uVar2 & *(uint *)((longlong)param_1 + 0x5c));
  *(float *)(param_3 + 0x40) =
       ((float)(uVar2 & *(uint *)(param_1 + 10)) + (float)(uVar2 & *(uint *)(param_1 + 10))) *
       fStack_88;
  *(float *)(param_3 + 0x44) = (fVar4 + fVar4) * fStack_84;
  *(float *)(param_3 + 0x48) = ((float)(uVar2 & uVar1) + (float)(uVar2 & uVar1)) * fStack_80;
  *(float *)(param_3 + 0x4c) = (fVar5 + fVar5) * fStack_7c;
  uVar1 = *(uint *)(param_1 + 0xd);
  fVar4 = (float)(uVar2 & *(uint *)((longlong)param_1 + 100));
  fVar5 = (float)(uVar2 & *(uint *)((longlong)param_1 + 0x6c));
  *(float *)(param_3 + 0x50) =
       ((float)(uVar2 & *(uint *)(param_1 + 0xc)) + (float)(uVar2 & *(uint *)(param_1 + 0xc))) *
       fStack_78;
  *(float *)(param_3 + 0x54) = (fVar4 + fVar4) * fStack_74;
  *(float *)(param_3 + 0x58) = ((float)(uVar2 & uVar1) + (float)(uVar2 & uVar1)) * fStack_70;
  *(float *)(param_3 + 0x5c) = (fVar5 + fVar5) * fStack_6c;
  uVar1 = *(uint *)(param_1 + 0xf);
  fVar4 = (float)(uVar2 & *(uint *)((longlong)param_1 + 0x74));
  fVar5 = (float)(uVar2 & *(uint *)((longlong)param_1 + 0x7c));
  *(float *)(param_3 + 0x60) =
       ((float)(uVar2 & *(uint *)(param_1 + 0xe)) + (float)(uVar2 & *(uint *)(param_1 + 0xe))) *
       fStack_68;
  *(float *)(param_3 + 100) = (fVar4 + fVar4) * fStack_64;
  *(float *)(param_3 + 0x68) = ((float)(uVar2 & uVar1) + (float)(uVar2 & uVar1)) * fStack_60;
  *(float *)(param_3 + 0x6c) = (fVar5 + fVar5) * fStack_5c;
  uVar1 = *(uint *)(param_1 + 0x11);
  fVar4 = (float)(uVar2 & *(uint *)((longlong)param_1 + 0x84));
  fVar5 = (float)(uVar2 & *(uint *)((longlong)param_1 + 0x8c));
  *(float *)(param_3 + 0x70) =
       ((float)(uVar2 & *(uint *)(param_1 + 0x10)) + (float)(uVar2 & *(uint *)(param_1 + 0x10))) *
       fStack_58;
  *(float *)(param_3 + 0x74) = (fVar4 + fVar4) * fStack_54;
  *(float *)(param_3 + 0x78) = ((float)(uVar2 & uVar1) + (float)(uVar2 & uVar1)) * fStack_50;
  *(float *)(param_3 + 0x7c) = (fVar5 + fVar5) * fStack_4c;
  uVar1 = *(uint *)(param_1 + 0x13);
  fVar4 = (float)(uVar2 & *(uint *)((longlong)param_1 + 0x94));
  fVar5 = (float)(uVar2 & *(uint *)((longlong)param_1 + 0x9c));
  *(float *)(param_3 + 0x80) =
       ((float)(uVar2 & *(uint *)(param_1 + 0x12)) + (float)(uVar2 & *(uint *)(param_1 + 0x12))) *
       fStack_48;
  *(float *)(param_3 + 0x84) = (fVar4 + fVar4) * fStack_44;
  *(float *)(param_3 + 0x88) = ((float)(uVar2 & uVar1) + (float)(uVar2 & uVar1)) * fStack_40;
  *(float *)(param_3 + 0x8c) = (fVar5 + fVar5) * fStack_3c;
  return;
}

