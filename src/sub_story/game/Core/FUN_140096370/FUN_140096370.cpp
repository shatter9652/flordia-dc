// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140096370  size: 389 bytes
// Name:    FUN_140096370
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144f4f9c0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140096370(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  bool bVar5;
  ulonglong uVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  lVar2 = *param_1;
  if ((lVar2 != 0) && (*(int *)((longlong)param_1 + 0xc4) != 0)) {
    uVar1 = *(undefined4 *)(lVar2 + 0x50);
    uVar8 = *(undefined4 *)(lVar2 + 0x24);
    uVar9 = *(undefined4 *)(lVar2 + 0x48);
    FUN_144f4f9c0(*(undefined8 *)param_1[0x19],param_2,
                  *(float *)((longlong)param_1 + 0x154) * *(float *)(param_1 + 0x2d) *
                  *(float *)(param_1 + 0x2b),uVar1,uVar9,uVar8,
                  (*(byte *)(param_1 + 0x35) & 0x10) >> 4);
    if (1 < *(uint *)((longlong)param_1 + 0xc4)) {
      uVar6 = 1;
      bVar5 = false;
      do {
        lVar2 = *(longlong *)(param_1[0x19] + uVar6 * 8);
        uVar3 = (uint)*(short *)(lVar2 + 0x100);
        if (*(uint *)((longlong)param_1 + 0x16c) == uVar3) {
          fVar7 = 0.0;
          if (!bVar5) {
            if (*(uint *)(param_1 + 0x2e) == uVar3) {
              fVar7 = *(float *)((longlong)param_1 + 0x164);
            }
            else {
              fVar7 = *(float *)((longlong)param_1 + 0x164) * *(float *)((longlong)param_1 + 0x15c);
            }
          }
          lVar4 = param_1[0x17];
          bVar5 = true;
LAB_140096485:
          fVar7 = fVar7 * *(float *)(lVar4 + 0x80 + (ulonglong)uVar3 * 0x90);
        }
        else {
          fVar7 = 0.0;
          if (*(uint *)(param_1 + 0x2e) == uVar3) {
            lVar4 = param_1[0x17];
            fVar7 = *(float *)((longlong)param_1 + 0x164) * *(float *)(param_1 + 0x2c);
            goto LAB_140096485;
          }
        }
        FUN_144f4f9c0(lVar2,param_2,
                      fVar7 * *(float *)((longlong)param_1 + 0x154) * *(float *)(param_1 + 0x2b),
                      uVar1,uVar9,uVar8,(*(byte *)(param_1 + 0x35) & 0x10) >> 4);
        uVar6 = uVar6 + 1;
      } while (uVar6 < *(uint *)((longlong)param_1 + 0xc4));
    }
  }
  return;
}

