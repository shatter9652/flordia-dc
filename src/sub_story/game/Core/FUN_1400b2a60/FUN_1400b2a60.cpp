// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400b2a60  size: 166 bytes
// Name:    FUN_1400b2a60
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14012b420, FUN_1454e85f0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_1400b2a60(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  char cVar2;
  longlong lVar3;
  undefined1 auStack_14 [4];
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  cVar2 = func_0x00014501bbd0(*(undefined4 *)(param_1 + 0xfc0),*(undefined1 *)(param_1 + 0x1010));
  if (cVar2 == '\0') {
    cVar2 = FUN_1454e85f0(uVar1,0);
  }
  else {
    cVar2 = '\0';
  }
  if (param_2 == 0) {
    return 0;
  }
  if (cVar2 != '\0') {
    return 0;
  }
  lVar3 = func_0x000144da6540();
  if (lVar3 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = *(longlong *)(lVar3 + 0x10c0);
  }
  if (((*(char *)(lVar3 + 0x1280) == '\x01') && (*(char *)(lVar3 + 0x1281) == '\0')) &&
     ((lVar3 = FUN_14012b420(lVar3,auStack_14), lVar3 == 0 ||
      ((cVar2 = func_0x00014501bbd0(*(undefined4 *)(lVar3 + 0x60),*(undefined1 *)(lVar3 + 0xb0)),
       cVar2 == '\0' || ((*(byte *)(lVar3 + 0x10c) & 8) == 0)))))) {
    return 0;
  }
  return 1;
}

