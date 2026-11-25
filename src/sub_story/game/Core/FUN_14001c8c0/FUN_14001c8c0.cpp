// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14001c8c0  size: 205 bytes
// Name:    FUN_14001c8c0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140d2ecb0, FUN_140d2ebe0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14001c8c0(longlong *param_1,longlong *param_2,undefined4 param_3)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  byte bStack_21;
  
  iVar3 = (**(code **)(*param_1 + 0xd0))();
  if (((iVar3 == 0) &&
      ((**(code **)(*param_1 + 0x118))(param_1),
      bStack_21 <= *(byte *)((longlong)_DAT_14ab7ef10 + 0x255))) &&
     (lVar4 = (**(code **)(*param_1 + 0x20))(param_1), lVar4 != 0)) {
    lVar4 = *(longlong *)
             (lVar4 + 0x10 + (ulonglong)*(byte *)(lVar4 + 0xc0 + (ulonglong)DAT_14a95df40) * 8);
    lVar1 = *(longlong *)(lVar4 + 0x70);
    if ((lVar1 != 0) && ((ulonglong)*(uint *)(param_2 + 1) != 0)) {
      lVar5 = 0;
      do {
        if (*(int *)(*param_2 + lVar5) == 0x325ec957) {
          cVar2 = FUN_140d2ecb0(lVar1);
          if (cVar2 == '\0') {
            (**(code **)(*_DAT_14ab7ef10 + 0x48))(_DAT_14ab7ef10,lVar4,0);
          }
          FUN_140d2ebe0(lVar1,param_3);
          return;
        }
        lVar5 = lVar5 + 4;
      } while ((ulonglong)*(uint *)(param_2 + 1) << 2 != lVar5);
    }
  }
  return;
}

