// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14010bc20  size: 362 bytes
// Name:    FUN_14010bc20
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14010c2f0, FUN_14010bd90, FUN_14010c010
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_14010bc20(longlong *param_1)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_98 [16];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  uStack_60 = CONCAT44(_DAT_14849bfdc,uRam000000014849bfd8);
  auStack_98._4_4_ = _DAT_14849bfdc;
  auStack_98._0_4_ = _DAT_14849bfdc;
  auStack_98._8_4_ = _DAT_14849bfdc;
  auStack_98._12_4_ = _DAT_14849bfdc;
  puVar1 = (undefined8 *)*param_1;
  uStack_68 = _DAT_14849bfd0;
  fVar3 = (float)FUN_14010c010(puVar1);
  fVar4 = 0.0;
  if (0.0 < fVar3) {
    fVar4 = _DAT_145fc6ed8;
    if ((*(int *)((longlong)puVar1 + 0x84) == 2) && (DAT_14849c036 == '\x01')) {
      uStack_78 = puVar1[4];
      uStack_70 = puVar1[5];
      uStack_a0 = CONCAT44(_DAT_14849bfdc,uRam000000014849bfd8);
      uStack_88 = *puVar1;
      uStack_80 = puVar1[1];
      uStack_a8 = _DAT_14849bfd0;
      fVar4 = (float)FUN_14010c2f0(&uStack_a8,&uStack_88,&uStack_78,*(undefined4 *)(puVar1 + 10),
                                   *(undefined4 *)((longlong)puVar1 + 0x54));
      if (fVar4 <= 0.0) {
        return 0.0;
      }
    }
    uVar2 = (ulonglong)puVar1[0x68] >> 3;
    fVar6 = (float)((int)puVar1[0x68] + (int)(uVar2 / 0x7d) * -1000);
    fVar7 = 0.0;
    if ((*(byte *)((longlong)puVar1 + 0x3c2) & 0x10) != 0) {
      fVar7 = _DAT_146159c54;
    }
    fVar5 = (float)FUN_14010bd90(param_1,uVar2);
    fVar4 = fVar6 * _DAT_145fc6f00 + fVar5 * fVar4 * fVar3 + fVar7;
  }
  return fVar4;
}

