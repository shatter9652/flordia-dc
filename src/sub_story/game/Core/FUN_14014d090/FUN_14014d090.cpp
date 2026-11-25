// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14014d090  size: 316 bytes
// Name:    FUN_14014d090
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1450cb3e0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_14014d090(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  longlong *plVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  uStack_a8 = *(undefined8 *)(param_2 + 0x70);
  uStack_a0 = *(undefined8 *)(param_2 + 0x78);
  func_0x000144dc3790(&uStack_a8,&uStack_98);
  FUN_1450cb3e0(param_2,&uStack_88);
  if ((short)param_1[1] != 0) {
    uVar4 = 0;
    uVar3 = *(uint *)((longlong)param_1 + 0xbc) & 0xffffff01;
    do {
      plVar1 = *(longlong **)(*param_1 + uVar4 * 8);
      uStack_b8 = uStack_98;
      uStack_b0 = uStack_90;
      cVar2 = (**(code **)(*plVar1 + 0x58))(plVar1,&uStack_b8,uVar3);
      if (cVar2 != '\0') {
LAB_14014d1ae:
        if (param_3 == (undefined4 *)0x0) {
          return 1;
        }
        *param_3 = (int)uVar4;
        return 1;
      }
      uStack_b8 = uStack_88;
      uStack_b0 = uStack_80;
      cVar2 = (**(code **)(*plVar1 + 0x58))(plVar1,&uStack_b8,uVar3);
      if (cVar2 != '\0') goto LAB_14014d1ae;
      uStack_b8 = uStack_78;
      uStack_b0 = uStack_70;
      cVar2 = (**(code **)(*plVar1 + 0x58))(plVar1,&uStack_b8,uVar3);
      if (cVar2 != '\0') goto LAB_14014d1ae;
      uStack_b8 = uStack_68;
      uStack_b0 = uStack_60;
      cVar2 = (**(code **)(*plVar1 + 0x58))(plVar1,&uStack_b8,uVar3);
      if (cVar2 != '\0') goto LAB_14014d1ae;
      uStack_b8 = uStack_58;
      uStack_b0 = uStack_50;
      cVar2 = (**(code **)(*plVar1 + 0x58))(plVar1,&uStack_b8,uVar3);
      if (cVar2 != '\0') goto LAB_14014d1ae;
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(ushort *)(param_1 + 1));
  }
  return 0;
}

