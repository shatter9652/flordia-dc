// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140068800  size: 125 bytes
// Name:    FUN_140068800
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_140068800(longlong param_1,longlong *param_2,longlong param_3)

{
  ushort *puVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  
  lVar2 = *(longlong *)(param_3 + 0x10);
  if ((lVar2 == 0) || (*(short *)(lVar2 + 0x30) == 0)) {
    iVar3 = 0;
  }
  else {
    uVar4 = lVar2 + 0x20;
    iVar5 = 0;
    uVar7 = 0;
    do {
      uVar6 = (int)uVar7 + 1;
      iVar5 = iVar5 + *(int *)(*(longlong *)(uVar4 + 8) + 0x28 + uVar7 * 0x40);
      puVar1 = (ushort *)(uVar4 + 0x10);
      if ((int)(uint)*puVar1 <= (int)uVar6) {
        uVar4 = 0;
      }
      uVar7 = (ulonglong)uVar6;
      if ((int)(uint)*puVar1 <= (int)uVar6) {
        uVar7 = 0;
      }
    } while (((int)uVar7 != 0) || (uVar4 != 0));
    iVar3 = (int)(*(float *)(param_1 + 0x38) * _DAT_146159ef4 *
                 *(float *)(&UNK_146167798 + (ulonglong)(*param_2 == 0) * 4));
    if (iVar5 < iVar3) {
      iVar3 = iVar5;
    }
  }
  return iVar3;
}

