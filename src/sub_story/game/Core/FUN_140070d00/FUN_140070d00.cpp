// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140070d00  size: 254 bytes
// Name:    FUN_140070d00
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144ed1510, FUN_144de57e0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140070d00(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  longlong *plVar7;
  longlong *plVar8;
  ulonglong uVar9;
  bool bVar10;
  
  *(byte *)((longlong)param_1 + 0xc56) = *(byte *)((longlong)param_1 + 0xc56) & 0xfe;
  lVar1 = *param_1;
  if (((lVar1 != 0) &&
      (((*(byte *)((longlong)param_1 + 0xc59) | *(byte *)(param_1 + 0x18b)) & 1) != 0)) &&
     (*(short *)(lVar1 + 0x40) != 0)) {
    plVar8 = param_1 + 1;
    uVar9 = 0;
    do {
      if (((*(int *)(*(longlong *)(*(longlong *)(lVar1 + 0x38) + uVar9 * 8) + 0xc) == 0) &&
          (plVar7 = (longlong *)FUN_144ed1510((int)*plVar8), plVar7 != (longlong *)0x0)) &&
         ((lVar2 = plVar7[0x12], lVar2 != 0 &&
          ((cVar4 = FUN_144de57e0(*(undefined8 *)(lVar2 + 0x370),*(undefined2 *)(lVar2 + 0x378),5),
           cVar4 != '\0' && (iVar5 = (**(code **)(*plVar7 + 0x28))(plVar7), iVar5 != 0)))))) {
        *(byte *)((longlong)param_1 + 0xc56) = *(byte *)((longlong)param_1 + 0xc56) | 1;
        break;
      }
      uVar9 = uVar9 + 1;
      plVar8 = (longlong *)((longlong)plVar8 + 0xc);
    } while (uVar9 < *(ushort *)(lVar1 + 0x40));
  }
  if (((*(byte *)(*param_1 + 0x5b) & 2) != 0) &&
     (iVar5 = func_0x000144e98420(param_1), uVar6 = _DAT_149df2494, iVar5 != 0)) {
    do {
      if (uVar6 == _DAT_149df2490) {
        return;
      }
      LOCK();
      bVar10 = uVar6 != _DAT_149df2494;
      uVar3 = uVar6 + 1;
      if (bVar10) {
        uVar6 = _DAT_149df2494;
        uVar3 = _DAT_149df2494;
      }
      _DAT_149df2494 = uVar3;
      UNLOCK();
    } while (bVar10);
    *(int *)((ulonglong)uVar6 * 4 + 0x149df2498) = iVar5;
  }
  return;
}

