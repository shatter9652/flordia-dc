// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14005af70  size: 270 bytes
// Name:    FUN_14005af70
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_14005af70(undefined8 param_1,uint param_2,undefined2 param_3)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int *piVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  bool bVar8;
  
  iVar7 = _DAT_149e4772c;
  lVar2 = _DAT_149e47720;
  uVar3 = _DAT_149e47718;
  if ((~_DAT_149e47718 & 0xffff00000000) == 0) {
    uVar5 = 0;
  }
  else {
    do {
      uVar1 = (uint)(uVar3 >> 0x20);
      uVar6 = (ulonglong)((uVar1 & 0xffff) * _DAT_149e4772c);
      LOCK();
      bVar8 = uVar3 == _DAT_149e47718;
      uVar5 = (ulonglong)((int)uVar3 + 1) | (uVar3 & 0xffff000000000000) - 0x1000000000000 |
              (ulonglong)*(ushort *)(_DAT_149e47720 + uVar6) << 0x20;
      if (!bVar8) {
        uVar3 = _DAT_149e47718;
        uVar5 = _DAT_149e47718;
      }
      _DAT_149e47718 = uVar5;
      UNLOCK();
      if (bVar8) {
        piVar4 = (int *)(_DAT_149e47720 + 8 + uVar6);
        *(undefined2 *)(piVar4 + -1) = param_3;
        *(short *)((longlong)piVar4 + -2) = (short)param_2;
        uVar3 = (ulonglong)(uint)((int)piVar4 - (int)_DAT_149e47720);
        if (0x4ff8 / (ulonglong)param_2 != 1) {
          iVar7 = (((int)lVar2 + param_2) - (int)_DAT_149e47720) + 8 + iVar7 * (uVar1 & 0xffff);
          uVar5 = 0;
          do {
            *piVar4 = iVar7;
            piVar4 = (int *)((longlong)piVar4 + (ulonglong)param_2);
            uVar5 = uVar5 + 1;
            iVar7 = iVar7 + param_2;
          } while (uVar5 < 0x4ff8 / (ulonglong)param_2 - 1);
        }
        *piVar4 = -1;
        func_0x00014005b080(param_1,uVar3);
        uVar5 = CONCAT71((int7)(uVar3 >> 8),1);
        break;
      }
      uVar5 = 0;
    } while ((~uVar3 & 0xffff00000000) != 0);
  }
  return uVar5 & 0xffffffff;
}

