// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400cd610  size: 917 bytes
// Name:    FUN_1400cd610
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1400cdf90, FUN_1400cdaa0, FUN_1400cdc90, FUN_1400d1530, FUN_1400cd9b0, FUN_1400d5be0, FUN_14069e2c0, FUN_1400d43e0, FUN_144e40a00
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400cd610(longlong param_1,longlong *param_2,longlong param_3,longlong param_4,
                  longlong param_5,undefined4 param_6,char param_7)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  longlong lVar14;
  ulonglong uVar15;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  undefined1 auStack_c8 [16];
  float fStack_b8;
  float fStack_b4;
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
  
  if (param_7 != '\0') {
    if (*(longlong *)(param_3 + 8) == 0) {
      (**(code **)(*param_2 + 0x30))(param_2,auStack_c8,0);
      FUN_14069e2c0(auStack_c8,&fStack_d8);
      fVar5 = fStack_d8;
      fVar6 = fStack_d8;
      fVar7 = fStack_d8;
      fVar8 = fStack_d4;
      fVar9 = fStack_d4;
      fVar10 = fStack_d4;
      fVar11 = fStack_d0;
      fVar12 = fStack_d0;
      fVar13 = fStack_d0;
      (**(code **)(*param_2 + 0x88))(param_2,&fStack_b8);
      fStack_e8 = fStack_d0 * fStack_98 + fStack_d4 * fStack_a8 + fStack_d8 * fStack_b8;
      fStack_e4 = fVar11 * fStack_94 + fVar8 * fStack_a4 + fVar5 * fStack_b4;
      fStack_e0 = fVar12 * fStack_90 + fVar9 * fStack_a0 + fVar6 * fStack_b0;
      fStack_dc = fVar13 * fStack_8c + fVar10 * fStack_9c + fVar7 * fStack_ac;
    }
    else {
      FUN_144e40a00(*(longlong *)(param_3 + 8),&fStack_e8);
    }
    *(ulonglong *)(param_3 + 0x110) = CONCAT44(fStack_e4,fStack_e8);
    *(ulonglong *)(param_3 + 0x118) = CONCAT44(fStack_dc,fStack_e0);
  }
  FUN_1400d5be0(param_1,param_2,param_3);
  FUN_1400cd9b0(param_1,param_2,param_3,param_6,param_7);
  FUN_1400d43e0(param_1,param_2,param_3,*(undefined8 *)(param_1 + 0x188),param_4,param_1 + 0xac,
                param_6,0);
  FUN_1400d1530(param_1,param_2,param_3,*(undefined8 *)(param_1 + 0x198),param_5,param_1 + 0xbc,
                param_6,0);
  lVar1 = param_4 + 0x120;
  FUN_1400d43e0(param_1,param_2,param_3,*(longlong *)(param_1 + 0x188) + 0x1b0,lVar1,param_1 + 0xb4,
                param_6,1);
  lVar2 = param_1 + 0xcc;
  lVar14 = lVar2;
  FUN_1400d1530(param_1,param_2,param_3,*(longlong *)(param_1 + 0x198) + 0xb0,param_5 + 0xd0,lVar2,
                param_6,1);
  lVar3 = *(longlong *)(param_1 + 0x188);
  cVar4 = FUN_1400cdc90(param_1,param_3,param_4,0);
  *(byte *)(lVar3 + 0x1a4) = *(byte *)(lVar3 + 0x1a4) & 0xbf | cVar4 << 6;
  lVar3 = *(longlong *)(param_1 + 0x188);
  cVar4 = FUN_1400cdc90(param_1,param_3,lVar1,1);
  *(byte *)(lVar3 + 0x354) = *(byte *)(lVar3 + 0x354) & 0xbf | cVar4 << 6;
  uVar15 = CONCAT71((int7)((ulonglong)lVar14 >> 8),*(undefined1 *)(param_1 + 0xb0));
  FUN_1400cdf90(param_1,param_2,param_3,*(undefined8 *)(param_1 + 0x188),param_4,uVar15,0,param_6,
                param_7);
  FUN_1400cdaa0(param_1,param_3,*(undefined8 *)(param_1 + 0x198),param_5,param_1 + 0xbc,
                uVar15 & 0xffffffff00000000,param_6,param_7);
  FUN_1400cdf90(param_1,param_2,param_3,*(longlong *)(param_1 + 0x188) + 0x1b0,lVar1,
                *(undefined1 *)(param_1 + 0xb8),1,param_6,param_7);
  FUN_1400cdaa0(param_1,param_3,*(longlong *)(param_1 + 0x198) + 0xb0,param_5 + 0xd0,lVar2,1,param_6
                ,param_7);
  return;
}

