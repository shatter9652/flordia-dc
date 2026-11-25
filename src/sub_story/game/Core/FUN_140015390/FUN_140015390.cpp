// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140015390  size: 157 bytes
// Name:    FUN_140015390
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144dc9d50
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_140015390(undefined8 *param_1,undefined4 param_2,int param_3,undefined8 *param_4)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  bool bVar5;
  undefined8 *apuStack_48 [2];
  ulonglong uStack_38;
  undefined8 uStack_30;
  
  if ((*(byte *)(param_1 + 3) & 4) == 0) {
    if ((*(byte *)(param_1 + 3) & 8) != 0) {
      func_0x000144770b20(param_1[2],apuStack_48,param_2,0xf);
      goto LAB_1400153fc;
    }
  }
  else {
    FUN_144dc9d50(param_1[2],apuStack_48,param_2,0xf);
LAB_1400153fc:
    if (apuStack_48[0] != (undefined8 *)0x0) {
      func_0x000140198500(*apuStack_48[0],param_4);
      return 1;
    }
  }
  if ((*(byte *)(param_1 + 3) & 2) == 0) {
LAB_140015490:
    uVar4 = 0;
  }
  else {
    lVar2 = func_0x000144dc9f90(*param_1);
    uVar1 = *(uint *)((longlong)param_1 + 0x1c);
    bVar5 = *(short *)(lVar2 + 0x2a) < 0;
    if (param_3 == 0) {
      if (bVar5 && (*(int *)(param_1 + 4) != 0 && uVar1 != 0)) goto LAB_1400154ad;
LAB_140015481:
      lVar3 = FUN_144e28fc0(lVar2,param_2,0xf);
      if (lVar3 == 0) goto LAB_140015490;
    }
    else {
      if (param_3 == 1) {
        if (!bVar5 || (*(int *)(param_1 + 4) == 0 || uVar1 == 0)) goto LAB_140015490;
      }
      else if (param_3 == 2) goto LAB_140015481;
LAB_1400154ad:
      uStack_38 = (ulonglong)uVar1;
      uStack_30 = 0;
      lVar3 = FUN_14000ed20(lVar2,param_2,0xf);
      if (lVar3 == 0) goto LAB_140015481;
    }
    *param_4 = *(undefined8 *)(lVar3 + 0x10);
    uVar4 = 1;
  }
  return uVar4;
}

