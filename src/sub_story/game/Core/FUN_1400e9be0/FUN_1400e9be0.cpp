// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400e9be0  size: 197 bytes
// Name:    FUN_1400e9be0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14501f1a0, FUN_140004b40
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400e9be0(longlong param_1,short param_2)

{
  int *piVar1;
  ulonglong *puVar2;
  short *psVar3;
  ushort uVar4;
  char cVar5;
  longlong lVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong *plVar10;
  longlong lVar11;
  bool bVar12;
  longlong lVar13;
  
  lVar13 = (ulonglong)((uint)param_1 & 0x1f8) * 4;
  puVar2 = (ulonglong *)(lVar13 + 0x149c3d840);
  FUN_140004b40(puVar2);
  uVar4 = *(ushort *)(param_1 + 6);
  lVar6 = _DAT_149c3e108;
  if (uVar4 == 0) {
    func_0x0001455cc180(param_1);
    lVar6 = _DAT_149c3e108;
    lVar11 = (ulonglong)*(ushort *)(param_1 + 6) * 0x10;
    func_0x0001450e2130(param_1);
    uVar7 = FUN_14501f1a0();
    *(undefined8 *)(lVar6 + lVar11) = uVar7;
    *(undefined1 *)(lVar6 + 0xe + lVar11) = 0;
    lVar6 = _DAT_149c3e108;
    uVar4 = *(ushort *)(param_1 + 6);
    *(undefined1 *)(_DAT_149c3e108 + 0xd + (ulonglong)uVar4 * 0x10) = 0;
  }
  LOCK();
  psVar3 = (short *)(lVar6 + 8 + (ulonglong)uVar4 * 0x10);
  *psVar3 = *psVar3 + param_2;
  UNLOCK();
  piVar1 = (int *)(lVar13 + 0x149c3d850);
  *piVar1 = *piVar1 + -1;
  uVar9 = *puVar2;
  if (*piVar1 == 0) {
    do {
      uVar8 = uVar9;
      LOCK();
      uVar9 = *puVar2;
      if (uVar8 == uVar9) {
        *puVar2 = (ulonglong)((int)uVar8 - 1) | 0xffffffff00000000;
        uVar9 = uVar8;
      }
      UNLOCK();
    } while (uVar8 != uVar9);
    if ((uVar8 & 0xfffffffe) != 0) {
      plVar10 = (longlong *)(lVar13 + 0x149c3d848);
      lVar13 = *(longlong *)(lVar13 + 0x149c3d848);
      do {
        while (lVar13 < 0) {
          cVar5 = FUN_1400062d0(plVar10,1,&stack0xffffffffffffffe0);
          if (cVar5 != '\0') {
            return;
          }
        }
        LOCK();
        lVar6 = *plVar10;
        if (lVar13 == lVar6) {
          *plVar10 = lVar13 + 0x100000000;
          lVar6 = lVar13;
        }
        UNLOCK();
        bVar12 = lVar13 != lVar6;
        lVar13 = lVar6;
      } while (bVar12);
      return;
    }
  }
  return;
}

