// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400b74a0  size: 116 bytes
// Name:    FUN_1400b74a0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144fefc40
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400b74a0(longlong param_1)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  undefined4 uStack_1c;
  
  bVar2 = false;
  do {
    LOCK();
    cVar1 = *(char *)(param_1 + 0x109);
    if (bVar2 == (bool)cVar1) {
      *(char *)(param_1 + 0x109) = '\x01';
      cVar1 = bVar2;
    }
    UNLOCK();
    bVar3 = bVar2 != (cVar1 != '\0');
    bVar2 = cVar1 != '\0';
  } while (bVar3);
  cVar1 = *(char *)(param_1 + 0x108);
  if (cVar1 == '\0') {
    func_0x000144f43730(*(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x5c),&uStack_1c);
    FUN_144fefc40(param_1 + 0x104,uStack_1c,8);
    cVar1 = *(char *)(param_1 + 0x108);
  }
  *(char *)(param_1 + 0x108) = cVar1 + '\x01';
  *(undefined1 *)(param_1 + 0x109) = 0;
  return;
}

