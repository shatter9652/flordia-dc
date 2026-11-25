// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140047d40  size: 73 bytes
// Name:    FUN_140047d40
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14053c4c0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


char FUN_140047d40(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  bool bVar6;
  
  uVar1 = *(uint *)(param_1 + 0x2c);
  cVar4 = '\x01';
  if ((ulonglong)uVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x30);
    lVar5 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + lVar5);
      cVar4 = FUN_14053c4c0(*(undefined4 *)(lVar3 + 0x44),*(undefined8 *)(lVar3 + 0x48));
      if (cVar4 == '\0') {
        return '\0';
      }
      bVar6 = (ulonglong)uVar1 * 8 + -8 != lVar5;
      lVar5 = lVar5 + 8;
    } while (bVar6);
  }
  return cVar4;
}

