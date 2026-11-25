// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14003b570  size: 209 bytes
// Name:    FUN_14003b570
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14003b670
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


ulonglong FUN_14003b570(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  char cVar1;
  uint uVar2;
  undefined8 unaff_RBX;
  ulonglong uVar3;
  undefined7 uVar4;
  
  cVar1 = func_0x00014003b650();
  if (cVar1 == '\0') {
    uVar3 = 0;
  }
  else {
    uVar4 = (undefined7)((ulonglong)unaff_RBX >> 8);
    uVar3 = CONCAT71(uVar4,1);
    if ((param_2 != (longlong *)0x0) && ((int)param_2[4] == 5)) {
      uVar3 = CONCAT71(uVar4,1);
      if ((longlong *)param_1[0x11] != param_2) {
        if ((int)param_1[0x15] == 5) {
          if ((longlong *)param_1[0x12] != param_2) {
            (**(code **)(*param_2 + 8))(param_2);
            if ((longlong *)param_1[0x12] != (longlong *)0x0) {
              (**(code **)(*(longlong *)param_1[0x12] + 0x10))();
            }
            param_1[0x12] = (longlong)param_2;
          }
        }
        else {
          if ((longlong *)param_1[0x11] != (longlong *)0x0) {
            (**(code **)(*param_1 + 0x38))(param_1);
          }
          FUN_14003b670(param_1,0);
          *(int *)(param_1 + 2) = (int)param_3;
          *(undefined4 *)(param_1 + 0x15) = 1;
          uVar2 = (**(code **)(*param_1 + 8))
                            (param_1,param_2,*(undefined1 *)((longlong)param_1 + 0x1c),param_3);
          uVar3 = (ulonglong)uVar2;
        }
      }
      *(undefined1 *)(param_1 + 0x16) = 0;
    }
  }
  return uVar3 & 0xffffffff;
}

