// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401275f0  size: 135 bytes
// Name:    FUN_1401275f0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140628580
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1401275f0(longlong param_1)

{
  int iVar1;
  double *pdVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  double dVar5;
  
  dVar5 = *(double *)(param_1 + 0x80);
  if ((dVar5 < 0.0) ||
     (pdVar2 = (double *)func_0x0001451d3c40(*(undefined2 *)(*(longlong *)(param_1 + 0x78) + 8)),
     pdVar2 == (double *)0x0)) {
    lVar3 = func_0x00014546afb0(*(undefined8 *)(param_1 + 0xa8));
    if (lVar3 == 0) {
      return *(undefined8 *)(param_1 + 0x88);
    }
    iVar1 = FUN_140628580(lVar3);
    dVar5 = (double)iVar1 * _DAT_14615bcc0;
  }
  else {
    dVar5 = (*pdVar2 - dVar5) + *(double *)(param_1 + 0x88);
  }
  auVar4._8_8_ = 0;
  auVar4._0_8_ = dVar5;
  auVar4 = vmaxsd_avx(ZEXT816(0),auVar4);
  return auVar4._0_8_;
}

