// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401cca20  size: 297 bytes
// Name:    FUN_1401cca20
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144dbce00
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401cca20(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  uint uVar2;
  undefined4 uStack_98;
  undefined2 uStack_94;
  undefined8 uStack_90;
  longlong lStack_88;
  undefined8 uStack_80;
  undefined4 auStack_58 [2];
  longlong lStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [12];
  undefined4 uStack_2c;
  undefined1 auStack_28 [12];
  
  uVar2 = *(uint *)(param_3 + 0x10);
  if (uVar2 != 0) {
    lStack_50 = *(longlong *)(param_1 + 8);
    if (lStack_50 == 0) {
      lStack_50 = 0;
    }
    else if ((ushort)(*(short *)(lStack_50 + 0x12) - 1U) < _DAT_14a943ab8) {
      *(undefined1 *)(param_2 + 0x121a4) = 1;
      uStack_98 = 0xffffffff;
      uStack_94 = 0xffff;
      FUN_144dbce00(param_2,0,lStack_50,&uStack_98,0x119);
      uVar2 = *(uint *)(param_3 + 0x10);
      lStack_50 = *(longlong *)(param_1 + 8);
    }
    uStack_90 = *(undefined8 *)(param_3 + 8);
    *(undefined1 *)(param_2 + 0x121a4) = 1;
    auStack_38 = ZEXT812(0);
    lStack_88 = (ulonglong)uVar2 << 2;
    uStack_98 = 1;
    auStack_58[0] = 0;
    uStack_48 = 0;
    uStack_80 = 0;
    uStack_2c = 0;
    auStack_28._8_4_ = 0;
    auStack_28._0_8_ = auStack_38._4_8_;
    uStack_40 = 0xffffffffffffffff;
    func_0x0001452dd400(param_2,auStack_58,&uStack_98);
    lVar1 = *(longlong *)(param_1 + 8);
    if ((lVar1 != 0) && ((ushort)(*(short *)(lVar1 + 0x12) - 1U) < _DAT_14a943ab8)) {
      *(undefined1 *)(param_2 + 0x121a4) = 1;
      uStack_98 = 0xffffffff;
      uStack_94 = 0xffff;
      FUN_144dbce00(param_2,0,lVar1,&uStack_98,0x103);
    }
  }
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_3 + 0x10);
  return;
}

