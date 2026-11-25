// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14003db00  size: 62 bytes
// Name:    FUN_14003db00
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


ulonglong FUN_14003db00(longlong param_1,undefined4 param_2,undefined8 *param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 unaff_RSI;
  
  *param_3 = 0;
  lVar2 = func_0x000144fa4e80(*(undefined4 *)(param_1 + 0x9c));
  if (lVar2 != 0) {
    *param_3 = 0;
    lVar1 = *(longlong *)(lVar2 + 0x1e0);
    lVar3 = lVar2;
    if (lVar1 != 0) {
      lVar3 = lVar1;
      lVar2 = FUN_14003dff0(lVar1,param_2,param_3,param_4,unaff_RSI);
    }
    return CONCAT71((int7)((ulonglong)lVar3 >> 8),lVar1 != 0 & (byte)lVar2) & 0xffffffff;
  }
  return 0;
}

