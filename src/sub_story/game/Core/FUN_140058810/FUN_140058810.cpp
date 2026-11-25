// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140058810  size: 177 bytes
// Name:    FUN_140058810
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144e917f0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140058810(undefined1 (*param_1) [16],float param_2,uint param_3)

{
  undefined1 auVar1 [16];
  uint uVar2;
  uint uStack_4c;
  longlong lStack_48;
  uint uStack_3c;
  char cStack_38;
  
  auVar1 = vroundss_avx(ZEXT416((uint)((float)(int)param_3 * param_2)),
                        ZEXT416((uint)((float)(int)param_3 * param_2)),10);
  *param_1 = ZEXT816(0) << 0x20;
  if ((int)auVar1._0_4_ != 0) {
    do {
      _DAT_14ab4e7c0 = (_DAT_14ab4e7c0 & 0xffffffff) * 0x5cdcfaa7 + (_DAT_14ab4e7c0 >> 0x20);
      uVar2 = ((uint)_DAT_14ab4e7c0 & 0x7fffffff) % param_3;
      uStack_4c = uVar2;
      FUN_144e917f0(param_1,&lStack_48,&uStack_4c);
      if (cStack_38 == '\x01') {
        *(uint *)((ulonglong)(uStack_3c >> 4) * 0x50 + lStack_48 + 0x10 +
                 (ulonglong)(uStack_3c & 0xf) * 4) = uVar2;
      }
    } while (*(uint *)(*param_1 + 4) < (uint)(int)auVar1._0_4_);
  }
  return;
}

