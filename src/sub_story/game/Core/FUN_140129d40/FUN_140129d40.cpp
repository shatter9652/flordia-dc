// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140129d40  size: 161 bytes
// Name:    FUN_140129d40
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14381a7a0, FUN_143d317d0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140129d40(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [64];
  undefined1 auStack_64 [16];
  uint uStack_54;
  undefined8 uStack_50;
  undefined1 auStack_48 [13];
  undefined3 uStack_3b;
  undefined5 uStack_38;
  undefined1 uStack_30;
  undefined1 uStack_2c;
  
  uStack_2c = 0;
  auStack_48[0xc] = 0;
  auStack_48._0_12_ = ZEXT812(0);
  uStack_3b = 0;
  uStack_38 = 0;
  auStack_64 = ZEXT416(_DAT_146178bd0);
  uStack_54 = _DAT_14615a200;
  if (*(char *)(param_1 + 0x7c) == '\0') {
    uStack_54 = _DAT_145fc6edc;
  }
  auVar3 = ZEXT464(uStack_54);
  auVar2._4_4_ = _DAT_145fc6ed8;
  auVar2._0_4_ = _DAT_145fc6ed8;
  auVar2._8_4_ = _DAT_145fc6ed8;
  auVar2._12_4_ = _DAT_145fc6ed8;
  uStack_50 = vmovlps_avx(auVar2);
  uStack_30 = 0;
  cVar1 = func_0x000140129df0(param_1);
  if ((cVar1 != '\0') &&
     (cVar1 = FUN_143d317d0(*(undefined4 *)(param_1 + 100),auVar3._0_8_), cVar1 != '\0')) {
    FUN_14381a7a0(param_2,auStack_64);
  }
  return;
}

