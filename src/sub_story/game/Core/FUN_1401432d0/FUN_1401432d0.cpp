// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401432d0  size: 134 bytes
// Name:    FUN_1401432d0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1401432d0(uint param_1,longlong param_2)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  if (0 < (int)param_1) {
    uVar5 = 0;
    do {
      uVar7 = 0;
      lVar2 = *(longlong *)(*(longlong *)(param_2 + uVar5 * 0x48) + 0xf0);
      do {
        if ((uVar5 != uVar7) && (uVar1 = *(ushort *)(lVar2 + 0x98), (ulonglong)uVar1 != 0)) {
          lVar3 = *(longlong *)(lVar2 + 0x90);
          uVar6 = 0;
          lVar4 = *(longlong *)(*(longlong *)(param_2 + uVar7 * 0x48) + 0xf0);
          do {
            if ((lVar4 == *(longlong *)(lVar3 + uVar6 * 8)) &&
               (*(char *)(*(longlong *)(lVar2 + 0xc0) + uVar6) != '\x02')) {
              *(undefined1 *)(*(longlong *)(lVar2 + 0xc0) + uVar6) = 0;
              *(byte *)(lVar2 + 0xd8) = *(byte *)(lVar2 + 0xd8) | 2;
            }
            uVar6 = uVar6 + 1;
          } while (uVar1 != uVar6);
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 != param_1);
      uVar5 = uVar5 + 1;
    } while (uVar5 != param_1);
  }
  return;
}

