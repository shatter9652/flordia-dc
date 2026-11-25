// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14019e410  size: 177 bytes
// Name:    FUN_14019e410
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Possible PIC construction at 0x00014019e476: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00014019e47b) */

void FUN_14019e410(longlong param_1,longlong param_2,ushort *param_3,int *param_4)

{
  ushort uVar1;
  uint uVar2;
  longlong lVar3;
  ushort uVar4;
  short sVar5;
  uint uVar6;
  
  uVar1 = *param_3;
  uVar2 = *(uint *)(param_2 + 4);
  uVar6 = (uint)uVar1;
  if ((int)(uint)uVar1 <= (int)uVar2) {
    sVar5 = 0;
    uVar4 = uVar1;
    do {
      if (((uVar2 == uVar6) ||
          (lVar3 = *(longlong *)(*(longlong *)(param_2 + 8) + (ulonglong)uVar4 * 8),
          *param_4 != *(int *)(lVar3 + 0x2c))) || (*(int *)(*(longlong *)(lVar3 + 8) + 0xb0) != 0))
      {
        *(ushort *)(param_1 + 0x20) = uVar1;
        *(short *)(param_1 + 0x22) = sVar5;
        return;
      }
      uVar4 = uVar4 + 1;
      sVar5 = sVar5 + 1;
      uVar6 = (uint)uVar4;
      *param_3 = uVar4;
    } while (uVar6 <= uVar2);
  }
  return;
}

