// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400c37e0  size: 155 bytes
// Name:    FUN_1400c37e0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400c37e0(longlong param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  
  uVar1 = *(uint *)(param_1 + 0x24);
  if ((ulonglong)uVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x28);
    lVar3 = 0;
    do {
      if (*param_2 == 0) {
        (*(code *)param_2[1])(6,*(undefined8 *)(lVar2 + lVar3));
      }
      else {
        (*(code *)param_2[1])(*param_2,6);
      }
      lVar3 = lVar3 + 8;
    } while ((ulonglong)uVar1 << 3 != lVar3);
  }
  uVar1 = *(uint *)(param_1 + 0x3c);
  if ((ulonglong)uVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x40);
    lVar3 = 0;
    do {
      if (*param_2 == 0) {
        (*(code *)param_2[1])(6,*(undefined8 *)(lVar2 + lVar3));
      }
      else {
        (*(code *)param_2[1])(*param_2,6);
      }
      lVar3 = lVar3 + 8;
    } while ((ulonglong)uVar1 << 3 != lVar3);
  }
  return;
}

