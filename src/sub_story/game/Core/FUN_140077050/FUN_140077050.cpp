// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140077050  size: 180 bytes
// Name:    FUN_140077050
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1401899d0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140077050(longlong *param_1)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  
  if ((ulonglong)*(uint *)((longlong)param_1 + 0x44) != 0) {
    lVar3 = param_1[9];
    lVar4 = lVar3 + (ulonglong)*(uint *)((longlong)param_1 + 0x44) * 4;
    do {
      uVar1 = *(uint *)(lVar4 + -4);
      if (uVar1 != 0x1ffff) {
        uVar2 = *(uint *)(_DAT_14abb6918[5] + (ulonglong)(uVar1 & 0x1ffff) * 4);
        if ((((~uVar2 & *(uint *)(_DAT_14abb6918 + 6)) == 0) &&
            ((uVar2 & 0x7fe0000) == (uVar1 & 0xfffe0000))) && (*_DAT_14abb6918 != 0)) {
          lVar3 = func_0x000144e591d0(*(undefined4 *)
                                       (*_DAT_14abb6918 + 0x9c +
                                       (ulonglong)((uVar1 & 0x1ffff) * (int)_DAT_14abb6918[1])));
          if (lVar3 != 0) {
            func_0x0001406efd30(lVar3);
          }
          FUN_1401899d0(param_1,lVar4);
          lVar3 = param_1[9];
        }
      }
      lVar4 = lVar4 + -4;
    } while (lVar4 != lVar3);
  }
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
                    /* WARNING: Could not recover jumptable at 0x00014007706e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x48))();
  return;
}

