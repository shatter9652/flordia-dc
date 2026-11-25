// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140189580  size: 276 bytes
// Name:    FUN_140189580
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140189850, FUN_145042740, FUN_1401899d0, FUN_14517d710
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140189580(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  if (((*(longlong *)(param_2 + 0x80) == 0) ||
      (lVar4 = *(longlong *)(*(longlong *)(param_2 + 0x80) + 0x10), lVar4 == 0)) ||
     (2 < *(uint *)(lVar4 + 0x18))) {
    FUN_145042740(param_1,param_2);
    if ((ulonglong)*(uint *)(param_2 + 0x44) != 0) {
      lVar6 = *(longlong *)(param_2 + 0x48);
      lVar4 = lVar6 + (ulonglong)*(uint *)(param_2 + 0x44) * 4;
      do {
        uVar1 = *(uint *)(lVar4 + -4);
        if (uVar1 != 0x1ffff) {
          uVar5 = *(uint *)(_DAT_14abb6918[5] + (ulonglong)(uVar1 & 0x1ffff) * 4);
          if ((((~uVar5 & *(uint *)(_DAT_14abb6918 + 6)) == 0) &&
              (uVar5 = uVar5 & 0x7fe0000, uVar5 == (uVar1 & 0xfffe0000))) &&
             (lVar2 = *_DAT_14abb6918, lVar2 != 0)) {
            lVar2 = func_0x000144e591d0(*(undefined4 *)
                                         (lVar2 + 0x9c +
                                         (ulonglong)((uVar1 & 0x1ffff) * (int)_DAT_14abb6918[1])),
                                        lVar2,uVar5,0);
            if (lVar2 != 0) {
              FUN_14517d710(lVar2,&uStack_38);
              lVar3 = func_0x0001452a1f30(*(undefined8 *)(param_1 + 0x18),uStack_38,uStack_34);
              if ((lVar3 == 0) || (*(longlong *)(lVar3 + 8) == 0)) {
                FUN_140189850(*(undefined8 *)(param_1 + 8),lVar2);
                FUN_1401899d0(param_2,lVar4);
                lVar6 = *(longlong *)(param_2 + 0x48);
              }
            }
          }
        }
        lVar4 = lVar4 + -4;
      } while (lVar4 != lVar6);
    }
  }
  return;
}

