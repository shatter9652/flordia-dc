// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400733d0  size: 72 bytes
// Name:    FUN_1400733d0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400733d0(undefined1 (*param_1) [16])

{
  undefined1 in_XMM3 [16];
  
  vinsertps_avx(*param_1,in_XMM3,0x2b);
  func_0x000140073420();
  return;
}

