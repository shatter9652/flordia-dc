// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401662b0  size: 616 bytes
// Name:    FUN_1401662b0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14149a140
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1401662b0(longlong param_1,byte param_2)

{
  undefined2 uVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  float fVar9;
  float fVar10;
  
  fVar9 = *(float *)(param_1 + 0x50c);
  if (((*(byte *)(param_1 + 0x51c) & 4) == 0) &&
     (bVar2 = *(byte *)(param_1 + 0x519),
     (byte)((char)bVar2 < '\0' |
           (bVar2 & 8) >> 3 & _DAT_146159ce0 <= fVar9 | (bVar2 & 4) >> 2 & _DAT_146159bd0 <= fVar9)
     != 1)) {
    return 1;
  }
  if (0 < *(short *)(param_1 + 0x154)) {
    if (fVar9 < _DAT_146159bd0) {
      if (fVar9 < _DAT_146159ce0) {
        if (param_2 == 0) {
          lVar8 = 8;
          lVar7 = 0;
          do {
            cVar3 = (**(code **)(**(longlong **)(param_1 + 0x100) + 0x600))
                              (*(longlong **)(param_1 + 0x100),
                               *(undefined2 *)(*(longlong *)(param_1 + 0x158) + lVar8));
            if (cVar3 != '\0') {
              return 0;
            }
            lVar7 = lVar7 + 1;
            lVar8 = lVar8 + 0x18;
          } while (lVar7 < *(short *)(param_1 + 0x154));
        }
        else {
          lVar7 = 8;
          lVar8 = 0;
          do {
            uVar1 = *(undefined2 *)(*(longlong *)(param_1 + 0x158) + lVar7);
            cVar3 = (**(code **)(**(longlong **)(param_1 + 0x100) + 0x600))
                              (*(longlong **)(param_1 + 0x100),uVar1);
            if (cVar3 != '\0') {
              FUN_14149a140(*(undefined8 *)(param_1 + 0x100),uVar1,1);
            }
            lVar8 = lVar8 + 1;
            lVar7 = lVar7 + 0x18;
          } while (lVar8 < *(short *)(param_1 + 0x154));
        }
      }
      else {
        lVar7 = 8;
        lVar8 = 0;
        do {
          plVar5 = *(longlong **)(param_1 + 0x100);
          uVar6 = (ulonglong)*(short *)(*(longlong *)(param_1 + 0x158) + lVar7);
          if ((*(byte *)(*(longlong *)(plVar5[0x35] + 0x20) + 3 + uVar6 * 0x70) & 0x20) == 0) {
            bVar2 = (**(code **)(*plVar5 + 0x600))(plVar5,uVar6 & 0xffffffff);
            if ((bVar2 & param_2) == 1) {
              plVar5 = *(longlong **)(param_1 + 0x100);
              goto LAB_14016643c;
            }
            if (bVar2 != 0) {
              return 0;
            }
          }
          else {
            if (param_2 == 0) {
              return 0;
            }
LAB_14016643c:
            FUN_14149a140(plVar5,uVar6 & 0xffffffff,1);
          }
          lVar8 = lVar8 + 1;
          lVar7 = lVar7 + 0x18;
        } while (lVar8 < *(short *)(param_1 + 0x154));
      }
    }
    else {
      lVar7 = 8;
      lVar8 = 0;
      fVar10 = _DAT_146159ce0;
      do {
        plVar5 = *(longlong **)(param_1 + 0x100);
        uVar6 = (ulonglong)*(short *)(*(longlong *)(param_1 + 0x158) + lVar7);
        uVar4 = (uint)*(undefined8 *)(*(longlong *)(plVar5[0x35] + 0x20) + uVar6 * 0x70);
        if (((uVar4 >> 0x1c & 1) != 0) || (((uVar4 >> 0x1d & 1) != 0 && (fVar10 <= fVar9)))) {
          if (param_2 == 0) {
            return 0;
          }
LAB_140166394:
          FUN_14149a140(plVar5,uVar6 & 0xffffffff,1);
        }
        else {
          bVar2 = (**(code **)(*plVar5 + 0x600))(plVar5,uVar6 & 0xffffffff);
          if ((bVar2 & param_2) == 1) {
            plVar5 = *(longlong **)(param_1 + 0x100);
            goto LAB_140166394;
          }
          if (bVar2 != 0) {
            return 0;
          }
        }
        lVar8 = lVar8 + 1;
        lVar7 = lVar7 + 0x18;
      } while (lVar8 < *(short *)(param_1 + 0x154));
    }
  }
  *(byte *)(param_1 + 0x51c) = *(byte *)(param_1 + 0x51c) & 0xfb;
  return 1;
}

