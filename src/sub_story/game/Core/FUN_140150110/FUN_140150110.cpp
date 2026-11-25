// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140150110  size: 261 bytes
// Name:    FUN_140150110
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140ac0740, FUN_144e682e0, FUN_14558e540, FUN_144e8f2f0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_140150110(longlong *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  char cVar3;
  int *piVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_60 [32];
  undefined8 uStack_40;
  
  if ((char)param_1[6] == '\x04') {
    uVar5 = func_0x000144e3bfa0();
    lVar6 = func_0x000144e8f430(uVar5,_DAT_14999e9fc);
    uVar5 = 3;
    if (lVar6 == 0) {
      if ((((*(uint *)((longlong)param_1 + 0xb4) & 0x3e) == 0x18) ||
          (cVar3 = (**(code **)(*param_1 + 0x50))(param_1), cVar3 != '\0')) &&
         (cVar3 = FUN_144e8f2f0(param_1,0x1492ab400), cVar3 != '\0')) {
        return 3;
      }
LAB_140150195:
      uVar5 = 1;
    }
  }
  else {
    if ((char)param_1[6] == '\x02') {
      uVar1 = *(undefined4 *)((longlong)param_1 + 0x9c);
      piVar4 = (int *)FUN_14558e540(uVar1);
      if ((char)piVar4[1] == '\0') {
        if (*piVar4 != 0) {
          return 1;
        }
        lVar6 = func_0x000144e68150(uVar1);
        if ((lVar6 != 0) && (uVar2 = *(uint *)(lVar6 + 0x314), (ulonglong)uVar2 != 0)) {
          lVar6 = *(longlong *)(lVar6 + 0x318);
          lVar7 = 0;
          do {
            uVar5 = *(undefined8 *)(lVar6 + lVar7);
            func_0x000140ac0760(auStack_60);
            cVar3 = FUN_144e682e0(uVar5,auStack_60);
            if ((cVar3 != '\0') && (piVar4 = (int *)FUN_140ac0740(uStack_40), *piVar4 != 0))
            goto LAB_140150195;
            lVar7 = lVar7 + 8;
          } while ((ulonglong)uVar2 << 3 != lVar7);
        }
      }
    }
    uVar5 = 2;
  }
  return uVar5;
}

