// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140108d90  size: 119 bytes
// Name:    FUN_140108d90
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Possible PIC construction at 0x000140108dc4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000140108ddc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000140108df1: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000140108de1) */
/* WARNING: Removing unreachable block (ram,0x000140108dc9) */
/* WARNING: Removing unreachable block (ram,0x000140108df6) */

void FUN_140108d90(undefined8 *param_1)

{
  *param_1 = &UNK_1466d1340;
  if ((*(short *)((longlong)param_1 + 0x1a2) != 0) && (param_1[0x33] != 0)) {
    func_0x000144d9c130();
  }
  param_1[0x29] = &UNK_1466d0fd0;
  if (param_1[0x2a] != 0) {
    func_0x000144d9c130();
  }
  param_1[0x2a] = 0;
  *(undefined4 *)(param_1 + 0x2b) = 0;
  return;
}

