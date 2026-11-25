// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400bc5a0  size: 152 bytes
// Name:    FUN_1400bc5a0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1400bc640, FUN_1400bc7a0, FUN_1456a5090
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_1400bc5a0(longlong param_1,ulonglong param_2,undefined8 param_3)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  
  while ((*(int *)(param_1 + 0x3948) != 0 &&
         (bVar1 = *(char *)(param_1 + 0x395c) + 1, *(byte *)(param_1 + 0x395c) = bVar1, bVar1 < 6)))
  {
    iVar3 = FUN_1400bc7a0(param_1,param_2);
    if (iVar3 == 2) break;
    if (iVar3 == 0) {
      return 0;
    }
    param_2 = param_2 & 0xffffffff;
    if (iVar3 == 1) {
      return 1;
    }
  }
  *(undefined4 *)(param_1 + 0x3954) = 0xfffffff0;
  if ((*(int *)(param_1 + 0x3948) != 0) &&
     (cVar2 = FUN_1456a5090(*(undefined8 *)(param_1 + 0x3960),param_3), cVar2 != '\0')) {
    return 1;
  }
  FUN_1400bc640(param_1,param_3);
  return 1;
}

