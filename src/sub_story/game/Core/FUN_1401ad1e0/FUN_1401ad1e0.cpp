// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401ad1e0  size: 121 bytes
// Name:    FUN_1401ad1e0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14087aa40, FUN_145071210
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1401ad1e0(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  code *pcVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  uVar5 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffff0;
  FUN_145071210(uVar5);
  lVar4 = func_0x000144e34260(*(undefined4 *)(uVar5 + 0x9c));
  if (lVar4 != 0) {
    FUN_14087aa40(lVar4);
  }
  func_0x000145218c30(uVar5);
  lVar4 = func_0x000144db7870(*(undefined8 *)(param_1 + 0x30));
  uVar5 = (ulonglong)*(byte *)(lVar4 + 0xc0 + (ulonglong)DAT_14ab7f600);
  if ((uVar5 != 0xff) &&
     (plVar2 = *(longlong **)(lVar4 + 0x10 + uVar5 * 8), plVar2 != (longlong *)0x0)) {
    *(undefined1 *)((longlong)plVar2 + 0x71) = 1;
    pcVar3 = *(code **)(*plVar2 + 0x60);
    if (pcVar3 == FUN_1451e6b60) {
      lVar4 = FUN_1451e6b60(plVar2);
    }
    else if (pcVar3 == (code *)&UNK_1451e6c00) {
      lVar4 = func_0x0001451e6c00(plVar2);
    }
    else if (pcVar3 == FUN_140328020) {
      lVar4 = FUN_140328020(plVar2);
    }
    else {
      lVar4 = (*pcVar3)(plVar2);
    }
    plVar2[2] = lVar4;
    lVar4 = plVar2[1];
    if ((longlong)*(int *)(lVar4 + 0xc) < 1) {
      lVar8 = 0;
    }
    else {
      lVar6 = 0;
      lVar8 = 0;
      do {
        lVar1 = lVar6 * 8;
        lVar6 = lVar6 + 1;
        uVar5 = *(ulonglong *)(*(longlong *)(lVar4 + 0x10 + lVar1) + 0x10);
        uVar7 = (lVar8 + 0x651e95c4d06fbfb1U ^ uVar5) * -0x622015f714c7d297;
        uVar5 = (uVar7 >> 0x2f ^ uVar5 ^ uVar7) * -0x622015f714c7d297;
        lVar8 = (uVar5 >> 0x2f ^ uVar5) * -0x622015f714c7d297;
      } while (*(int *)(lVar4 + 0xc) != lVar6);
    }
    *(longlong *)(lVar4 + 0xb8) = lVar8;
    return;
  }
  return;
}

