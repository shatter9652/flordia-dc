// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140129f60  size: 363 bytes
// Name:    FUN_140129f60
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14381a7a0, FUN_1455dcc0c, FUN_1455db8cc, FUN_145a2faf0, FUN_1455db934, FUN_144a11af0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140129f60(longlong param_1,longlong param_2)

{
  undefined1 auVar1 [16];
  char cVar2;
  ulonglong uVar3;
  longlong lVar4;
  int *piVar5;
  longlong lVar6;
  longlong unaff_GS_OFFSET;
  undefined8 uStack_54;
  undefined4 uStack_4c;
  float fStack_48;
  undefined4 uStack_44;
  undefined1 auStack_40 [16];
  undefined5 uStack_30;
  undefined3 uStack_2b;
  undefined5 uStack_28;
  undefined1 uStack_20;
  undefined1 uStack_1c;
  
  lVar4 = *(longlong *)(param_1 + 0xf0);
  if ((*(int *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               4) < _DAT_1492e32b8) && (FUN_1455db8cc(&DAT_1492e32b8), _DAT_1492e32b8 == -1)) {
    FUN_145a2faf0(0x1492e3158);
    FUN_1455dcc0c(FUN_1424e5cb0);
    FUN_1455db934(&DAT_1492e32b8);
  }
  lVar4 = *(longlong *)(lVar4 + 0x10);
  lVar6 = 0x1492e3158;
  if (lVar4 != 0) {
    lVar6 = lVar4;
  }
  uStack_20 = 0;
  uStack_1c = 0;
  uStack_54 = 0x206feb9d9;
  uStack_4c = 2;
  fStack_48 = _DAT_145fc6ed8 / *(float *)(lVar6 + 0x5c);
  auVar1 = vinsertps_avx(ZEXT416(*(uint *)(lVar6 + 100)),ZEXT416(*(uint *)(lVar6 + 0x6c)),0x10);
  auStack_40 = vmovhps_avx(auVar1,*(undefined8 *)(lVar6 + 0x70));
  uStack_30 = 0;
  uStack_2b = 0;
  uStack_28 = 0;
  uStack_44 = 0xbf800000;
  if (0.0 < *(float *)(param_1 + 0xa8)) {
    uVar3 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffff0;
    cVar2 = FUN_144a11af0(*(undefined4 *)(uVar3 + 0x9c),
                          CONCAT71((int7)(uVar3 >> 8),*(undefined1 *)(uVar3 + 0xfa)) & 0xffffffff);
    if (cVar2 == '\0') {
      FUN_14381a7a0(param_2,&uStack_54);
      return;
    }
  }
  piVar5 = *(int **)(param_2 + 0x28);
  if (*(uint *)(param_2 + 0x24) != 0) {
    lVar4 = (ulonglong)*(uint *)(param_2 + 0x24) * 0x48;
    do {
      if (*piVar5 == 0x6feb9d9) {
        if ((char)piVar5[0xe] != '\0') {
          return;
        }
        if ((((piVar5[1] != 0) && (piVar5[0xf] != 0)) && (piVar5[1] != 2)) &&
           ((char)piVar5[0x11] != '\0')) {
          *(undefined1 *)((longlong)piVar5 + 0x46) = 1;
          return;
        }
        *(undefined1 *)((longlong)piVar5 + 0x45) = 1;
        return;
      }
      piVar5 = piVar5 + 0x12;
      lVar4 = lVar4 + -0x48;
    } while (lVar4 != 0);
  }
  return;
}

