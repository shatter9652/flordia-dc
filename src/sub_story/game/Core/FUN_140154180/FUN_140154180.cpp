// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140154180  size: 208 bytes
// Name:    FUN_140154180
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_142c162e0, FUN_141218ee0, FUN_143ae5ff0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140154180(longlong param_1)

{
  byte bVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [64];
  
  FUN_142c162e0(param_1,0);
  lVar2 = func_0x000145310cd0(*(undefined8 *)(param_1 + 8));
  if (lVar2 != 0) {
    *(byte *)(lVar2 + 0x36) = *(byte *)(lVar2 + 0x36) & 0xfd;
  }
  if (*(char *)(param_1 + 0x80) == '\x01') {
    auVar3 = vcvtph2ps_f16c(ZEXT216(*(ushort *)(*(longlong *)(param_1 + 0x40) + 0xf0)));
    auVar4 = ZEXT1664(auVar3);
    func_0x0001450072b0(*(longlong *)(param_1 + 0x40),auVar3._0_8_);
    auVar3 = vcvtps2ph_f16c(auVar4._0_16_,3);
    *(short *)(*(longlong *)(param_1 + 0x40) + 0xea) = auVar3._0_2_;
  }
  func_0x000142075ec0(param_1);
  if (*(ushort *)(param_1 + 0x74) < 0x800) {
    func_0x000141279d20();
    *(undefined2 *)(param_1 + 0x74) = 0xffff;
  }
  FUN_143ae5ff0(param_1);
  *(undefined1 *)(param_1 + 0x7e) = 0;
  bVar1 = *(byte *)(param_1 + 0x97);
  if ((bVar1 & 8) != 0) {
    FUN_141218ee0(*(undefined8 *)(param_1 + 0x40));
    bVar1 = *(byte *)(param_1 + 0x97);
  }
  if ((bVar1 & 0x10) != 0) {
    func_0x00014205c0f0(*(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x10));
    *(byte *)(param_1 + 0x97) = *(byte *)(param_1 + 0x97) & 0xef;
  }
  *(undefined8 *)(param_1 + 0x40) = 0;
  return;
}

