// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140015990  size: 244 bytes
// Name:    FUN_140015990
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140015a90
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


ulonglong FUN_140015990(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  ulonglong unaff_RBX;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar2 = *param_2;
  uVar7 = param_2[1];
  param_2[7] = uVar2;
  uVar3 = param_2[3];
  param_2[9] = uVar3;
  *(undefined4 *)(param_2 + 8) = 0;
  *(undefined4 *)(param_2 + 10) = 0;
  uVar6 = param_2[4];
  if ((uVar7 == 0) || (uVar6 == 0)) {
    uVar4 = 0;
    uVar5 = 0;
  }
  else {
    unaff_RBX = 0;
    do {
      *(undefined4 *)((longlong)param_2 + 0x44) = 0;
      *(undefined4 *)((longlong)param_2 + 0x54) = 0;
      uVar5 = (ulonglong)~*(uint *)(param_2 + 8);
      uVar4 = (ulonglong)~*(uint *)(param_2 + 10);
      if (uVar7 <= uVar5) {
        uVar5 = uVar7;
      }
      if (uVar6 <= uVar4) {
        uVar4 = uVar6;
      }
      *(uint *)(param_2 + 8) = (int)uVar5 + *(uint *)(param_2 + 8);
      *(uint *)(param_2 + 10) = (int)uVar4 + *(uint *)(param_2 + 10);
      iVar1 = FUN_140015a90(param_2 + 7,4);
      if (iVar1 < 0) goto LAB_140015a6a;
      uVar6 = uVar6 - uVar4;
      param_2[2] = param_2[2] + (ulonglong)*(uint *)((longlong)param_2 + 0x44);
      param_2[5] = param_2[5] + (ulonglong)*(uint *)((longlong)param_2 + 0x54);
      uVar7 = uVar7 - uVar5;
    } while ((uVar7 != 0) && (uVar6 != 0));
    uVar5 = (ulonglong)*(uint *)(param_2 + 8);
    uVar2 = param_2[7];
    uVar4 = (ulonglong)*(uint *)(param_2 + 10);
    uVar3 = param_2[9];
  }
  unaff_RBX = CONCAT71((int7)(unaff_RBX >> 8),1);
  param_2[1] = uVar5 + uVar7;
  *param_2 = uVar2;
  param_2[4] = uVar4 + uVar6;
  param_2[3] = uVar3;
  *(undefined4 *)(param_2 + 8) = 0;
  *(undefined4 *)(param_2 + 10) = 0;
LAB_140015a6a:
  return unaff_RBX & 0xffffffff;
}

