// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401856d0  size: 513 bytes
// Name:    FUN_1401856d0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14455aeb0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


longlong * FUN_1401856d0(longlong *param_1,longlong *param_2,uint param_3)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  if (param_2 != (longlong *)0x0) {
    cVar2 = (**(code **)(*param_2 + 0x10))(param_2);
    if (cVar2 != '\0') {
      lVar1 = param_1[0xf];
      func_0x0001404333d0(*(undefined8 *)(lVar1 + 0x58));
      cVar2 = (**(code **)(*param_1 + 0x48))(param_1);
      if (cVar2 == '\0') {
        if (param_2[3] != 0 && param_2[2] != 0) {
          *(longlong *)(param_2[2] + 0x18) = param_2[3];
          auVar4._0_12_ = ZEXT812(0);
          auVar4._12_4_ = 0;
          *(longlong *)(param_2[3] + 0x10) = param_2[2];
          *(undefined1 (*) [16])(param_2 + 2) = auVar4;
        }
        param_2[2] = param_1[0x18];
        param_2[3] = (longlong)(param_1 + 0x16);
        *(longlong **)(param_1[0x18] + 0x18) = param_2;
        param_1[0x18] = (longlong)param_2;
        func_0x0001404333e0(param_1[0xf] + 0x38);
        (**(code **)(*(longlong *)param_1[10] + 8))((longlong *)param_1[10],param_1 + 6);
        func_0x0001404333d0(*(undefined8 *)(param_1[0xf] + 0x58));
        while ((int)param_2[8] == 0) {
          func_0x0001445d8f70(*(undefined8 *)(param_1[0xf] + 0x60),param_1[0xf] + 0x38);
        }
      }
      else {
        (**(code **)(*param_1 + 0x98))(param_1);
        (**(code **)(*param_1 + 0xa0))(param_1);
        cVar2 = (**(code **)(*param_2 + 8))(param_2);
        if (cVar2 != '\0') {
          if (param_2[3] != 0 && param_2[2] != 0) {
            *(longlong *)(param_2[2] + 0x18) = param_2[3];
            auVar5._0_12_ = ZEXT812(0);
            auVar5._12_4_ = 0;
            *(longlong *)(param_2[3] + 0x10) = param_2[2];
            *(undefined1 (*) [16])(param_2 + 2) = auVar5;
          }
          param_2[2] = param_1[0x16];
          param_2[3] = (longlong)(param_1 + 0x14);
          *(longlong **)(param_1[0x16] + 0x18) = param_2;
          param_1[0x16] = (longlong)param_2;
        }
      }
      if ((param_3 >> 8 & 1) != 0) {
        if (((longlong *)param_2[6] != (longlong *)0x0) &&
           (iVar3 = (**(code **)(*(longlong *)param_2[6] + 0x18))(), iVar3 == 2)) {
          FUN_14455aeb0(param_2[6]);
        }
        param_2[6] = 0;
      }
      if ((int)param_2[8] == 1) {
        param_2[6] = 0;
        func_0x00014503e5c0(param_2);
        param_2 = (longlong *)0x0;
      }
      func_0x0001404333e0(lVar1 + 0x38);
      return param_2;
    }
    func_0x00014503e5c0(param_2);
  }
  return (longlong *)0x0;
}

