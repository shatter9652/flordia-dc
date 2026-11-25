// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401a0a90  size: 123 bytes
// Name:    FUN_1401a0a90
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140f23280, FUN_144e23920
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1401a0a90(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar6 = (ulonglong)*(ushort *)(param_1 + 0x18);
  if (uVar6 != 0) {
    do {
      uVar7 = uVar6 - 1;
      lVar1 = *(longlong *)(param_1 + 0x10);
      plVar2 = *(longlong **)(lVar1 + uVar7 * 8);
      if (plVar2 == (longlong *)0x0) {
        uVar5 = *(int *)(param_1 + 0x18) - 1;
        *(short *)(param_1 + 0x18) = (short)uVar5;
        *(undefined8 *)(lVar1 + (ulonglong)((uint)uVar7 & 0xffff) * 8) =
             *(undefined8 *)(lVar1 + (ulonglong)(uVar5 & 0xffff) * 8);
      }
      cVar4 = FUN_144e23920(*(undefined4 *)(*plVar2 + 0x9c));
      if (cVar4 != '\0') {
        FUN_140f23280(param_1,plVar2);
      }
      bVar3 = 1 < uVar6;
      uVar6 = uVar7;
    } while (bVar3);
  }
  return;
}

