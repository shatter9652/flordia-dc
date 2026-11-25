// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14010c9a0  size: 754 bytes
// Name:    FUN_14010c9a0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144fb2eb0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14010c9a0(longlong param_1,undefined1 (*param_2) [16])

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 aauStack_48 [2] [16];
  undefined1 auVar16 [64];
  
  *(undefined4 *)param_2[8] = 0;
  if (((*(byte *)(param_1 + 0x7e) & 4) != 0) && ((*(byte *)(param_1 + 0x80) & 0x10) == 0)) {
    FUN_144fb2eb0(param_1,aauStack_48,0);
    uVar3 = _DAT_145fc6f10;
    auVar12._0_12_ = ZEXT812(0);
    auVar12._12_4_ = 0;
    auVar16 = ZEXT1664(auVar12);
    auVar12 = vcmpps_avx(aauStack_48[0],auVar12,4);
    bVar2 = (((SUB161(auVar12 >> 0x1f,0) & 1) != 0 || (SUB161(auVar12 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar12 >> 0x5f,0) & 1) != 0) || auVar12[0xf] < '\0';
    if (bVar2) {
      *(undefined4 *)param_2[8] = 1;
      auVar5._0_4_ = aauStack_48[0]._0_4_ ^ uVar3;
      auVar5._4_4_ = aauStack_48[0]._4_4_ ^ uVar3;
      auVar5._8_4_ = aauStack_48[0]._8_4_ ^ uVar3;
      auVar5._12_4_ = aauStack_48[0]._12_4_ ^ uVar3;
      *param_2 = auVar5;
    }
    uVar4 = (uint)bVar2;
    FUN_144fb2eb0(param_1,aauStack_48,1);
    uVar3 = _DAT_145fc6f10;
    auVar12 = vcmpps_avx(aauStack_48[0],auVar16._0_16_,4);
    if ((((SUB161(auVar12 >> 0x1f,0) & 1) != 0 || (SUB161(auVar12 >> 0x3f,0) & 1) != 0) ||
        (SUB161(auVar12 >> 0x5f,0) & 1) != 0) || auVar12[0xf] < '\0') {
      uVar4 = uVar4 + 1;
      *(uint *)param_2[8] = uVar4;
      auVar6._0_4_ = aauStack_48[0]._0_4_ ^ uVar3;
      auVar6._4_4_ = aauStack_48[0]._4_4_ ^ uVar3;
      auVar6._8_4_ = aauStack_48[0]._8_4_ ^ uVar3;
      auVar6._12_4_ = aauStack_48[0]._12_4_ ^ uVar3;
      param_2[bVar2] = auVar6;
    }
    FUN_144fb2eb0(param_1,aauStack_48,2);
    uVar3 = _DAT_145fc6f10;
    auVar13._0_12_ = ZEXT812(0);
    auVar13._12_4_ = 0;
    auVar16 = ZEXT1664(auVar13);
    auVar12 = vcmpps_avx(aauStack_48[0],auVar13,4);
    if ((((SUB161(auVar12 >> 0x1f,0) & 1) != 0 || (SUB161(auVar12 >> 0x3f,0) & 1) != 0) ||
        (SUB161(auVar12 >> 0x5f,0) & 1) != 0) || auVar12[0xf] < '\0') {
      *(uint *)param_2[8] = uVar4 + 1;
      auVar7._0_4_ = aauStack_48[0]._0_4_ ^ uVar3;
      auVar7._4_4_ = aauStack_48[0]._4_4_ ^ uVar3;
      auVar7._8_4_ = aauStack_48[0]._8_4_ ^ uVar3;
      auVar7._12_4_ = aauStack_48[0]._12_4_ ^ uVar3;
      *(undefined1 (*) [16])(*param_2 + (uVar4 << 4)) = auVar7;
    }
    FUN_144fb2eb0(param_1,aauStack_48,3);
    uVar3 = _DAT_145fc6f10;
    auVar12 = vcmpps_avx(aauStack_48[0],auVar16._0_16_,4);
    if ((((SUB161(auVar12 >> 0x1f,0) & 1) != 0 || (SUB161(auVar12 >> 0x3f,0) & 1) != 0) ||
        (SUB161(auVar12 >> 0x5f,0) & 1) != 0) || auVar12[0xf] < '\0') {
      iVar1 = *(int *)param_2[8];
      *(int *)param_2[8] = iVar1 + 1;
      auVar8._0_4_ = aauStack_48[0]._0_4_ ^ uVar3;
      auVar8._4_4_ = aauStack_48[0]._4_4_ ^ uVar3;
      auVar8._8_4_ = aauStack_48[0]._8_4_ ^ uVar3;
      auVar8._12_4_ = aauStack_48[0]._12_4_ ^ uVar3;
      param_2[iVar1] = auVar8;
    }
    FUN_144fb2eb0(param_1,aauStack_48,4);
    uVar3 = _DAT_145fc6f10;
    auVar14._0_12_ = ZEXT812(0);
    auVar14._12_4_ = 0;
    auVar16 = ZEXT1664(auVar14);
    auVar12 = vcmpps_avx(aauStack_48[0],auVar14,4);
    if ((((SUB161(auVar12 >> 0x1f,0) & 1) != 0 || (SUB161(auVar12 >> 0x3f,0) & 1) != 0) ||
        (SUB161(auVar12 >> 0x5f,0) & 1) != 0) || auVar12[0xf] < '\0') {
      iVar1 = *(int *)param_2[8];
      *(int *)param_2[8] = iVar1 + 1;
      auVar9._0_4_ = aauStack_48[0]._0_4_ ^ uVar3;
      auVar9._4_4_ = aauStack_48[0]._4_4_ ^ uVar3;
      auVar9._8_4_ = aauStack_48[0]._8_4_ ^ uVar3;
      auVar9._12_4_ = aauStack_48[0]._12_4_ ^ uVar3;
      param_2[iVar1] = auVar9;
    }
    FUN_144fb2eb0(param_1,aauStack_48,5);
    uVar3 = _DAT_145fc6f10;
    auVar12 = vcmpps_avx(aauStack_48[0],auVar16._0_16_,4);
    if ((((SUB161(auVar12 >> 0x1f,0) & 1) != 0 || (SUB161(auVar12 >> 0x3f,0) & 1) != 0) ||
        (SUB161(auVar12 >> 0x5f,0) & 1) != 0) || auVar12[0xf] < '\0') {
      iVar1 = *(int *)param_2[8];
      *(int *)param_2[8] = iVar1 + 1;
      auVar10._0_4_ = aauStack_48[0]._0_4_ ^ uVar3;
      auVar10._4_4_ = aauStack_48[0]._4_4_ ^ uVar3;
      auVar10._8_4_ = aauStack_48[0]._8_4_ ^ uVar3;
      auVar10._12_4_ = aauStack_48[0]._12_4_ ^ uVar3;
      param_2[iVar1] = auVar10;
    }
    FUN_144fb2eb0(param_1,aauStack_48,6);
    uVar3 = _DAT_145fc6f10;
    auVar15._0_12_ = ZEXT812(0);
    auVar15._12_4_ = 0;
    auVar16 = ZEXT1664(auVar15);
    auVar12 = vcmpps_avx(aauStack_48[0],auVar15,4);
    if ((((SUB161(auVar12 >> 0x1f,0) & 1) != 0 || (SUB161(auVar12 >> 0x3f,0) & 1) != 0) ||
        (SUB161(auVar12 >> 0x5f,0) & 1) != 0) || auVar12[0xf] < '\0') {
      iVar1 = *(int *)param_2[8];
      *(int *)param_2[8] = iVar1 + 1;
      auVar11._0_4_ = aauStack_48[0]._0_4_ ^ uVar3;
      auVar11._4_4_ = aauStack_48[0]._4_4_ ^ uVar3;
      auVar11._8_4_ = aauStack_48[0]._8_4_ ^ uVar3;
      auVar11._12_4_ = aauStack_48[0]._12_4_ ^ uVar3;
      param_2[iVar1] = auVar11;
    }
    FUN_144fb2eb0(param_1,aauStack_48,7);
    uVar3 = _DAT_145fc6f10;
    auVar12 = vcmpps_avx(aauStack_48[0],auVar16._0_16_,4);
    if ((((SUB161(auVar12 >> 0x1f,0) & 1) != 0 || (SUB161(auVar12 >> 0x3f,0) & 1) != 0) ||
        (SUB161(auVar12 >> 0x5f,0) & 1) != 0) || auVar12[0xf] < '\0') {
      iVar1 = *(int *)param_2[8];
      *(int *)param_2[8] = iVar1 + 1;
      param_2 = param_2 + iVar1;
      *(uint *)*param_2 = aauStack_48[0]._0_4_ ^ uVar3;
      *(uint *)(*param_2 + 4) = aauStack_48[0]._4_4_ ^ uVar3;
      *(uint *)(*param_2 + 8) = aauStack_48[0]._8_4_ ^ uVar3;
      *(uint *)(*param_2 + 0xc) = aauStack_48[0]._12_4_ ^ uVar3;
    }
  }
  return;
}

