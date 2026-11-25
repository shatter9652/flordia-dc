// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14004f8c0  size: 419 bytes
// Name:    FUN_14004f8c0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14004f8c0(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong *plVar7;
  longlong *plVar8;
  
  lVar1 = *(longlong *)(param_1 + 0x40);
  if (lVar1 != 0) {
    lVar5 = *(longlong *)(lVar1 + 0x4f8);
    if ((ulonglong)*(uint *)(lVar1 + 0x4f0) != 0) {
      plVar8 = (longlong *)(lVar5 + 0x20);
      lVar3 = (ulonglong)*(uint *)(lVar1 + 0x4f0) * 400 + lVar5;
      do {
        lVar4 = 0;
        plVar7 = plVar8;
        do {
          if (!SBORROW1('\0',*(char *)(lVar5 + lVar4))) {
            *(undefined1 *)(lVar5 + lVar4) = 0x80;
            if (plVar7[-1] != 0) {
              func_0x000144d9c130(plVar7[-1],0x2c8);
              plVar7[-1] = 0;
            }
            if (*plVar7 != 0) {
              func_0x000144d9c130(*plVar7,0x48);
              *plVar7 = 0;
            }
          }
          lVar4 = lVar4 + 1;
          plVar7 = plVar7 + 3;
        } while (lVar4 != 0x10);
        lVar5 = lVar5 + 400;
        plVar8 = plVar8 + 0x32;
      } while (lVar5 != lVar3);
      lVar5 = *(longlong *)(lVar1 + 0x4f8);
    }
    *(undefined4 *)(lVar1 + 0x4f4) = 0;
    if (lVar5 != 0) {
      func_0x000144d9c130(lVar5);
    }
    *(undefined4 *)(lVar1 + 0x4f0) = 0;
    *(undefined8 *)(lVar1 + 0x4f8) = 0;
    *(undefined8 *)(lVar1 + 0x4b8) = 10;
    *(undefined8 *)(lVar1 + 0x338) = 4;
    uVar2 = *(uint *)(lVar1 + 200);
    if (uVar2 != 0) {
      uVar6 = 0;
      do {
        lVar5 = *(longlong *)(*(longlong *)(lVar1 + 0xc0) + uVar6 * 8);
        if (lVar5 != 0) {
          do {
            lVar3 = *(longlong *)(lVar5 + 8);
            func_0x000144d9c130(lVar5,0x10);
            lVar5 = lVar3;
          } while (lVar3 != 0);
          uVar2 = *(uint *)(lVar1 + 200);
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar2);
    }
    if (*(longlong *)(lVar1 + 0xc0) != 0) {
      func_0x000144d9c130();
    }
    func_0x000144d9c130(lVar1,0x590);
  }
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  return;
}

