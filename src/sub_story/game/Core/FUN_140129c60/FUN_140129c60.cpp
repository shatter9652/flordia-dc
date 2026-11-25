// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140129c60  size: 221 bytes
// Name:    FUN_140129c60
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140129f60, FUN_140129d40, FUN_140129e40, FUN_14012a0d0, FUN_14381a360
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140129c60(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = func_0x0001450572a0(*(undefined4 *)(param_2 + 0x9c));
  if (lVar2 != 0) {
    FUN_140129e40(lVar2,param_1);
    FUN_140129f60(lVar2,param_1);
    FUN_14012a0d0(lVar2,param_1);
    FUN_140129d40(lVar2,param_1);
  }
  uVar1 = *(uint *)(param_1 + 0x24);
  if (uVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x28);
    lVar3 = lVar2;
    do {
      if (*(char *)(lVar3 + 0x45) == '\0') {
        if (((*(byte *)(lVar3 + 0x44) & 1) == 0) && (*(char *)(lVar3 + 0x46) != '\0'))
        goto LAB_140129cdb;
        lVar3 = lVar3 + 0x48;
      }
      else {
        if ((*(byte *)(lVar3 + 0x44) & 1) != 0) {
          FUN_14381a360(param_2,lVar3);
        }
LAB_140129cdb:
        if (*(char *)(lVar3 + 0x38) == '\x01') {
          *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + -1;
        }
        if (*(int *)(lVar3 + 4) - 1U < 2) {
          *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -1;
        }
        func_0x000145f40570(lVar3,lVar3 + 0x48,
                            ((ulonglong)*(uint *)(param_1 + 0x24) * 0x48 +
                            *(longlong *)(param_1 + 0x28)) - (lVar3 + 0x48));
        uVar1 = *(int *)(param_1 + 0x24) - 1;
        *(uint *)(param_1 + 0x24) = uVar1;
        lVar2 = *(longlong *)(param_1 + 0x28);
      }
    } while (lVar3 != lVar2 + (ulonglong)uVar1 * 0x48);
  }
  return;
}

