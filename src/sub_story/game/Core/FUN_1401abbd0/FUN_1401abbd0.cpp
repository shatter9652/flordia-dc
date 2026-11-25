// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401abbd0  size: 363 bytes
// Name:    FUN_1401abbd0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1401abe80, FUN_140f980c0, FUN_140c1c410, FUN_1401abd40, FUN_1401aa530, FUN_1437eb750
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401abbd0(longlong param_1,undefined4 param_2)

{
  uint uVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  longlong lVar5;
  byte bVar6;
  undefined8 unaff_RBP;
  uint uVar7;
  
  uVar1 = *(uint *)(param_1 + 0x20);
  if (uVar1 != 0x1ffff) {
    uVar7 = *(uint *)(_DAT_14abb6918[5] + (ulonglong)(uVar1 & 0x1ffff) * 4);
    if ((((~uVar7 & *(uint *)(_DAT_14abb6918 + 6)) == 0) &&
        (uVar7 = uVar7 & 0x7fe0000, uVar7 == (uVar1 & 0xfffe0000))) &&
       (lVar5 = *_DAT_14abb6918, lVar5 != 0)) {
      lVar5 = func_0x0001454dcdb0(*(undefined4 *)
                                   (lVar5 + 0x9c +
                                   (ulonglong)((uVar1 & 0x1ffff) * (int)_DAT_14abb6918[1])),lVar5,
                                  uVar7,0);
      bVar6 = *(byte *)(param_1 + 0x92);
      if (lVar5 == 0) {
        *(byte *)(param_1 + 0x92) = bVar6 & 0xc3;
      }
      else {
        cVar2 = func_0x0001400c3df0(CONCAT71((int7)((ulonglong)unaff_RBP >> 8),bVar6) & 0xffffffff);
        if (cVar2 != '\0') {
          if (((bVar6 & 8) != 0) && (cVar2 = FUN_140f980c0(lVar5,0x7dd27eab), cVar2 == '\0')) {
            *(byte *)(param_1 + 0x92) = *(byte *)(param_1 + 0x92) & 0xc3;
            return;
          }
          iVar4 = FUN_1401abd40(param_1,param_2);
          bVar6 = *(byte *)(param_1 + 0x92);
          if ((bVar6 & 8) == 0 &&
              (iVar4 != *(int *)(param_1 + 0x68) && *(int *)(param_1 + 0x68) != 0x9a36f4b)) {
            FUN_140c1c410(lVar5,0x7dd27eab);
            FUN_1401abe80(lVar5,0x7dd27eab,iVar4);
            *(int *)(param_1 + 0x68) = iVar4;
            bVar6 = *(byte *)(param_1 + 0x92);
          }
          bVar3 = FUN_1401aa530(param_1);
          if (((bVar6 & 8) == 0) && (bVar3 != (*(byte *)(param_1 + 0x94) & 1))) {
            if (bVar3 == 0) {
              FUN_1437eb750(lVar5,0x7dd27eab,0xd34253f0);
            }
            else {
              FUN_1401abe80();
            }
            *(byte *)(param_1 + 0x94) = *(byte *)(param_1 + 0x94) & 0xfe | bVar3;
          }
        }
      }
    }
  }
  return;
}

