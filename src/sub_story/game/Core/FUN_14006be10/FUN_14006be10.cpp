// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14006be10  size: 200 bytes
// Name:    FUN_14006be10
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14006c4f0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14006be10(undefined8 param_1,undefined8 param_2,ulonglong param_3,ulonglong param_4,
                  undefined4 param_5,undefined4 param_6,longlong param_7)

{
  code *pcVar1;
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [72];
  undefined8 uStack_58;
  code *pcStack_50;
  undefined8 uStack_48;
  
  pcVar1 = *(code **)(param_7 + 0x58);
  if (pcVar1 != (code *)0x0) {
    param_3 = param_3 & 0xffffffff;
    (*pcVar1)(auStack_a0,param_7 + 0xfU & 0xfffffffffffffff0);
    param_4 = param_4 & 0xffffffff;
  }
  uStack_58 = *(undefined8 *)(param_7 + 0x50);
  uStack_48 = *(undefined8 *)(param_7 + 0x60);
  pcStack_50 = pcVar1;
  FUN_14006c4f0(param_1,param_2,param_3,param_4,0,0,param_5,param_6,auStack_a8,0);
  if (*(code **)(param_7 + 0x60) != (code *)0x0) {
    (**(code **)(param_7 + 0x60))(param_7 + 0xfU & 0xfffffffffffffff0);
  }
  return;
}

