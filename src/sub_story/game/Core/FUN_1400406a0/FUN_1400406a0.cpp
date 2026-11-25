// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400406a0  size: 190 bytes
// Name:    FUN_1400406a0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400406a0(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (_DAT_14927f9c8 != param_1) {
    _DAT_14927f9c8 = param_1;
    func_0x000145f40580(0x14927f9fc,0,(ulonglong)_DAT_14927f9f8 << 2);
    _DAT_14927fa20 = _DAT_14615f580;
    uRam000000014927fa24 = _DAT_14615f580;
    uRam000000014927fa28 = _DAT_14615f580;
    uRam000000014927fa2c = _DAT_14615f580;
    _DAT_14927fa30 = 0x6400000064;
    _DAT_14927fa38 = 100;
    if ((param_1 != 0) && (uVar1 = *(uint *)(param_1 + 4), (ulonglong)uVar1 != 0)) {
      lVar3 = *(longlong *)(param_1 + 8);
      lVar4 = 0;
      do {
        uVar2 = *(uint *)(lVar3 + lVar4);
        if ((int)uVar2 < 7) {
          *(undefined4 *)((ulonglong)uVar2 * 4 + 0x14927f9fc) = *(undefined4 *)(lVar3 + 4 + lVar4);
          *(undefined4 *)(&DAT_14927fa20 + (ulonglong)uVar2 * 4) =
               *(undefined4 *)(lVar3 + 8 + lVar4);
        }
        lVar4 = lVar4 + 0xc;
      } while ((ulonglong)uVar1 * 0xc != lVar4);
    }
  }
  return;
}

