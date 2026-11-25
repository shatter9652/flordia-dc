// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14003a520  size: 140 bytes
// Name:    FUN_14003a520
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140005d90
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_14003a520(longlong param_1,undefined1 (*param_2) [16],longlong param_3,undefined4 param_4,
             int param_5)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  bool bVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  puVar1 = (uint *)(param_1 + 0x20 + (longlong)param_5 * 0x18);
  do {
    uVar4 = *puVar1;
    while (uVar4 != 0xffffffff) {
      LOCK();
      uVar2 = *puVar1;
      bVar7 = uVar4 == uVar2;
      if (bVar7) {
        *puVar1 = uVar4 + 1;
        uVar2 = uVar4;
      }
      uVar4 = uVar2;
      UNLOCK();
      if (bVar7) {
        auVar9._4_4_ = _DAT_145fc6f48;
        auVar9._0_4_ = _DAT_145fc6f48;
        auVar9._8_4_ = _DAT_145fc6f48;
        auVar9._12_4_ = _DAT_145fc6f48;
        auVar8._0_12_ = ZEXT812(0);
        auVar8._12_4_ = 0;
        *param_2 = auVar8;
        *(undefined1 (*) [16])(param_3 + 0x10) = auVar9;
        lVar5 = FUN_140005d90(0,param_4);
        bVar3 = (byte)param_1;
        if (lVar5 != 0) {
          bVar3 = func_0x0001455cfd30(lVar5,param_2,param_3);
        }
        uVar6 = (ulonglong)*puVar1;
        do {
          uVar2 = (uint)uVar6;
          LOCK();
          uVar4 = *puVar1;
          if (uVar2 == uVar4) {
            *puVar1 = uVar2 - 1;
          }
          else {
            uVar6 = (ulonglong)uVar4;
          }
          UNLOCK();
        } while (uVar2 != uVar4);
        return CONCAT71((int7)(uVar6 >> 8),lVar5 != 0 & bVar3);
      }
    }
  } while( true );
}

