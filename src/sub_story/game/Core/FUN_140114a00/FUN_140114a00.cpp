// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140114a00  size: 120 bytes
// Name:    FUN_140114a00
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140113f50, FUN_140113f10, FUN_144f93d60
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


uint * FUN_140114a00(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  uint *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined4 uStack_1c;
  
  lVar2 = func_0x00014511b7d0(*(undefined4 *)(param_1 + 0x128));
  if ((lVar2 == 0) ||
     (lVar2 = FUN_144f93d60(*(undefined4 *)(lVar2 + 0x24),*(undefined8 *)(lVar2 + 0x28),0x78),
     lVar2 == 0)) {
    return (uint *)0x0;
  }
  FUN_140113f10(*(undefined8 *)(param_1 + 8),&uStack_1c);
  lVar2 = FUN_140113f50(lVar2,*(undefined4 *)(param_1 + 0x158),uStack_1c);
  if (lVar2 == 0) {
    return (uint *)0x0;
  }
  uVar1 = *(uint *)(lVar2 + 0x28);
  if (uVar1 != 0) {
    uVar4 = (ulonglong)uRam000000014a9e9088;
    puVar3 = puRam000000014a9e9080;
    uVar5 = uVar4;
    if (uVar4 != 0) {
      do {
        uVar6 = uVar5 >> 1;
        if ((puVar3 + uVar6 * 5 + 5)[-5] < uVar1) {
          puVar3 = puVar3 + uVar6 * 5 + 5;
          uVar6 = ~uVar6 + uVar5;
        }
        uVar5 = uVar6;
      } while (0 < (longlong)uVar6);
      if ((puVar3 != puRam000000014a9e9080 + uVar4 * 5) && (*puVar3 == uVar1)) {
        return puVar3 + 1;
      }
    }
    return (uint *)0x0;
  }
  return (uint *)0x0;
}

