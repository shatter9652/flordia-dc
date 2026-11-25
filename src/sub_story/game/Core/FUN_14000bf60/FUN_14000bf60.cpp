// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14000bf60  size: 601 bytes
// Name:    FUN_14000bf60
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1451b5e10
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_14000bf60(longlong param_1,uint param_2,uint param_3,undefined1 (*param_4) [16],
                  char param_5,undefined8 *param_6)

{
  byte bVar1;
  longlong *plVar2;
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  undefined1 (*pauVar6) [16];
  byte bVar7;
  uint uVar8;
  longlong lVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  float fVar12;
  float fVar13;
  uint uStack_48;
  uint uStack_44;
  uint uStack_40;
  undefined4 uStack_3c;
  
  uVar5 = 0;
  uVar4 = 0;
  uVar8 = param_2 & 0xffff;
  if (((uVar8 == 0xffff) || (0x12bf < uVar8)) ||
     (plVar2 = *(longlong **)(param_1 + 0xc30 + (ulonglong)uVar8 * 8), plVar2 == (longlong *)0x0)) {
    pauVar6 = (undefined1 (*) [16])0x0;
  }
  else {
    pauVar6 = (undefined1 (*) [16])0x0;
    if ((param_2 >> 0x10 < (uint)*(ushort *)(plVar2 + 1)) &&
       (*(ushort *)(plVar2 + 1) != 0 || (short)plVar2[9] != 0)) {
      pauVar6 = (undefined1 (*) [16])((ulonglong)(param_2 >> 0x10) * 0x34 + *plVar2);
    }
  }
  uVar8 = param_3 & 0xffff;
  if (((uVar8 != 0xffff) && (uVar8 < 0x12c0)) &&
     ((plVar2 = *(longlong **)(param_1 + 0xc30 + (ulonglong)uVar8 * 8), plVar2 != (longlong *)0x0 &&
      ((((uVar5 = uVar4, (short)plVar2[9] != 0 || *(ushort *)(plVar2 + 1) != 0 &&
         (param_3 >> 0x10 < (uint)*(ushort *)(plVar2 + 1))) && (pauVar6 != (undefined1 (*) [16])0x0)
        ) && (*plVar2 != 0)))))) {
    lVar9 = *plVar2 + (ulonglong)(param_3 >> 0x10) * 0x34;
    FUN_1451b5e10(param_1,&uStack_48,pauVar6,lVar9,0);
    if (param_6 != (undefined8 *)0x0) {
      *param_6 = CONCAT44(uStack_44,uStack_48);
      param_6[1] = CONCAT44(uStack_3c,uStack_40);
    }
    lVar9 = func_0x000144eb5520(param_1,pauVar6,lVar9);
    uVar5 = 0;
    if ((lVar9 != 0) && ((*(byte *)(lVar9 + 0x14) & 0x20) == 0)) {
      bVar1 = *(byte *)(lVar9 + 0x1a);
      bVar7 = *(byte *)(lVar9 + 0x1b);
      auVar11._0_4_ = uStack_48 ^ _DAT_145fc6f10;
      auVar11._4_4_ = _DAT_145fc6f10;
      auVar11._8_4_ = _DAT_145fc6f10;
      auVar11._12_4_ = _DAT_145fc6f10;
      auVar11 = vunpcklps_avx(ZEXT416(uStack_44),auVar11);
      auVar11 = vinsertps_avx(auVar11,ZEXT416(uStack_40),0x20);
      auVar3 = vsubps_avx(*param_4,*pauVar6);
      auVar10._0_4_ = auVar3._0_4_ * auVar11._0_4_;
      auVar10._4_4_ = auVar3._4_4_ * auVar11._4_4_;
      auVar10._8_4_ = auVar3._8_4_ * auVar11._8_4_;
      auVar10._12_4_ = auVar3._12_4_ * auVar11._12_4_;
      auVar11 = vblendps_avx(auVar10,ZEXT816(0) << 0x20,8);
      auVar11 = vhaddps_avx(auVar11,auVar11);
      auVar11 = vhaddps_avx(auVar11,auVar11);
      if (bVar7 == 0) {
        fVar12 = *(float *)(lVar9 + 8);
        fVar13 = (-((float)bVar1 * _DAT_145fc6edc) + _DAT_145fc6edc) * fVar12;
        bVar7 = bVar1;
      }
      else if (bVar1 == 0) {
        fVar12 = *(float *)(lVar9 + 8);
        fVar13 = fVar12 * (-((float)bVar7 * _DAT_145fc6edc) + _DAT_145fc6edc);
      }
      else {
        fVar12 = *(float *)(lVar9 + 8);
        fVar13 = (fVar12 + *(float *)(lVar9 + 0xc)) * _DAT_145fc6edc;
      }
      auVar11 = ZEXT416((uint)((fVar12 * _DAT_145fc6edc + (auVar11._0_4_ - fVar13)) / fVar12));
      auVar11 = vroundss_avx(auVar11,auVar11,9);
      uVar5 = (uint)auVar11._0_4_;
      if (param_5 != '\0') {
        uVar4 = (int)(char)bVar7 - 1U;
        if ((int)uVar5 < (int)((int)(char)bVar7 - 1U)) {
          uVar4 = uVar5;
        }
        uVar5 = ~((int)uVar4 >> 0x1f) & uVar4;
      }
    }
  }
  return uVar5;
}

