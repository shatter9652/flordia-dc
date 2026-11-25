// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14006ceb0  size: 140 bytes
// Name:    FUN_14006ceb0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145150550
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14006ceb0(undefined8 *param_1,undefined1 (*param_2) [16])

{
  undefined1 auVar1 [16];
  int *piVar2;
  undefined1 auVar3 [16];
  undefined1 auStack_18 [16];
  
  if ((_DAT_14ab464d0 != 0) &&
     (piVar2 = *(int **)(_DAT_14ab464c8 + (0x5d4f5e65U % (ulonglong)_DAT_14ab464d0) * 8),
     piVar2 != (int *)0x0)) {
    auStack_18 = *param_2;
    do {
      if (*piVar2 == 0x5d4f5e65) {
        auVar1 = vshufpd_avx(auStack_18,auStack_18,1);
        auVar3._0_12_ = ZEXT812(0);
        auVar3._12_4_ = 0;
        auVar3 = vcmpss_avx(ZEXT416((uint)piVar2[0x31]),auVar3,4);
        FUN_145150550(piVar2 + 4,param_1,auStack_18,
                      CONCAT44(auVar3._4_4_ & auVar1._4_4_,
                               auVar3._0_4_ & (uint)(auVar1._0_4_ / (float)piVar2[0x31])));
        return;
      }
      piVar2 = *(int **)(piVar2 + 0x40);
    } while (piVar2 != (int *)0x0);
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}

