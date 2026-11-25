// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400936b0  size: 559 bytes
// Name:    FUN_1400936b0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140093bb0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Possible PIC construction at 0x0001400936df: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001400936e4) */
/* WARNING: Removing unreachable block (ram,0x000140093702) */
/* WARNING: Removing unreachable block (ram,0x00014009372a) */
/* WARNING: Removing unreachable block (ram,0x000140093737) */
/* WARNING: Removing unreachable block (ram,0x000140093742) */
/* WARNING: Removing unreachable block (ram,0x00014009374b) */
/* WARNING: Removing unreachable block (ram,0x00014009385b) */
/* WARNING: Removing unreachable block (ram,0x00014009385f) */
/* WARNING: Removing unreachable block (ram,0x000140093864) */
/* WARNING: Removing unreachable block (ram,0x00014009376f) */
/* WARNING: Removing unreachable block (ram,0x0001400938c1) */
/* WARNING: Removing unreachable block (ram,0x000140093777) */
/* WARNING: Removing unreachable block (ram,0x00014009378b) */
/* WARNING: Removing unreachable block (ram,0x00014009387d) */
/* WARNING: Removing unreachable block (ram,0x000140093881) */
/* WARNING: Removing unreachable block (ram,0x000140093886) */
/* WARNING: Removing unreachable block (ram,0x0001400937b8) */
/* WARNING: Removing unreachable block (ram,0x0001400938cb) */
/* WARNING: Removing unreachable block (ram,0x0001400937c0) */
/* WARNING: Removing unreachable block (ram,0x0001400937d4) */
/* WARNING: Removing unreachable block (ram,0x00014009389f) */
/* WARNING: Removing unreachable block (ram,0x0001400938a3) */
/* WARNING: Removing unreachable block (ram,0x0001400938a8) */
/* WARNING: Removing unreachable block (ram,0x000140093801) */
/* WARNING: Removing unreachable block (ram,0x0001400938d5) */
/* WARNING: Removing unreachable block (ram,0x000140093809) */
/* WARNING: Removing unreachable block (ram,0x00014009381d) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400936b0(int param_1,int param_2)

{
  if (param_1 != 0 && param_2 != 0) {
    return;
  }
  if (param_1 == 0) {
    LOCK();
    _DAT_149095b08 = _DAT_149095b08 + 1;
    UNLOCK();
    LOCK();
    _DAT_148562620 = _DAT_148562620 + 1;
    UNLOCK();
    if (DAT_146c6fa55 != '\x01') {
      return;
    }
    DAT_146c6fa55 = 0;
  }
  else {
    LOCK();
    _DAT_148562620 = _DAT_148562620 + -1;
    UNLOCK();
    DAT_146c6fa55 = 1;
    LOCK();
    _DAT_149095b08 = _DAT_149095b08 + -1;
    UNLOCK();
  }
  return;
}

