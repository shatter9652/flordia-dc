// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14014f760  size: 184 bytes
// Name:    FUN_14014f760
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14014f760(longlong param_1,undefined8 *param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined1 auVar1 [16];
  float fVar2;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  undefined8 unaff_RSI;
  float fVar14;
  undefined1 auVar15 [16];
  float fVar3;
  
  lVar11 = *(longlong *)(param_1 + 0x40);
  if ((ushort)((short)*(undefined4 *)(lVar11 + 0x20) - 1U) < 4) {
    auVar1 = vcvtph2ps_f16c(ZEXT216(*(ushort *)(lVar11 + 0xea)));
    fVar14 = auVar1._0_4_;
    if (fVar14 < 0.0) {
      fVar14 = (float)((uint)fVar14 ^ _DAT_145fc6f10);
    }
    if ((fVar14 < _DAT_14615b74c) && ((*(uint *)(lVar11 + 0x34) & 0x280000) != 0x80000)) {
      puVar13 = (undefined8 *)func_0x000145310cd0(*(undefined8 *)(param_1 + 8));
      uVar4 = puVar13[8];
      uVar5 = puVar13[9];
      uVar6 = puVar13[10];
      uVar7 = puVar13[0xb];
      uVar8 = puVar13[0xb];
      uVar9 = puVar13[0xc];
      uVar10 = puVar13[0xd];
      param_2[2] = puVar13[10];
      param_2[3] = uVar8;
      param_2[4] = uVar9;
      param_2[5] = uVar10;
      *param_2 = uVar4;
      param_2[1] = uVar5;
      param_2[2] = uVar6;
      param_2[3] = uVar7;
      auVar1 = *(undefined1 (*) [16])(puVar13 + 0xe);
      auVar15 = vpunpckhwd_avx(auVar1,auVar1);
      auVar15 = vpsrad_avx(auVar15,0x10);
      auVar15 = vcvtdq2ps_avx(auVar15);
      auVar15 = vshufpd_avx(auVar15,auVar15,3);
      fVar14 = auVar15._4_4_ * _UNK_146159c94;
      fVar2 = auVar15._8_4_ * _UNK_146159c98;
      fVar3 = auVar15._12_4_ * _UNK_146159c9c;
      *(float *)(param_2 + 6) = auVar15._0_4_ * _DAT_146159c90 + auVar1._0_4_;
      *(float *)((longlong)param_2 + 0x34) = fVar14 + auVar1._4_4_;
      *(float *)(param_2 + 7) = fVar2 + auVar1._8_4_;
      *(float *)((longlong)param_2 + 0x3c) = fVar3 + auVar1._12_4_;
      return puVar13;
    }
  }
  lVar11 = func_0x000145310cd0(*(undefined8 *)(param_1 + 8));
  plVar12 = (longlong *)func_0x000144fbe030(*(undefined1 *)(param_1 + 0x7e));
  if (plVar12 == (longlong *)0x0) {
    uVar4 = *(undefined8 *)(lVar11 + 0x40);
    uVar5 = *(undefined8 *)(lVar11 + 0x48);
    uVar6 = *(undefined8 *)(lVar11 + 0x50);
    uVar7 = *(undefined8 *)(lVar11 + 0x58);
    uVar8 = *(undefined8 *)(lVar11 + 0x58);
    uVar9 = *(undefined8 *)(lVar11 + 0x60);
    uVar10 = *(undefined8 *)(lVar11 + 0x68);
    param_2[2] = *(undefined8 *)(lVar11 + 0x50);
    param_2[3] = uVar8;
    param_2[4] = uVar9;
    param_2[5] = uVar10;
    *param_2 = uVar4;
    param_2[1] = uVar5;
    param_2[2] = uVar6;
    param_2[3] = uVar7;
    auVar1 = *(undefined1 (*) [16])(lVar11 + 0x70);
    auVar15 = vpunpckhwd_avx(auVar1,auVar1);
    auVar15 = vpsrad_avx(auVar15,0x10);
    auVar15 = vcvtdq2ps_avx(auVar15);
    auVar15 = vshufpd_avx(auVar15,auVar15,3);
    fVar14 = auVar15._4_4_ * _UNK_146159c94;
    fVar2 = auVar15._8_4_ * _UNK_146159c98;
    fVar3 = auVar15._12_4_ * _UNK_146159c9c;
    *(float *)(param_2 + 6) = auVar15._0_4_ * _DAT_146159c90 + auVar1._0_4_;
    *(float *)((longlong)param_2 + 0x34) = fVar14 + auVar1._4_4_;
    *(float *)(param_2 + 7) = fVar2 + auVar1._8_4_;
    *(float *)((longlong)param_2 + 0x3c) = fVar3 + auVar1._12_4_;
    return (undefined8 *)0x0;
  }
  UNRECOVERED_JUMPTABLE = *(code **)(*plVar12 + 0x40);
  if ((UNRECOVERED_JUMPTABLE != FUN_144fbe050) && (UNRECOVERED_JUMPTABLE != FUN_144fbe050)) {
                    /* WARNING: Could not recover jumptable at 0x000144fbdfe3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar13 = (undefined8 *)(*UNRECOVERED_JUMPTABLE)(plVar12,param_2,lVar11,param_1);
    return puVar13;
  }
  FUN_144fbe070(param_2,lVar11,param_1,param_1,unaff_RSI);
  return param_2;
}

