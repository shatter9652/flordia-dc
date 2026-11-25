// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401892f0  size: 315 bytes
// Name:    FUN_1401892f0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1450420c0, FUN_14517d710, FUN_1406deca0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401892f0(longlong param_1,longlong *param_2)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  int iStack_60;
  int iStack_5c;
  undefined1 auStack_58 [24];
  
  if ((*(char *)((longlong)param_2 + 0x79) == '\0') && ((ulonglong)*(uint *)(param_1 + 0xb4) != 0))
  {
    lVar4 = (ulonglong)*(uint *)(param_1 + 0xb4) * 4 + *(longlong *)(param_1 + 0xb8);
    lVar5 = lVar4;
    do {
      uVar1 = *(uint *)(lVar5 + -4);
      if (uVar1 != 0x1ffff) {
        uVar6 = *(uint *)(_DAT_14abb6918[5] + (ulonglong)(uVar1 & 0x1ffff) * 4);
        if ((~uVar6 & *(uint *)(_DAT_14abb6918 + 6)) == 0) {
          uVar6 = uVar6 & 0x7fe0000;
          if ((uVar6 == (uVar1 & 0xfffe0000)) && (*_DAT_14abb6918 != 0)) {
            lVar7 = *_DAT_14abb6918 + (ulonglong)((uVar1 & 0x1ffff) * (int)_DAT_14abb6918[1]);
            lVar3 = func_0x000144e591d0(*(undefined4 *)(lVar7 + 0x9c),uVar1 & 0xfffe0000,uVar6,0);
            if (lVar3 != 0) {
              FUN_14517d710(lVar3,&iStack_60);
              if (*(int *)(param_1 + 0x40) == 0x7fffffff) {
                if (iStack_60 == 0x7fffffff) goto LAB_1401893c4;
              }
              else if ((*(int *)(param_1 + 0x40) == iStack_60) &&
                      (*(int *)(param_1 + 0x44) == iStack_5c)) {
LAB_1401893c4:
                FUN_1450420c0(auStack_58,lVar7);
                cVar2 = FUN_1406deca0(param_2,auStack_58);
                if ((cVar2 != '\0') &&
                   (cVar2 = (**(code **)(*param_2 + 0x48))(param_2,lVar3), cVar2 != '\0')) {
                  func_0x000140188d30(param_1,lVar4);
                }
              }
            }
          }
        }
      }
      lVar5 = lVar5 + -4;
      lVar4 = lVar4 + -4;
    } while (lVar5 != *(longlong *)(param_1 + 0xb8));
  }
  return;
}

