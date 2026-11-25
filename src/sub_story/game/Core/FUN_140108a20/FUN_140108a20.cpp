// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140108a20  size: 169 bytes
// Name:    FUN_140108a20
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1401095e0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_140108a20(ulonglong param_1,int param_2)

{
  ulonglong *puVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong *puVar4;
  
  FUN_1401095e0();
  uVar2 = _DAT_149e4ff10;
  puVar1 = _DAT_149e4ff08;
  if (param_2 != 0) {
    if ((param_1 < _DAT_149e4ff18 || _DAT_149e4ff18 == 0) || _DAT_149e4ff18 + 0x1000000 <= param_1)
    {
      func_0x000144d9c130(param_1);
    }
    else if ((ulonglong)_DAT_149e4ff10 != 0) {
      lVar3 = (ulonglong)_DAT_149e4ff10 * 0x18;
      puVar4 = _DAT_149e4ff08;
      do {
        if (*puVar4 == param_1) {
          *(undefined1 *)(puVar4 + 2) = 0;
          break;
        }
        puVar4 = puVar4 + 3;
        lVar3 = lVar3 + -0x18;
      } while (lVar3 != 0);
      if (0 < (int)uVar2) {
        uVar2 = uVar2 - 1;
        if (puVar1[(ulonglong)uVar2 * 3] == param_1) {
          _DAT_149e4ff20 = _DAT_149e4ff20 - puVar1[(ulonglong)uVar2 * 3 + 1];
          _DAT_149e4ff10 = uVar2;
        }
      }
    }
  }
  return param_1;
}

