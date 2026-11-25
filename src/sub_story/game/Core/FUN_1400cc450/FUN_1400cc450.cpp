// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400cc450  size: 776 bytes
// Name:    FUN_1400cc450
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144e40a00, FUN_144edcc50, FUN_144f632d0, FUN_1400df4f0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400cc450(longlong param_1,undefined1 (*param_2) [16])

{
  byte bVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined1 (*pauVar4) [16];
  void *pvVar5;
  undefined1 (*pauVar6) [16];
  uint uVar7;
  undefined1 auVar9 [16];
  float fVar8;
  undefined1 auVar10 [16];
  undefined1 extraout_var [56];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [64];
  undefined1 auVar14 [16];
  undefined1 auVar15 [64];
  undefined1 auVar16 [64];
  undefined1 auVar17 [64];
  uint uStack_8c;
  undefined1 auStack_88 [16];
  undefined8 uStack_78;
  undefined8 uStack_70;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  
  pauVar4 = (undefined1 (*) [16])
            CONCAT71((int7)((ulonglong)param_1 >> 8),*(undefined1 *)(param_1 + 0x38c));
  pauVar6 = param_2;
  bVar1 = func_0x0001400cc760();
  *(byte *)(param_1 + 0x38c) = bVar1;
  if ((param_2[0x14][0] & 8) == 0) {
    pauVar4 = (undefined1 (*) [16])0x0;
    if (*(longlong *)param_2[1] == 0) goto LAB_1400cc708;
    pauVar4 = (undefined1 (*) [16])(*(longlong *)param_2[1] + 0x1d70);
    pauVar6 = &auStack_88;
    FUN_144f632d0();
    bVar1 = *(byte *)(param_1 + 0x38c);
  }
  else {
LAB_1400cc708:
    auStack_88._0_8_ = *(undefined8 *)param_2[0xc];
    auStack_88._8_8_ = *(undefined8 *)(param_2[0xc] + 8);
  }
  if (((bVar1 & 1) == 0) || (param_2[0xe][0] != '\x01')) {
    auVar14._8_8_ = auStack_88._8_8_;
    auVar14._0_8_ = auStack_88._0_8_;
  }
  else {
    pauVar4 = (undefined1 (*) [16])(*(longlong *)(*param_2 + 8) + 0x660);
    pauVar6 = &auStack_88;
    if (*(longlong *)(*param_2 + 8) != 0) {
      pauVar6 = pauVar4;
    }
    auVar14 = *pauVar6;
  }
  auVar15 = ZEXT1664(auVar14);
  auVar10._0_4_ = auVar14._0_4_ * auVar14._0_4_;
  auVar10._4_4_ = auVar14._4_4_ * auVar14._4_4_;
  auVar10._8_4_ = auVar14._8_4_ * auVar14._8_4_;
  auVar10._12_4_ = auVar14._12_4_ * auVar14._12_4_;
  auVar10 = vhaddps_avx(auVar10,auVar10);
  auVar14 = vrsqrtss_avx(auVar10,auVar10);
  fVar8 = auVar14._0_4_;
  auVar14 = vcmpss_avx(ZEXT416(_DAT_146159bfc),auVar10,2);
  uVar7 = auVar14._0_4_ &
          (uint)(((fVar8 * fVar8 * auVar10._0_4_ * _DAT_145fc6f08 + _DAT_145fc6edc) * fVar8 + fVar8)
                * auVar10._0_4_);
  atan2f(pauVar4,pauVar6);
  *(uint *)(param_2[0x14] + 8) = uVar7;
  if ((bVar1 & 1) == 0) {
    bVar1 = param_2[0x14][0];
    if (((float)(uVar7 & _DAT_145fc6f4c) <= _DAT_145fc7020) || ((param_2[0xf][0] & 1) != 0))
    goto LAB_1400cc55d;
    param_2[0x14][0] = bVar1 | 0x40;
  }
  else {
    bVar1 = param_2[0x14][0];
LAB_1400cc55d:
    param_2[0x14][0] = bVar1 & 0xbf;
    if (*(char *)(param_1 + 0x38c) != '\x01') goto LAB_1400cc56e;
  }
  if (*(longlong *)param_2[1] != 0) {
    vmovshdup_avx(auVar15._0_16_);
    puVar3 = (undefined8 *)func_0x000144ecfea0();
    uStack_78 = *puVar3;
    uStack_70 = puVar3[1];
    auVar13._0_8_ = FUN_144edcc50(&uStack_78,*(undefined4 *)(puVar3 + 2),1);
    uVar7 = auVar15._0_4_;
    auVar13._8_56_ = extraout_var;
    uStack_8c = (uint)auVar13._0_8_;
    auVar13 = ZEXT1664(auVar13._0_16_);
    pvVar5 = *(void **)(*param_2 + 8);
    if (pvVar5 != (void *)0x0) {
      pauVar6 = (undefined1 (*) [16])&fStack_68;
      FUN_144e40a00();
      uVar7 = auVar15._0_4_;
      auVar9._0_4_ = fStack_68 * fStack_68;
      auVar9._4_4_ = fStack_64 * fStack_64;
      auVar9._8_4_ = fStack_60 * fStack_60;
      auVar9._12_4_ = fStack_5c * fStack_5c;
      auVar14 = vhaddps_avx(auVar9,auVar9);
      if (_DAT_14615af54 < auVar14._0_4_) {
        pauVar6 = (undefined1 (*) [16])&uStack_8c;
        pvVar5 = *(void **)(*(longlong *)param_2[1] + 8);
        FUN_1400df4f0();
        uVar7 = auVar15._0_4_;
        auVar13 = ZEXT464(uStack_8c);
      }
    }
    fVar8 = (float)(uVar7 ^ _DAT_145fc6f10);
    atan2f(pvVar5,pauVar6);
    auVar11._4_4_ = _DAT_146159be0;
    auVar11._0_4_ = _DAT_146159be0;
    auVar11._8_4_ = _DAT_146159be0;
    auVar11._12_4_ = _DAT_146159be0;
    auVar16 = ZEXT464(_DAT_145fc6f80);
    fVar8 = auVar13._0_4_ - fVar8;
    auVar15 = ZEXT464((uint)fVar8);
    auVar12._0_12_ = ZEXT812(0);
    auVar12._12_4_ = 0;
    auVar13 = ZEXT1664(auVar12);
    auVar14 = vcmpss_avx(auVar12,ZEXT416((uint)fVar8),2);
    auVar14 = vblendvps_avx(auVar11,ZEXT416(_DAT_145fc6f80),auVar14);
    auVar17 = ZEXT1664(auVar14);
    fVar8 = (float)func_0x000145f40820(auVar14._0_4_ + fVar8,_DAT_145fc6f84);
    auVar10 = ZEXT416((uint)(fVar8 - auVar17._0_4_));
    auVar14 = vcmpss_avx(auVar10,ZEXT416(_DAT_146159be0),2);
    auVar9 = vcmpss_avx(auVar15._0_16_,auVar16._0_16_,2);
    auVar14 = vblendvps_avx(auVar10,auVar16._0_16_,auVar14);
    auVar10 = vcmpss_avx(auVar13._0_16_,ZEXT416((uint)(auVar16._0_4_ + auVar15._0_4_)),2);
    auVar10 = vblendvps_avx(auVar14,auVar15._0_16_,auVar10);
    auVar14 = vblendvps_avx(auVar14,auVar10,auVar9);
    param_2[0x14][1] =
         param_2[0x14][1] & 0xfe | _DAT_146159bdc < (float)(auVar14._0_4_ & _DAT_145fc6f4c);
  }
LAB_1400cc56e:
  iVar2 = _DAT_14abbd814;
  if ((*(char *)(param_1 + 0x38c) == '\0') && ((param_2[0x14][0] & 0x20) == 0)) {
    if (*(int *)(param_1 + 0x378) < 1) {
      return;
    }
    iVar2 = *(int *)(param_1 + 0x378) - (int)(*(float *)(param_2[0xe] + 0xc) * _DAT_146159c28);
  }
  *(int *)(param_1 + 0x378) = iVar2;
  return;
}

