// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14011f650  size: 236 bytes
// Name:    FUN_14011f650
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140123d80, FUN_140126790
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14011f650(longlong param_1,char param_2)

{
  longlong lVar1;
  undefined1 auStack_30 [4];
  uint uStack_2c;
  longlong lStack_28;
  
  (**(code **)(param_1 + 0x20d78))(param_1 + 0x20d60);
  if (param_2 != '\0') {
    if (*(char *)(param_1 + 0x20e02) == '\x01') {
      *(undefined1 *)(param_1 + 0x20e03) = 1;
    }
    if (*(int *)(param_1 + 0x20e3c) != 0) {
      lVar1 = param_1 + 0x20e28;
      FUN_140126790(auStack_30,lVar1);
      LOCK();
      *(undefined4 *)(param_1 + 0x20e2c) = 0;
      UNLOCK();
      func_0x000140126710(lVar1,*(longlong *)(param_1 + 0x20e40),
                          (ulonglong)*(uint *)(param_1 + 0x20e3c) * 0x80 +
                          *(longlong *)(param_1 + 0x20e40));
      func_0x000140126710(lVar1,lStack_28,(ulonglong)uStack_2c * 0x80 + lStack_28);
      LOCK();
      *(undefined4 *)(param_1 + 0x20e3c) = 0;
      UNLOCK();
      LOCK();
      uStack_2c = 0;
      UNLOCK();
      if (lStack_28 != 0) {
        func_0x000144d9c130();
      }
    }
  }
  FUN_140123d80(param_1,0,0,0);
  *(undefined1 *)(param_1 + 0x20e03) = 0;
  (**(code **)(param_1 + 0x20d98))(param_1 + 0x20d80);
  return;
}

