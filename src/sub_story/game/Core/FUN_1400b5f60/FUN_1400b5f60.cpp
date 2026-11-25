// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400b5f60  size: 673 bytes
// Name:    FUN_1400b5f60
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144f43760, FUN_145214ca0, FUN_145290e70, FUN_1400b5d50
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_1400b5f60(longlong *param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  float fVar2;
  byte bVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auVar13 [16];
  undefined1 auVar17 [16];
  undefined4 uStack_34;
  
  FUN_144f43760(param_1,param_2,param_3,6);
  auVar17._4_4_ = _DAT_145fc6f48;
  auVar17._0_4_ = _DAT_145fc6f48;
  auVar17._8_4_ = _DAT_145fc6f48;
  auVar17._12_4_ = _DAT_145fc6f48;
  *param_1 = (longlong)&UNK_14646d6d0;
  *(undefined1 (*) [32])(param_1 + 0x5c) = ZEXT1232(ZEXT812(0));
  *(undefined1 (*) [32])(param_1 + 0x60) = ZEXT1232(ZEXT812(0));
  param_1[100] = 0;
  lVar1 = vmovlps_avx(auVar17);
  param_1[0x65] = lVar1;
  *(undefined4 *)(param_1 + 0x66) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x67) = 0xffffffff;
  bVar3 = *(byte *)((longlong)param_1 + 0x33c);
  *(byte *)((longlong)param_1 + 0x33c) = bVar3 & 0xfe;
  bVar8 = *(char *)(param_2 + 0x94) * '\x02' & 2;
  *(byte *)((longlong)param_1 + 0x33c) = bVar3 & 0xfc | bVar8;
  bVar9 = *(char *)(param_2 + 0x94) * '\x02' & 4;
  *(byte *)((longlong)param_1 + 0x33c) = bVar3 & 0xf8 | bVar8 | bVar9;
  bVar10 = (byte)(*(ushort *)(param_2 + 0x96) >> 5) & 8;
  *(byte *)((longlong)param_1 + 0x33c) = bVar3 & 0xf0 | bVar8 | bVar9 | bVar10;
  bVar3 = bVar8 | bVar9 | bVar10 | ((*(ushort *)(param_2 + 0x96) & 0x70) == 0x20) << 4;
  *(byte *)((longlong)param_1 + 0x33c) = bVar3;
  *(byte *)((longlong)param_1 + 0x33d) = *(byte *)((longlong)param_1 + 0x33d) & 0xc0;
  if (*(char *)(param_2 + 0x30) == '\f') {
    param_1[0x61] = *(longlong *)(*(longlong *)(param_2 + 0x110) + 0x90);
    param_1[0x43] = *(longlong *)(param_2 + 0xe0);
  }
  lVar1 = *(longlong *)(param_2 + 0x20);
  bVar8 = 1;
  bVar3 = *(byte *)(lVar1 + 0x99) & 0x80 | bVar3;
  *(byte *)((longlong)param_1 + 0x33c) = bVar3;
  if ((*(byte *)(lVar1 + 0x84) & 7) != 1) {
    bVar8 = (byte)(*(uint *)(lVar1 + 0x50) >> 0x11) & 1;
  }
  bVar8 = bVar8 | bVar3;
  *(byte *)((longlong)param_1 + 0x33c) = bVar8;
  cVar4 = FUN_145290e70(*(undefined4 *)(*(longlong *)(param_2 + 0x20) + 0x5c));
  if (cVar4 == '\0') {
    bVar3 = 0;
  }
  else {
    bVar3 = ((*(byte *)(param_2 + 0x96) & 0xf) != 0) << 6;
  }
  *(byte *)((longlong)param_1 + 0x33c) = bVar8 | bVar3;
  lVar5 = FUN_1400b5d50(*(undefined8 *)(lVar1 + 0x60));
  if (lVar5 == 0) {
    uVar12 = 0xffffffff;
  }
  else {
    uVar12 = *(undefined4 *)(lVar5 + 0xc);
  }
  *(undefined4 *)(param_1 + 0x67) = uVar12;
  uVar6 = func_0x000144e3bfa0(param_2);
  lVar7 = func_0x000144e8f430(uVar6,_DAT_149096d34);
  bVar3 = 4;
  if (lVar5 == 0 && lVar7 == 0) {
    cVar4 = func_0x000140452090(*(undefined8 *)(lVar1 + 0x60));
    bVar3 = cVar4 << 2;
  }
  fVar2 = _DAT_145fc6f08;
  fVar16 = _DAT_145fc6edc;
  *(byte *)((longlong)param_1 + 0x33d) = *(byte *)((longlong)param_1 + 0x33d) & 0xfb | bVar3;
  auVar17 = vsubps_avx(*(undefined1 (*) [16])(lVar1 + 0x40),*(undefined1 (*) [16])(lVar1 + 0x30));
  fVar11 = auVar17._0_4_ * fVar16;
  fVar14 = auVar17._4_4_ * fVar16;
  fVar15 = auVar17._8_4_ * fVar16;
  fVar16 = auVar17._12_4_ * fVar16;
  auVar13._0_4_ = fVar11 * fVar11;
  auVar13._4_4_ = fVar14 * fVar14;
  auVar13._8_4_ = fVar15 * fVar15;
  auVar13._12_4_ = fVar16 * fVar16;
  auVar13 = vhaddps_avx(auVar13,auVar13);
  auVar17 = vrsqrtss_avx(auVar13,auVar13);
  fVar16 = auVar17._0_4_;
  auVar17 = vcmpss_avx(ZEXT416(_DAT_146159bfc),auVar13,2);
  *(uint *)((longlong)param_1 + 700) =
       auVar17._0_4_ &
       (uint)(((fVar16 * fVar16 * auVar13._0_4_ * fVar2 + _DAT_145fc6edc) * fVar16 + fVar16) *
             auVar13._0_4_);
  FUN_145214ca0(param_1 + 0x44,*(undefined8 *)(param_2 + 0x110),lVar1,param_3,
                (*(byte *)((longlong)param_1 + 0x33c) & 0x40) >> 6,
                (*(uint *)(param_2 + 0xb4) & 0x3e) != 8);
  (**(code **)(*param_1 + 0x58))(param_1,&uStack_34);
  uVar12 = func_0x0001455b0330(uStack_34);
  *(undefined4 *)((longlong)param_1 + 0x334) = uVar12;
  return param_1;
}

