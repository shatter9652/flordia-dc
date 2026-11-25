// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401179a0  size: 134 bytes
// Name:    FUN_1401179a0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


double FUN_1401179a0(longlong *param_1)

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  double dVar6;
  
  dVar6 = 0.0;
  if ((double)param_1[0x10] < 0.0) {
    dVar2 = (double)param_1[0xe];
    if (dVar2 <= 0.0) {
      return 0.0;
    }
  }
  else {
    dVar2 = (double)(**(code **)(*param_1 + 0x90))(param_1);
    auVar5._8_8_ = 0;
    auVar5._0_8_ = param_1[0x10];
    dVar1 = (double)param_1[0xe];
    auVar4._8_8_ = 0;
    auVar4._0_8_ = dVar1;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = (dVar2 - (double)param_1[0x11]) + (double)param_1[0x10];
    auVar3 = vmaxsd_avx(auVar5,auVar3);
    dVar2 = auVar3._0_8_;
    if (dVar6 < dVar1) {
      if (dVar2 <= 0.0) {
        return dVar1;
      }
      auVar3 = vminsd_avx(auVar3,auVar4);
      return auVar3._0_8_;
    }
  }
  return dVar2;
}

