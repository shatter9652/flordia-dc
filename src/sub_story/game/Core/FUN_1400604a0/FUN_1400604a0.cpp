// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400604a0  size: 152 bytes
// Name:    FUN_1400604a0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140037af0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_1400604a0(undefined8 param_1,ulonglong param_2)

{
  ushort uVar1;
  uint *puVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong *puVar5;
  
  puVar2 = (uint *)FUN_140037af0();
  if ((*puVar2 & 0x3ffff) != 0) {
    puVar5 = (ulonglong *)(_DAT_1498cc2d8 + -0x30 + (ulonglong)((*puVar2 & 0x3ffff) * 0x30));
    while( true ) {
      if (param_2 < *puVar5) {
        uVar1 = (ushort)puVar5[4];
        uVar4 = (*(byte *)((longlong)puVar5 + 0x24) & 3) << 0x10;
      }
      else {
        if (param_2 <= puVar5[*(byte *)((longlong)puVar5 + 0x25)]) {
          lVar3 = 0;
          do {
            if (puVar5[lVar3] == param_2) {
              lVar3 = func_0x000144dee940((longlong)puVar5 + lVar3 * 2 + 0x26);
              if (lVar3 == 0) {
                lVar3 = 0;
              }
              else {
                lVar3 = (ulonglong)((*(uint *)(lVar3 + 4) & 0x7fff) << 3) +
                        *(longlong *)
                         ((ulonglong)(*(uint *)(lVar3 + 4) >> 0xf & 0xff) * 8 + 0x1498d4b40);
              }
              return lVar3;
            }
            lVar3 = lVar3 + 1;
          } while ((ulonglong)*(byte *)((longlong)puVar5 + 0x25) + 1 != lVar3);
          return 0;
        }
        uVar1 = *(ushort *)((longlong)puVar5 + 0x22);
        uVar4 = (*(uint *)((longlong)puVar5 + 0x24) & 0xc) << 0xe;
      }
      if ((uVar4 | uVar1) == 0) break;
      puVar5 = (ulonglong *)((ulonglong)(uVar4 | uVar1) * 0x30 + _DAT_1498cc2d8 + -0x30);
    }
  }
  return 0;
}

