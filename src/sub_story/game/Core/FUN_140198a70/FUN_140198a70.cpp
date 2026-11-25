// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140198a70  size: 200 bytes
// Name:    FUN_140198a70
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145052470, FUN_140253970
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140198a70(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  uint uStack_28;
  int iStack_24;
  longlong lStack_20;
  
  FUN_140253970(param_2,*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x7c),&lStack_20,
                &iStack_24,&uStack_28);
  if ((lStack_20 != 0) &&
     (((uStack_28 != 0xffffffff && iStack_24 != -1) & *(byte *)(lStack_20 + 0x3fc) >> 2) == 1)) {
    if (uStack_28 < *(uint *)(*(longlong *)(lStack_20 + 0x118) + 0x2c)) {
      lVar3 = *(longlong *)(*(longlong *)(lStack_20 + 400) + 0x98);
      lVar1 = (ulonglong)
              *(uint *)(*(longlong *)(*(longlong *)(lStack_20 + 0x118) + 0x30) +
                       (ulonglong)uStack_28 * 4) * 0x10;
      if (*(int *)(lVar3 + 4 + lVar1) != 0) {
        lVar3 = lVar3 + lVar1;
        uVar2 = 0;
        do {
          FUN_145052470(param_1,*(undefined8 *)(*(longlong *)(lVar3 + 8) + uVar2 * 8),2);
          uVar2 = uVar2 + 1;
        } while (uVar2 < *(uint *)(lVar3 + 4));
      }
    }
  }
  return;
}

