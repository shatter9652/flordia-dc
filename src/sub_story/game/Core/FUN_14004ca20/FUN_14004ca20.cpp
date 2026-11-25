// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14004ca20  size: 303 bytes
// Name:    FUN_14004ca20
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14004fbf0, FUN_14004c030
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_14004ca20(longlong *param_1,undefined8 param_2,uint param_3,longlong param_4)

{
  uint *puVar1;
  code *pcVar2;
  longlong *plVar3;
  int iVar4;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  bool bVar9;
  ulonglong uVar5;
  
  plVar3 = _DAT_1499ab170;
  if ((((param_3 & 0x3e0000) == 0x60000) &&
      (*(short *)(_DAT_14abbeed8 + (ulonglong)((param_3 & 0x1ffff) * _DAT_14abbeecc + 0x2c) * 2) !=
       -1)) && (*(longlong *)(_DAT_14abbeee8 + 0x2c0) != 0)) {
    param_4 = 0;
  }
  else {
    if (param_4 == 0) {
      uVar5 = _DAT_1499ab170[4];
      do {
        iVar4 = (int)uVar5;
        if (iVar4 == 0x1fffe) goto LAB_14004cb34;
        uVar8 = uVar5 & 0xffffffff;
        LOCK();
        uVar6 = plVar3[4];
        bVar9 = uVar5 == uVar6;
        if (bVar9) {
          plVar3[4] = (ulonglong)(*(uint *)(plVar3[5] + uVar8 * 4) & 0x1ffff) |
                      uVar5 & 0xffffffff00000000;
          uVar6 = uVar5;
        }
        UNLOCK();
        uVar5 = uVar6;
      } while (!bVar9);
      LOCK();
      *(int *)(plVar3 + 2) = (int)plVar3[2] + 1;
      UNLOCK();
      puVar1 = (uint *)(plVar3[5] + uVar8 * 4);
      *puVar1 = *puVar1 | *(uint *)(plVar3 + 6);
      if (*plVar3 == 0) {
LAB_14004cb34:
        pcVar2 = (code *)swi(3);
        lVar7 = (*pcVar2)();
        return lVar7;
      }
      param_4 = *plVar3 + (ulonglong)(uint)((int)plVar3[1] * iVar4);
      if (plVar3[3] != 0) {
        FUN_14004c030();
      }
      FUN_14004fbf0(param_4);
    }
    *(short *)(_DAT_14abbeed8 + (ulonglong)((param_3 & 0x1ffff) * _DAT_14abbeecc + 0x2c) * 2) =
         (short)((ulonglong)(param_4 - *_DAT_1499ab170) / (ulonglong)*(uint *)(_DAT_1499ab170 + 1));
    (**(code **)(*param_1 + 0x20))(param_1,param_2,param_4);
  }
  return param_4;
}

