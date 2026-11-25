// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400ca550  size: 513 bytes
// Name:    FUN_1400ca550
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144dd11b0, FUN_144f62e90, FUN_1400cb430, FUN_141924dc0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400ca550(longlong param_1,longlong *param_2)

{
  float fVar1;
  float fVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  undefined1 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined4 uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float fVar13;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auVar14 [16];
  
  lVar8 = *(longlong *)(param_1 + 0x2f8);
  lVar7 = func_0x000144e23bb0(*(undefined4 *)(lVar8 + 0x9c));
  *param_2 = lVar7;
  lVar7 = func_0x000144e63d10(*(undefined4 *)(lVar8 + 0x9c));
  param_2[1] = lVar7;
  lVar7 = func_0x000144d9f7c0(*(undefined4 *)(lVar8 + 0x9c));
  param_2[2] = lVar7;
  lVar7 = func_0x000144fa1860(*(undefined4 *)(lVar8 + 0x9c));
  param_2[3] = lVar7;
  lVar7 = func_0x000144dd7540(*(undefined4 *)(lVar8 + 0x9c));
  param_2[4] = lVar7;
  lVar8 = func_0x000144ef6280(*(undefined4 *)(lVar8 + 0x9c));
  param_2[5] = lVar8;
  lVar8 = FUN_144f62e90(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x38) + 0x98))
  ;
  fVar2 = _DAT_14615a290;
  fVar1 = _DAT_145fc6ed8;
  auVar10._4_4_ = _DAT_14615a290;
  auVar10._0_4_ = _DAT_14615a290;
  auVar10._8_4_ = _DAT_14615a290;
  auVar10._12_4_ = _DAT_14615a290;
  param_2[6] = lVar8;
  auVar10 = vrcpps_avx(auVar10);
  fVar13 = auVar10._0_4_;
  fVar15 = auVar10._4_4_;
  fVar16 = auVar10._8_4_;
  fVar17 = auVar10._12_4_;
  auVar11._0_4_ = ((-(fVar13 * fVar2) + fVar1) * fVar13 + fVar13) * 0.0;
  auVar11._4_4_ = ((-(fVar15 * fVar2) + fVar1) * fVar15 + fVar15) * 0.0;
  auVar11._8_4_ = ((-(fVar16 * fVar2) + fVar1) * fVar16 + fVar16) * 0.0;
  auVar11._12_4_ = ((-(fVar17 * fVar2) + fVar1) * fVar17 + fVar17) * 0.0;
  auVar10 = vroundps_avx(auVar11,3);
  auVar14._0_4_ = auVar10._0_4_ * _DAT_14615ad78;
  auVar14._4_4_ = auVar10._4_4_ * _DAT_14615ad78;
  auVar14._8_4_ = auVar10._8_4_ * _DAT_14615ad78;
  auVar14._12_4_ = auVar10._12_4_ * _DAT_14615ad78;
  auVar12._0_4_ = (int)auVar10._0_4_;
  auVar12._4_4_ = (int)auVar10._4_4_;
  auVar12._8_4_ = (int)auVar10._8_4_;
  auVar12._12_4_ = (int)auVar10._12_4_;
  auVar10 = vpackssdw_avx(auVar12,auVar12);
  auVar10 = vinsertps_avx(auVar14,auVar10,0x34);
  *(undefined1 (*) [16])(param_2 + 0x26) = auVar10;
  *(byte *)(param_2 + 0x28) = *(byte *)(param_2 + 0x28) & 0xf8;
  *(byte *)(param_1 + 0x290) = *(byte *)(param_1 + 0x290) & 0xfe;
  bVar3 = FUN_144dd11b0(*(undefined4 *)(*(longlong *)(param_1 + 0x2f8) + 0x9c));
  bVar3 = *(byte *)((longlong)param_2 + 0xe1) & 0xfe | bVar3;
  *(byte *)((longlong)param_2 + 0xe1) = bVar3;
  lVar8 = *param_2;
  if (lVar8 == 0) {
    bVar3 = bVar3 & 0xf1;
    bVar4 = 0;
  }
  else {
    bVar4 = *(char *)(lVar8 + 0x10) * '\x02' & 2;
    *(byte *)((longlong)param_2 + 0xe1) = bVar3 & 0xfd | bVar4;
    cVar5 = func_0x00014082c480(*(undefined4 *)(lVar8 + 0x10),*(undefined4 *)(lVar8 + 0x210),1);
    bVar3 = bVar3 & 0xf9 | bVar4 | cVar5 << 2;
    *(byte *)((longlong)param_2 + 0xe1) = bVar3;
    cVar5 = func_0x00014088dc30(*(undefined4 *)(lVar8 + 0x10),*(undefined4 *)(lVar8 + 0x210),1);
    bVar3 = bVar3 & 0xf7 | cVar5 << 3;
    *(byte *)((longlong)param_2 + 0xe1) = bVar3;
    cVar5 = func_0x000140458480(*(undefined4 *)(lVar8 + 0x10),*(undefined4 *)(lVar8 + 0x210));
    bVar4 = cVar5 << 4;
  }
  bVar4 = bVar3 & 0xef | bVar4;
  *(byte *)((longlong)param_2 + 0xe1) = bVar4;
  lVar8 = param_2[5];
  if (lVar8 == 0) {
    bVar3 = 0;
  }
  else {
    bVar3 = 0x20;
    if ((*(byte *)(lVar8 + 0x39) & 0x40) == 0) {
      bVar3 = (byte)(*(uint *)(lVar8 + 0xc4) >> 9) & 0x20;
    }
  }
  *(byte *)((longlong)param_2 + 0xe1) = bVar4 & 0x9f | bVar3;
  uVar9 = FUN_1400cb430(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x38) + 0x98))
  ;
  *(undefined4 *)((longlong)param_2 + 0xec) = uVar9;
  lVar8 = param_2[6];
  if (lVar8 == 0) {
    uVar6 = 1;
  }
  else {
    uVar6 = FUN_141924dc0(*(undefined8 *)(lVar8 + 0xa0),*(undefined4 *)(lVar8 + 0x648));
  }
  *(undefined1 *)(param_2 + 0x1c) = uVar6;
  return;
}

