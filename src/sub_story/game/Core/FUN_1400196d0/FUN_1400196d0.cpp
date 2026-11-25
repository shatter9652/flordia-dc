// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400196d0  size: 71 bytes
// Name:    FUN_1400196d0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_143c7f120
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400196d0(longlong param_1)

{
  int *piVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  if ((*(longlong *)(param_1 + 0x50) != 0) && (*(longlong *)(param_1 + 0x70) != 0)) {
    uVar2 = *(uint *)(param_1 + 0x78);
    auVar5._4_4_ = _DAT_14615af58;
    auVar5._0_4_ = _DAT_14615af58;
    auVar5._8_4_ = _DAT_14615af58;
    auVar5._12_4_ = _DAT_14615af58;
    auVar4._0_12_ = ZEXT812(0);
    auVar4._12_4_ = 0;
    auVar4 = vcmpss_avx(ZEXT416(uVar2),auVar4,0);
    auVar4 = vblendvps_avx(ZEXT416(uVar2),auVar5,auVar4);
    FUN_143c7f120(uVar2,auVar4._0_8_);
  }
  FUN_1450e0a60(param_1,1);
  FUN_1450e0950();
  puVar3 = *(undefined8 **)(param_1 + 0x50);
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar3 + 0x45);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar3)(puVar3,1);
    }
    *(undefined8 *)(param_1 + 0x50) = 0;
  }
  return;
}

