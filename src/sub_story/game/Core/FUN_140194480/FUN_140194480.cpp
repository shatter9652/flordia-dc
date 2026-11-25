// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140194480  size: 73 bytes
// Name:    FUN_140194480
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_140194480(longlong param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [64];
  undefined1 extraout_var [56];
  
  auVar2._0_8_ = func_0x0001401944d0();
  auVar2._8_56_ = extraout_var;
  if (((*(byte *)(param_1 + 0x120) & 1) == 0) && ((*(byte *)(param_1 + 0x4e0) & 2) == 0)) {
    auVar1 = vcmpss_avx(ZEXT416(*(uint *)((ulonglong)DAT_1499fa9ac * 4 + 0x1499fa9a0)),auVar2._0_16_
                        ,1);
    auVar2._0_8_ = (ulonglong)(auVar1._0_4_ & _DAT_145fc6ed8);
  }
  return auVar2._0_8_;
}

