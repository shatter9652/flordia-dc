// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14005a760  size: 395 bytes
// Name:    FUN_14005a760
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14005a760(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,undefined4 param_6)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar2 = (ulonglong)(~*(uint *)(param_1 + 0x2d2e4) & 1);
  uVar4 = (uint)*(float *)(param_1 + 0x2d2b0 + uVar2 * 4);
  uVar3 = (uint)*(float *)(param_1 + 0x2d2b8 + uVar2 * 4);
  if (uVar4 != 0 || uVar3 != 0) {
    (**(code **)(*param_2 + 0x1f8))(param_2,param_3,5);
    (**(code **)(*param_2 + 0x90))(param_2,_DAT_147c8221c,param_4);
    (**(code **)(*param_2 + 0x60))
              (param_2,*(undefined8 *)
                        (*(longlong *)(_DAT_147c821b8 + 0xc60) +
                        (ulonglong)
                        *(byte *)(*(longlong *)(_DAT_147c821b8 + 0xc70) + 0x395 +
                                 (ulonglong)
                                 (*(uint *)(*(longlong *)(_DAT_147c821b8 + 0xc68) +
                                           (ulonglong)DAT_146a4522e * 4) >> 0xf & 0x1ff) * 0x18) * 8
                        ));
    if (uVar4 == 0) {
      if (uVar3 != 0) {
LAB_14005a837:
        uVar4 = -uVar3;
        if ((int)-uVar3 < 0) {
          uVar4 = uVar3;
        }
        (**(code **)(*param_2 + 0x70))(param_2,1,uVar3 >> 0x1e & 0xfffffffe,uVar4,param_6);
                    /* WARNING: Could not recover jumptable at 0x00014005a885. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_2 + 0x160))(param_2,1,param_5,1);
        return;
      }
    }
    else {
      uVar1 = -uVar4;
      if ((int)-uVar4 < 0) {
        uVar1 = uVar4;
      }
      (**(code **)(*param_2 + 0x70))(param_2,uVar4 >> 0x1e & 0xfffffffe,1,uVar1,param_5);
      (**(code **)(*param_2 + 0x160))(param_2,1,param_6,1);
      if (uVar3 != 0) {
        (**(code **)(*param_2 + 0x1f8))(param_2,param_3,5);
        goto LAB_14005a837;
      }
    }
  }
  return;
}

