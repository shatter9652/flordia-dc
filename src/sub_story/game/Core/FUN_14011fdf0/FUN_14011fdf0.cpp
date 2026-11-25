// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14011fdf0  size: 805 bytes
// Name:    FUN_14011fdf0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_141d992d0, FUN_144e51990, FUN_1401201b0, FUN_1401202a0, FUN_1401201e0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14011fdf0(longlong param_1)

{
  ushort uVar1;
  ushort uVar2;
  byte bVar3;
  char cVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined1 in_ZMM1 [64];
  float fVar7;
  undefined1 auVar8 [64];
  undefined1 auVar9 [64];
  float fVar10;
  float fStack_168;
  float fStack_164;
  uint uStack_160;
  uint uStack_15c;
  uint uStack_158;
  uint uStack_154;
  float fStack_150;
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  undefined4 uStack_140;
  undefined8 uStack_13c;
  undefined8 uStack_134;
  undefined4 uStack_12c;
  uint uStack_128;
  float fStack_124;
  undefined8 uStack_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  uint uStack_104;
  float fStack_100;
  undefined4 uStack_fc;
  undefined *puStack_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  uint uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined1 auStack_b8 [32];
  undefined1 auStack_98 [16];
  undefined1 auStack_88 [16];
  undefined1 auStack_78 [16];
  
  if (_DAT_147659a78 != 0) {
    uStack_118 = _DAT_146163010;
    uStack_110 = (undefined4)_UNK_146163018;
    uStack_10c = (undefined4)((ulonglong)_UNK_146163018 >> 0x20);
    puStack_f8 = &UNK_1424b793e;
    uStack_e4 = 0x383851ec;
    fStack_164 = (float)_DAT_149162c68;
    auVar8 = ZEXT1664(CONCAT124(in_ZMM1._4_12_,fStack_164));
    fStack_168 = (float)_DAT_149162c5c;
    auVar9 = ZEXT1664(CONCAT124(in_ZMM1._4_12_,fStack_168));
    bVar3 = func_0x000144fd22b0();
    uStack_15c = (uint)bVar3;
    cVar4 = func_0x000144fd22b0();
    fStack_124 = _DAT_145fc6ed8;
    if (cVar4 != '\0') {
      fStack_124 = (float)FUN_141d992d0();
    }
    cVar4 = func_0x000144fd22b0();
    uStack_160 = 1;
    if (cVar4 != '\0') {
      uStack_160 = 0;
      if (DAT_149162c58 == '\0') {
        uStack_160 = (uint)DAT_149162c57;
      }
    }
    uStack_158 = (uint)DAT_149162c54;
    uVar6 = (uint)DAT_149162c56;
    uStack_128 = (uint)DAT_149162cc4;
    fStack_14c = _DAT_149162c50;
    uStack_140 = _DAT_149162c4c;
    uStack_12c = 0x461c4000;
    uStack_ec = _DAT_149162c94;
    uStack_f0 = _DAT_149162c7c;
    fStack_100 = (float)_DAT_149162c5c;
    uStack_e8 = (uint)DAT_149162ca5;
    uStack_118 = CONCAT44((float)_DAT_149162c68,fStack_100);
    uStack_110 = 0x40733333;
    uStack_10c = (undefined4)_DAT_149162c40;
    uStack_108 = (undefined4)((ulonglong)_DAT_149162c40 >> 0x20);
    uStack_fc = _DAT_149162c48;
    fVar10 = _DAT_149162c50;
    uStack_154 = uVar6;
    uStack_104 = (uint)bVar3;
    uStack_dc = func_0x0001401201a0();
    uStack_d8 = func_0x000140120120();
    uStack_d4 = FUN_1401201b0();
    auStack_98._0_12_ = ZEXT812(0);
    auStack_98._12_4_ = 0;
    auStack_78 = (undefined1  [16])0x0;
    auStack_88 = (undefined1  [16])0x0;
    auStack_b8 = ZEXT1632(auStack_98);
    auVar8 = ZEXT1664(auVar8._0_16_);
    auVar9 = ZEXT1664(auVar9._0_16_);
    FUN_1401201e0();
    fVar7 = _DAT_145fc6ed8 / auVar9._0_4_;
    fStack_148 = _DAT_145fc6ed8 / (fVar7 * _DAT_146159c54 - fVar10);
    fStack_150 = _DAT_145fc6ed8;
    if (uVar6 != 0) {
      fStack_148 = fStack_148 * (_DAT_145fc6ed8 - fVar10);
      fStack_150 = auVar8._0_4_ * fVar7;
    }
    fStack_144 = -(fStack_148 * fVar10) + fVar10;
    FUN_1401202a0(&uStack_c8,_DAT_149162cb8);
    uVar2 = _DAT_147659a78;
    uStack_13c = uStack_c8;
    uStack_134 = uStack_c0;
    if (_DAT_147659a78 != 0) {
      uVar1 = _DAT_147659a78 >> 2;
      uVar5 = func_0x000144e3d460(param_1,_DAT_147659a78,&fStack_168,0xa0);
      func_0x000144da8e20(param_1,uVar2,uVar5);
      *(undefined2 *)(param_1 + 0x70c0 + (ulonglong)uVar1 * 2) = 0;
    }
    uVar2 = _DAT_147659a7a;
    if (_DAT_147659a7a != 0) {
      uVar1 = _DAT_147659a7a >> 2;
      uVar5 = FUN_144e51990(param_1,_DAT_147659a7a,auStack_b8,0x68,0x68,0);
      func_0x000144d9dcb0(param_1,uVar2,uVar5);
      *(undefined2 *)(param_1 + 0x6200 + (ulonglong)uVar1 * 2) = 0;
    }
  }
  return;
}

