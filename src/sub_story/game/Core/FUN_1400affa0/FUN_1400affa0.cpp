// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400affa0  size: 171 bytes
// Name:    FUN_1400affa0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1402b2a60
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined1 (*) [32]
FUN_1400affa0(undefined1 (*param_1) [32],longlong param_2,uint param_3,undefined1 (*param_4) [16],
             undefined1 (*param_5) [16],undefined1 param_6)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  byte bVar3;
  uint uVar4;
  undefined4 uVar5;
  longlong *plVar6;
  undefined1 auVar7 [16];
  uint uVar8;
  
  *(undefined1 (*) [32])(*param_1 + 0x14) = ZEXT1232(ZEXT812(0));
  *param_1 = ZEXT1232(ZEXT812(0));
  *(undefined4 *)(param_1[1] + 0x14) = 0xffffffff;
  param_1[1][0x18] = 0;
  param_1[1][0x19] = param_6;
  auVar2 = *param_5;
  bVar3 = *(byte *)(param_2 + 0x30);
  plVar6 = *(longlong **)((ulonglong)bVar3 * 8 + 0x14abbe7c0);
  auVar7 = vinsertps_avx(*param_4,ZEXT416(param_3),0x30);
  uVar8 = (uint)((ulonglong)(param_2 - *plVar6) / (ulonglong)*(uint *)(plVar6 + 1)) & 0x1ffff;
  uVar4 = *(uint *)(plVar6[5] + (ulonglong)uVar8 * 4);
  param_1[1][0x18] = 1;
  *(undefined1 (*) [16])param_1[2] = auVar7;
  uVar1 = vmovlps_avx(auVar2);
  *(undefined8 *)(param_1[2] + 0x10) = uVar1;
  uVar5 = vextractps_avx(auVar2,2);
  *(undefined4 *)(param_1[2] + 0x18) = uVar5;
  *(uint *)(param_1[2] + 0x1c) = (bVar3 & 0x1f) << 0x11 | uVar8 | (uVar4 & 0x7fe0000) << 5;
  FUN_1402b2a60(param_1,0);
  return param_1;
}

