// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140019dc0  size: 105 bytes
// Name:    FUN_140019dc0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144dee5d0, FUN_145408670
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140019dc0(void)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  undefined1 uVar4;
  longlong lVar5;
  float fVar6;
  
  lVar5 = (longlong)_DAT_14a210d10;
  bVar2 = true;
  if ((DAT_1475311d0 & 1) == 0) {
    fVar6 = (float)FUN_145408670();
    bVar2 = 0.0 < fVar6;
  }
  uVar4 = DAT_149e526a4;
  *(bool *)(lVar5 * 0x11e50 + 0x1491890b4) = bVar2;
  *(undefined1 *)(lVar5 * 0x11e50 + 0x1491890b5) = uVar4;
  func_0x000140019e30(_DAT_14ab730b8);
  FUN_144dee5d0();
  uVar4 = 1;
  iVar1 = -_DAT_148d7a990;
  if (-_DAT_148d7a990 < 0) {
    iVar1 = _DAT_148d7a990;
  }
  fVar6 = (float)iVar1 * _DAT_14ab49e78;
  cVar3 = func_0x000144dacd70();
  if (cVar3 == '\0') {
    if (DAT_147b95800 == '\0') {
      cVar3 = func_0x000145220e10();
      if ((_DAT_146159e20 < fVar6) || (cVar3 != '\0')) goto LAB_140019e92;
    }
    else if (_DAT_146159e20 < fVar6) goto LAB_140019e92;
    cVar3 = FUN_144f862f0();
    if (cVar3 == '\0') {
      uVar4 = func_0x000144f862d0();
    }
  }
LAB_140019e92:
  DAT_14693f65e = uVar4;
  DAT_147b95800 = func_0x000145220e10();
  return;
}

