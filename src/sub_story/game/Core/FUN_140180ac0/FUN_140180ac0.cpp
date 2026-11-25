// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140180ac0  size: 103 bytes
// Name:    FUN_140180ac0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1450385b0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


ulonglong FUN_140180ac0(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 unaff_RSI;
  ulonglong uVar3;
  
  lVar2 = func_0x000144e34680(*(undefined4 *)
                               ((*(ulonglong *)(param_1 + 8) & 0xfffffffffffffff0) + 0x9c));
  uVar3 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if ((((lVar2 != 0) && (*(longlong *)(lVar2 + 0x10) != 0)) &&
      (cVar1 = FUN_1450385b0(), cVar1 != '\0')) &&
     (((*(char *)(param_1 + 0x67d) != '\x01' || (*(int *)(param_1 + 0x5e0) != 0)) ||
      (cVar1 = func_0x00014049def0(*(undefined8 *)(lVar2 + 0x10)), cVar1 != '\0')))) {
    uVar3 = 0;
  }
  return uVar3 & 0xffffffff;
}

