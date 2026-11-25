// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400f87c0  size: 53 bytes
// Name:    FUN_1400f87c0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400f87c0(longlong param_1,char param_2)

{
  longlong *plVar1;
  undefined8 in_RAX;
  longlong lVar2;
  longlong *plVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  if ((param_2 == '\0') ||
     (lVar2 = func_0x000144f921d0(CONCAT71((int7)((ulonglong)in_RAX >> 8),
                                           *(undefined1 *)(param_1 + 0x1c)) & 0xffffffff,
                                  *(undefined8 *)(param_1 + 0x20)), lVar2 == 0)) {
    return;
  }
  plVar1 = *(longlong **)(lVar2 + 0x18);
  uVar4 = (ulonglong)*(uint *)(lVar2 + 0x14);
  plVar3 = plVar1;
  if (uVar4 == 0) {
code_r0x00014439de31:
    plVar1 = plVar1 + uVar4;
    if (plVar3 != plVar1) {
      func_0x000145f40570(plVar3,plVar1,(uVar4 * 8 + *(longlong *)(lVar2 + 0x18)) - (longlong)plVar1
                         );
      *(int *)(lVar2 + 0x14) =
           *(int *)(lVar2 + 0x14) - (int)((ulonglong)((longlong)plVar1 - (longlong)plVar3) >> 3);
    }
  }
  else {
    lVar5 = 0;
    do {
      if (*(longlong *)((longlong)plVar1 + lVar5) == param_1) {
        plVar3 = (longlong *)((longlong)plVar1 + lVar5);
        if (uVar4 * 8 + -8 != lVar5) {
          lVar5 = lVar5 + 8;
          do {
            if (*(longlong *)((longlong)plVar1 + lVar5) != param_1) {
              *plVar3 = *(longlong *)((longlong)plVar1 + lVar5);
              plVar3 = plVar3 + 1;
            }
            lVar5 = lVar5 + 8;
          } while (uVar4 * 8 - lVar5 != 0);
        }
        goto code_r0x00014439de31;
      }
      lVar5 = lVar5 + 8;
    } while (uVar4 * 8 - lVar5 != 0);
  }
  return;
}

