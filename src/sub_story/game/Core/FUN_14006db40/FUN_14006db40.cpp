// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14006db40  size: 198 bytes
// Name:    FUN_14006db40
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined1 * FUN_14006db40(longlong param_1,undefined1 *param_2)

{
  code *pcVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined1 *puVar4;
  
  lVar2 = *(longlong *)(param_1 + 8);
  uVar3 = (ulonglong)(*(int *)(param_1 + 4) - 1);
  puVar4 = (undefined1 *)(uVar3 * 0x78 + lVar2);
  if (puVar4 != param_2) {
    *param_2 = *puVar4;
    if (*(code **)(param_2 + 0x68) != (code *)0x0) {
      (**(code **)(param_2 + 0x68))((ulonglong)(param_2 + 0x17) & 0xfffffffffffffff0);
    }
    pcVar1 = *(code **)(puVar4 + 0x60);
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)((ulonglong)(param_2 + 0x17) & 0xfffffffffffffff0,
                (ulonglong)(puVar4 + 0x17) & 0xfffffffffffffff0);
    }
    *(undefined8 *)(param_2 + 0x58) = *(undefined8 *)(puVar4 + 0x58);
    *(code **)(param_2 + 0x60) = pcVar1;
    *(undefined8 *)(param_2 + 0x68) = *(undefined8 *)(puVar4 + 0x68);
    *(undefined8 *)(param_2 + 0x70) = *(undefined8 *)(puVar4 + 0x70);
    lVar2 = *(longlong *)(param_1 + 8);
    uVar3 = (ulonglong)(*(int *)(param_1 + 4) - 1);
  }
  *(int *)(param_1 + 4) = (int)uVar3;
  pcVar1 = *(code **)(lVar2 + 0x68 + uVar3 * 0x78);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(lVar2 + uVar3 * 0x78 + 0x17 & 0xfffffffffffffff0);
  }
  return param_2;
}

