// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401651a0  size: 352 bytes
// Name:    FUN_1401651a0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140194450
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


bool FUN_1401651a0(int *param_1,int *param_2,longlong *param_3)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  iVar2 = *param_2;
  if (iVar2 == 0) {
    iVar2 = *param_1;
    if (iVar2 == 2) {
      lVar3 = func_0x000144ddb100(0);
      iVar2 = param_1[1];
code_r0x000140194450:
      lVar4 = func_0x0001411c2330(lVar3,iVar2);
      if (lVar4 != 0) {
        *param_3 = lVar4;
        param_3[1] = lVar3;
      }
      return lVar4 != 0;
    }
    if (iVar2 == 1) {
      lVar3 = func_0x000144ddb100(0);
      iVar2 = param_1[1];
      goto FUN_144dd3360;
    }
    if (iVar2 != 0) {
      return false;
    }
    uVar5 = 0;
  }
  else {
    if (iVar2 == 1) {
      iVar2 = *param_1;
      if (iVar2 == 1) {
        lVar3 = func_0x000144ddb100(1);
        iVar2 = param_1[1];
FUN_144dd3360:
        lVar4 = func_0x000144dd3390(lVar3,iVar2);
        if (lVar4 != 0) {
          *param_3 = lVar4;
          param_3[1] = lVar3;
        }
        return lVar4 != 0;
      }
      if (iVar2 == 2) {
        lVar3 = func_0x000144ddb100(1);
        iVar2 = param_1[1];
        goto code_r0x000140194450;
      }
      if (iVar2 != 0) {
        return false;
      }
      lVar3 = func_0x000144ddb100(1);
      uVar5 = *(undefined8 *)(param_1 + 1);
      goto FUN_145217d90;
    }
    if (iVar2 != 10) {
      return false;
    }
    if (*param_1 == 2) {
      uVar5 = func_0x000144ddb100(0);
      cVar1 = FUN_140194450(uVar5,param_1[1],param_3);
      if (cVar1 == '\0') {
        uVar5 = func_0x000144ddb100(1);
        cVar1 = FUN_140194450(uVar5,param_1[1],param_3);
        if (cVar1 == '\0') {
          return false;
        }
        *param_2 = 1;
      }
      else {
        *param_2 = 0;
      }
      return true;
    }
    if (*param_1 != 0) {
      return false;
    }
    iVar2 = func_0x000145213f70(param_1[2]);
    if (iVar2 == 1) {
      *param_2 = 1;
      uVar5 = 1;
    }
    else {
      if (iVar2 != 0) {
        return false;
      }
      uVar5 = 0;
      *param_2 = 0;
    }
  }
  lVar3 = func_0x000144ddb100(uVar5);
  uVar5 = *(undefined8 *)(param_1 + 1);
FUN_145217d90:
  lVar4 = FUN_145006910(lVar3,uVar5);
  if (lVar4 != 0) {
    *param_3 = lVar4;
    param_3[1] = lVar3;
  }
  return lVar4 != 0;
}

