// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140058930  size: 474 bytes
// Name:    FUN_140058930
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140058930(longlong param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  if (*(longlong *)(param_1 + 0x10) != 0) {
    func_0x000144d9c130();
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  puVar5 = (undefined4 *)func_0x000144d9c140(0x10,800);
  uVar4 = _DAT_146159bc0;
  uVar3 = _UNK_14614f7f8;
  uVar2 = _DAT_14614f7f0;
  uVar1 = _DAT_145fc6ed8;
  if (puVar5 != (undefined4 *)0x0) {
    auVar7._0_12_ = ZEXT812(0);
    auVar7._12_4_ = 0;
    *puVar5 = 0xfffffff;
    auVar6 = ZEXT416(uVar1);
    *(undefined1 (*) [16])(puVar5 + 4) = auVar6;
    *(undefined8 *)(puVar5 + 8) = uVar4;
    *(undefined8 *)(puVar5 + 10) = 0;
    *(undefined8 *)(puVar5 + 0xc) = uVar2;
    *(undefined8 *)(puVar5 + 0xe) = uVar3;
    *(undefined1 (*) [16])(puVar5 + 0x10) = auVar7;
    puVar5[0x14] = 0xfffffff;
    *(undefined1 (*) [16])(puVar5 + 0x18) = auVar6;
    *(undefined8 *)(puVar5 + 0x1c) = uVar4;
    *(undefined8 *)(puVar5 + 0x1e) = 0;
    *(undefined8 *)(puVar5 + 0x20) = uVar2;
    *(undefined8 *)(puVar5 + 0x22) = uVar3;
    *(undefined1 (*) [16])(puVar5 + 0x24) = auVar7;
    puVar5[0x28] = 0xfffffff;
    *(undefined1 (*) [16])(puVar5 + 0x2c) = auVar6;
    *(undefined8 *)(puVar5 + 0x30) = uVar4;
    *(undefined8 *)(puVar5 + 0x32) = 0;
    *(undefined8 *)(puVar5 + 0x34) = uVar2;
    *(undefined8 *)(puVar5 + 0x36) = uVar3;
    *(undefined1 (*) [16])(puVar5 + 0x38) = auVar7;
    puVar5[0x3c] = 0xfffffff;
    *(undefined1 (*) [16])(puVar5 + 0x40) = auVar6;
    *(undefined8 *)(puVar5 + 0x44) = uVar4;
    *(undefined8 *)(puVar5 + 0x46) = 0;
    *(undefined8 *)(puVar5 + 0x48) = uVar2;
    *(undefined8 *)(puVar5 + 0x4a) = uVar3;
    *(undefined1 (*) [16])(puVar5 + 0x4c) = auVar7;
    puVar5[0x50] = 0xfffffff;
    *(undefined1 (*) [16])(puVar5 + 0x54) = auVar6;
    *(undefined8 *)(puVar5 + 0x58) = uVar4;
    *(undefined8 *)(puVar5 + 0x5a) = 0;
    *(undefined8 *)(puVar5 + 0x5c) = uVar2;
    *(undefined8 *)(puVar5 + 0x5e) = uVar3;
    *(undefined1 (*) [16])(puVar5 + 0x60) = auVar7;
    puVar5[100] = 0xfffffff;
    *(undefined1 (*) [16])(puVar5 + 0x68) = auVar6;
    *(undefined8 *)(puVar5 + 0x6c) = uVar4;
    *(undefined8 *)(puVar5 + 0x6e) = 0;
    *(undefined8 *)(puVar5 + 0x70) = uVar2;
    *(undefined8 *)(puVar5 + 0x72) = uVar3;
    *(undefined1 (*) [16])(puVar5 + 0x74) = auVar7;
    puVar5[0x78] = 0xfffffff;
    *(undefined1 (*) [16])(puVar5 + 0x7c) = auVar6;
    *(undefined8 *)(puVar5 + 0x80) = uVar4;
    *(undefined8 *)(puVar5 + 0x82) = 0;
    *(undefined8 *)(puVar5 + 0x84) = uVar2;
    *(undefined8 *)(puVar5 + 0x86) = uVar3;
    *(undefined1 (*) [16])(puVar5 + 0x88) = auVar7;
    puVar5[0x8c] = 0xfffffff;
    *(undefined1 (*) [16])(puVar5 + 0x90) = auVar6;
    *(undefined8 *)(puVar5 + 0x94) = uVar4;
    *(undefined8 *)(puVar5 + 0x96) = 0;
    *(undefined8 *)(puVar5 + 0x98) = uVar2;
    *(undefined8 *)(puVar5 + 0x9a) = uVar3;
    *(undefined1 (*) [16])(puVar5 + 0x9c) = auVar7;
    puVar5[0xa0] = 0xfffffff;
    *(undefined1 (*) [16])(puVar5 + 0xa4) = auVar6;
    *(undefined8 *)(puVar5 + 0xa8) = uVar4;
    *(undefined8 *)(puVar5 + 0xaa) = 0;
    *(undefined8 *)(puVar5 + 0xac) = uVar2;
    *(undefined8 *)(puVar5 + 0xae) = uVar3;
    *(undefined1 (*) [16])(puVar5 + 0xb0) = auVar7;
    puVar5[0xb4] = 0xfffffff;
    *(undefined1 (*) [16])(puVar5 + 0xb8) = auVar6;
    *(undefined8 *)(puVar5 + 0xbc) = uVar4;
    *(undefined8 *)(puVar5 + 0xbe) = 0;
    *(undefined8 *)(puVar5 + 0xc0) = uVar2;
    *(undefined8 *)(puVar5 + 0xc2) = uVar3;
    *(undefined1 (*) [16])(puVar5 + 0xc4) = auVar7;
  }
  *(undefined2 *)(param_1 + 0x1a) = 10;
  *(undefined4 **)(param_1 + 0x10) = puVar5;
  return;
}

