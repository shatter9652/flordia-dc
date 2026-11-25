// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400271a0  size: 87 bytes
// Name:    FUN_1400271a0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1400275d0, FUN_140026890
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_1400271a0(longlong param_1,int *param_2,int *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  longlong lVar3;
  
  if ((*param_3 != -3) && (*param_3 = -1, *param_2 != -1)) {
    puVar2 = (undefined4 *)FUN_140026890(*(undefined8 *)(param_1 + 0x20));
    iVar1 = *param_2;
    lVar3 = FUN_1400275d0(*puVar2,*(undefined8 *)(puVar2 + 2),iVar1,*(undefined4 *)(param_1 + 0x50))
    ;
    if (lVar3 != 0) {
      *param_3 = iVar1;
      return 1;
    }
  }
  return 0;
}

