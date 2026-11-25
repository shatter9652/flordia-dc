// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 145972b50  size: 88 bytes
// Name:    internal::ValidateName
// Subsystem: core
// Class:   internal
//
// Evidence:
//   GTAVSRC: internal::ValidateName  (rage/base/src/rline/rlpresence.cpp)
//   literal: Invalid Name
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_141c86b60
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"
#include "gta6decomp/internal.h"


void internal__ValidateName(longlong param_1)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = func_0x000145f407f0();
  if (0xf < iVar2) {
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  cVar1 = FUN_141c86b60(param_1,1);
  iVar2 = func_0x000145972bb0();
  if ((cVar1 != '\0') && (iVar2 != 2)) {
    return;
  }
  lVar3 = 0;
  do {
    if ((&UNK_146782bdb)[lVar3] == '\0') break;
    *(undefined *)(param_1 + lVar3) = (&UNK_146782bdb)[lVar3];
    lVar3 = lVar3 + 1;
  } while (lVar3 != 0x14);
  *(undefined1 *)(lVar3 + param_1) = 0;
  return;
}

