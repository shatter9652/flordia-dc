// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140182d90  size: 420 bytes
// Name:    FUN_140182d90
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1401836d0, FUN_140182fa0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 *
FUN_140182d90(undefined8 *param_1,longlong *param_2,longlong param_3,uint param_4,longlong param_5,
             undefined4 param_6,uint param_7,undefined8 param_8,undefined4 param_9)

{
  ushort *puVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  uint uVar9;
  char cVar10;
  longlong *plVar11;
  undefined1 auStack_78 [56];
  
  param_4 = param_4 | param_7;
  while( true ) {
    uVar2 = (param_4 & 0x200) >> 9;
    if ((param_3 == 0) || ((short)(param_4 & 0x200) != 0)) break;
    puVar1 = (ushort *)(param_3 + 0x4a);
    param_3 = *(longlong *)(param_3 + 0x30);
    param_4 = (uint)*puVar1;
  }
  uVar9 = 2;
  if ((param_7 & 0x40) == 0) {
    uVar9 = (uint)((param_7 & 0xc) == 4);
  }
  uVar9 = uVar9 | param_7 >> 4 & 8;
  plVar11 = (longlong *)(param_5 + 0x10);
  uVar3 = (**(code **)(*(longlong *)(param_5 + 0x10) + 0x50))(plVar11,param_6,uVar9);
  cVar10 = (char)uVar2;
  if (uVar3 < 2) {
    if (param_2 != (longlong *)0x0) {
      uVar4 = (**(code **)(*param_2 + 0x128))(param_2);
      uVar5 = (**(code **)(*param_2 + 0xd8))(param_2);
      func_0x000140182f60(auStack_78,3);
      (**(code **)(*plVar11 + 0x58))(plVar11,auStack_78,param_6,0,uVar9);
      lVar6 = FUN_1401836d0(uVar5,auStack_78,param_8,uVar4,param_9);
      puVar7 = (undefined8 *)FUN_140182fa0(param_1,lVar6,uVar2);
      if (lVar6 != 0) {
        puVar7 = (undefined8 *)func_0x00014503e5c0(lVar6);
      }
      return puVar7;
    }
    plVar11 = (longlong *)0x149e30100;
    if (cVar10 != '\0') {
      plVar11 = (longlong *)0x149e30110;
    }
    *param_1 = plVar11;
    param_1[1] = 0;
    (**(code **)(*plVar11 + 8))();
    return param_1;
  }
  plVar8 = (longlong *)0x149e30120;
  if (cVar10 != '\0') {
    plVar8 = (longlong *)0x149e30130;
  }
  *param_1 = plVar8;
  param_1[1] = plVar11;
  (**(code **)(*plVar8 + 8))();
  return param_1;
}

