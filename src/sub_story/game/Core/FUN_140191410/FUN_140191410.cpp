// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140191410  size: 35 bytes
// Name:    FUN_140191410
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


bool FUN_140191410(void)

{
  short sVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = func_0x000144ebbf10();
  if (lVar3 == 0) {
    return false;
  }
  if (*(int *)(lVar3 + 0x2c4) == 0) {
    return false;
  }
  lVar2 = *(longlong *)(lVar3 + 0x2c8);
  lVar3 = FUN_1450569d0(*(undefined4 *)(lVar2 + 0x38),*(ulonglong *)(lVar3 + 8) & 0xfffffffffffffff0
                       );
  sVar1 = *(short *)(lVar2 + 0xb0);
  if (sVar1 == -1 || lVar3 == 0) {
    return false;
  }
  if (*(longlong *)(lVar3 + 0x170) == 0) {
    return false;
  }
  if (sVar1 == -1) {
    return true;
  }
  return *(short *)(*(longlong *)(*(longlong *)(lVar3 + 0x170) + 0x180) +
                   (ulonglong)(uint)(int)sVar1 * 2) == -1;
}

