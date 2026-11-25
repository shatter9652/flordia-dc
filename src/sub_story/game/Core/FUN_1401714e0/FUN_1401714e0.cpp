// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401714e0  size: 303 bytes
// Name:    FUN_1401714e0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1401714e0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = func_0x000144ee2e80(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),0);
  *(undefined8 *)(*(longlong *)(param_1 + 0x310) + 0x260) = uVar3;
  lVar1 = *(longlong *)(param_1 + 0x310);
  lVar2 = *(longlong *)(lVar1 + 0x260);
  if (lVar2 != 0) {
    *(undefined4 *)(lVar2 + 0x78) = 0x3f7ae148;
    *(undefined8 *)(lVar2 + 0x58) = 0;
    *(undefined4 *)(lVar2 + 0x68) = 0;
    *(undefined2 *)(lVar2 + 0x50) = 0x101;
  }
  uVar3 = func_0x000144ee2e80(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),2);
  *(undefined8 *)(lVar1 + 0x270) = uVar3;
  lVar1 = *(longlong *)(param_1 + 0x310);
  lVar2 = *(longlong *)(lVar1 + 0x270);
  if (lVar2 != 0) {
    *(undefined1 *)(lVar2 + 0x78) = 8;
    *(undefined8 *)(lVar2 + 0x58) = 0;
    *(undefined4 *)(lVar2 + 0x68) = 0;
    *(undefined2 *)(lVar2 + 0x50) = 0x101;
  }
  uVar3 = func_0x000144ee2e80(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),1);
  *(undefined8 *)(lVar1 + 0x268) = uVar3;
  lVar1 = *(longlong *)(param_1 + 0x310);
  lVar2 = *(longlong *)(lVar1 + 0x268);
  if (lVar2 != 0) {
    *(undefined4 *)(lVar2 + 0x78) = 0x3f7ae148;
    *(undefined8 *)(lVar2 + 0x58) = 0;
    *(undefined4 *)(lVar2 + 0x68) = 0;
    *(undefined2 *)(lVar2 + 0x50) = 0x101;
  }
  uVar3 = func_0x000144ee2e80(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),3);
  *(undefined8 *)(lVar1 + 0x278) = uVar3;
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x310) + 0x278);
  if (lVar1 != 0) {
    *(undefined1 *)(lVar1 + 0x78) = 8;
    *(undefined8 *)(lVar1 + 0x58) = 0;
    *(undefined4 *)(lVar1 + 0x68) = 0;
    *(undefined2 *)(lVar1 + 0x50) = 0x101;
  }
  return;
}

