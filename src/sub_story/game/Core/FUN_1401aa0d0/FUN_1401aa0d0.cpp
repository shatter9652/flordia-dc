// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401aa0d0  size: 585 bytes
// Name:    FUN_1401aa0d0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145234a80
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1401aa0d0(longlong param_1,longlong param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined1 (*pauVar8) [16];
  longlong lVar9;
  float fVar10;
  float extraout_XMM0_Da;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float fVar13;
  undefined1 auVar14 [64];
  undefined1 auVar15 [64];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 aauStack_58 [3] [16];
  
  if (param_3 == param_4) {
    return false;
  }
  lVar3 = *(longlong *)(param_2 + (ulonglong)param_3 * 8);
  lVar4 = *(longlong *)(param_2 + (ulonglong)param_4 * 8);
  uVar1 = *(uint *)(lVar3 + 0x20);
  if (uVar1 == 0x1ffff) {
LAB_1401aa2fd:
    lVar6 = 0;
  }
  else {
    uVar2 = *(uint *)(_DAT_14abb6918[5] + (ulonglong)(uVar1 & 0x1ffff) * 4);
    if (((~uVar2 & *(uint *)(_DAT_14abb6918 + 6)) != 0) ||
       ((uVar2 & 0x7fe0000) != (uVar1 & 0xfffe0000))) goto LAB_1401aa2fd;
    lVar6 = (ulonglong)((uVar1 & 0x1ffff) * (int)_DAT_14abb6918[1]) + *_DAT_14abb6918;
  }
  uVar1 = *(uint *)(lVar4 + 0x20);
  if (uVar1 == 0x1ffff) {
LAB_1401aa304:
    lVar9 = 0;
  }
  else {
    uVar2 = *(uint *)(_DAT_14abb6918[5] + (ulonglong)(uVar1 & 0x1ffff) * 4);
    if (((~uVar2 & *(uint *)(_DAT_14abb6918 + 6)) != 0) ||
       ((uVar2 & 0x7fe0000) != (uVar1 & 0xfffe0000))) goto LAB_1401aa304;
    lVar9 = (ulonglong)((uVar1 & 0x1ffff) * (int)_DAT_14abb6918[1]) + *_DAT_14abb6918;
  }
  if (lVar6 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = FUN_145234a80(lVar6,0,0);
  }
  if (lVar9 == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = FUN_145234a80(lVar9,0,0);
  }
  if ((lVar6 == 0) || (lVar6 != lVar9)) {
    if (((*(byte *)(lVar3 + 0x92) & 2) == 0) && ((*(byte *)(lVar4 + 0x92) & 2) == 0)) {
      uStack_68 = *(undefined8 *)(param_1 + 0x70);
      uStack_60 = *(undefined8 *)(param_1 + 0x78);
      pauVar8 = aauStack_58;
      puVar7 = &uStack_68;
      func_0x000144dc3790();
      auVar14 = ZEXT1664(aauStack_58[0]);
      fVar13 = aauStack_58[0]._0_4_ - SUB164(*(undefined1 (*) [16])(lVar3 + 0x10),0);
      auVar11 = vsubps_avx(*(undefined1 (*) [16])(lVar3 + 0x10),aauStack_58[0]);
      vmovshdup_avx(auVar11);
      atan2f(puVar7,pauVar8);
      fVar10 = auVar14._0_4_ - SUB164(*(undefined1 (*) [16])(lVar4 + 0x10),0);
      auVar11 = vsubps_avx(*(undefined1 (*) [16])(lVar4 + 0x10),auVar14._0_16_);
      vmovshdup_avx(auVar11);
      atan2f(puVar7,pauVar8);
      auVar12._4_4_ = _DAT_146159be0;
      auVar12._0_4_ = _DAT_146159be0;
      auVar12._8_4_ = _DAT_146159be0;
      auVar12._12_4_ = _DAT_146159be0;
      auVar14 = ZEXT464(_DAT_145fc6f80);
      auVar11._0_12_ = ZEXT812(0);
      auVar11._12_4_ = 0;
      auVar11 = vcmpss_avx(auVar11,ZEXT416((uint)(fVar13 - fVar10)),2);
      auVar11 = vblendvps_avx(auVar12,ZEXT416(_DAT_145fc6f80),auVar11);
      auVar15 = ZEXT1664(auVar11);
      func_0x000145f40820(auVar11._0_4_ + (fVar13 - fVar10),_DAT_145fc6f84);
      fVar13 = extraout_XMM0_Da - auVar15._0_4_;
      auVar11 = vcmpss_avx(ZEXT416((uint)fVar13),ZEXT416(_DAT_146159be0),2);
      auVar11 = vblendvps_avx(ZEXT416((uint)fVar13 & _DAT_145fc6f4c),auVar14._0_16_,auVar11);
      if (auVar11._0_4_ <= _DAT_1499aaae4 * _DAT_146159b38) goto LAB_1401aa2d5;
    }
  }
  else {
    cVar5 = func_0x0001400c3df0(*(undefined1 *)(lVar4 + 0x92));
    if (cVar5 == '\0') {
LAB_1401aa2d5:
      return *(float *)(lVar4 + 0x3c) <= *(float *)(lVar3 + 0x3c);
    }
  }
  return false;
}

