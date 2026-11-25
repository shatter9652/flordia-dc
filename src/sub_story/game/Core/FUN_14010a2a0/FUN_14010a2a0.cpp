// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14010a2a0  size: 139 bytes
// Name:    FUN_14010a2a0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144daa2b0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 * FUN_14010a2a0(undefined8 *param_1)

{
  undefined8 uStack_18;
  
  FUN_144daa2b0(param_1 + 1);
  if (DAT_14a943998 == '\x01') {
    func_0x000144dace90(&uStack_18,0);
    param_1[2] = uStack_18;
    func_0x000144dace90(&uStack_18,1);
    param_1[3] = uStack_18;
    func_0x000144dace90(&uStack_18,2);
    param_1[4] = uStack_18;
    func_0x000144dace90(&uStack_18,3);
    param_1[5] = uStack_18;
    func_0x000144dace90(&uStack_18,4);
    param_1[6] = uStack_18;
    *param_1 = 0x41200000;
  }
  return param_1;
}

