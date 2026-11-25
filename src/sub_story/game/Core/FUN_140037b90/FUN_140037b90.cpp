// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140037b90  size: 582 bytes
// Name:    FUN_140037b90
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144e51f40, FUN_145565ee0, FUN_144da2360, FUN_144e91330, FUN_145565e70, FUN_144d9ed60, FUN_1408655b0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_140037b90(longlong param_1,undefined1 *param_2)

{
  uint *puVar1;
  longlong lVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  ushort uVar12;
  ushort uVar13;
  bool bVar14;
  byte bStack_55;
  uint uStack_54;
  longlong lStack_50;
  uint uStack_44;
  
  *param_2 = 0;
  FUN_145565e70(param_1,&uStack_44);
  if ((~uStack_44 & 0xfffffff) == 0) {
    return 0;
  }
  iVar5 = func_0x000144d9ed20(*(undefined1 *)(param_1 + 0x83),*(undefined1 *)(param_1 + 0x84));
  uVar9 = *(uint *)(param_1 + 0x78);
  if (iVar5 == 1) {
    lVar6 = _DAT_148420a30;
    uVar10 = 0xffffffff;
    if ((uVar9 & 0x3fffff) != 0x3fffff) {
      uVar10 = uVar9 & 0x3fffff;
    }
  }
  else {
    if (iVar5 != 2) goto LAB_140037c2e;
    lVar6 = _DAT_148420970;
    uVar10 = 0xffffffff;
    if ((uVar9 & 0x3fffff) != 0x3fffff) {
      uVar10 = uVar9 & 0x3fffff;
    }
  }
  if ((*(uint *)(lVar6 + (ulonglong)(uVar10 >> 5) * 4) >> (uVar10 & 0x1f) & 1) != 0) {
    return 0;
  }
LAB_140037c2e:
  *param_2 = 1;
  uStack_54 = uStack_44;
  cVar3 = FUN_144e51f40(uStack_44);
  if ((cVar3 != '\0') && (cVar3 = FUN_144da2360(&uStack_54), cVar3 != '\0')) {
    lStack_50 = 0;
    lVar6 = FUN_145565ee0(param_1);
    if ((lVar6 != 0) && ((*(byte *)(param_1 + 0x84) & 8) != 0)) {
      uVar13 = *(ushort *)(lVar6 + 0x12);
      uVar11 = 0;
      if ((uVar13 & 6) == 4) {
        uVar7 = FUN_144e91330(param_1);
        func_0x0001455ceb20(*(undefined8 *)(lVar6 + 0x18),0);
        uVar7 = FUN_1408655b0(uVar7);
        bStack_55 = 0;
        lVar2 = *(longlong *)(lVar6 + 0x40);
        lVar8 = func_0x0001444bb3b0(uVar7);
        uVar12 = 0;
        uVar11 = 0;
        if (lVar2 == lVar8) {
          bVar4 = func_0x0001404684a0(*(undefined8 *)(lVar6 + 0x20),&bStack_55);
          uVar12 = (ushort)bStack_55;
          uVar11 = (ulonglong)((uint)bVar4 * 2);
        }
        uVar13 = uVar12 | (ushort)uVar11 | uVar13 & 0xfff8;
        *(ushort *)(lVar6 + 0x12) = uVar13;
      }
      if ((uVar13 & 6) == 2) {
        FUN_144d9ed60(*(undefined4 *)(lStack_50 + 8),uVar9);
        uVar9 = _DAT_148420884;
        if (DAT_148420878 != '\x01') {
          return lVar6;
        }
        do {
          if (uVar9 == _DAT_148420880) {
            return lVar6;
          }
          LOCK();
          bVar14 = uVar9 != _DAT_148420884;
          uVar10 = uVar9 + 1;
          if (bVar14) {
            uVar9 = _DAT_148420884;
            uVar10 = _DAT_148420884;
          }
          _DAT_148420884 = uVar10;
          UNLOCK();
        } while (bVar14);
        *(uint *)(_DAT_148420888 + (ulonglong)uVar9 * 4) = uStack_44;
        return lVar6;
      }
      *param_2 = 0;
      iVar5 = func_0x000144d9ed20(CONCAT71((int7)(uVar11 >> 8),*(undefined1 *)(param_1 + 0x83)),
                                  *(undefined1 *)(param_1 + 0x84));
      lVar6 = _DAT_148420a30;
      if ((iVar5 == 1) || (lVar6 = _DAT_148420970, iVar5 == 2)) {
        uVar10 = *(uint *)(param_1 + 0x78) & 0x3fffff;
        uVar9 = 0xffffffff;
        if (uVar10 != 0x3fffff) {
          uVar9 = uVar10;
        }
        LOCK();
        puVar1 = (uint *)(lVar6 + (ulonglong)(uVar9 >> 5) * 4);
        *puVar1 = *puVar1 | 1 << (uVar9 & 0x1f);
        UNLOCK();
      }
    }
  }
  return 0;
}

