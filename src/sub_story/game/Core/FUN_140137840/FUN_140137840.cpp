// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140137840  size: 94 bytes
// Name:    FUN_140137840
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


ulonglong FUN_140137840(longlong param_1)

{
  char cVar1;
  ulonglong uVar2;
  
  cVar1 = *(char *)(*(longlong *)(param_1 + 8) + 0x1d);
  uVar2 = 8;
  if (cVar1 != '\n') {
    switch(cVar1) {
    case '\0':
    case '\x03':
    case '\x05':
    case '\x06':
    case '\a':
    case '\b':
    case '\f':
      break;
    case '\x01':
    case '\v':
      uVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x28))();
      if (uVar2 < 5) {
        uVar2 = 4;
      }
      break;
    case '\x02':
    case '\x04':
                    /* WARNING: Could not recover jumptable at 0x000140137896. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x28))();
      return uVar2;
    default:
      uVar2 = 0;
    }
  }
  return uVar2;
}

