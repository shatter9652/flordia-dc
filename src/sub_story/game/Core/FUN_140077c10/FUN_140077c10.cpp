// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140077c10  size: 267 bytes
// Name:    FUN_140077c10
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1404c8910, FUN_140cde330, FUN_1401899d0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140077c10(longlong *param_1)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  longlong lVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  
  if ((ulonglong)*(uint *)((longlong)param_1 + 0x44) != 0) {
    lVar4 = param_1[9];
    lVar6 = lVar4 + (ulonglong)*(uint *)((longlong)param_1 + 0x44) * 4;
    do {
      uVar1 = *(uint *)(lVar6 + -4);
      if (uVar1 != 0x1ffff) {
        uVar2 = *(uint *)(_DAT_14abb6918[5] + (ulonglong)(uVar1 & 0x1ffff) * 4);
        if ((((~uVar2 & *(uint *)(_DAT_14abb6918 + 6)) == 0) &&
            ((uVar2 & 0x7fe0000) == (uVar1 & 0xfffe0000))) && (*_DAT_14abb6918 != 0)) {
          lVar7 = *_DAT_14abb6918 + (ulonglong)((uVar1 & 0x1ffff) * (int)_DAT_14abb6918[1]);
          uVar5 = *(undefined4 *)(lVar7 + 0x9c);
          lVar4 = func_0x000144e59150(uVar5);
          if (lVar4 == 0) {
LAB_140077d05:
            lVar4 = func_0x000144e591d0(uVar5);
            if (lVar4 != 0) {
              func_0x0001406efd30(lVar4);
            }
          }
          else {
            cVar3 = FUN_1404c8910(*(undefined8 *)(lVar4 + 8),1,1,0,0,0,0);
            if (cVar3 == '\0') {
              uVar5 = *(undefined4 *)(lVar7 + 0x9c);
              goto LAB_140077d05;
            }
            FUN_140cde330(lVar7,0);
          }
          FUN_1401899d0(param_1,lVar6);
          lVar4 = param_1[9];
        }
      }
      lVar6 = lVar6 + -4;
    } while (lVar6 != lVar4);
  }
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
                    /* WARNING: Could not recover jumptable at 0x000140077c36. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x48))();
  return;
}

