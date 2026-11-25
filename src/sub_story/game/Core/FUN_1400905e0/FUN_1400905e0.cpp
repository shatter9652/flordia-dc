// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400905e0  size: 75 bytes
// Name:    FUN_1400905e0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


ulonglong FUN_1400905e0(undefined4 param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 unaff_RBX;
  ulonglong uVar4;
  undefined7 uVar5;
  
  lVar2 = func_0x000144e371c0();
  cVar1 = func_0x000144def740(*(undefined4 *)(lVar2 + 0x10),0x40);
  uVar5 = (undefined7)((ulonglong)unaff_RBX >> 8);
  uVar4 = CONCAT71(uVar5,1);
  if (cVar1 != '\0') {
    lVar3 = func_0x000144fa1860(param_1);
    if ((*(ushort *)(lVar3 + 0xe5a) & 0x8004) == 0) {
      uVar4 = CONCAT71(uVar5,*(undefined1 *)(lVar2 + 99)) & 0xffffffffffffff02;
      uVar4 = CONCAT71((int7)(uVar4 >> 8),(byte)uVar4 >> 1);
    }
  }
  return uVar4 & 0xffffffff;
}

