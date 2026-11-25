// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400f0860  size: 239 bytes
// Name:    FUN_1400f0860
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1400f0950, FUN_144f7ea10
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400f0860(undefined8 *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  lVar3 = FUN_1400f0950(param_1 + 0x1b,param_1);
  param_1[0x11] = lVar3;
  if ((lVar3 != 0) && (*(int *)(param_1 + 1) == 0)) {
    dVar8 = (double)param_1[0xe];
    dVar9 = ((double)param_1[0xd] - (double)param_1[0xb]) + _DAT_14615a960;
    dVar6 = (dVar8 - (double)param_1[0xc]) + _DAT_14615a960;
    dVar7 = (double)param_1[0xb] - dVar9;
    dVar9 = dVar9 + (double)param_1[0xd];
    FUN_144f7ea10(param_1,dVar7,dVar9,(double)param_1[0xc] - dVar6);
    if (*(int *)(param_1 + 1) != 0) {
      return;
    }
    dVar6 = dVar6 + dVar8;
    plVar4 = (longlong *)FUN_144e76c40(param_1[0x14]);
    if ((plVar4 != (longlong *)0x0) &&
       (lVar5 = FUN_144e76c80(*param_1), lVar2 = _UNK_14615e638, lVar3 = _UNK_14615e630, lVar5 != 0)
       ) {
      lVar1 = *(longlong *)(lVar5 + 0x20);
      *(double *)(lVar1 + 0x30) = dVar9;
      *(double *)(lVar1 + 0x38) = dVar6;
      lVar1 = *(longlong *)(*(longlong *)(lVar5 + 8) + 0x20);
      *(double *)(lVar1 + 0x30) = dVar7;
      *(double *)(lVar1 + 0x38) = dVar6;
      param_1[0x13] = lVar1;
      *plVar4 = lVar5;
      *(undefined4 *)(plVar4 + 4) = 0;
      plVar4[2] = lVar3;
      plVar4[3] = lVar2;
      lVar3 = FUN_144f7d2d0(param_1[0x11],param_1[0x11],plVar4);
      plVar4[1] = lVar3;
      if (lVar3 != 0) {
        return;
      }
    }
    *(undefined4 *)(param_1 + 1) = 1;
    return;
  }
  *(undefined4 *)(param_1 + 1) = 1;
  return;
}

