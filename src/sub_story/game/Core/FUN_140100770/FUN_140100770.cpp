// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140100770  size: 598 bytes
// Name:    FUN_140100770
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1450ab0d0, FUN_140137970, FUN_14149e500, FUN_140b1ee10, FUN_1406c11e0, FUN_140100720, FUN_1450ab140
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_140100770(longlong param_1,uint param_2,char param_3,ulonglong param_4)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint uStack_44;
  
  if (param_2 == 0) {
    return 0;
  }
  lVar3 = FUN_1450ab0d0(*(undefined4 *)(param_1 + 0x9c));
  if (lVar3 == 0) {
    return 0;
  }
  if (*(int *)(lVar3 + 0xc) == -0x5ededf00) {
    return 0;
  }
  lVar4 = FUN_14149e500(lVar3,param_2);
  if (lVar4 == -1) {
    return 0;
  }
  if (param_3 == '\0') {
LAB_140100821:
    uVar12 = 0;
  }
  else {
    lVar5 = FUN_140137970(param_1,2);
    if (lVar5 == 0) goto LAB_140100821;
    lVar5 = func_0x0001416a4a50(lVar5);
    uVar9 = 0;
    if (lVar5 != 0) {
      FUN_140100720(&uStack_44,lVar5);
      uVar9 = uStack_44;
    }
    uVar12 = (ulonglong)(uVar9 == param_2);
  }
  lVar5 = FUN_140b1ee10(lVar3,param_2);
  lVar5 = lVar5 + uVar12;
  lVar3 = 0;
  if (lVar4 - lVar5 < (longlong)(param_4 & 0xffffffff)) {
    return 1;
  }
  if (_DAT_14a922f80 != 0) {
    if ((*(char *)(_DAT_14a922f80 + 0x20) == '\x01') && (*(char *)(_DAT_14a922f80 + 0x21) != '\x01')
       ) {
      iVar2 = *(int *)(_DAT_14a922f80 + 0x14) + -1;
      if (-1 < iVar2) {
        iVar10 = 0;
        do {
          uVar9 = (uint)(iVar10 + iVar2) >> 1;
          uVar11 = (ulonglong)*(uint *)(*(longlong *)(_DAT_14a922f80 + 0x18) + (ulonglong)uVar9 * 4)
          ;
          uVar12 = _DAT_14ab83ec0 + uVar11;
          if (uVar11 != 0) {
            uVar11 = uVar12;
          }
          if (*(uint *)(uVar11 + 0x20) == param_2) goto LAB_1401008fa;
          if (*(uint *)(uVar11 + 0x20) < param_2) {
            iVar10 = uVar9 + 1;
          }
          else {
            iVar2 = uVar9 - 1;
          }
        } while (iVar10 <= iVar2);
      }
    }
    else if ((ulonglong)*(uint *)(_DAT_14a922f80 + 0x14) != 0) {
      lVar8 = 0;
      do {
        uVar11 = (ulonglong)*(uint *)(*(longlong *)(_DAT_14a922f80 + 0x18) + lVar8);
        uVar12 = _DAT_14ab83ec0 + uVar11;
        if (uVar11 != 0) {
          uVar11 = uVar12;
        }
        if (*(uint *)(uVar11 + 0x20) == param_2) goto LAB_1401008fa;
        lVar8 = lVar8 + 4;
      } while ((ulonglong)*(uint *)(_DAT_14a922f80 + 0x14) << 2 != lVar8);
    }
  }
LAB_1401009ba:
  return CONCAT71((int7)((ulonglong)lVar3 >> 8),lVar4 <= lVar5);
LAB_1401008fa:
  if (((uVar12 != 0) && (*(char *)(uVar12 + 0x19) == '\x01')) &&
     (lVar8 = func_0x000144f3a1d0(*(undefined4 *)(param_1 + 0x9c)), lVar8 != 0)) {
    lVar3 = 0;
    if (*(ushort *)(lVar8 + 0x1490) != 0) {
      lVar1 = *(longlong *)(lVar8 + 0x1488);
      lVar3 = (ulonglong)*(ushort *)(lVar8 + 0x1490) * 8;
      lVar8 = 0;
      do {
        lVar6 = FUN_1406c11e0(*(undefined8 *)(lVar1 + lVar8));
        if (((lVar6 != 0) && (lVar7 = FUN_1450ab140(lVar6,0xffffffff,0), lVar7 != 0)) &&
           (*(uint *)(lVar7 + 0x20) == param_2)) {
          iVar2 = 0;
          if ((*(byte *)(lVar6 + 0x11cb) & 2) != 0) {
            lVar7 = (ulonglong)*(uint *)(lVar6 + 0x338) * 0x14 + *(longlong *)(lVar6 + 0x328);
            if ((uint)*(ushort *)(lVar6 + 0x330) <= *(uint *)(lVar6 + 0x338)) {
              lVar7 = 0;
            }
            iVar2 = *(int *)(lVar7 + 0xc);
          }
          lVar5 = lVar5 - iVar2;
          lVar4 = lVar4 - *(int *)(lVar6 + 0x11a0);
        }
        lVar8 = lVar8 + 8;
      } while (lVar3 != lVar8);
    }
  }
  goto LAB_1401009ba;
}

