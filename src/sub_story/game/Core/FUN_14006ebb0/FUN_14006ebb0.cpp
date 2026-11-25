// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14006ebb0  size: 839 bytes
// Name:    FUN_14006ebb0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14006e840, FUN_144e258a0, FUN_144fb4f10
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14006ebb0(longlong *param_1,float *param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  char acStack_70 [4];
  int iStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  
  if (param_1 == (longlong *)0x0) {
    return 0;
  }
  lVar2 = FUN_144e258a0();
  if (lVar2 == 0) {
    return 0;
  }
  cVar1 = (**(code **)(*param_1 + 0x288))(param_1);
  if (cVar1 == '\0') {
    iVar4 = -1;
  }
  else {
    uVar3 = (**(code **)(*param_1 + 0xa8))(param_1);
    FUN_14006e840(uVar3,acStack_70,0x3d371ddc);
    iVar4 = -1;
    if (acStack_70[0] != '\0') {
      iVar4 = iStack_6c;
    }
  }
  cVar1 = (**(code **)(*param_1 + 0x288))(param_1);
  if (cVar1 == '\0') {
LAB_14006ec6f:
    cVar1 = (**(code **)(*param_1 + 0x288))(param_1);
    iVar4 = -1;
    if (cVar1 != '\0') {
      uVar3 = (**(code **)(*param_1 + 0xa8))(param_1);
      FUN_14006e840(uVar3,acStack_70,0x28fcab60);
      iVar4 = -1;
      if (acStack_70[0] != '\0') {
        iVar4 = iStack_6c;
      }
    }
    cVar1 = (**(code **)(*param_1 + 0x288))(param_1);
    iVar5 = -1;
    if (cVar1 != '\0') {
      uVar3 = (**(code **)(*param_1 + 0xa8))(param_1);
      FUN_14006e840(uVar3,acStack_70,0x67904650);
      iVar5 = -1;
      if (acStack_70[0] != '\0') {
        iVar5 = iStack_6c;
      }
    }
  }
  else {
    uVar3 = (**(code **)(*param_1 + 0xa8))(param_1);
    FUN_14006e840(uVar3,acStack_70,0x2708a9fc);
    if (((iVar4 == -1) || (acStack_70[0] == '\0')) || (iVar5 = iStack_6c, iStack_6c == -1))
    goto LAB_14006ec6f;
  }
  if ((iVar4 == -1) || (iVar5 == -1)) {
    cVar1 = (**(code **)(*param_1 + 0x288))(param_1);
    iVar4 = -1;
    if (cVar1 != '\0') {
      uVar3 = (**(code **)(*param_1 + 0xa8))(param_1);
      FUN_14006e840(uVar3,acStack_70,0x7f6fc3a2);
      iVar4 = -1;
      if (acStack_70[0] != '\0') {
        iVar4 = iStack_6c;
      }
    }
    cVar1 = (**(code **)(*param_1 + 0x288))(param_1);
    iVar5 = -1;
    if (cVar1 != '\0') {
      uVar3 = (**(code **)(*param_1 + 0xa8))(param_1);
      FUN_14006e840(uVar3,acStack_70,0x791e0010);
      iVar5 = -1;
      if (acStack_70[0] != '\0') {
        iVar5 = iStack_6c;
      }
    }
  }
  if ((iVar4 == -1) || (iVar5 == -1)) {
    cVar1 = (**(code **)(*param_1 + 0x288))(param_1);
    iVar4 = -1;
    if (cVar1 != '\0') {
      uVar3 = (**(code **)(*param_1 + 0xa8))(param_1);
      FUN_14006e840(uVar3,acStack_70,0x811896f8);
      iVar4 = -1;
      if (acStack_70[0] != '\0') {
        iVar4 = iStack_6c;
      }
    }
    cVar1 = (**(code **)(*param_1 + 0x288))(param_1);
    iVar5 = -1;
    if (cVar1 != '\0') {
      uVar3 = (**(code **)(*param_1 + 0xa8))(param_1);
      FUN_14006e840(uVar3,acStack_70,0x6ab5a17e);
      iVar5 = -1;
      if (acStack_70[0] != '\0') {
        iVar5 = iStack_6c;
      }
    }
    if (iVar4 == -1) {
      fVar6 = 0.0;
      fStack_58 = 0.0;
      fStack_54 = 0.0;
      fStack_50 = 0.0;
      fStack_4c = 0.0;
      goto LAB_14006ed46;
    }
  }
  uVar3 = FUN_144e258a0(param_1);
  FUN_144fb4f10(uVar3,&fStack_58,iVar4);
  fVar6 = _DAT_145fc6ed8;
LAB_14006ed46:
  if (iVar5 != -1) {
    uVar3 = FUN_144e258a0(param_1);
    FUN_144fb4f10(uVar3,&fStack_68,iVar5);
    fStack_58 = fStack_58 + fStack_68;
    fStack_54 = fStack_54 + fStack_64;
    fStack_50 = fStack_50 + fStack_60;
    fStack_4c = fStack_4c + fStack_5c;
    fVar6 = fVar6 + _DAT_145fc6ed8;
  }
  if ((fVar6 == 0.0) && (!NAN(fVar6))) {
    return 0;
  }
  fVar6 = _DAT_145fc6ed8 / fVar6;
  *param_2 = fVar6 * fStack_58;
  param_2[1] = fVar6 * fStack_54;
  param_2[2] = fVar6 * fStack_50;
  param_2[3] = fVar6 * fStack_4c;
  return 1;
}

