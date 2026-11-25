// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401bcbf0  size: 62 bytes
// Name:    FUN_1401bcbf0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


longlong FUN_1401bcbf0(longlong param_1)

{
  longlong lVar1;
  
  if (((param_1 != 0) && ((*(byte *)(param_1 + 0x154) & 1) != 0)) &&
     (*(longlong *)(param_1 + 0x48) != 0)) {
    lVar1 = func_0x000144db7a10(*(undefined4 *)(*(longlong *)(param_1 + 0x48) + 0x9c));
    if (lVar1 != 0) {
      func_0x0001401bcc70(*(undefined8 *)(*(longlong *)(lRam000000014a210c48 + 0x440) + 0x58),lVar1)
      ;
      return lVar1 + 0x29c;
    }
  }
  return 0;
}

