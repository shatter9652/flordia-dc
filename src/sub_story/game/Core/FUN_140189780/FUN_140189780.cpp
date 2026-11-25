// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140189780  size: 208 bytes
// Name:    FUN_140189780
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140189850, FUN_1401899d0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_140189780(longlong param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  
  iVar3 = 0;
  if (*(longlong *)(param_1 + 8) != 0) {
    (**(code **)(*param_2 + 0x48))(param_2);
    iVar3 = 0;
    if ((ulonglong)*(uint *)((longlong)param_2 + 0x44) != 0) {
      lVar6 = param_2[9];
      iVar3 = 0;
      lVar5 = lVar6 + (ulonglong)*(uint *)((longlong)param_2 + 0x44) * 4;
      do {
        uVar1 = *(uint *)(lVar5 + -4);
        if (uVar1 != 0x1ffff) {
          uVar4 = *(uint *)(_DAT_14abb6918[5] + (ulonglong)(uVar1 & 0x1ffff) * 4);
          if ((((~uVar4 & *(uint *)(_DAT_14abb6918 + 6)) == 0) &&
              (uVar4 = uVar4 & 0x7fe0000, uVar4 == (uVar1 & 0xfffe0000))) &&
             (lVar2 = *_DAT_14abb6918, lVar2 != 0)) {
            lVar2 = func_0x000144e591d0(*(undefined4 *)
                                         (lVar2 + 0x9c +
                                         (ulonglong)((uVar1 & 0x1ffff) * (int)_DAT_14abb6918[1])),
                                        lVar2,uVar4,0);
            if (lVar2 != 0) {
              FUN_140189850(*(undefined8 *)(param_1 + 8),lVar2);
              FUN_1401899d0(param_2,lVar5);
              lVar6 = param_2[9];
              iVar3 = iVar3 + 1;
            }
          }
        }
        lVar5 = lVar5 + -4;
      } while (lVar5 != lVar6);
    }
  }
  return iVar3;
}

