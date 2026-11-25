// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140019e40  size: 132 bytes
// Name:    FUN_140019e40
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144f862f0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140019e40(void)

{
  int iVar1;
  char cVar2;
  undefined1 uVar3;
  float fVar4;
  
  uVar3 = 1;
  iVar1 = -_DAT_148d7a990;
  if (-_DAT_148d7a990 < 0) {
    iVar1 = _DAT_148d7a990;
  }
  fVar4 = (float)iVar1 * _DAT_14ab49e78;
  cVar2 = func_0x000144dacd70();
  if (cVar2 == '\0') {
    if (DAT_147b95800 == '\0') {
      cVar2 = func_0x000145220e10();
      if ((_DAT_146159e20 < fVar4) || (cVar2 != '\0')) goto LAB_140019e92;
    }
    else if (_DAT_146159e20 < fVar4) goto LAB_140019e92;
    cVar2 = FUN_144f862f0();
    if (cVar2 == '\0') {
      uVar3 = func_0x000144f862d0();
    }
  }
LAB_140019e92:
  DAT_14693f65e = uVar3;
  DAT_147b95800 = func_0x000145220e10();
  return;
}

