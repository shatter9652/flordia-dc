// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14013d420  size: 65 bytes
// Name:    FUN_14013d420
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144ff7870, FUN_1400546e0, FUN_144ff7ae0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14013d420(void)

{
  longlong *plVar1;
  code *pcVar2;
  char cVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined1 uStack_61;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  
  if (DAT_14abbe2e0 == '\0') {
    cVar3 = func_0x000144f7b6a0();
    if ((cVar3 == '\0') && (DAT_14abbe2e1 != '\x01')) goto LAB_14013d43f;
  }
  cVar3 = FUN_1400546e0();
  if (cVar3 == '\0') {
    return;
  }
LAB_14013d43f:
  FUN_144ff7870();
  FUN_144ff7ae0();
  if (uRam00000001492defa0 != 0) {
    uRam00000001480079ec = func_0x00014013d470(uRam000000014875f3b0);
    lVar7 = 0;
    uVar6 = 0;
    do {
      if ((*(longlong *)(lRam00000001492def98 + lVar7) != 0) &&
         (plVar1 = *(longlong **)(*(longlong *)(lRam00000001492def98 + lVar7) + 0xa0),
         plVar1 != (longlong *)0x0)) {
        pcVar2 = *(code **)(*plVar1 + 0x120);
        if (pcVar2 == (code *)&SUB_145028560) {
          lVar4 = func_0x000145028560();
        }
        else {
          lVar4 = (*pcVar2)();
        }
        if (((lVar4 != 0) &&
            (uVar5 = (ulonglong)*(byte *)(lVar4 + 0xc0 + (ulonglong)DAT_14a952378), uVar5 != 0xff))
           && (lVar4 = *(longlong *)(lVar4 + 0x10 + uVar5 * 8), lVar4 != 0)) {
          pcStack_58 = FUN_1431a2c00;
          puStack_50 = &SUB_140004380;
          puStack_48 = &SUB_140004380;
          puStack_60 = &uStack_61;
          FUN_144ff7970(*(undefined8 *)(lVar4 + 0x70),&puStack_60);
        }
      }
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 0x10;
    } while (uVar6 < uRam00000001492defa0);
  }
  return;
}

