// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140081790  size: 285 bytes
// Name:    FUN_140081790
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1432c1c40
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_140081790(uint param_1)

{
  longlong lVar1;
  char cVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  
  lVar1 = _DAT_14ab83ec0;
  if (param_1 == 0) {
    return 0;
  }
  if (_DAT_14a922fc0 == 0) {
    return 0;
  }
  if ((*(char *)(_DAT_14a922fc0 + 0x20) == '\x01') && (*(char *)(_DAT_14a922fc0 + 0x21) != '\x01'))
  {
    uVar3 = (ulonglong)*(uint *)(_DAT_14a922fc0 + 0x14);
    lVar5 = *(longlong *)(_DAT_14a922fc0 + 0x18);
    iVar4 = *(uint *)(_DAT_14a922fc0 + 0x14) - 1;
    if (-1 < iVar4) {
      iVar9 = 0;
      do {
        uVar8 = (uint)(iVar9 + iVar4) >> 1;
        uVar10 = (ulonglong)*(uint *)(lVar5 + (ulonglong)uVar8 * 4);
        uVar6 = _DAT_14ab83ec0 + uVar10;
        if (uVar10 != 0) {
          uVar10 = uVar6;
        }
        if (*(uint *)(uVar10 + 0x20) == param_1) goto LAB_140081851;
        if (*(uint *)(uVar10 + 0x20) < param_1) {
          iVar9 = uVar8 + 1;
        }
        else {
          iVar4 = uVar8 - 1;
        }
      } while (iVar9 <= iVar4);
    }
  }
  else {
    uVar3 = (ulonglong)*(uint *)(_DAT_14a922fc0 + 0x14);
    if (uVar3 == 0) {
      return 0;
    }
    lVar5 = *(longlong *)(_DAT_14a922fc0 + 0x18);
    lVar7 = 0;
    do {
      uVar10 = (ulonglong)*(uint *)(lVar5 + lVar7);
      uVar6 = _DAT_14ab83ec0 + uVar10;
      if (uVar10 != 0) {
        uVar10 = uVar6;
      }
      if (*(uint *)(uVar10 + 0x20) == param_1) goto LAB_140081851;
      lVar7 = lVar7 + 4;
    } while (uVar3 << 2 != lVar7);
  }
LAB_140081856:
  if ((int)uVar3 != 0) {
    lVar7 = 0;
    do {
      uVar6 = lVar1 + (ulonglong)*(uint *)(lVar5 + lVar7);
      if ((ulonglong)*(uint *)(lVar5 + lVar7) == 0) {
        uVar6 = 0;
      }
      cVar2 = FUN_1432c1c40(*(undefined4 *)(*(longlong *)(uVar6 + 0x10) + 0x18),
                            *(undefined8 *)(uVar6 + 0x28),param_1);
      if (cVar2 != '\0') {
        return uVar6;
      }
      lVar7 = lVar7 + 4;
    } while (uVar3 << 2 != lVar7);
  }
  return 0;
LAB_140081851:
  if (uVar6 != 0) {
    return uVar6;
  }
  goto LAB_140081856;
}

