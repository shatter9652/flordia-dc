// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14003cf60  size: 237 bytes
// Name:    FUN_14003cf60
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14003dfb0, FUN_144fa4c80, FUN_14003d050
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14003cf60(longlong param_1,longlong param_2,int param_3)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  longlong lVar5;
  
  if (param_1 == 0) {
    return 0;
  }
  cVar4 = FUN_144fa4c80(param_1,6);
  if (cVar4 == '\0') {
    uVar1 = *(undefined4 *)(param_1 + 0x9c);
    lVar5 = func_0x0001450da490(uVar1);
    if ((((lVar5 == 0) || (uVar2 = *(uint *)(lVar5 + 0xeb0), uVar2 == 0x1ffff)) ||
        (uVar3 = *(uint *)(_DAT_14abb6918[5] + (ulonglong)(uVar2 & 0x1ffff) * 4),
        (~uVar3 & *(uint *)(_DAT_14abb6918 + 6)) != 0)) ||
       (((uVar3 & 0x7fe0000) != (uVar2 & 0xfffe0000) || (*_DAT_14abb6918 == 0)))) {
      if (param_3 == 2) {
        if (*(char *)(param_1 + 0x30) != '\x04') {
          return 0;
        }
        lVar5 = func_0x000144fa4a90(uVar1);
        if (lVar5 == 0) {
          return 0;
        }
        if ((*(byte *)(lVar5 + 0x2a) & 0x10) != 0) {
          return 0;
        }
        if (*(longlong *)(lVar5 + 0x18) == 0) {
          return 0;
        }
        if ((*(byte *)(*(longlong *)(lVar5 + 0x18) + 0x61) & 1) != 0) {
          return 0;
        }
      }
      else if (((param_2 == 0 || param_3 != 1) ||
               (cVar4 = FUN_14003d050(param_1,0x13), cVar4 == '\0')) ||
              (cVar4 = FUN_14003dfb0(param_2,param_1), cVar4 == '\0')) {
        return 0;
      }
    }
  }
  return 1;
}

