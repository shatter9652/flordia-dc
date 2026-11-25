// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400fd960  size: 279 bytes
// Name:    FUN_1400fd960
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400fd960(longlong param_1,undefined8 param_2,int *param_3,undefined4 param_4)

{
  uint *puVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  uint uVar5;
  
  lVar3 = *(longlong *)(param_1 + 0x1a8);
  if (*(uint *)(lVar3 + 0x10) < *(uint *)(param_1 + 0x130)) {
    uVar5 = *(uint *)(lVar3 + 0x14);
    puVar1 = (uint *)(lVar3 + 0x14);
    lVar2 = lVar3 + 0x20;
    if (uVar5 < 8) {
      (**(code **)(*(longlong *)(param_1 + 0x1b0) + 8))
                (param_1,param_2,param_3,param_4,lVar2,puVar1,8);
      uVar5 = *puVar1;
    }
    if (uVar5 == 8) {
      while( true ) {
        cVar4 = (**(code **)(*(longlong *)(param_1 + 0x1b8) + 8))(param_1,lVar2);
        if (cVar4 == '\0') break;
        if (*(char *)(lVar3 + 0x18) != '\0') {
          *param_3 = *param_3 + 1;
          *(undefined1 *)(lVar3 + 0x18) = 0;
        }
        *(undefined4 *)(lVar3 + 0x14) = 0;
        uVar5 = *(int *)(lVar3 + 0x10) + 1;
        *(uint *)(lVar3 + 0x10) = uVar5;
        if (*(uint *)(param_1 + 0x130) <= uVar5) {
          return;
        }
        (**(code **)(*(longlong *)(param_1 + 0x1b0) + 8))
                  (param_1,param_2,param_3,param_4,lVar2,puVar1,8);
        if (*puVar1 != 8) {
          return;
        }
      }
      if (*(char *)(lVar3 + 0x18) == '\0') {
        *param_3 = *param_3 + -1;
        *(undefined1 *)(lVar3 + 0x18) = 1;
      }
    }
  }
  return;
}

