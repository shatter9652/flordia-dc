// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140049890  size: 501 bytes
// Name:    FUN_140049890
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140049a90, FUN_144e683c0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_140049890(longlong param_1)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  int iVar9;
  
  cVar2 = FUN_144e683c0();
  if (cVar2 == '\0') {
    return 0;
  }
  lVar3 = FUN_140049a90(*(undefined8 *)(param_1 + 0x20));
  if ((_DAT_1485681b0 != 0) && (uVar1 = *(uint *)(lVar3 + 0x10), uVar1 != 0)) {
    if ((*(char *)(_DAT_1485681b0 + 0x20) == '\x01') && (*(char *)(_DAT_1485681b0 + 0x21) != '\x01')
       ) {
      iVar9 = *(int *)(_DAT_1485681b0 + 0x14) + -1;
      if (-1 < iVar9) {
        iVar7 = 0;
        do {
          uVar6 = (uint)(iVar7 + iVar9) >> 1;
          uVar8 = (ulonglong)*(uint *)(*(longlong *)(_DAT_1485681b0 + 0x18) + (ulonglong)uVar6 * 4);
          uVar5 = _DAT_14ab83ec0 + uVar8;
          if (uVar8 != 0) {
            uVar8 = uVar5;
          }
          if (*(uint *)(uVar8 + 0x20) == uVar1) goto LAB_1400499f0;
          if (*(uint *)(uVar8 + 0x20) < uVar1) {
            iVar7 = uVar6 + 1;
          }
          else {
            iVar9 = uVar6 - 1;
          }
        } while (iVar7 <= iVar9);
      }
    }
    else if ((ulonglong)*(uint *)(_DAT_1485681b0 + 0x14) != 0) {
      lVar3 = 0;
      do {
        uVar8 = (ulonglong)*(uint *)(*(longlong *)(_DAT_1485681b0 + 0x18) + lVar3);
        uVar5 = _DAT_14ab83ec0 + uVar8;
        if (uVar8 != 0) {
          uVar8 = uVar5;
        }
        if (*(uint *)(uVar8 + 0x20) == uVar1) goto LAB_1400499f0;
        lVar3 = lVar3 + 4;
      } while ((ulonglong)*(uint *)(_DAT_1485681b0 + 0x14) << 2 != lVar3);
    }
  }
LAB_140049915:
  *(undefined8 *)(param_1 + 0x38) = 0;
  lVar4 = FUN_140049a90(*(undefined8 *)(param_1 + 0x20));
  lVar3 = 0x40;
  if ((_DAT_1485681a8 != 0) && (uVar1 = *(uint *)(lVar4 + 0x10), uVar1 != 0)) {
    if ((*(char *)(_DAT_1485681a8 + 0x20) == '\x01') && (*(char *)(_DAT_1485681a8 + 0x21) != '\x01')
       ) {
      iVar9 = *(int *)(_DAT_1485681a8 + 0x14) + -1;
      uVar5 = 0;
      if (-1 < iVar9) {
        iVar7 = 0;
        do {
          uVar6 = (uint)(iVar7 + iVar9) >> 1;
          uVar5 = (ulonglong)*(uint *)(*(longlong *)(_DAT_1485681a8 + 0x18) + (ulonglong)uVar6 * 4);
          uVar8 = _DAT_14ab83ec0 + uVar5;
          if (uVar5 != 0) {
            uVar5 = uVar8;
          }
          if (*(uint *)(uVar5 + 0x20) == uVar1) goto LAB_140049a54;
          if (*(uint *)(uVar5 + 0x20) < uVar1) {
            iVar7 = uVar6 + 1;
          }
          else {
            iVar9 = uVar6 - 1;
          }
          uVar5 = 0;
        } while (iVar7 <= iVar9);
      }
      goto LAB_140049a67;
    }
    if ((ulonglong)*(uint *)(_DAT_1485681a8 + 0x14) != 0) {
      lVar4 = 0;
      do {
        uVar5 = (ulonglong)*(uint *)(*(longlong *)(_DAT_1485681a8 + 0x18) + lVar4);
        uVar8 = _DAT_14ab83ec0 + uVar5;
        if (uVar5 != 0) {
          uVar5 = uVar8;
        }
        if (*(uint *)(uVar5 + 0x20) == uVar1) goto LAB_140049a54;
        lVar4 = lVar4 + 4;
        uVar5 = 0;
      } while ((ulonglong)*(uint *)(_DAT_1485681a8 + 0x14) << 2 != lVar4);
      goto LAB_140049a67;
    }
  }
LAB_140049a65:
  uVar5 = 0;
LAB_140049a67:
  *(ulonglong *)(param_1 + lVar3) = uVar5;
  uVar5 = *(ulonglong *)(param_1 + 0x40) | *(ulonglong *)(param_1 + 0x38);
  return CONCAT71((int7)(uVar5 >> 8),uVar5 != 0);
LAB_1400499f0:
  if ((uVar5 != 0) && (lVar3 = 0x38, *(char *)(uVar5 + 0x19) != '\0')) goto LAB_140049a67;
  goto LAB_140049915;
LAB_140049a54:
  if (uVar8 != 0) {
    uVar5 = 0;
    if (*(char *)(uVar8 + 0x19) != '\0') {
      uVar5 = uVar8;
    }
    goto LAB_140049a67;
  }
  goto LAB_140049a65;
}

