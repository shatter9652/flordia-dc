// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401b9350  size: 459 bytes
// Name:    FUN_1401b9350
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1401b9530
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1401b9350(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auStack_f8 [8];
  uint uStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  undefined1 auStack_d8 [16];
  undefined1 uStack_c8;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined8 uStack_20;
  
  uStack_38 = param_3;
  uStack_30 = FUN_1401b9530(*(undefined8 *)(*param_2 + 0x20));
  switch(uStack_30) {
  case 0:
  case 1:
  case 2:
    func_0x000144e0b130(auStack_f8);
    FUN_144390ae0(*(undefined8 *)(*param_2 + 0x20),auStack_f8);
    auStack_d8._4_4_ = uStack_f0;
    auStack_d8._0_4_ = uStack_f0;
    auStack_d8._8_4_ = uStack_f0;
    auStack_d8._12_4_ = uStack_f0;
    uStack_c8 = 0;
    break;
  case 3:
  case 4:
  case 5:
    func_0x000144e48580(auStack_f8);
    FUN_1401b9550(*(undefined8 *)(*param_2 + 0x20),auStack_f8);
    auVar3._0_12_ = ZEXT812(0);
    auVar3._12_4_ = 0;
    auVar2._0_4_ = fStack_e8 + fStack_e8;
    auVar2._4_4_ = fStack_e4 + fStack_e4;
    auVar2._8_4_ = fStack_e0 + fStack_e0;
    auVar2._12_4_ = fStack_dc + fStack_dc;
    auStack_d8 = vblendps_avx(auVar2,auVar3,8);
    uStack_c8 = 3;
    break;
  case 6:
  case 7:
  case 8:
    func_0x000144df5e30(auStack_f8);
    FUN_1456aacf0(*(undefined8 *)(*param_2 + 0x20),auStack_f8);
    auStack_d8 = vinsertps_avx(ZEXT416(uStack_f0),ZEXT416((uint)(fStack_ec + fStack_ec)),0x1c);
    uStack_c8 = 1;
    break;
  case 9:
  case 10:
  case 0xb:
    func_0x000144e0a910(auStack_f8);
    FUN_144390b00(*(undefined8 *)(*param_2 + 0x20),auStack_f8);
    auVar1._4_4_ = fStack_ec;
    auVar1._0_4_ = uStack_f0;
    auVar1._8_4_ = fStack_e8;
    auVar1._12_4_ = fStack_e4;
    auVar1 = vinsertps_avx(auVar1,ZEXT416((uint)(fStack_e8 + fStack_e8)),0x1c);
    auStack_d8 = vunpcklps_avx(auVar1,ZEXT416((uint)fStack_ec));
    uStack_c8 = 2;
    break;
  case 0xc:
  case 0xd:
  case 0xe:
    FUN_144390b80(*(undefined8 *)(*param_2 + 0x20),auStack_d8);
    break;
  case 0xf:
  case 0x10:
  case 0x11:
    FUN_144390be0(*(undefined8 *)(*param_2 + 0x20),auStack_d8);
    break;
  case 0x12:
  case 0x13:
  case 0x14:
    func_0x0001401b37e0(auStack_f8);
    FUN_144390d10(*(undefined8 *)(*param_2 + 0x20),auStack_f8);
    uStack_20 = 0;
    func_0x000140090630(auStack_d8);
    break;
  case 0x15:
  case 0x16:
  case 0x17:
    FUN_144390b40(*(undefined8 *)(*param_2 + 0x20),auStack_d8);
  }
  func_0x0001401b9520(param_1,auStack_d8);
  return;
}

