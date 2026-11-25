// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14007afe0  size: 151 bytes
// Name:    FUN_14007afe0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Possible PIC construction at 0x00014007b018: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00014007b01d) */
/* WARNING: Removing unreachable block (ram,0x000140078540) */
/* WARNING: Removing unreachable block (ram,0x000140078547) */
/* WARNING: Removing unreachable block (ram,0x00014007855e) */

void FUN_14007afe0(longlong param_1,float param_2)

{
  ushort uVar1;
  int *piVar2;
  int *piVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  uVar1 = *(ushort *)(param_1 + 0x28);
  if ((short)uVar1 < 0) {
    return;
  }
  if (-1 < (short)uVar1) {
    uVar4 = (ulonglong)*(uint *)((ulonglong)uVar1 * 0x18 + 0x14a9240ec);
    if (uVar4 != 0) {
      piVar2 = *(int **)((ulonglong)uVar1 * 0x18 + 0x14a9240f0);
      lVar5 = uVar4 << 3;
      piVar3 = piVar2;
      do {
        if (*piVar3 == 0x3dd2c9e3) {
          if (((ulonglong)((longlong)piVar3 - (longlong)piVar2) >> 0x22 & 1) != 0) {
            return;
          }
          *(float *)((longlong)piVar2 + ((longlong)piVar3 - (longlong)piVar2 & 0x3fffffff8U) + 4) =
               ((*(float *)(param_1 + 0x68) - *(float *)(param_1 + 100)) * param_2 +
               *(float *)(param_1 + 100)) * *(float *)(param_1 + 0x70);
          return;
        }
        piVar3 = piVar3 + 2;
        lVar5 = lVar5 + -8;
      } while (lVar5 != 0);
    }
    return;
  }
  return;
}

