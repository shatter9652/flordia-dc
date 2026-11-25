// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140194110  size: 160 bytes
// Name:    FUN_140194110
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144f8eca0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140194110(char param_1)

{
  code *pcVar1;
  ulonglong uVar2;
  char cVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  if (_DAT_149c3e090 == 0) {
    if (param_1 == '\0') {
      return;
    }
    FUN_144f8eca0();
  }
  func_0x000144da86d0();
  _DAT_149c3e078 = _DAT_149c3e078 + *(longlong *)(_DAT_149c3e070 + (ulonglong)DAT_149c3e0bc * 8);
  lVar4 = FUN_144f8eca0();
  cVar3 = (**(code **)(**(longlong **)(lVar4 + 0x10) + 0x240))(*(longlong **)(lVar4 + 0x10),lVar4);
  uVar2 = _DAT_149c3e0a8;
  if (cVar3 != '\0') {
    DAT_149c3e0c0 = DAT_149c3e0c0 + '\x01';
    if (DAT_149c3e0be == 0xff) {
      DAT_149c3e0be = DAT_149c3e0bc;
    }
    _DAT_149c3e090 = 0;
    DAT_149c3e0bc = 0xff;
    if (param_1 == '\0') {
      DAT_149c3e0bc = 0xff;
      _DAT_149c3e090 = 0;
      return;
    }
    do {
      uVar5 = func_0x000144da86d0();
    } while (uVar5 < uVar2);
    return;
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

