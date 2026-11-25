// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140191700  size: 699 bytes
// Name:    FUN_140191700
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1404a72c0, FUN_1452b3070, FUN_1409519a0, FUN_144e66270
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_140191700(longlong param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  float fVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined8 uVar10;
  undefined1 auVar11 [64];
  undefined8 auStack_3d8 [93];
  undefined8 uStack_f0;
  undefined4 uStack_d8;
  undefined1 auStack_5e [22];
  undefined1 uStack_48;
  undefined1 uStack_44;
  
  if (DAT_149e2ff10 == '\x01') {
    lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x48) + 0x10);
    if (lVar5 == 0) {
      uVar10 = 0;
    }
    else {
      auVar11 = ZEXT864(0);
      uVar7 = func_0x000145123bd0(param_1 + 0x538,0,_DAT_14aa31b3c);
      fVar3 = (float)((uint)(float)uVar7 & 0x7fffff | 0x3f800000);
      auVar2 = vcmpss_avx(auVar11._0_16_,ZEXT416((uint)((float)uVar7 + _DAT_145fc6fb0)),2);
      fVar3 = (fVar3 * (fVar3 * _DAT_14615b748 + _DAT_14615b710) +
              (float)(int)(((uint)(uVar7 >> 0x17) & 0x1ff) - 0x7f) + _DAT_14615b718) *
              _DAT_14615b71c;
      auVar9._0_8_ = CONCAT44(_DAT_14615af00,_DAT_14615af00);
      auVar9._8_4_ = _DAT_14615af00;
      auVar9._12_4_ = _DAT_14615af00;
      auVar1 = vblendvps_avx(auVar9,ZEXT416((uint)fVar3),auVar2);
      auVar11 = ZEXT1664(auVar1);
      lVar6 = func_0x000144da31b0(auVar2._0_8_,fVar3,auVar9._0_8_);
      if (lVar6 == 0) {
        lVar6 = func_0x000144da31b0(param_1 + 0x94);
        if (lVar6 != 0) {
          FUN_1452b3070(auStack_3d8);
          uStack_48 = 0;
          uStack_d8 = 4;
          FUN_1404a72c0(param_1,*(undefined8 *)(lVar5 + 0xd4),param_1 + 0xa4,auStack_3d8,1);
          func_0x000144de1380(auStack_5e);
        }
      }
      lVar6 = func_0x000144da31b0(param_1 + 0x9c);
      uVar10 = auVar11._0_8_;
      if (lVar6 == 0) {
        lVar6 = func_0x000144da31b0(param_1 + 0x84);
        uVar10 = auVar11._0_8_;
        if (lVar6 != 0) {
          iVar4 = FUN_144e66270(*(undefined4 *)(lVar5 + 0xcc));
          uVar10 = auVar11._0_8_;
          if (iVar4 != 0) {
            FUN_1452b3070(auStack_3d8);
            uStack_44 = *(undefined1 *)(*(longlong *)(param_1 + 400) + 0x10);
            uStack_f0 = 0;
            uStack_d8 = 3;
            FUN_1404a72c0(param_1,*(undefined8 *)(lVar5 + 0xcc),param_1 + 0x9c,auStack_3d8,1);
            func_0x000144de1380(auStack_5e);
            uVar10 = auVar11._0_8_;
          }
        }
      }
    }
  }
  else {
    uVar7 = func_0x000145123bd0(param_1 + 0x538,_DAT_145fc6ed8,_DAT_14aa31b3c);
    fVar3 = (float)((uint)(float)uVar7 & 0x7fffff | 0x3f800000);
    auStack_3d8[0] = *(undefined8 *)(param_1 + 0x9c);
    fVar3 = (fVar3 * (fVar3 * _DAT_14615b748 + _DAT_14615b710) +
            (float)(int)(((uint)(uVar7 >> 0x17) & 0x1ff) - 0x7f) + _DAT_14615b718) * _DAT_14615b71c;
    auVar2 = vcmpss_avx(ZEXT816(0),ZEXT416((uint)((float)uVar7 + _DAT_145fc6fb0)),2);
    auVar8._0_8_ = CONCAT44(_DAT_14615af00,_DAT_14615af00);
    auVar8._8_4_ = _DAT_14615af00;
    auVar8._12_4_ = _DAT_14615af00;
    auVar1 = vblendvps_avx(auVar8,ZEXT416((uint)fVar3),auVar2);
    auVar11 = ZEXT1664(auVar1);
    lVar5 = func_0x000144da31b0(auVar2._0_8_,fVar3,auVar8._0_8_);
    if (lVar5 != 0) {
      FUN_1409519a0(lVar5,1,0x7585d45d);
    }
    auStack_3d8[0] = *(undefined8 *)(param_1 + 0xa4);
    lVar5 = func_0x000144da31b0();
    uVar10 = auVar11._0_8_;
    if (lVar5 != 0) {
      FUN_1409519a0(lVar5,1,0x7585d45d);
      uVar10 = auVar11._0_8_;
    }
  }
  return uVar10;
}

