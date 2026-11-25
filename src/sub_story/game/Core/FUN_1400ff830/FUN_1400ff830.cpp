// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400ff830  size: 244 bytes
// Name:    FUN_1400ff830
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14003dfb0, FUN_14546d520, FUN_144fa45a0, FUN_140100030, FUN_14003d050
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1400ff830(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = _DAT_14ab56e38;
  if (((*(byte *)((longlong)param_1 + 0xdc) & 0x10) != 0) &&
     ((((lVar2 = FUN_144fa45a0(), lVar4 == 0 || (lVar2 == 0)) ||
       ((((int)param_1[0x131] != 1 ||
         ((((lVar3 = FUN_14546d520(lVar2), lVar3 == 0 || ((*(byte *)(lVar3 + 0xc4) & 4) == 0)) ||
           (cVar1 = FUN_14003dfb0(lVar4,lVar2), cVar1 == '\0')) ||
          (cVar1 = FUN_14003d050(lVar2,0x13), cVar1 == '\0')))) &&
        ((cVar1 = (**(code **)(*param_1 + 0x528))(param_1,1), cVar1 == '\0' ||
         (((lVar4 = FUN_140100030(param_1), lVar4 == 0 || ((*(byte *)(lVar4 + 0xa5) & 0x40) == 0))
          && (((*(byte *)((longlong)param_1 + 0xbf4) & 0x14) == 0 ||
              (cVar1 = func_0x000142ff6570(*(undefined4 *)((longlong)param_1 + 0xbcc),0),
              cVar1 != '\0')))))))))) &&
      (((char)param_1[0x17c] != '\x01' || ((*(byte *)(param_1 + 0x178) & 0x20) == 0)))))) {
    return 1;
  }
  return 0;
}

