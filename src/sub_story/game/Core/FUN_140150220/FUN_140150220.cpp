// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140150220  size: 323 bytes
// Name:    FUN_140150220
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1409ac430, FUN_140831aa0, FUN_1450e5520
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


ulonglong FUN_140150220(longlong param_1,longlong param_2)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  
  uVar7 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffff0;
  uVar6 = *(undefined4 *)(uVar7 + 0x9c);
  lVar4 = func_0x000144e24670(uVar6);
  if (lVar4 == 0) {
LAB_14015026c:
    lVar4 = func_0x000144fe39f0(uVar6);
    if (lVar4 != 0) {
      cVar3 = FUN_140831aa0(lVar4,*(undefined2 *)(param_2 + 2),*(undefined1 *)(param_2 + 4));
      if (cVar3 == '\0') goto LAB_140150354;
    }
    lVar4 = func_0x000144e4f2e0(uVar6);
    if ((lVar4 != 0) && (uVar1 = *(uint *)(lVar4 + 0x114), (ulonglong)uVar1 != 0)) {
      uVar2 = *(uint *)(param_1 + 0x28);
      lVar4 = *(longlong *)(lVar4 + 0x118);
      uVar7 = 0;
      do {
        lVar5 = *(longlong *)(lVar4 + uVar7 * 8);
        if ((lVar5 != 0) && (lVar5 = *(longlong *)(lVar5 + 0x48), lVar5 != 0)) {
          lVar5 = func_0x000144da0df0(*(undefined4 *)(lVar5 + 0x9c));
          if ((lVar5 != 0) && (((uVar2 & 6) != 4 || ((*(uint *)(lVar5 + 0x28) & 6) != 4))))
          goto LAB_140150354;
        }
        uVar7 = uVar7 + 1;
      } while (uVar1 != uVar7);
    }
    lVar4 = func_0x000144dc3fe0(uVar6);
    if ((lVar4 != 0) && (*(longlong *)(lVar4 + 0x40) != 0)) {
      cVar3 = func_0x00014511c4e0(*(undefined4 *)(*(longlong *)(lVar4 + 0x40) + 0x9c));
      if (cVar3 != '\0') goto LAB_140150354;
    }
    lVar4 = func_0x000144db7b80(uVar6);
    if (lVar4 != 0) {
      cVar3 = func_0x0001406382f0(*(undefined1 *)(lVar4 + 0x78));
      if (cVar3 == '\0') goto LAB_140150354;
    }
    lVar4 = func_0x000144eb3780(uVar6);
    if (lVar4 != 0) {
      cVar3 = FUN_1450e5520(lVar4);
      if (cVar3 == '\0') goto LAB_140150354;
    }
    uVar7 = func_0x0001454d8740(*(undefined4 *)(param_1 + 0x9c));
    uVar7 = uVar7 ^ 1;
  }
  else {
    cVar3 = FUN_1409ac430(lVar4,*(undefined2 *)(param_2 + 2),*(undefined1 *)(param_2 + 4));
    if (cVar3 != '\0') {
      uVar6 = *(undefined4 *)(uVar7 + 0x9c);
      goto LAB_14015026c;
    }
LAB_140150354:
    uVar7 = 0;
  }
  return uVar7;
}

