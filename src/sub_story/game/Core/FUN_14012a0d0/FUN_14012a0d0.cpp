// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14012a0d0  size: 380 bytes
// Name:    FUN_14012a0d0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14381a7a0, FUN_1455dcc0c, FUN_1455db8cc, FUN_145a2faf0, FUN_1455db934, FUN_144a11af0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14012a0d0(longlong param_1,longlong param_2)

{
  char cVar1;
  ulonglong uVar2;
  longlong lVar3;
  int *piVar4;
  longlong lVar5;
  longlong unaff_GS_OFFSET;
  undefined8 uStack_54;
  undefined4 uStack_4c;
  float fStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  undefined5 uStack_30;
  undefined3 uStack_2b;
  undefined5 uStack_28;
  undefined1 uStack_20;
  undefined1 uStack_1c;
  
  lVar3 = *(longlong *)(param_1 + 0xf0);
  if ((*(int *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               4) < _DAT_1492e32b8) && (FUN_1455db8cc(&DAT_1492e32b8), _DAT_1492e32b8 == -1)) {
    FUN_145a2faf0(0x1492e3158);
    FUN_1455dcc0c(FUN_1424e5cb0);
    FUN_1455db934(&DAT_1492e32b8);
  }
  lVar3 = *(longlong *)(lVar3 + 0x10);
  lVar5 = 0x1492e3158;
  if (lVar3 != 0) {
    lVar5 = lVar3;
  }
  uStack_20 = 0;
  uStack_1c = 0;
  uStack_54 = 0x2bc8fb175;
  uStack_4c = 3;
  fStack_48 = _DAT_145fc6ed8 / *(float *)(lVar5 + 0x80);
  uStack_40 = *(undefined4 *)(lVar5 + 0x8c);
  uStack_3c = *(undefined4 *)(lVar5 + 0x94);
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_2b = 0;
  uStack_28 = 0;
  uStack_44 = 0xbf800000;
  if (0.0 < *(float *)(param_1 + 0xb4)) {
    uVar2 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffff0;
    cVar1 = FUN_144a11af0(*(undefined4 *)(uVar2 + 0x9c),
                          CONCAT71((int7)(uVar2 >> 8),*(undefined1 *)(uVar2 + 0xfa)) & 0xffffffff);
    if (cVar1 == '\0') {
      FUN_14381a7a0(param_2,&uStack_54);
      return;
    }
  }
  piVar4 = *(int **)(param_2 + 0x28);
  if (*(uint *)(param_2 + 0x24) != 0) {
    lVar3 = (ulonglong)*(uint *)(param_2 + 0x24) * 0x48;
    do {
      if (*piVar4 == -0x43704e8b) {
        if ((char)piVar4[0xe] != '\0') {
          return;
        }
        if ((((piVar4[1] != 0) && (piVar4[0xf] != 0)) && (piVar4[1] != 2)) &&
           ((char)piVar4[0x11] != '\0')) {
          *(undefined1 *)((longlong)piVar4 + 0x46) = 1;
          return;
        }
        *(undefined1 *)((longlong)piVar4 + 0x45) = 1;
        return;
      }
      piVar4 = piVar4 + 0x12;
      lVar3 = lVar3 + -0x48;
    } while (lVar3 != 0);
  }
  return;
}

