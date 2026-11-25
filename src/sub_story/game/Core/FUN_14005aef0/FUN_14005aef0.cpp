// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14005aef0  size: 113 bytes
// Name:    FUN_14005aef0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14005aef0(undefined8 param_1,undefined4 param_2,longlong *param_3)

{
  undefined1 *puVar1;
  longlong lVar2;
  undefined1 auStack_40 [4];
  uint uStack_3c;
  longlong alStack_38 [3];
  
  puVar1 = auStack_40;
  func_0x0001455b48d0(param_1,puVar1,param_2);
  if ((ulonglong)uStack_3c != 0) {
    do {
      for (lVar2 = *(longlong *)(*(longlong *)(puVar1 + 8) + 0x6f8); lVar2 != 0;
          lVar2 = *(longlong *)(lVar2 + 0x28)) {
        if (*(char *)(*(longlong *)(lVar2 + 8) + 0x14) == '\"') {
          if (*param_3 == 0) {
            (*(code *)param_3[1])(*(longlong *)(lVar2 + 8));
          }
          else {
            (*(code *)param_3[1])();
          }
        }
      }
      puVar1 = puVar1 + 8;
    } while (puVar1 != auStack_40 + (ulonglong)uStack_3c * 8);
  }
  return;
}

