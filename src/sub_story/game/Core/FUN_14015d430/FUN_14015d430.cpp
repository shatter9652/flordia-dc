// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14015d430  size: 153 bytes
// Name:    FUN_14015d430
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1411c4190
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14015d430(longlong param_1)

{
  longlong *plVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar8 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffff0;
  bVar2 = *(byte *)(uVar8 + 0x30);
  if (bVar2 == 2) {
    lVar6 = FUN_1411c4190(*(undefined4 *)(uVar8 + 0x9c));
    *(undefined1 *)(lVar6 + 1) = *(undefined1 *)(param_1 + 0x1c1);
  }
  if ((((*(longlong *)(param_1 + 0x40) != 0) &&
       (lVar6 = func_0x000144e4f2e0(*(undefined4 *)(*(longlong *)(param_1 + 0x40) + 0x9c)),
       uVar8 != 0 && lVar6 != 0)) && ((0x1cU >> (bVar2 & 0x1f) & 1) != 0)) &&
     (uVar3 = *(uint *)(lVar6 + 0x114), (ulonglong)uVar3 != 0)) {
    lVar6 = *(longlong *)(lVar6 + 0x118);
    uVar7 = 0;
    do {
      lVar5 = *(longlong *)(lVar6 + uVar7 * 8);
      if (*(ulonglong *)(lVar5 + 0x48) == uVar8) {
        *(undefined1 *)(lVar5 + 0x51) = 1;
      }
      uVar7 = uVar7 + 1;
    } while (uVar3 != uVar7);
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    plVar1 = (longlong *)(param_1 + 0x40);
    FUN_140004b40(0x14abbf350);
    if (*plVar1 != 0) {
      FUN_1452dfd90(*plVar1,plVar1);
    }
    *plVar1 = 0;
    func_0x000144d9dab0(0x14abbf350);
  }
  *(undefined1 *)(param_1 + 0x78) = 0;
  *(undefined1 *)(param_1 + 0xa0) = 0;
  *(undefined1 *)(param_1 + 0xb5) = 0;
  *(undefined1 *)(param_1 + 400) = 0;
  *(undefined1 *)(param_1 + 0x1d9) = 1;
  uVar3 = *(uint *)(param_1 + 0x58);
  if (((uVar3 != 0x1ffff) &&
      (uVar4 = *(uint *)(_DAT_14abbe8c8[5] + (ulonglong)(uVar3 & 0x1ffff) * 4),
      (~uVar4 & *(uint *)(_DAT_14abbe8c8 + 6)) == 0)) &&
     (((uVar4 & 0x7fe0000) == (uVar3 & 0xfffe0000) && (*_DAT_14abbe8c8 != 0)))) {
    *(undefined4 *)(param_1 + 0x58) = 0x1ffff;
  }
  return;
}

