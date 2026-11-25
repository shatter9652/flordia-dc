// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140171610  size: 684 bytes
// Name:    FUN_140171610
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144e258a0, FUN_14006e840
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140171610(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined4 uVar6;
  char acStack_24 [4];
  int iStack_20;
  undefined1 auStack_1c [4];
  
  plVar1 = *(longlong **)(param_1 + 0x410);
  cVar2 = (**(code **)(*plVar1 + 0x288))(plVar1);
  if (cVar2 == '\0') {
LAB_1401716d8:
    plVar1 = *(longlong **)(param_1 + 0x410);
    cVar2 = (**(code **)(*plVar1 + 0x288))(plVar1);
    if (cVar2 != '\0') {
      uVar4 = (**(code **)(*plVar1 + 0xa8))(plVar1);
      uVar6 = 0xa54d1d66;
      FUN_14006e840(uVar4,acStack_24,0xa54d1d66);
      if ((acStack_24[0] != '\0') && (uVar3 = 1, iStack_20 != -1)) goto LAB_14017166a;
    }
    plVar1 = *(longlong **)(param_1 + 0x410);
    cVar2 = (**(code **)(*plVar1 + 0x288))(plVar1);
    if (cVar2 != '\0') {
      uVar4 = (**(code **)(*plVar1 + 0xa8))(plVar1);
      uVar6 = 0xfa0cc6e4;
      FUN_14006e840(uVar4,acStack_24,0xfa0cc6e4);
      if ((acStack_24[0] != '\0') && (uVar3 = 1, iStack_20 != -1)) goto LAB_14017166a;
    }
    plVar1 = *(longlong **)(param_1 + 0x410);
    cVar2 = (**(code **)(*plVar1 + 0x288))(plVar1);
    if (cVar2 == '\0') {
LAB_1401717c9:
      plVar1 = *(longlong **)(param_1 + 0x410);
      cVar2 = (**(code **)(*plVar1 + 0x288))(plVar1);
      if (cVar2 != '\0') {
        uVar4 = (**(code **)(*plVar1 + 0xa8))(plVar1);
        uVar6 = 0xf242374f;
        FUN_14006e840(uVar4,acStack_24,0xf242374f);
        if ((acStack_24[0] != '\0') && (iStack_20 != -1)) goto LAB_1401717c2;
      }
      plVar1 = *(longlong **)(param_1 + 0x410);
      cVar2 = (**(code **)(*plVar1 + 0x288))(plVar1);
      if (cVar2 != '\0') {
        uVar4 = (**(code **)(*plVar1 + 0xa8))(plVar1);
        uVar6 = 0xe07293b0;
        FUN_14006e840(uVar4,acStack_24,0xe07293b0);
        if ((acStack_24[0] != '\0') && (iStack_20 != -1)) goto LAB_1401717c2;
      }
      plVar1 = *(longlong **)(param_1 + 0x410);
      cVar2 = (**(code **)(*plVar1 + 0x288))(plVar1);
      if (cVar2 == '\0') goto LAB_140171676;
      uVar4 = (**(code **)(*plVar1 + 0xa8))(plVar1);
      uVar6 = 0x41e5d6a1;
      FUN_14006e840(uVar4,acStack_24,0x41e5d6a1);
      if ((acStack_24[0] == '\0') || (iStack_20 == -1)) goto LAB_140171676;
    }
    else {
      uVar4 = (**(code **)(*plVar1 + 0xa8))(plVar1);
      uVar6 = 0x2b3fa955;
      FUN_14006e840(uVar4,acStack_24,0x2b3fa955);
      if ((acStack_24[0] == '\0') || (iStack_20 == -1)) goto LAB_1401717c9;
    }
LAB_1401717c2:
    uVar3 = 0;
  }
  else {
    uVar4 = (**(code **)(*plVar1 + 0xa8))(plVar1);
    uVar6 = 0xa78f21ea;
    FUN_14006e840(uVar4,acStack_24,0xa78f21ea);
    if ((acStack_24[0] == '\0') || (uVar3 = 1, iStack_20 == -1)) goto LAB_1401716d8;
  }
LAB_14017166a:
  *(undefined4 *)(param_1 + 0x360) = uVar6;
  *(undefined1 *)(param_1 + 0x364) = uVar3;
LAB_140171676:
  uVar4 = FUN_144e258a0(*(undefined8 *)(param_1 + 0x410));
  lVar5 = func_0x000144da1090(uVar4,*(undefined2 *)(param_1 + 0x43c),auStack_1c);
  *(undefined4 *)(param_1 + 0x348) =
       *(undefined4 *)
        ((~((longlong)*(short *)(lVar5 + 0x46) >> 0x3f) &
         ((longlong)*(short *)(lVar5 + 0x46) - (ulonglong)*(ushort *)(lVar5 + 0x48)) * 0x50 + lVar5)
        + 0x1c);
  *(bool *)(param_1 + 0x34c) = 3 < *(byte *)(param_1 + 0x481);
  return;
}

