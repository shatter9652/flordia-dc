// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400f8220  size: 453 bytes
// Name:    FUN_1400f8220
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1433d7290, FUN_1433d7170, FUN_1433d6fa0, FUN_141526690, FUN_144e66b80, FUN_1433d6e30, FUN_1433d7140, FUN_1433d70e0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400f8220(longlong param_1,byte param_2)

{
  undefined2 uVar1;
  longlong lVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  int iStack_1c;
  
  if ((*(uint *)(param_1 + 0x70) >> 10 & 1) != 0) {
    return;
  }
  *(uint *)(param_1 + 0x70) = *(uint *)(param_1 + 0x70) | 0x400;
  uVar1 = *(undefined2 *)(param_1 + 0x4c);
  cVar3 = FUN_144e66b80(uVar1,0);
  if ((cVar3 == '\0') ||
     (plVar4 = (longlong *)
               func_0x000144f1ba00(*(undefined4 *)(_DAT_14ab83d78 + 0xc),
                                   *(undefined8 *)(_DAT_14ab83d78 + 0x10),uVar1),
     plVar4 == (longlong *)0x0)) {
    FUN_1433d6e30(_DAT_149df7ad8,param_1,param_2 | -1 < (short)*(undefined4 *)(param_1 + 0x54));
  }
  else {
    cVar3 = (**(code **)(*plVar4 + 8))(plVar4,0xa8d9022d);
    if (cVar3 != '\0') {
      func_0x0001452c6e80(param_1);
    }
    FUN_1433d6e30(_DAT_149df7ad8,param_1,-1 < (short)*(undefined4 *)(param_1 + 0x54) | param_2);
    cVar3 = (**(code **)(*plVar4 + 8))(plVar4);
    if (cVar3 == '\0') {
      cVar3 = (**(code **)(*plVar4 + 8))(plVar4,0xfb9ad9d7);
      if (cVar3 == '\0') {
        cVar3 = (**(code **)(*plVar4 + 8))(plVar4,0xaf4cfc98);
        if (cVar3 == '\0') {
          cVar3 = (**(code **)(*plVar4 + 8))(plVar4);
          if (cVar3 == '\0') {
            cVar3 = (**(code **)(*plVar4 + 8))(plVar4);
            if (cVar3 != '\0') {
              FUN_1433d7170(param_1);
            }
          }
          else {
            FUN_1433d7140(param_1);
          }
        }
        else {
          FUN_141526690(param_1);
        }
      }
      else {
        FUN_1433d70e0(param_1);
      }
    }
    else {
      FUN_1433d6fa0(param_1);
    }
  }
  if (((*(byte *)(param_1 + 0x56) & 2) != 0) && ((ulonglong)_DAT_14875c09c != 0)) {
    uVar8 = 0;
    plVar4 = _DAT_14875c0a0;
    do {
      if (*plVar4 == param_1) {
        if ((int)plVar4[1] != -1) {
          FUN_1433d7290();
        }
        _DAT_14875c09c = _DAT_14875c09c - 1;
        if (_DAT_14875c09c != (uint)uVar8) {
          lVar5 = (_DAT_14875c0a0 + (ulonglong)_DAT_14875c09c * 2)[1];
          plVar4 = _DAT_14875c0a0 + uVar8 * 2;
          *plVar4 = _DAT_14875c0a0[(ulonglong)_DAT_14875c09c * 2];
          plVar4[1] = lVar5;
          uVar8 = (ulonglong)_DAT_14875c09c;
        }
        _DAT_14875c09c = (uint)uVar8;
        break;
      }
      uVar8 = uVar8 + 1;
      plVar4 = plVar4 + 2;
    } while (_DAT_14875c09c != uVar8);
  }
  if (*(uint *)(param_1 + 0x48) != 0) {
    uVar8 = 0;
    do {
      uVar7 = *(uint *)(param_1 + 0x28 + uVar8 * 4);
      if ((uVar7 & 0x3f8000) == 0x30000) {
        uVar7 = uVar7 & 0x7fff;
        lVar5 = *plRam000000014ab7f6c0;
        if (lVar5 == 0 ||
            (~*(uint *)(plRam000000014ab7f6c0[5] + (ulonglong)uVar7 * 4) &
            *(uint *)(plRam000000014ab7f6c0 + 6)) != 0) {
          return;
        }
        lVar2 = plRam000000014ab7f6c0[1];
        lVar6 = FUN_144f92180(CONCAT71((int7)((ulonglong)plRam000000014ab7f6c0 >> 8),
                                       *(undefined1 *)(param_1 + 0x1c)) & 0xffffffff,
                              *(undefined8 *)(param_1 + 0x20));
        if (lVar6 == 0) {
          return;
        }
        lVar6 = func_0x0001454dcdb0(*(undefined4 *)(lVar6 + 0x9c));
        if (lVar6 == 0) {
          return;
        }
        FUN_140c1b710(&iStack_1c,*(undefined4 *)(lVar5 + (ulonglong)(uVar7 * (int)lVar2)));
        if (iStack_1c != 0) {
          lVar5 = FUN_140c83120(lVar6,iStack_1c);
          if (lVar5 != 0) {
            FUN_140c1bb10(lVar5,0xb946aef0);
          }
          FUN_1437eb550(lVar6,iStack_1c);
        }
        return;
      }
      uVar8 = uVar8 + 1;
    } while (*(uint *)(param_1 + 0x48) != uVar8);
  }
  return;
}

