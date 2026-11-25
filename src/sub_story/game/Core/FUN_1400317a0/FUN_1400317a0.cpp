// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400317a0  size: 77 bytes
// Name:    FUN_1400317a0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400317a0(longlong param_1,ushort param_2,longlong param_3)

{
  uint *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  ulonglong unaff_RSI;
  longlong *plVar6;
  uint uVar7;
  ulonglong uVar8;
  
  uVar4 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffffc;
  uVar7 = (uint)*(byte *)(uVar4 + 0xb) + (uint)*(byte *)(uVar4 + 10);
  if (uVar7 != 0) {
    uVar8 = 0;
    do {
      if ((*(uint *)(uVar4 + 0x18 + uVar8 * 4) & 0x7ff) == (uint)(param_2 >> 2)) {
        puVar1 = (uint *)(uVar4 + 0x18 + uVar8 * 4);
        if (param_3 == 0) {
          uVar7 = *puVar1;
          uVar4 = 4;
          if (-1 < (short)uVar7) {
            uVar4 = (ulonglong)(uVar7 >> 0xc & 3);
          }
          plVar6 = (longlong *)(uVar4 * 8 + 0x1475e7540);
        }
        else {
          uVar7 = *puVar1;
          plVar6 = (longlong *)(param_3 + 0x18);
        }
        puVar2 = (undefined8 *)*plVar6;
        puVar5 = (undefined8 *)
                 ((ulonglong)((uVar7 >> 0x10 & 0x3ff) * iRam00000001475e7000) +
                 *(longlong *)(param_1 + 0x10));
        if ((char)_DAT_148759d00[3] == '\0') {
          uVar3 = puVar2[1];
          *puVar5 = *puVar2;
          puVar5[1] = uVar3;
          uVar3 = puVar2[3];
          puVar5[2] = puVar2[2];
          puVar5[3] = uVar3;
        }
        else {
          (**(code **)(*_DAT_148759d00 + 0xc0))
                    (_DAT_148759d00,1,puVar5,puVar2,unaff_RSI & 0xffffffff00000000);
        }
        return;
      }
      uVar8 = uVar8 + 1;
    } while (uVar7 != uVar8);
  }
  return;
}

