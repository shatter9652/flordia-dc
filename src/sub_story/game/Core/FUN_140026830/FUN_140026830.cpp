// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140026830  size: 88 bytes
// Name:    FUN_140026830
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140026e80, FUN_140026890
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_140026830(longlong param_1,int *param_2,int *param_3)

{
  int iVar1;
  longlong lVar2;
  
  if ((*param_3 != -3) && (*param_3 = -1, *param_2 != -1)) {
    lVar2 = FUN_140026890(*(undefined8 *)(param_1 + 0x20));
    iVar1 = *param_2;
    lVar2 = FUN_140026e80(*(undefined4 *)(lVar2 + 0x10),*(undefined8 *)(lVar2 + 0x18),iVar1,
                          *(undefined4 *)(param_1 + 0x60));
    if (lVar2 != 0) {
      *param_3 = iVar1;
      return 1;
    }
  }
  return 0;
}

