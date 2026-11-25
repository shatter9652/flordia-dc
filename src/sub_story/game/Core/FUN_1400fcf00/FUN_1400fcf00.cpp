// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400fcf00  size: 164 bytes
// Name:    FUN_1400fcf00
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1400fcf00(uint param_1,ushort param_2,longlong param_3,byte param_4,char param_5)

{
  uint uVar1;
  undefined8 uVar2;
  uint uVar3;
  longlong lVar4;
  
  lVar4 = (ulonglong)(param_1 & 0xfff) * 0x38;
  uVar1 = *(uint *)(lVar4 + 0x149c3e1d4);
  uVar3 = uVar1 >> 0x18 & 7;
  if (((param_5 == '\0') &&
      ((((*(char *)(_DAT_149c3e108 + 0xc + (ulonglong)param_2 * 0x10) == '\0' || (param_4 <= uVar3))
        && (_DAT_149c3e1c0 <= *(uint *)(param_3 + 0x90))) ||
       ((_DAT_149c3e1c4 <= *(uint *)(param_3 + 0x70) || (_DAT_149c3e1c8 < *(uint *)(param_3 + 0x74))
        ))))) ||
     ((uVar2 = CONCAT71((int7)((ulonglong)_DAT_149c3e108 >> 8),1),
      *(short *)(_DAT_149c3e108 + 10 + (ulonglong)param_2 * 0x10) != 0 &&
      ((uVar3 != 0 &&
       ((uVar3 != 1 ||
        (((uVar1 & 7) + 1) - (uint)(*(uint *)(lVar4 + 0x149c3e1d0) < 0x10000000) != 1)))))))) {
    uVar2 = 0;
  }
  return uVar2;
}

