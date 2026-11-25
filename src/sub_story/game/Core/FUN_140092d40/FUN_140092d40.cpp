// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140092d40  size: 101 bytes
// Name:    FUN_140092d40
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144e0b0e0, FUN_140092f40
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


ulonglong FUN_140092d40(undefined8 param_1,uint param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  char cVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined4 auStack_28 [2];
  undefined8 uStack_20;
  
  auStack_28[0] = 0;
  uStack_20 = 0;
  FUN_140092f40(auStack_28,param_3,param_1);
  uVar2 = uStack_20;
  uVar1 = auStack_28[0];
  cVar3 = func_0x00014505bd10(auStack_28[0],uStack_20);
  if (cVar3 == '\0') {
    return 0;
  }
  uVar5 = FUN_144e0b0e0(uVar1,uVar2);
  if ((param_2 < 0x1d) &&
     (uVar6 = CONCAT71((int7)(uVar5 >> 8),1), (0x10200400U >> (param_2 & 0x1f) & 1) != 0))
  goto code_r0x00014505bdbf;
  uVar6 = 0;
  switch(uVar5 & 0xffffffff) {
  case 0:
    if (param_2 < 0x21) {
      uVar6 = 0x100900040;
code_r0x00014505bd7c:
      uVar6 = uVar6 >> ((ulonglong)param_2 & 0x3f);
      goto code_r0x00014505bdbf;
    }
    break;
  case 1:
    if (param_2 < 0x1e) {
      uVar4 = 0x20408020;
code_r0x00014505bd8d:
      uVar6 = (ulonglong)(uVar4 >> (param_2 & 0x1f));
      goto code_r0x00014505bdbf;
    }
    break;
  case 2:
    if (param_2 < 0x1f) {
      uVar4 = 0x41010010;
      goto code_r0x00014505bd8d;
    }
    break;
  case 3:
    if (param_2 < 0x20) {
      uVar4 = 0x82020080;
      goto code_r0x00014505bd8d;
    }
    break;
  default:
    goto code_r0x00014505bdbf;
  case 5:
  case 6:
    if (param_2 < 0x23) {
      uVar6 = 0x404080200;
      goto code_r0x00014505bd7c;
    }
    break;
  case 8:
  case 9:
    if (param_2 < 0x22) {
      uVar6 = 0x208040100;
      goto code_r0x00014505bd7c;
    }
  }
  uVar6 = 0;
code_r0x00014505bdbf:
  return uVar6 & 0xffffffffffffff01;
}

