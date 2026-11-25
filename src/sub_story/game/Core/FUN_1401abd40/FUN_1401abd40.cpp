// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401abd40  size: 215 bytes
// Name:    FUN_1401abd40
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1452b2cb0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1401abd40(longlong param_1,byte param_2)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  undefined8 uVar4;
  bool bVar5;
  
  uVar1 = *(uint *)(param_1 + 0x20);
  uVar4 = 0x22ed9fe5;
  if (uVar1 != 0x1ffff) {
    uVar2 = *(uint *)(_DAT_14abb6918[5] + (ulonglong)(uVar1 & 0x1ffff) * 4);
    if ((((~uVar2 & *(uint *)(_DAT_14abb6918 + 6)) == 0) &&
        ((uVar2 & 0x7fe0000) == (uVar1 & 0xfffe0000))) && (*_DAT_14abb6918 != 0)) {
      if ((*(byte *)(param_1 + 0x91) & 0x40) == 0) {
        bVar5 = (*(byte *)(param_1 + 0x91) & 8) == 0;
        uVar4 = 0xdd20ebad;
        if (((param_2 | bVar5) == 1) && (bVar5 || 0.0 < *(float *)(param_1 + 0x3c))) {
          cVar3 = FUN_1452b2cb0(*(undefined4 *)
                                 (*_DAT_14abb6918 + 0x9c +
                                 (ulonglong)((uVar1 & 0x1ffff) * (int)_DAT_14abb6918[1])));
          uVar4 = 0x22ed9fe5;
          if (cVar3 != '\0') {
            uVar4 = 0x745c312f;
          }
        }
      }
      else {
        uVar4 = 0x22caba3;
        if ((uint)(_DAT_14abbef40 - *(int *)(param_1 + 0x7c)) <
            (uint)(longlong)(_DAT_1499aab14 * _DAT_146159c28)) {
          uVar4 = 0x7517ad6c;
        }
      }
    }
  }
  return uVar4;
}

