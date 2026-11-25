// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401accf0  size: 489 bytes
// Name:    FUN_1401accf0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401accf0(longlong param_1,uint param_2,float *param_3,float *param_4)

{
  float fVar1;
  ulonglong uVar2;
  uint *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  fVar1 = _DAT_14615a2ac;
  uVar6 = (_DAT_146df5b88 & 0xffffffff) * 0x5cdcfaa7 + (_DAT_146df5b88 >> 0x20);
  uVar2 = (uVar6 & 0xffffffff) * 0x5cdcfaa7 + (uVar6 >> 0x20);
  *param_3 = (float)((uint)uVar6 & 0x7fff) *
             (*(float *)(param_1 + 0x6c) - *(float *)(param_1 + 0x68)) * _DAT_14615a2ac +
             *(float *)(param_1 + 0x68);
  _DAT_146df5b88 = uVar2;
  *param_4 = (float)((uint)uVar2 & 0x7fff) *
             (*(float *)(param_1 + 0x74) - *(float *)(param_1 + 0x70)) * fVar1 +
             *(float *)(param_1 + 0x70);
  if (param_2 != 0) {
    uVar6 = (ulonglong)*(ushort *)(param_1 + 0xc0);
    if (uVar6 != 0) {
      uVar5 = uVar6;
      puVar3 = *(uint **)(param_1 + 0xb8);
      do {
        uVar4 = uVar5 >> 1;
        uVar7 = ~uVar4 + uVar5;
        uVar5 = uVar4;
        if ((puVar3 + uVar4 * 3 + 3)[-3] < param_2) {
          puVar3 = puVar3 + uVar4 * 3 + 3;
          uVar5 = uVar7;
        }
      } while (0 < (longlong)uVar5);
      if ((puVar3 != *(uint **)(param_1 + 0xb8) + uVar6 * 3) && (*puVar3 == param_2)) {
        uVar2 = (uVar2 & 0xffffffff) * 0x5cdcfaa7 + (uVar2 >> 0x20);
        _DAT_146df5b88 = uVar2;
        *param_3 = (float)((uint)uVar2 & 0x7fff) * _DAT_14615a2ac *
                   ((float)puVar3[2] - (float)puVar3[1]) + (float)puVar3[1];
      }
    }
    uVar6 = (ulonglong)*(ushort *)(param_1 + 0xa8);
    if (uVar6 != 0) {
      puVar3 = *(uint **)(param_1 + 0xa0);
      uVar5 = uVar6;
      do {
        uVar7 = uVar5 >> 1;
        uVar4 = ~uVar7 + uVar5;
        uVar5 = uVar7;
        if ((puVar3 + uVar7 * 3 + 3)[-3] < param_2) {
          puVar3 = puVar3 + uVar7 * 3 + 3;
          uVar5 = uVar4;
        }
      } while (0 < (longlong)uVar5);
      if ((puVar3 != *(uint **)(param_1 + 0xa0) + uVar6 * 3) && (*puVar3 == param_2)) {
        _DAT_146df5b88 = (uVar2 & 0xffffffff) * 0x5cdcfaa7 + (uVar2 >> 0x20);
        *param_4 = (float)((uint)_DAT_146df5b88 & 0x7fff) *
                   ((float)puVar3[2] - (float)puVar3[1]) * _DAT_14615a2ac + (float)puVar3[1];
      }
    }
  }
  return;
}

