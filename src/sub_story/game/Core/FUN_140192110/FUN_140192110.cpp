// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140192110  size: 116 bytes
// Name:    FUN_140192110
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_140192110(undefined4 *param_1)

{
  longlong unaff_GS_OFFSET;
  undefined1 auVar1 [16];
  
  auVar1._0_12_ = ZEXT812(0);
  auVar1._12_4_ = 0;
  *param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 2) = auVar1;
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    func_0x0001455db994();
  }
  if (*(longlong *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1448) == 0) {
    param_1[6] = 0;
  }
  param_1[7] = 0xffffffff;
  func_0x000140192220(param_1 + 8);
  *(undefined1 *)(param_1 + 0x16) = 0;
  return param_1;
}

