// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400ea470  size: 207 bytes
// Name:    FUN_1400ea470
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144e3fa30, FUN_144f68b50, FUN_1400ea570
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_1400ea470(longlong param_1)

{
  byte bVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  cVar5 = func_0x0001400ea540();
  if (cVar5 != '\0') {
    return 0;
  }
  if (-1 < DAT_14a1e8940) {
    uVar7 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffff0;
    cVar5 = FUN_1400ea570(uVar7);
    if (cVar5 == '\0') {
      bVar1 = *(byte *)(param_1 + 0xcc64);
      uVar2 = *(undefined4 *)(uVar7 + 0x9c);
      if (((((bVar1 & 1) != 0) || (cVar5 = FUN_144e3fa30(uVar2), cVar5 == '\0')) &&
          (cVar5 = FUN_144f68b50(uVar2), cVar5 == '\0')) &&
         (((lVar6 = func_0x000145226dc0(uVar2), lVar6 == 0 ||
           (uVar3 = *(uint *)(lVar6 + 0x664), uVar3 == 0x1ffff)) ||
          ((uVar4 = *(uint *)(_DAT_14abb6918[5] + (ulonglong)(uVar3 & 0x1ffff) * 4),
           (~uVar4 & *(uint *)(_DAT_14abb6918 + 6)) != 0 ||
           (((uVar4 & 0x7fe0000) != (uVar3 & 0xfffe0000) || (*_DAT_14abb6918 == 0)))))))) {
        cVar5 = func_0x000144e238f0(uVar2);
        if (cVar5 != '\0') {
          return 1;
        }
        return (bVar1 & 2) >> 1;
      }
    }
    return 0;
  }
  return 0;
}

