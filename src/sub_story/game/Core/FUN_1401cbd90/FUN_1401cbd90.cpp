// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401cbd90  size: 178 bytes
// Name:    FUN_1401cbd90
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140d6aeb0, FUN_1401179a0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_1401cbd90(longlong param_1,undefined8 param_2)

{
  double dVar1;
  longlong lVar2;
  longlong lVar3;
  double *pdVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  lVar2 = FUN_140d6aeb0();
  if ((lVar2 == 0) && (lVar2 = func_0x000140bb1380(_DAT_14ab5cdf8,param_2), lVar2 == 0)) {
    return 0.0;
  }
  lVar3 = func_0x000145103000(param_1);
  if (lVar3 != 0) {
    dVar5 = (double)FUN_1401179a0(lVar3);
    dVar7 = 0.0;
    if ((dVar5 <= 0.0) &&
       (dVar7 = 0.0, pdVar4 = (double *)func_0x000140321bf0(*(undefined2 *)(param_1 + 8)),
       pdVar4 != (double *)0x0)) {
      dVar5 = *pdVar4;
    }
    if (dVar7 < dVar5) {
      dVar7 = *(double *)(lVar2 + 0x40);
      if ((dVar7 == _UNK_14615a8f0) && (!NAN(dVar7) && !NAN(_UNK_14615a8f0))) {
        return dVar5 + *(double *)(lVar2 + 0x50);
      }
      dVar1 = *(double *)(lVar2 + 0x48);
      if (((dVar1 != _UNK_14615a8f0) || (dVar6 = 0.0, NAN(dVar1) || NAN(_UNK_14615a8f0))) &&
         (dVar6 = 0.0, dVar7 < dVar1)) {
        dVar6 = (dVar5 - dVar1) + *(double *)(lVar2 + 0x50);
      }
      return dVar6;
    }
  }
  return 0.0;
}

