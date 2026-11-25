// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401280a0  size: 144 bytes
// Name:    FUN_1401280a0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1401272f0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401280a0(longlong param_1)

{
  ulonglong uVar1;
  double dVar2;
  undefined8 uStack_28;
  undefined4 uStack_20;
  undefined1 uStack_1c;
  
  dVar2 = (double)func_0x0001409d2080(*(undefined8 *)(param_1 + 0x5b8));
  if ((double)*(uint *)(param_1 + 0x590) * _DAT_14615bcc0 + *(double *)(param_1 + 0x580) <= dVar2) {
    if (*(int *)(param_1 + 0x554) != 0) {
      uVar1 = 0;
      do {
        uStack_28 = 0;
        uStack_20 = 0;
        uStack_1c = 0;
        FUN_1401272f0(*(undefined8 *)(*(longlong *)(param_1 + 0x558) + uVar1 * 8),&uStack_28);
        uVar1 = uVar1 + 1;
      } while (uVar1 < *(uint *)(param_1 + 0x554));
    }
    func_0x000140127860(param_1);
  }
  return;
}

