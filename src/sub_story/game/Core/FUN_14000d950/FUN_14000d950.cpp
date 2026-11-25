// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14000d950  size: 601 bytes
// Name:    FUN_14000d950
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Possible PIC construction at 0x00014000d968: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00014000d98a: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00014000d9ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00014000d9ce: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00014000d9f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00014000da12: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00014000da34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00014000da56: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00014000da78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00014000da9a: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00014000dabc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00014000dade: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00014000db00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00014000db22: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00014000db44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00014000db66: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00014000db88: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00014000db6b) */
/* WARNING: Removing unreachable block (ram,0x00014000db49) */
/* WARNING: Removing unreachable block (ram,0x00014000db27) */
/* WARNING: Removing unreachable block (ram,0x00014000db05) */
/* WARNING: Removing unreachable block (ram,0x00014000dae3) */
/* WARNING: Removing unreachable block (ram,0x00014000dac1) */
/* WARNING: Removing unreachable block (ram,0x00014000da9f) */
/* WARNING: Removing unreachable block (ram,0x00014000da7d) */
/* WARNING: Removing unreachable block (ram,0x00014000da5b) */
/* WARNING: Removing unreachable block (ram,0x00014000da39) */
/* WARNING: Removing unreachable block (ram,0x00014000da17) */
/* WARNING: Removing unreachable block (ram,0x00014000d9f5) */
/* WARNING: Removing unreachable block (ram,0x00014000d9d3) */
/* WARNING: Removing unreachable block (ram,0x00014000d9b1) */
/* WARNING: Removing unreachable block (ram,0x00014000d98f) */
/* WARNING: Removing unreachable block (ram,0x00014000d96d) */
/* WARNING: Removing unreachable block (ram,0x00014000db8d) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14000d950(longlong param_1,float param_2)

{
  param_2 = param_2 / (*(float *)(param_1 + 0x8c) * _DAT_145fc6edc);
  *(byte *)(param_1 + 0x1618) =
       *(byte *)(param_1 + 0x1618) |
       _DAT_145fc6f00 < (float)((uint)(*(float *)(param_1 + 0xa4) - param_2) & _DAT_145fc6f4c);
  *(float *)(param_1 + 0xa4) = param_2;
  return;
}

