// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14018a000  size: 574 bytes
// Name:    FUN_14018a000
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_141b21600, FUN_144ee5920, FUN_1406df9a0, FUN_14075a460, FUN_14513c970, FUN_144d9d7a0, FUN_145130ee0, FUN_1452dd820, FUN_144feb630
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_14018a000(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  ulonglong unaff_R15;
  
  cVar2 = func_0x000144eba540(*(undefined4 *)(param_2 + 0xb8));
  if (cVar2 != '\0') {
    lVar6 = *(longlong *)(param_2 + 0x88);
    if (lVar6 != 0) {
LAB_14018a034:
      unaff_R15 = CONCAT71((int7)(unaff_R15 >> 8),*(longlong *)(lVar6 + 0x60) == param_1);
      goto LAB_14018a177;
    }
    uVar12 = *(ulonglong *)(param_2 + 8) & 0xfffffffffffffff0;
    if (uVar12 != 0) {
      plVar1 = *(longlong **)(param_1 + 0x18);
      uVar4 = *(uint *)(uVar12 + 0xa0);
      lVar6 = plVar1[0xb];
      cVar2 = FUN_144d9d7a0(uVar4,uVar4 >> 0x10);
      if (lVar6 == 0) {
        if (cVar2 == '\0') goto LAB_14018a0a5;
      }
      else if (cVar2 != '\0') {
        unaff_R15 = 0;
        if ((int)(short)uVar4 !=
            (int)((ulonglong)(lVar6 - *_DAT_149e576c8) / (ulonglong)*(uint *)(_DAT_149e576c8 + 1)))
        goto LAB_14018a177;
LAB_14018a0a5:
        lVar7 = *(longlong *)(*(longlong *)(*plVar1 + 8) + 0x50);
        if ((((((lVar7 == 0) ||
               (cVar2 = func_0x000142079210(lVar7,*(undefined8 *)(uVar12 + 0x20)), cVar2 != '\0'))
              && (lVar7 = func_0x000144e23bb0(*(undefined4 *)(uVar12 + 0x9c)), lVar7 != 0)) &&
             ((lVar8 = FUN_145130ee0(lVar7), lVar8 != 0 &&
              (cVar2 = func_0x0001453b7d90(lVar8,8), cVar2 == '\0')))) &&
            ((cVar2 = func_0x0001453b7d90(lVar8), cVar2 == '\0' &&
             ((lVar9 = FUN_14075a460(lVar8), lVar9 == 0 ||
              (uVar10 = FUN_14075a460(lVar8), uVar10 == uVar12)))))) &&
           (cVar2 = FUN_1406df9a0(lVar8), cVar2 != '\0')) {
          if (lVar6 == 0) {
            cVar2 = FUN_1452dd820(lVar8);
            if (cVar2 != '\0') goto LAB_14018a174;
          }
          else {
            iVar3 = FUN_144ee5920();
            unaff_R15 = 0;
            if (iVar3 != (int)((ulonglong)(lVar6 - *_DAT_149e576c8) /
                              (ulonglong)*(uint *)(_DAT_149e576c8 + 1))) goto LAB_14018a177;
          }
          if (*(uint *)(lVar8 + 0x48) == 0) {
LAB_14018a1e4:
            uVar11 = 0;
          }
          else {
            uVar11 = 0;
            uVar10 = 0;
            do {
              uVar4 = *(uint *)(lVar8 + 0x28 + uVar10 * 4);
              if ((uVar4 & 0x3f8000) == 0x50000) {
                uVar4 = uVar4 & 0x7fff;
                if (*_DAT_14ab7f6e0 == 0 ||
                    (~*(uint *)(_DAT_14ab7f6e0[5] + (ulonglong)uVar4 * 4) &
                    *(uint *)(_DAT_14ab7f6e0 + 6)) != 0) goto LAB_14018a1e4;
                uVar11 = FUN_14513c970(*_DAT_149ab14a8,*(undefined8 *)(_DAT_149ab14a8 + 2),
                                       *(undefined8 *)
                                        (*_DAT_14ab7f6e0 +
                                        (ulonglong)(uVar4 * (int)_DAT_14ab7f6e0[1])));
                break;
              }
              uVar10 = uVar10 + 1;
            } while (*(uint *)(lVar8 + 0x48) != uVar10);
          }
          unaff_R15 = 0;
          uVar5 = FUN_144feb630(lVar7,0);
          FUN_141b21600(param_1,lVar8,uVar5,uVar11,uVar12);
          lVar6 = *(longlong *)(param_2 + 0x88);
          if (lVar6 == 0) goto LAB_14018a177;
          goto LAB_14018a034;
        }
      }
    }
  }
LAB_14018a174:
  unaff_R15 = 0;
LAB_14018a177:
  return unaff_R15 & 0xffffffff;
}

