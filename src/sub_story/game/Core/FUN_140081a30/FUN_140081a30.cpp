// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140081a30  size: 144 bytes
// Name:    FUN_140081a30
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_142dc4350
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_140081a30(undefined8 param_1,int param_2,undefined4 param_3,undefined1 param_4,
             undefined1 param_5)

{
  longlong lVar1;
  float fStack_30;
  int iStack_2c;
  
  lVar1 = func_0x000144f68b80();
  if (lVar1 != 0) {
    if (param_2 == 0) {
      func_0x000140019da0(*(undefined4 *)(lVar1 + 0xcc00),&iStack_2c);
      param_2 = iStack_2c;
    }
    fStack_30 = 0.0;
    lVar1 = FUN_142dc4350(lVar1,param_2,&fStack_30,param_3,param_4,param_5);
    if ((lVar1 != 0) && (_DAT_145fc6edc <= fStack_30)) {
      return 3;
    }
  }
  return 1;
}

