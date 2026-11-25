// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14006b1b0  size: 92 bytes
// Name:    FUN_14006b1b0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


char FUN_14006b1b0(longlong param_1,ushort param_2)

{
  char cVar1;
  longlong lVar2;
  undefined1 in_ZMM2 [64];
  undefined1 auVar3 [64];
  
  cVar1 = '\x01';
  if (param_2 != 0) {
    lVar2 = (ulonglong)param_2 * 0xc;
    do {
      lVar2 = lVar2 + -0xc;
      auVar3 = ZEXT1664(in_ZMM2._0_16_);
      cVar1 = func_0x0001431fc620(param_1,in_ZMM2._0_8_);
      if (cVar1 != '\0') {
        return cVar1;
      }
      in_ZMM2 = ZEXT1664(auVar3._0_16_);
      param_1 = param_1 + 0xc;
      cVar1 = '\0';
    } while (lVar2 != 0);
  }
  return cVar1;
}

