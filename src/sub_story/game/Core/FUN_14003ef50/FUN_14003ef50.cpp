// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14003ef50  size: 1162 bytes
// Name:    FUN_14003ef50
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14520a2e0, FUN_14513d310, FUN_14486d8f0, FUN_144e97500, FUN_144f86d70, FUN_144e66270, FUN_145404c10, FUN_14486d680, FUN_1450c6e10, FUN_145185ae0, FUN_144ed5ce0, FUN_144ebf1a0, FUN_1450e9330, FUN_1450b8cf0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14003ef50(longlong param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  longlong *plVar5;
  undefined4 uVar6;
  char cVar7;
  undefined4 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  float fVar13;
  float fVar14;
  undefined1 extraout_var [56];
  undefined1 auVar15 [64];
  undefined1 auVar16 [16];
  undefined8 uVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [64];
  undefined8 uVar20;
  undefined8 uVar21;
  float fVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [64];
  undefined1 auVar25 [16];
  undefined1 auVar26 [64];
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 extraout_var_00 [56];
  
  uVar6 = _DAT_14aa31a7c;
  bVar1 = *(byte *)(param_1 + 0x104);
  iVar2 = *(int *)(_DAT_14aae3b70 + 0x1a0);
  if ((bVar1 & 0x10) == 0) {
    if ((*(byte *)(param_1 + 0x105) & 1) != 0) {
      uStack_98 = _DAT_14a9f4960;
      uStack_90 = uRam000000014a9f4968;
      FUN_145185ae0(param_1,&uStack_98,_DAT_14aa31a7c);
    }
  }
  else {
    lVar10 = *(longlong *)(param_1 + 0x20);
    if (lVar10 != 0) {
      fVar14 = *(float *)(param_1 + 0xdc);
      uVar20 = _DAT_14a9f4960;
      uVar21 = uRam000000014a9f4968;
      lVar9 = func_0x0001450c39a0(0);
      auVar19 = ZEXT1264(ZEXT812(0));
      if (lVar9 == 0) {
        auVar24 = ZEXT1264(ZEXT812(0));
      }
      else {
        cVar7 = func_0x000145211da0(*(undefined4 *)(lVar9 + 0x24cc0));
        auVar24 = ZEXT1264(ZEXT812(0));
        if (cVar7 != '\0') {
          FUN_145404c10(lVar10,&uStack_e8,0);
          uStack_b8 = uStack_e8;
          uStack_b0 = uStack_e0;
          fVar13 = (float)FUN_1450c6e10(param_1);
          fVar13 = fVar13 * *(float *)(lVar9 + 0x24cc0);
          auVar19 = ZEXT464((uint)fVar13);
          auVar18 = ZEXT416((uint)fVar13);
          auVar25._0_12_ = ZEXT812(0);
          auVar25._12_4_ = 0;
          auVar24 = ZEXT1664(auVar25);
          auVar23._0_12_ = ZEXT812(0);
          auVar23._12_4_ = 0;
          if (2 < *(int *)(param_1 + 0xc4) + 2U) {
            auVar26._0_8_ = FUN_144f86d70((float)*(ushort *)(lVar9 + 0x24cc8) * _DAT_146159e10);
            auVar25 = auVar24._0_16_;
            auVar18 = auVar19._0_16_;
            auVar26._8_56_ = extraout_var;
            auVar16._0_12_ = ZEXT812(0);
            auVar16._12_4_ = 0;
            auVar23 = vmaxss_avx(auVar16,auVar26._0_16_);
          }
          auVar24 = ZEXT1664(auVar23);
          auVar23 = vmaxss_avx(auVar25,auVar18);
          auVar19 = ZEXT1664(auVar23);
        }
      }
      lVar10 = func_0x0001450c39a0(1);
      uVar17 = auVar19._0_8_;
      if (lVar10 != 0) {
        cVar7 = func_0x000145211da0(*(undefined4 *)(lVar10 + 0x24cc0));
        uVar17 = auVar19._0_8_;
        if (cVar7 != '\0') {
          FUN_145404c10(*(undefined8 *)(param_1 + 0x20),&uStack_e8,1);
          uStack_b8 = uStack_e8;
          uStack_b0 = uStack_e0;
          fVar13 = (float)FUN_1450c6e10(param_1);
          auVar23 = auVar19._0_16_;
          fVar13 = fVar13 * *(float *)(lVar10 + 0x24cc0);
          auVar26 = ZEXT464((uint)fVar13);
          auVar18 = ZEXT416((uint)fVar13);
          if (2 < *(int *)(param_1 + 0xc4) + 2U) {
            auVar15._0_8_ = FUN_144f86d70((float)*(ushort *)(lVar10 + 0x24cc8) * _DAT_146159e10);
            auVar18 = auVar26._0_16_;
            auVar23 = auVar19._0_16_;
            auVar15._8_56_ = extraout_var_00;
            auVar25 = vmaxss_avx(auVar24._0_16_,auVar15._0_16_);
            auVar24 = ZEXT1664(auVar25);
          }
          auVar23 = vmaxss_avx(auVar23,auVar18);
          uVar17 = auVar23._0_8_;
        }
      }
      *(float *)(param_1 + 0xdc) = (float)uVar17;
      if ((2 < *(int *)(param_1 + 200) + 2U) && ((float)uVar17 < _DAT_145fc6ed8)) {
        fVar14 = (float)FUN_144f86d70(uVar17);
      }
      fVar22 = auVar24._0_4_;
      fVar13 = _DAT_145fc6ed8;
      if ((*(uint *)(*(longlong *)(param_1 + 0x20) + 4) & 0xc00000) == 0x400000) {
        uVar3 = *(uint *)(param_1 + 0xcc);
        uVar12 = (ulonglong)uVar3 & 0x1ffff;
        if (((((uVar12 != 0x1ffff) &&
              (plVar5 = *(longlong **)((ulonglong)(uVar3 >> 0x11 & 0x1f) * 8 + 0x14abbe7c0),
              plVar5 != (longlong *)0x0)) &&
             (uVar4 = *(uint *)(plVar5[5] + uVar12 * 4), (uVar4 >> 0x11 & 0x3ff) == uVar3 >> 0x16))
            && (((uVar4 & *(uint *)(plVar5 + 6)) == *(uint *)(plVar5 + 6) && (*plVar5 != 0)))) &&
           (lVar11 = *plVar5 + (ulonglong)(uint)((int)uVar12 * (int)plVar5[1]),
           *(char *)(lVar11 + 0x30) == '\x02')) {
          fVar13 = (float)FUN_144ebf1a0(lVar11,0);
          fVar22 = auVar24._0_4_;
          fVar13 = _DAT_145fc6ed8 - fVar13;
        }
      }
      auVar19 = ZEXT464((uint)(fVar22 * fVar14 * fVar13));
      uVar8 = FUN_144e66270(fVar13,fVar22 * fVar14);
      FUN_14486d680(uVar8,auVar19._0_8_);
      func_0x0001455d4300(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xdc));
      if (*(longlong *)(param_1 + 0x28) != 0) {
        func_0x0001455d4330(*(longlong *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0xdc));
      }
      uStack_a8 = uVar20;
      uStack_a0 = uVar21;
      FUN_145185ae0(param_1,&uStack_a8,uVar6);
      if (iVar2 == 4 && ((bVar1 >> 5 & 1) != 0 || (char)bVar1 < '\0')) {
        if (lVar9 != 0) {
          cVar7 = func_0x000145211da0(*(undefined4 *)(lVar9 + 0x24cc0));
          if (cVar7 != '\0') {
            FUN_145404c10(*(undefined8 *)(param_1 + 0x20),&uStack_e8,0);
            uStack_c8 = uStack_e8;
            uStack_c0 = uStack_e0;
            cVar7 = FUN_1450b8cf0(param_1);
            if (cVar7 != '\0') {
              FUN_144ed5ce0(param_1,0);
              uStack_d8 = uVar20;
              uStack_d0 = uVar21;
              FUN_1450e9330(param_1,uVar6,0);
            }
          }
        }
        if (lVar10 != 0) {
          cVar7 = func_0x000145211da0(*(undefined4 *)(lVar10 + 0x24cc0));
          if (cVar7 != '\0') {
            FUN_145404c10(*(undefined8 *)(param_1 + 0x20),&uStack_e8,1);
            uStack_c8 = uStack_e8;
            uStack_c0 = uStack_e0;
            cVar7 = FUN_1450b8cf0(param_1);
            if (cVar7 != '\0') {
              FUN_144ed5ce0(param_1,1);
              uStack_d8 = uVar20;
              uStack_d0 = uVar21;
              FUN_1450e9330(param_1,uVar6,1);
            }
          }
        }
      }
      FUN_14520a2e0(param_1);
      FUN_14486d8f0(param_1);
      if (_DAT_14abbef44 != _DAT_149e727a8) {
        lVar10 = FUN_14513d310(param_1,0xa2b6991c);
        if ((lVar10 != 0) && (1000 < (uint)(*(int *)(lVar10 + 0xc) - _DAT_14abbef40))) {
          FUN_144e97500(param_1);
          _DAT_149e727a8 = _DAT_14abbef44;
        }
      }
      *(byte *)(param_1 + 0x104) = *(byte *)(param_1 + 0x104) & 0xdf;
    }
  }
  return;
}

