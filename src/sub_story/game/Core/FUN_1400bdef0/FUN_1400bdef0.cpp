// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400bdef0  size: 305 bytes
// Name:    FUN_1400bdef0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144f4f0a0, FUN_145362690
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400bdef0(ulonglong param_1,longlong param_2)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  undefined4 uVar3;
  undefined1 extraout_var [56];
  undefined1 auVar4 [64];
  undefined1 auVar5 [64];
  undefined4 uStack_8c;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [16];
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  param_1 = param_1 & 0xfffffffffffffff0;
  lVar2 = func_0x000144e726b0(*(undefined4 *)(param_1 + 0x9c));
  if (lVar2 == 0) {
    auVar5 = ZEXT1264(ZEXT812(0));
  }
  else {
    auVar5 = ZEXT464(*(uint *)(lVar2 + 0x3a0));
  }
  uStack_68 = *(undefined8 *)(param_1 + 0x70);
  uStack_60 = *(undefined8 *)(param_1 + 0x78);
  func_0x000144dc3790(&uStack_68,&uStack_48);
  uStack_78 = uStack_48;
  uStack_70 = uStack_40;
  auVar4._0_8_ = FUN_144f4f0a0(param_1);
  auVar4._8_56_ = extraout_var;
  uStack_8c = 0xff7fffff;
  auVar4 = ZEXT1664(auVar4._0_16_);
  uVar3 = *(undefined4 *)(param_1 + 0x9c);
  lVar2 = func_0x000144dd1230(uVar3);
  if (lVar2 == 0) {
    uStack_88 = *(undefined8 *)(param_1 + 0x70);
    uStack_80 = *(undefined8 *)(param_1 + 0x78);
    func_0x000144dc3790(&uStack_88,auStack_58);
    FUN_145362690(auStack_58,&uStack_8c);
    uVar3 = *(undefined4 *)(param_1 + 0x9c);
  }
  else {
    uStack_8c = _DAT_14615a400;
    if (*(int *)(lVar2 + 0x14) != 0) {
      uStack_8c = *(undefined4 *)(lVar2 + 0x18);
    }
  }
  lVar2 = func_0x000144e63d10(uVar3);
  if ((lVar2 != 0) && ((*(byte *)(lVar2 + 0x224) & 0x40) != 0)) {
    uStack_8c = 0xff7fffff;
  }
  auVar1 = vmaxss_avx(auVar4._0_16_,auVar5._0_16_);
  *(int *)(param_2 + 0x16e8) = auVar1._0_4_;
  *(undefined4 *)(param_2 + 0x16ec) = uStack_8c;
  return;
}

