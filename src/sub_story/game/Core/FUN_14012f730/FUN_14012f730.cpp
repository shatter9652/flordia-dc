// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14012f730  size: 79 bytes
// Name:    FUN_14012f730
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145309330
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


ulonglong FUN_14012f730(longlong param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  ulonglong uVar5;
  
  iVar1 = *(int *)(param_1 + 0x74);
  iVar4 = iVar1;
  if (0 < iVar1) {
    do {
      uVar5 = (longlong)param_2 % (longlong)iVar1 & 0xffffffff;
      lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x78) + uVar5 * 8) + 0x58);
      cVar3 = FUN_145309330(*(undefined4 *)(lVar2 + 0xc),*(undefined8 *)(lVar2 + 0x10));
      if (cVar3 != '\0') {
        return uVar5;
      }
      param_2 = (int)((longlong)param_2 % (longlong)iVar1) + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return 0xffffffff;
}

