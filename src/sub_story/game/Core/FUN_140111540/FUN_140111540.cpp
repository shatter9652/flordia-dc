// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140111540  size: 126 bytes
// Name:    FUN_140111540
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140111540(undefined8 param_1,longlong param_2,undefined4 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  int *piVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  longlong lStack_20;
  
  lVar2 = *(longlong *)(param_2 + 0x50);
  if (lVar2 != 0) {
    cVar3 = func_0x000144ea3ed0(param_1,param_3,param_5,&lStack_20);
    if (cVar3 != '\0') {
      lVar4 = *(longlong *)(lVar2 + 0xf60);
      if (lVar4 != lStack_20) {
        if (lStack_20 != 0) {
          LOCK();
          *(int *)(lStack_20 + 0x30) = *(int *)(lStack_20 + 0x30) + 1;
          UNLOCK();
          lVar4 = *(longlong *)(lVar2 + 0xf60);
        }
        if (lVar4 != 0) {
          LOCK();
          piVar1 = (int *)(lVar4 + 0x30);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            func_0x000144e3f350(lVar4);
            func_0x000144d9c130(lVar4,0x40);
          }
        }
        *(longlong *)(lVar2 + 0xf60) = lStack_20;
      }
    }
  }
  return;
}

