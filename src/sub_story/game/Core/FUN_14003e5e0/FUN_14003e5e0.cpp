// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14003e5e0  size: 447 bytes
// Name:    FUN_14003e5e0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144fa6750, FUN_144fa6290
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_14003e5e0(undefined8 param_1,uint param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  float fVar8;
  float fVar9;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined1 auStack_118 [8];
  float fStack_110;
  undefined1 auStack_108 [16];
  undefined1 auStack_f8 [32];
  undefined8 uStack_d8;
  undefined1 auStack_c8 [16];
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined2 uStack_94;
  undefined1 uStack_92;
  undefined8 uStack_90;
  longlong lStack_88;
  undefined1 auStack_78 [32];
  undefined1 uStack_58;
  
  fVar8 = 0.0;
  uVar6 = param_2 & 0x1ffff;
  fVar9 = 0.0;
  if ((uVar6 != 0x1ffff) &&
     (plVar3 = *(longlong **)((ulonglong)(param_2 >> 0x11 & 0x1f) * 8 + 0x14abbe7c0), fVar9 = fVar8,
     plVar3 != (longlong *)0x0)) {
    uVar2 = *(uint *)(plVar3[5] + (ulonglong)uVar6 * 4);
    if (((uVar2 >> 0x11 & 0x3ff) == param_2 >> 0x16) &&
       (((uVar2 & *(uint *)(plVar3 + 6)) == *(uint *)(plVar3 + 6) && (lVar4 = *plVar3, lVar4 != 0)))
       ) {
      uVar7 = (ulonglong)(uVar6 * (int)plVar3[1]);
      puVar1 = (undefined8 *)(lVar4 + 0x70 + uVar7);
      uStack_128 = *puVar1;
      uStack_120 = puVar1[1];
      lVar5 = 0;
      if ((0x1cU >> (*(uint *)(lVar4 + 0x30 + uVar7) & 0x1f) & 1) != 0) {
        lVar5 = lVar4 + uVar7;
      }
      func_0x000144dc3790(&uStack_128,auStack_108);
      auStack_c8 = ZEXT416(_DAT_145fc6ed8);
      uStack_b8 = vmovlps_avx(auStack_c8);
      uStack_b0 = _DAT_14617a440;
      uStack_a8 = _UNK_14617a448;
      uStack_a0 = 0x3e0000003f800000;
      uStack_98 = 0;
      uStack_94 = 0x100;
      uStack_92 = 1;
      auStack_f8 = ZEXT832(0) << 0x20;
      uStack_58 = 0;
      uStack_d8 = 0x900000000;
      uStack_90 = param_1;
      lStack_88 = lVar5;
      auStack_78 = auStack_f8;
      FUN_144fa6750(auStack_f8,1000,param_1,auStack_108,0x3e800000,0x40f00000,ZEXT816(0) << 0x20);
      fVar9 = (float)FUN_144fa6290(auStack_f8);
      puVar1 = (undefined8 *)(lVar4 + 0x70 + uVar7);
      uStack_138 = *puVar1;
      uStack_130 = puVar1[1];
      func_0x000144dc3790(&uStack_138,auStack_118);
      fVar9 = fStack_110 * _DAT_146159cc0 + fVar9;
    }
  }
  return fVar9;
}

