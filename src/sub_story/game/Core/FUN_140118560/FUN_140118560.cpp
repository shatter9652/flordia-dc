// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140118560  size: 59 bytes
// Name:    FUN_140118560
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140118cb0, FUN_1401185e0, FUN_1401186a0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Removing unreachable block (ram,0x0001401187aa) */
/* WARNING: Removing unreachable block (ram,0x0001401187c6) */
/* WARNING: Removing unreachable block (ram,0x0001401187cb) */
/* WARNING: Removing unreachable block (ram,0x0001401187e7) */
/* WARNING: Removing unreachable block (ram,0x0001401187ee) */
/* WARNING: Removing unreachable block (ram,0x0001401187f3) */
/* WARNING: Removing unreachable block (ram,0x000140118802) */
/* WARNING: Removing unreachable block (ram,0x000140118806) */
/* WARNING: Removing unreachable block (ram,0x000140118829) */
/* WARNING: Removing unreachable block (ram,0x00014011882e) */
/* WARNING: Removing unreachable block (ram,0x0001453f9feb) */
/* WARNING: Removing unreachable block (ram,0x0001453f9ff2) */
/* WARNING: Removing unreachable block (ram,0x0001453fa07f) */
/* WARNING: Removing unreachable block (ram,0x0001453fa08e) */
/* WARNING: Removing unreachable block (ram,0x0001453fa01d) */
/* WARNING: Removing unreachable block (ram,0x0001453fa039) */
/* WARNING: Removing unreachable block (ram,0x0001453fa066) */

void FUN_140118560(undefined8 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  if (DAT_1474e0078 != '\x01') {
    uVar3 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
    uVar4 = uVar3 & 0xffffffff;
    uVar1 = FUN_140118980(0);
    uVar2 = FUN_140118840(uVar4,0);
    FUN_1401186a0(10000);
    FUN_140118780(uVar3 & 0xffffffff,uVar2,0);
    FUN_140118cb0();
    FUN_140118840(uVar4,uVar1);
    FUN_1401186e0();
    func_0x000144fd22c0();
    return;
  }
  FUN_1401186a0(5000);
  func_0x0001401185a0();
  FUN_1401185e0();
  FUN_140118cb0();
  FUN_144fc67a0();
  return;
}

