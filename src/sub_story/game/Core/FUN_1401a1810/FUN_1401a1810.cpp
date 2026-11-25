// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401a1810  size: 358 bytes
// Name:    FUN_1401a1810
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1401a1810(uint param_1)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  
  if (param_1 == 0) {
    return 0;
  }
  if (_DAT_14a922fc0 != 0) {
    if ((*(char *)(_DAT_14a922fc0 + 0x20) == '\x01') && (*(char *)(_DAT_14a922fc0 + 0x21) != '\x01')
       ) {
      iVar1 = *(int *)(_DAT_14a922fc0 + 0x14) + -1;
      if (-1 < iVar1) {
        iVar6 = 0;
        do {
          uVar5 = (uint)(iVar6 + iVar1) >> 1;
          uVar2 = (ulonglong)*(uint *)(*(longlong *)(_DAT_14a922fc0 + 0x18) + (ulonglong)uVar5 * 4);
          uVar3 = _DAT_14ab83ec0 + uVar2;
          if (uVar2 != 0) {
            uVar2 = uVar3;
          }
          if (*(uint *)(uVar2 + 0x20) == param_1) goto LAB_1401a18bc;
          if (*(uint *)(uVar2 + 0x20) < param_1) {
            iVar6 = uVar5 + 1;
          }
          else {
            iVar1 = uVar5 - 1;
          }
        } while (iVar6 <= iVar1);
      }
    }
    else if ((ulonglong)*(uint *)(_DAT_14a922fc0 + 0x14) != 0) {
      lVar4 = 0;
      do {
        uVar2 = (ulonglong)*(uint *)(*(longlong *)(_DAT_14a922fc0 + 0x18) + lVar4);
        uVar3 = _DAT_14ab83ec0 + uVar2;
        if (uVar2 != 0) {
          uVar2 = uVar3;
        }
        if (*(uint *)(uVar2 + 0x20) == param_1) goto LAB_1401a18bc;
        lVar4 = lVar4 + 4;
      } while ((ulonglong)*(uint *)(_DAT_14a922fc0 + 0x14) << 2 != lVar4);
    }
  }
LAB_1401a18ca:
  if (_DAT_148568318 != 0) {
    if ((*(char *)(_DAT_148568318 + 0x20) == '\x01') && (*(char *)(_DAT_148568318 + 0x21) != '\x01')
       ) {
      iVar6 = 0;
      iVar1 = *(int *)(_DAT_148568318 + 0x14) + -1;
      if (-1 < iVar1) {
        while( true ) {
          uVar5 = (uint)(iVar6 + iVar1) >> 1;
          uVar2 = (ulonglong)*(uint *)(*(longlong *)(_DAT_148568318 + 0x18) + (ulonglong)uVar5 * 4);
          uVar3 = uVar2;
          if (uVar2 != 0) {
            uVar3 = _DAT_14ab83ec0 + uVar2;
          }
          if (*(uint *)(uVar3 + 0x20) == param_1) break;
          if (*(uint *)(uVar3 + 0x20) < param_1) {
            iVar6 = uVar5 + 1;
          }
          else {
            iVar1 = uVar5 - 1;
          }
          if (iVar1 < iVar6) {
            return 0;
          }
        }
        return _DAT_14ab83ec0 + uVar2;
      }
    }
    else if ((ulonglong)*(uint *)(_DAT_148568318 + 0x14) != 0) {
      lVar4 = 0;
      do {
        uVar2 = (ulonglong)*(uint *)(*(longlong *)(_DAT_148568318 + 0x18) + lVar4);
        uVar3 = uVar2;
        if (uVar2 != 0) {
          uVar3 = _DAT_14ab83ec0 + uVar2;
        }
        if (*(uint *)(uVar3 + 0x20) == param_1) {
          return _DAT_14ab83ec0 + uVar2;
        }
        lVar4 = lVar4 + 4;
      } while ((ulonglong)*(uint *)(_DAT_148568318 + 0x14) << 2 != lVar4);
    }
  }
  return 0;
LAB_1401a18bc:
  if (uVar3 != 0) {
    return *(ulonglong *)(uVar3 + 0x28);
  }
  goto LAB_1401a18ca;
}

