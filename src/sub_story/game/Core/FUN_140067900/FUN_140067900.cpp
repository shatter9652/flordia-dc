// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140067900  size: 135 bytes
// Name:    FUN_140067900
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_140067900(longlong param_1,longlong *param_2,longlong param_3)

{
  ushort uVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  
  if (*param_2 == 0) {
    iVar3 = 0x48;
  }
  else {
    iVar3 = (int)((float)*(int *)(*param_2 + 0x9000) * _DAT_146159cc4);
  }
  uVar1 = *(ushort *)(*(longlong *)(param_3 + 8) + 0x20);
  if (uVar1 == 0) {
    iVar4 = 0;
  }
  else {
    lVar2 = *(longlong *)(*(longlong *)(param_3 + 8) + 0x18);
    lVar5 = 0;
    iVar4 = 0;
    do {
      if (*(int *)(lVar2 + 0x48 + lVar5) == 2 - (uint)*(byte *)(param_1 + 0x40)) {
        uVar6 = *(int *)(lVar2 + 0x30 + lVar5) - *(int *)(lVar2 + 0x34 + lVar5);
        iVar4 = iVar4 + (~((int)uVar6 >> 0x1f) & uVar6);
      }
      lVar5 = lVar5 + 0x50;
    } while ((ulonglong)uVar1 * 0x50 != lVar5);
  }
  if (iVar4 < iVar3) {
    iVar3 = iVar4;
  }
  return iVar3;
}

