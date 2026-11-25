// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140071870  size: 142 bytes
// Name:    FUN_140071870
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140071870
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140071870(longlong param_1)

{
  short *psVar1;
  longlong lVar2;
  ushort uVar3;
  ushort uVar4;
  
  *(undefined2 *)(param_1 + 0x1fa) = 0;
  if (*(short *)(param_1 + 0x172) != 0) {
    uVar4 = 0;
    do {
      lVar2 = *(longlong *)(param_1 + 0x178 + (ulonglong)uVar4 * 8);
      if (*(short *)(lVar2 + 0x1fa) == -1) {
        FUN_140071870();
      }
      else {
        uVar3 = *(short *)(param_1 + 0x172) - 1;
        if (uVar3 != uVar4) {
          *(undefined8 *)(param_1 + 0x178 + (ulonglong)uVar4 * 8) =
               *(undefined8 *)(param_1 + 0x178 + (ulonglong)uVar3 * 8);
        }
        LOCK();
        *(short *)(param_1 + 0x172) = *(short *)(param_1 + 0x172) + -1;
        UNLOCK();
        uVar4 = uVar4 - 1;
        psVar1 = (short *)(lVar2 + 0x1fe);
        *psVar1 = *psVar1 + -1;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(ushort *)(param_1 + 0x172));
  }
  *(undefined2 *)(param_1 + 0x1fa) = 0xffff;
  return;
}

