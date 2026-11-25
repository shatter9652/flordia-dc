// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140130420  size: 68 bytes
// Name:    FUN_140130420
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140bebd60
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140130420(longlong param_1,undefined4 *param_2,char param_3)

{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uStack_20;
  undefined4 uStack_1c;
  
  if (*(undefined4 **)(param_1 + 0x48) != param_2) {
    FUN_140bebd60();
    *(undefined4 **)(param_1 + 0x48) = param_2;
    if (param_3 != '\0') {
      *(undefined1 *)(param_1 + 0x50) = 1;
      func_0x000144fde940(&uStack_1c);
      *param_2 = uStack_1c;
      _DAT_146df5b88 = (_DAT_146df5b88 & 0xffffffff) * 0x5cdcfaa7 + (_DAT_146df5b88 >> 0x20);
      func_0x00014285b6b0(param_2,(longlong)
                                  (*(float *)(*(longlong *)(param_2 + 4) + 0x3c) * _DAT_14615d3e4 *
                                  (float)((uint)_DAT_146df5b88 & 0x7fff)));
      param_2[2] = param_2[2] + 1;
      if (*(longlong *)(*(longlong *)(param_2 + 0x2c) + 0x18) != 0) {
        piVar1 = (int *)(*(longlong *)(*(longlong *)(param_2 + 0x2c) + 0x18) + 0x88);
        *piVar1 = *piVar1 + 1;
      }
      uVar2 = *param_2;
      cVar4 = func_0x000144d9e3f0(uVar2,param_2[1]);
      if (cVar4 != '\0') {
        param_2[1] = uVar2;
      }
      lVar7 = *(longlong *)(param_2 + 4);
      if ((lVar7 != 0) && (lVar6 = *(longlong *)(param_2 + 6), lVar6 != 0)) {
        if (((0 < *(int *)(lVar7 + 100)) || (0 < *(int *)(lVar7 + 0x54))) &&
           (lVar6 = func_0x000144fdec40(*(undefined8 *)(lVar6 + 0x30),*(undefined4 *)(lVar6 + 0x38))
           , lVar6 != 0)) {
          uVar5 = func_0x0001424d7fb0(lVar6);
          lVar7 = *(longlong *)(param_2 + 4);
          uVar3 = *(uint *)(lVar7 + 0x54);
          if ((ulonglong)uVar3 != 0) {
            lVar7 = *(longlong *)(lVar7 + 0x58);
            lVar6 = 0;
            do {
              func_0x000142d9e230(uVar5,*(undefined4 *)(lVar7 + lVar6));
              lVar6 = lVar6 + 4;
            } while ((ulonglong)uVar3 << 2 != lVar6);
            lVar7 = *(longlong *)(param_2 + 4);
          }
          uVar3 = *(uint *)(lVar7 + 100);
          if ((ulonglong)uVar3 != 0) {
            lVar7 = *(longlong *)(lVar7 + 0x68);
            lVar6 = 0;
            do {
              func_0x000142d9e290(uVar5,*(undefined4 *)(lVar7 + lVar6));
              lVar6 = lVar6 + 4;
            } while ((ulonglong)uVar3 << 2 != lVar6);
            lVar7 = *(longlong *)(param_2 + 4);
          }
        }
        uVar3 = *(uint *)(lVar7 + 0x84);
        if (((0 < (int)uVar3) &&
            (lVar6 = func_0x000144fdec40(*(undefined8 *)(*(longlong *)(param_2 + 6) + 0x30),
                                         *(undefined4 *)(*(longlong *)(param_2 + 6) + 0x38)),
            lVar6 != 0)) && (lVar6 = func_0x0001424d9310(*(undefined4 *)(lVar6 + 0x9c)), lVar6 != 0)
           ) {
          lVar7 = *(longlong *)(lVar7 + 0x88);
          lVar8 = 0;
          do {
            func_0x000142d9e250(lVar6,*(undefined4 *)(lVar7 + lVar8));
            lVar8 = lVar8 + 4;
          } while ((ulonglong)uVar3 << 2 != lVar8);
        }
      }
      return;
    }
    *(undefined1 *)(param_1 + 0x50) = 0;
  }
  return;
}

