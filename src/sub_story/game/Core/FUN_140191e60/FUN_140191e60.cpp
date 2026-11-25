// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140191e60  size: 54 bytes
// Name:    FUN_140191e60
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


bool FUN_140191e60(void)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  char *pcVar6;
  bool bVar7;
  
  lVar2 = func_0x000144da3240();
  lVar2 = func_0x0001450572a0(*(undefined4 *)(lVar2 + 0x9c));
  if (lVar2 == 0) {
    return false;
  }
  if (*(uint *)(lVar2 + 0xec) == 0) {
    bVar7 = true;
  }
  else if (*(char *)(*(longlong *)(lVar2 + 0xf0) + 0xed) == '\x01') {
    uVar3 = (ulonglong)*(uint *)(lVar2 + 0xec);
    pcVar6 = (char *)(*(longlong *)(lVar2 + 0xf0) + 0x20d);
    uVar4 = 0;
    do {
      uVar5 = uVar3;
      if (uVar3 - 1 == uVar4) break;
      uVar4 = uVar4 + 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 0x120;
      uVar5 = uVar4;
    } while (cVar1 != '\0');
    bVar7 = uVar3 <= uVar5;
  }
  else {
    bVar7 = false;
  }
  return bVar7;
}

