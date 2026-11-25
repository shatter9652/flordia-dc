// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140104030  size: 60 bytes
// Name:    FUN_140104030
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140104030(ushort *param_1)

{
  short *psVar1;
  undefined8 uVar2;
  
  uVar2 = func_0x000144fab510();
  if ((ulonglong)*param_1 < 0x2304) {
    LOCK();
    psVar1 = (short *)((ulonglong)*param_1 * 2 + 0x149e4a210);
    *psVar1 = *psVar1 + -1;
    UNLOCK();
    if (*psVar1 == 0) {
      func_0x0001400b2470(uVar2);
    }
  }
  *param_1 = 0xffff;
  return;
}

