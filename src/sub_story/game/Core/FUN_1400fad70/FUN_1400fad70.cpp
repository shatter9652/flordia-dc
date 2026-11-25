// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400fad70  size: 693 bytes
// Name:    FUN_1400fad70
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140b2c820, FUN_140313300, FUN_140b2cb00, FUN_142910600, FUN_1400fb030, FUN_141a1fce0, FUN_1452206a0, FUN_140c599a0, FUN_144f96b90
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400fad70(void)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  bool bVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [64];
  undefined1 extraout_var_00 [56];
  undefined1 auVar12 [64];
  int iStack_50;
  int iStack_4c;
  undefined1 auStack_48 [8];
  longlong lStack_40;
  undefined1 extraout_var [56];
  
  FUN_144f96b90();
  func_0x000144f972e0(auStack_48);
  lVar4 = _DAT_14ab56e38;
  if (_DAT_14ab73090 == 0) {
    uVar2 = FUN_1400fb030(_DAT_14ab56e38);
    cVar1 = func_0x0001400fb050(uVar2,0);
    if (cVar1 == '\0') {
      cVar1 = func_0x0001400fb090(uVar2,0);
      if (cVar1 == '\0') {
        uVar3 = func_0x000145073c10();
        cVar1 = func_0x000144f92d40(uVar3,1,1);
        if (((cVar1 != '\0') && (lVar4 != 0)) &&
           ((lVar4 = func_0x000144f3a1d0(), lVar4 != 0 &&
            (lVar4 = FUN_140c599a0(lVar4 + 0x1410,0), lVar4 != 0)))) {
          FUN_1452206a0(lVar4,auStack_48);
        }
      }
    }
  }
  else if (((_DAT_148568288 != 0) && (lVar4 = FUN_141a1fce0(), lVar4 != 0)) &&
          (*(char *)(lVar4 + 0x19) == '\x01')) {
    func_0x00014505b690(auStack_48,*(undefined8 *)(lVar4 + 0x10));
  }
  if (lStack_40 == 0) {
    iStack_50 = 0;
    auVar11._0_8_ = func_0x0001453d3cd0();
    auVar11._8_56_ = extraout_var;
    auVar10 = auVar11._0_16_;
LAB_1400fadfa:
    bVar8 = _DAT_147658358 != 0;
    bVar9 = false;
    iVar7 = 0;
  }
  else {
    func_0x000140019da0(*(undefined4 *)(lStack_40 + 0x44),&iStack_50);
    func_0x000140019da0(*(undefined4 *)(lStack_40 + 8),&iStack_4c);
    auVar12._0_8_ = func_0x0001453d3cd0();
    auVar12._8_56_ = extraout_var_00;
    auVar10 = auVar12._0_16_;
    auVar12 = ZEXT1664(auVar10);
    if (iStack_4c == 0) goto LAB_1400fadfa;
    lVar4 = func_0x000145073c10();
    bVar8 = iStack_4c != _DAT_147658358;
    auVar10 = auVar12._0_16_;
    iVar7 = iStack_4c;
    if (*(char *)(lVar4 + 0xbd9) == '\0') {
      bVar9 = _DAT_14615a2c4 <= (float)((uint)(auVar12._0_4_ - _DAT_1468b91ac) & _DAT_145fc6f4c);
    }
    else {
      bVar9 = false;
    }
  }
  iVar6 = _DAT_147658350;
  if ((bVar8) || (_DAT_147658350 = iVar6, bVar9)) {
    auVar12 = ZEXT1664(auVar10);
    iVar5 = 0;
    if (lStack_40 != 0) {
      iVar5 = iStack_50;
    }
    DAT_147658354 = 0;
    bVar9 = _DAT_147658350 != 0;
    _DAT_147658350 = iVar5;
    if (bVar9) {
      if (!(bool)(bVar8 & iVar5 != 0)) {
        FUN_142910600(iVar6,0);
        auVar10 = auVar12._0_16_;
        DAT_147658354 = 1;
        _DAT_147658350 = iVar6;
        goto LAB_1400fae16;
      }
      FUN_140b2c820(iVar6,0);
    }
    auVar10 = auVar12._0_16_;
    if (_DAT_147658350 == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = _DAT_147658350;
      if ((DAT_147658354 & 1) == 0) {
        FUN_140b2cb00(_DAT_147658350,0,0,_DAT_145fc6ed8,0);
        auVar10 = auVar12._0_16_;
        iVar6 = _DAT_147658350;
      }
    }
  }
LAB_1400fae16:
  uVar2 = auVar10._0_4_;
  if (DAT_147658354 == 1) {
    auVar12 = ZEXT1664(auVar10);
    DAT_147658354 = FUN_140313300(iVar6);
    if (DAT_147658354 == 0) {
      _DAT_147658350 = 0;
    }
    uVar2 = auVar12._0_4_;
    iVar6 = _DAT_147658350;
  }
  _DAT_147658358 = iVar7;
  _DAT_1468b91ac = (float)uVar2;
  DAT_14765834d = iVar6 != 0;
  return;
}

