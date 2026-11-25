// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140190390  size: 158 bytes
// Name:    FUN_140190390
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144da3570
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_140190390(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_18 [8];
  undefined8 uStack_10;
  
  lVar2 = _DAT_14ab56e38;
  if (*(int *)(param_1 + 0x5d8) < 1) {
    if (*(char *)(param_1 + 0x5fc) != '\x01') {
      return 0;
    }
    if (*(int *)(param_1 + 0x648) == 0) {
      return 0;
    }
  }
  if ((*(byte *)(*(longlong *)(param_1 + 0x40) + 0x680) & 0x40) == 0) {
    return 0;
  }
  if ((_DAT_14ab56e38 != 0) && (_DAT_14a9ecac8 != 0)) {
    FUN_144da3570(auStack_18);
    lVar2 = func_0x000144da6540(*(undefined4 *)(lVar2 + 0x9c));
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = *(longlong *)(lVar2 + 0x1080);
    }
    if (DAT_14a94e160 != '\0') {
      return 0;
    }
    cVar1 = func_0x000144da3550(uStack_10);
    if (((lVar2 != 0) && (cVar1 != '\0')) && (*(int *)(lVar2 + 0xc4) != 0)) {
      return 0;
    }
  }
  return 1;
}

