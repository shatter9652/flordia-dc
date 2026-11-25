// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400310f0  size: 90 bytes
// Name:    FUN_1400310f0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


char * FUN_1400310f0(char *param_1,char *param_2)

{
  undefined8 uVar1;
  
  if (*param_1 == '\x01') {
    if (param_1 + 0x10 != param_2) {
      uVar1 = *(undefined8 *)(param_2 + 8);
      *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)param_2;
      *(undefined8 *)(param_1 + 0x18) = uVar1;
      *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x10);
      param_1[0x28] = param_2[0x18];
    }
    *(undefined8 *)(param_1 + 0x3d) = *(undefined8 *)(param_2 + 0x2d);
    uVar1 = *(undefined8 *)(param_2 + 0x28);
    *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x20);
    *(undefined8 *)(param_1 + 0x38) = uVar1;
  }
  else {
    *param_1 = '\x01';
    func_0x000140031150(param_1 + 0x10);
  }
  return param_1;
}

