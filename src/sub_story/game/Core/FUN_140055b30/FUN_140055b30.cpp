// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140055b30  size: 242 bytes
// Name:    FUN_140055b30
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140055c30
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140055b30(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  
  FUN_140055c30();
  cVar1 = (**(code **)(*param_1 + 0x20))(param_1);
  if (cVar1 != '\0') {
    func_0x00014588b770(_DAT_14ab5cdf8,0x77e9145,(int)param_1[0x71]);
  }
  lVar2 = func_0x000144da31b0(param_1 + 0x67);
  if (lVar2 == 0) {
    lVar2 = func_0x000144da31b0(param_1 + 0x68);
    if (lVar2 == 0) {
      lVar2 = func_0x000144da31b0(param_1 + 0x69);
      if (lVar2 == 0) {
        lVar2 = func_0x000144da31b0(param_1 + 0x6a);
        if (lVar2 == 0) {
          lVar2 = func_0x000144da31b0(param_1 + 0x6b);
          if (lVar2 == 0) {
            lVar2 = func_0x000144da31b0(param_1 + 0x6c);
            if (lVar2 == 0) {
              lVar2 = func_0x000144da31b0(param_1 + 0x6d);
              if (lVar2 == 0) {
                lVar2 = func_0x000144da31b0(param_1 + 0x6e);
                if (lVar2 == 0) {
                  lVar2 = func_0x000144da31b0(param_1 + 0x6f);
                  if (lVar2 == 0) {
                    *(undefined4 *)((longlong)param_1 + 0x38c) = 0;
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return;
}

