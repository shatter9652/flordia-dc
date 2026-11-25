// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401ad920  size: 434 bytes
// Name:    FUN_1401ad920
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1401adba0, FUN_1401adae0, FUN_1401aefc0, FUN_1401adb50, FUN_1401af120, FUN_1401aeeb0, FUN_1436d1440, FUN_1436d1470, FUN_1401b17f0, FUN_1450712f0, FUN_1401adb10, FUN_144f9a2a0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1401ad920(undefined8 param_1,longlong param_2,longlong param_3)

{
  uint uVar1;
  char cVar2;
  char cVar3;
  byte bVar4;
  byte bStack_39;
  undefined8 uStack_38;
  
  cVar2 = FUN_144f9a2a0(*(undefined4 *)(param_2 + 0xa8),*(undefined4 *)(param_2 + 0xdc));
  uVar1 = *(uint *)(param_2 + 0x148);
  if (cVar2 == '\0') {
    if ((uVar1 & 0x40) != 0) {
LAB_1401ada64:
      FUN_1401aeeb0(param_2);
    }
  }
  else {
    bVar4 = param_3 == param_2 & (byte)(uVar1 >> 8) & 1;
    if ((uVar1 & 0x40) == 0) {
      if (bVar4 != 0) {
        FUN_1401b17f0(param_2);
      }
    }
    else if (bVar4 == 0) goto LAB_1401ada64;
  }
  if ((*(byte *)(param_2 + 0x148) & 0x40) == 0) goto LAB_1401ad966;
  cVar2 = FUN_1401adae0(*(undefined4 *)(param_2 + 0x154),0x80000000);
  if (cVar2 != '\0') {
    FUN_1401adba0(param_1,param_2);
  }
  bStack_39 = 0;
  if ((*(byte *)(param_2 + 0xaa) & 0x40) == 0) {
    cVar3 = FUN_1401aefc0(param_2,&bStack_39);
    bVar4 = FUN_1401adae0(*(undefined4 *)(param_2 + 0x154),0x2000000000);
    bVar4 = bVar4 & bStack_39;
    if (cVar3 == '\0') {
      FUN_1401adb50();
    }
    else {
      FUN_1401af120(param_2);
    }
    if (bVar4 == 0) goto LAB_1401ad9f2;
    FUN_1436d1440(*(undefined4 *)(param_2 + 0x154));
  }
  else {
    FUN_1401adae0(*(undefined4 *)(param_2 + 0x154),0x2000000000);
    FUN_1401af120(param_2);
LAB_1401ad9f2:
    FUN_1401adb10(*(undefined4 *)(param_2 + 0x154));
  }
  uStack_38 = 0;
  cVar3 = FUN_1450712f0(*(undefined4 *)(param_2 + 0xfc),*(undefined8 *)(param_2 + 0x100));
  if (cVar3 != '\0') {
    FUN_1436d1470(*(undefined4 *)(param_2 + 0x154),uStack_38);
  }
  if (cVar2 != '\0') {
    return;
  }
LAB_1401ad966:
  FUN_1401adba0(param_1,param_2);
  return;
}

