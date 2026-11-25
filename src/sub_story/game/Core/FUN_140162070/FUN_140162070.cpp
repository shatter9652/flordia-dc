// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140162070  size: 102 bytes
// Name:    FUN_140162070
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_140162070(longlong *param_1,uint param_2)

{
  ulonglong uVar1;
  
  if ((((param_2 & 0x3e0000) == 0x60000) &&
      (uVar1 = (ulonglong)
               *(ushort *)
                (_DAT_14abbeed8 + (ulonglong)((param_2 & 0x1ffff) * _DAT_14abbeecc + 0x36) * 2),
      uVar1 != 0xffff)) && (*(longlong *)(_DAT_14abbeee8 + 0x360) != 0)) {
    (**(code **)(*param_1 + 0x10))
              (param_1,param_2,
               *(longlong *)(_DAT_14abbeee8 + 0x360) + uVar1 * *(longlong *)(_DAT_14abbeee8 + 0x368)
              );
    return 1;
  }
  return 0;
}

