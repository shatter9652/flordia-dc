// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401088a0  size: 155 bytes
// Name:    FUN_1401088a0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401088a0(longlong param_1)

{
  longlong lVar1;
  code *pcVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  bool bVar6;
  
  uVar4 = (ulonglong)*(ushort *)(param_1 + 0x12);
  if (*(short *)(_DAT_1475d59a8 + -2 + uVar4 * 2) != -1) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  lVar1 = *(longlong *)(_DAT_14a943ac0 + -8 + uVar4 * 8);
  *(undefined8 *)(_DAT_14a943ac0 + -8 + uVar4 * 8) = 0;
  uVar4 = _DAT_1475d59b0;
  if (lVar1 != 0) {
    func_0x000144d9c130();
    uVar4 = _DAT_1475d59b0;
  }
  do {
    *(short *)(_DAT_1475d59a8 + -2 + (ulonglong)*(ushort *)(param_1 + 0x12) * 2) = (short)uVar4;
    LOCK();
    uVar5 = uVar4;
    uVar3 = ((ulonglong)*(ushort *)(param_1 + 0x12) - 1 | uVar4 & 0xffffffffffff0000) - 0x100000000;
    if (uVar4 != _DAT_1475d59b0) {
      uVar5 = _DAT_1475d59b0;
      uVar3 = _DAT_1475d59b0;
    }
    _DAT_1475d59b0 = uVar3;
    UNLOCK();
    bVar6 = uVar4 != uVar5;
    uVar4 = uVar5;
  } while (bVar6);
  *(undefined2 *)(param_1 + 0x12) = 0;
  return;
}

