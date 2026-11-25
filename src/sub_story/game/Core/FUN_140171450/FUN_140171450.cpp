// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140171450  size: 135 bytes
// Name:    FUN_140171450
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144e258a0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140171450(longlong param_1)

{
  ushort uVar1;
  ushort uVar2;
  short sVar3;
  uint uVar4;
  longlong lVar5;
  char cVar6;
  
  *(undefined1 *)(param_1 + 0x481) = 0;
  uVar1 = *(ushort *)(param_1 + 0x43c);
  if ((ulonglong)uVar1 != 0xffff) {
    uVar2 = *(ushort *)(param_1 + 0x440);
    if (uVar2 != 0xffff) {
      lVar5 = FUN_144e258a0(*(undefined8 *)(param_1 + 0x410));
      lVar5 = *(longlong *)(*(longlong *)(lVar5 + 0x18) + 0x40);
      sVar3 = *(short *)(lVar5 + (ulonglong)uVar1 * 2);
      uVar4 = (uint)sVar3;
      if ((-1 < sVar3) && (uVar4 != uVar2)) {
        cVar6 = '\0';
        do {
          cVar6 = cVar6 + '\x01';
          sVar3 = *(short *)(lVar5 + (ulonglong)(uVar4 & 0xffff) * 2);
          uVar4 = (uint)sVar3;
        } while (-1 < sVar3 && uVar4 != uVar2);
        *(char *)(param_1 + 0x481) = cVar6;
      }
      if (uVar4 != uVar2) {
        *(undefined1 *)(param_1 + 0x481) = 0;
      }
    }
  }
  return;
}

