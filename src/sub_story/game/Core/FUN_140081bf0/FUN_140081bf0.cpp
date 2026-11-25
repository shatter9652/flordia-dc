// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140081bf0  size: 350 bytes
// Name:    FUN_140081bf0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140083b20, FUN_140081d50
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Removing unreachable block (ram,0x000140083b3a) */
/* WARNING: Removing unreachable block (ram,0x000140083b40) */
/* WARNING: Removing unreachable block (ram,0x000140083b96) */
/* WARNING: Removing unreachable block (ram,0x000140083bb6) */
/* WARNING: Removing unreachable block (ram,0x000140083c1b) */
/* WARNING: Removing unreachable block (ram,0x000140083c26) */
/* WARNING: Removing unreachable block (ram,0x000140083c44) */
/* WARNING: Removing unreachable block (ram,0x000140083bc2) */
/* WARNING: Removing unreachable block (ram,0x000140083b4f) */

longlong FUN_140081bf0(uint param_1,longlong param_2,longlong param_3)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  
  if (param_3 == 0) {
    uVar6 = param_1 * 0x10;
    if (uVar6 == 0) {
      uVar2 = 0;
    }
    else {
      uVar8 = 0;
      do {
        uVar2 = uVar8;
        if (!SBORROW1('\0',*(char *)((ulonglong)(uVar8 & 0xf) +
                                    (ulonglong)(uVar8 >> 4) * 0x1c10 + param_2))) break;
        uVar8 = uVar8 + 1;
        uVar2 = uVar6;
      } while (uVar6 != uVar8);
    }
    lVar5 = (ulonglong)(param_1 & 0xfffffff) * 0x1c10;
    lVar3 = (ulonglong)(uVar2 >> 4) * 0x1c10;
    uVar4 = (ulonglong)((uVar2 & 0xf) * 0x1c0);
    if (lVar3 + uVar4 != lVar5) {
      lVar3 = lVar3 + 0x10 + uVar4;
      lVar7 = 0;
      do {
        lVar3 = FUN_140083b20(*(undefined4 *)(param_2 + 0x24 + lVar3),
                              *(undefined8 *)(param_2 + 0x28 + lVar3),0);
        uVar8 = uVar2;
        if ((lVar3 != 0) &&
           ((lVar7 == 0 || (cVar1 = func_0x0001430196a0(lVar3,lVar7), cVar1 != '\0')))) {
          lVar7 = lVar3;
        }
        while (uVar2 = uVar6, uVar8 != uVar6) {
          while (uVar2 = uVar8 + 1, uVar8 = uVar2, uVar2 < uVar6) {
            if (!SBORROW1('\0',*(char *)((ulonglong)(uVar2 & 0xf) +
                                        (ulonglong)(uVar2 >> 4) * 0x1c10 + param_2)))
            goto LAB_140081cf2;
          }
        }
LAB_140081cf2:
        lVar3 = (ulonglong)(uVar2 >> 4) * 0x1c10 + 0x10 + (ulonglong)((uVar2 & 0xf) * 0x1c0);
        if (lVar3 == lVar5 + 0x10) {
          return lVar7;
        }
      } while( true );
    }
  }
  else {
    lVar3 = FUN_140081d50();
    if (lVar3 != 0) {
      lVar5 = *(longlong *)(lVar3 + 8);
      if (*(uint *)(lVar3 + 4) == 0) {
        lVar3 = 0;
      }
      else {
        lVar7 = (ulonglong)*(uint *)(lVar3 + 4) * 0x180;
        lVar3 = 0;
        do {
          if ((((*(ushort *)(lVar5 + 0xe1) & 0x420) == 0) &&
              (cVar1 = FUN_141737720(*(undefined4 *)(lVar5 + 0xc4),*(undefined4 *)(lVar5 + 0x100)),
              cVar1 == '\0')) &&
             ((lVar3 == 0 || (cVar1 = func_0x0001430196a0(lVar5,lVar3), cVar1 != '\0')))) {
            lVar3 = lVar5;
          }
          lVar5 = lVar5 + 0x180;
          lVar7 = lVar7 + -0x180;
        } while (lVar7 != 0);
      }
      return lVar3;
    }
  }
  return 0;
}

