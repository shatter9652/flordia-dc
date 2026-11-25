// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14008c3a0  size: 265 bytes
// Name:    FUN_14008c3a0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14008c3a0(longlong *param_1,ushort param_2,ushort param_3,ushort param_4)

{
  uint uVar1;
  longlong lVar2;
  ushort uVar3;
  uint uVar4;
  
  lVar2 = *param_1;
  if (param_2 != param_3) {
    uVar1 = *(uint *)(param_1 + 1);
    uVar3 = *(ushort *)(lVar2 + 0x12 + (ulonglong)((uint)param_2 * 0x50));
    if (uVar3 < uVar1) {
      uVar4 = 0;
      do {
        if (((((ulonglong)param_1[(ulonglong)(uVar3 >> 6) + 0xd] >> ((ulonglong)uVar3 & 0x3f) & 1)
              != 0) || (0x1f < uVar4)) ||
           (param_1[(ulonglong)(uVar3 >> 6) + 0xd] =
                 param_1[(ulonglong)(uVar3 >> 6) + 0xd] | 1L << ((ulonglong)uVar3 & 0x3f),
           uVar3 == param_3)) break;
        uVar4 = uVar4 + 1;
        uVar3 = *(ushort *)(lVar2 + 0x12 + (ulonglong)((uint)uVar3 * 0x50));
      } while (uVar3 < uVar1);
    }
  }
  if (param_2 != param_4) {
    uVar1 = *(uint *)(param_1 + 1);
    uVar3 = *(ushort *)(lVar2 + 0x4a + (ulonglong)((uint)param_2 * 0x50));
    if (uVar3 < uVar1) {
      uVar4 = 0;
      do {
        if (((ulonglong)param_1[(ulonglong)(uVar3 >> 6) + 0xd] >> ((ulonglong)uVar3 & 0x3f) & 1) !=
            0) {
          return;
        }
        if (0x1f < uVar4) {
          return;
        }
        param_1[(ulonglong)(uVar3 >> 6) + 0xd] =
             param_1[(ulonglong)(uVar3 >> 6) + 0xd] | 1L << ((ulonglong)uVar3 & 0x3f);
        if (uVar3 == param_4) {
          return;
        }
        uVar4 = uVar4 + 1;
        uVar3 = *(ushort *)(lVar2 + 0x4a + (ulonglong)((uint)uVar3 * 0x50));
      } while (uVar3 < uVar1);
    }
  }
  return;
}

