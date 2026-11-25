// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400b6bc0  size: 212 bytes
// Name:    FUN_1400b6bc0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1400b6d40, FUN_144e91330
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 * FUN_1400b6bc0(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  byte bVar2;
  undefined1 auVar3 [16];
  
  FUN_1400b6d40(param_1,*(undefined8 *)(param_2 + 0x20));
  auVar3._0_12_ = ZEXT812(0);
  auVar3._12_4_ = 0;
  *param_1 = &UNK_14646d060;
  param_1[0x68] = 0;
  *(undefined4 *)(param_1 + 0x69) = 0;
  *(undefined1 (*) [16])(param_1 + 0x6a) = auVar3;
  param_1[0x6c] = 0;
  bVar2 = *(byte *)(param_1 + 0x6d) & 0xfc;
  *(byte *)((longlong)param_1 + 0x33c) =
       *(byte *)((longlong)param_1 + 0x33c) & 0xfb | *(char *)(param_2 + 0x94) * '\x02' & 4U;
  *(byte *)((longlong)param_1 + 0x15) = *(byte *)((longlong)param_1 + 0x15) | 0x80;
  *(byte *)(param_1 + 0x55) = *(byte *)(param_1 + 0x55) | 4;
  *(byte *)(param_1 + 0x6d) = bVar2;
  if (*(longlong *)(param_2 + 0x20) != 0) {
    lVar1 = FUN_144e91330();
    if (lVar1 != 0) {
      if ((*(undefined8 **)(lVar1 + 0x50) != (undefined8 *)0x0) &&
         ((*(byte *)(*(longlong *)**(undefined8 **)(lVar1 + 0x50) + 0x31) & 1) != 0)) {
        bVar2 = bVar2 | 1;
        *(byte *)(param_1 + 0x6d) = bVar2;
      }
      *(byte *)(param_1 + 0x6d) = (*(float *)(lVar1 + 0x70) == 0.0) * '\x02' | bVar2;
    }
  }
  return param_1;
}

