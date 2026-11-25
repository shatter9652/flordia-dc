// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140cc1f50  size: 1356 bytes
// Name:    grmShaderFx::RegisterTechniqueGroup
// Subsystem: renderer
// Class:   grmShaderFx
//
// Evidence:
//   GTAVSRC: grmShaderFx::RegisterTechniqueGroup  (game/shaders/ShaderLib.cpp)
//   literal: shadtexture_wdcascade
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145a8c1f0, FUN_145c068c0, FUN_145ad0b10, FUN_1408e8930, FUN_143281ce0, FUN_140643cd0, FUN_141adcc20, FUN_141adcbd0, FUN_140715f40, FUN_1419f4000, FUN_1415f2230
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"
#include "gta6decomp/grmShaderFx.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void grmShaderFx__RegisterTechniqueGroup(void)

{
  undefined2 uVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar5;
  longlong lVar6;
  char cVar7;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined5 uStack_50;
  undefined3 uStack_4b;
  undefined5 uStack_48;
  char cStack_43;
  char acStack_42 [21];
  undefined1 auStack_2d [21];
  
  uVar4 = _DAT_14ab7f990;
  uVar3 = func_0x00014504c1b0();
  FUN_143281ce0(uVar4,uVar3);
  uVar4 = FUN_140643cd0();
  lVar6 = 0;
  uStack_58 = _DAT_146520f73;
  uStack_50 = (undefined5)_UNK_146520f7b;
  uStack_4b = 0x4f6f4;
  uStack_48 = 0x97c80bc306;
  cVar5 = '}';
  cStack_43 = '\x01';
  do {
    cVar7 = *(char *)((longlong)&uStack_58 + lVar6) + cVar5;
    cVar5 = cVar5 + -1;
    acStack_42[lVar6] = cVar7;
    lVar6 = lVar6 + 1;
  } while (lVar6 != 0x15);
  FUN_140715f40(uVar4);
  if (cStack_43 == '\x01') {
    lVar6 = -0x15;
    do {
      auStack_2d[lVar6] = 0;
      lVar6 = lVar6 + 1;
    } while (lVar6 != 0);
  }
  _DAT_1484dca20 = FUN_141adcbd0(&UNK_14677b067);
  lVar6 = FUN_141adcc20(&UNK_146780f07,0);
  uVar1 = *(undefined2 *)(lVar6 + 0xcf8);
  _DAT_1484dcbc0 = lVar6;
  DAT_1484dcbc8 = func_0x000144f28cd0(*(undefined8 *)(lVar6 + 0xc80),uVar1,0x6d3f2fa4);
  DAT_1484dcbcb = func_0x000144f28cd0(*(undefined8 *)(lVar6 + 0xc80),uVar1,0x10f865ab);
  DAT_1484dcbca = func_0x000144f28cd0(*(undefined8 *)(lVar6 + 0xc80),uVar1,0x389933c9);
  DAT_1484dcbc9 = func_0x000144f28cd0(*(undefined8 *)(lVar6 + 0xc80),uVar1,0x1d4f594e);
  DAT_1484dcbcc = func_0x000144f28cd0(*(undefined8 *)(lVar6 + 0xc80),uVar1,0x93ce46d9);
  DAT_1484dcbcd = func_0x000144f28cd0(*(undefined8 *)(lVar6 + 0xc80),uVar1,0x7481c008);
  _DAT_1484dcbce = FUN_1408e8930(0xe71861c2,1);
  _DAT_1484dcbd0 = FUN_1408e8930(0xe081c2e,1);
  _DAT_1484dcbd2 = FUN_1408e8930(0x4b350700,1);
  _DAT_1484dcbd4 = FUN_1408e8930(0x49784dcb,1);
  _DAT_1484dcbd6 = FUN_1408e8930(0x59ae85b,1);
  _DAT_1484dcbe6 = FUN_1408e8930(0x60caea61,0);
  _DAT_1484dcbe8 = FUN_1408e8930(0x274eee7b,0);
  _DAT_1484dcbe4 = FUN_1408e8930(0xab1986d0,0);
  _DAT_1484dcbea = FUN_1408e8930(0xc69bd429,3);
  _DAT_1484de7d8 = FUN_1408e8930(0xa6d779f9,3);
  _DAT_1484dcbde = FUN_1408e8930(0xa87062c0,1);
  _DAT_1484dcbe0 = FUN_1408e8930(0x565ed6e4,1);
  _DAT_1484dcbe2 = FUN_1408e8930(0xade7b7a7,1);
  _DAT_1484dcbd8 = FUN_1408e8930(0x39433184,1);
  _DAT_1484dcbda = FUN_1408e8930(0xa2183b7d,1);
  _DAT_1484dcbdc = FUN_1408e8930(0x9e7e93c6,1);
  lVar6 = FUN_141adcc20(&UNK_146781069,0);
  uVar1 = *(undefined2 *)(lVar6 + 0xcf8);
  _DAT_1484dcdf8 = lVar6;
  DAT_1484dce00 = func_0x000144f28cd0(*(undefined8 *)(lVar6 + 0xc80),uVar1,0x16f8d9ba);
  DAT_1484dce01 = func_0x000144f28cd0(*(undefined8 *)(lVar6 + 0xc80),uVar1,0x8c5b4162);
  DAT_1484dce02 = func_0x000144f28cd0(*(undefined8 *)(lVar6 + 0xc80),uVar1,0x8829e60d);
  DAT_1484dce03 = func_0x000144f28cd0(*(undefined8 *)(lVar6 + 0xc80),uVar1,0xd592c080);
  DAT_1484dce05 = func_0x000144f28cd0(*(undefined8 *)(lVar6 + 0xc80),uVar1,0x260fd3a1);
  DAT_1484dce04 = func_0x000144f28cd0(*(undefined8 *)(lVar6 + 0xc80),uVar1,0x7cd8f202);
  DAT_1484dce07 = func_0x000144f28cd0(*(undefined8 *)(lVar6 + 0xc80),uVar1,0x453a0559);
  DAT_1484dce06 = func_0x000144f28cd0(*(undefined8 *)(lVar6 + 0xc80),uVar1,0xd1881969);
  DAT_1484dce08 = func_0x000144f28cd0(*(undefined8 *)(lVar6 + 0xc80),uVar1,0xcee691bd);
  _DAT_1484dce12 = FUN_1408e8930(0xcc183bb5,0);
  _DAT_1484dce0c = FUN_1408e8930(0x37f2f968,3);
  _DAT_1484dce26 = FUN_1408e8930(0xe0439ca4,3);
  _DAT_1484dce28 = FUN_1408e8930(0xe108d4e3,0);
  _DAT_1484dce2a = FUN_1408e8930(0x7ff6261c,0);
  _DAT_1484dce2c = FUN_1408e8930(0x36d8d85f,0);
  uVar4 = FUN_140643cd0();
  func_0x000140704900(uVar4);
  puStack_60 = &UNK_146783a12;
  func_0x000144dac8f0(&uStack_58,&puStack_60,0x40);
  FUN_1419f4000(&uStack_58,&UNK_146779550,0x40);
  bVar2 = FUN_1415f2230(&uStack_58);
  puStack_60 = &UNK_1467839f5;
  _DAT_1484dce18 = (uint)bVar2;
  func_0x000144dac8f0(&uStack_58,&puStack_60,0x40);
  FUN_1419f4000(&uStack_58,&UNK_146779550,0x40);
  bVar2 = FUN_1415f2230(&uStack_58);
  puStack_60 = &UNK_146783a06;
  _DAT_1484dce1c = (uint)bVar2;
  func_0x000144dac8f0(&uStack_58,&puStack_60,0x40);
  FUN_1419f4000(&uStack_58,&UNK_146779550,0x40);
  bVar2 = FUN_1415f2230(&uStack_58);
  _DAT_1484dce20 = (uint)bVar2;
  FUN_145c068c0(_DAT_148fdc570);
  lVar6 = _DAT_148527aa0;
  if ((_DAT_148527aa0 == 0) && (lVar6 = func_0x000144f97130(0x130), lVar6 != 0)) {
    func_0x000145ed7c90();
  }
  _DAT_148527aa0 = lVar6;
  FUN_145a8c1f0(_DAT_148527aa0,_DAT_1484dcdf8);
  *(undefined1 *)(_DAT_148527aa0 + 0x108) = 1;
  _DAT_1484ddd54 = FUN_145ad0b10();
  return;
}

