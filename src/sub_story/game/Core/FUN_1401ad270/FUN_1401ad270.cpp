// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401ad270  size: 394 bytes
// Name:    FUN_1401ad270
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1401aeeb0, FUN_1401ad920, FUN_1401ad680, FUN_1401ae240, FUN_1401ad400, FUN_1401ad7b0, FUN_1401ad4c0, FUN_1401aded0, FUN_1401ad5a0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1401ad270(longlong param_1,uint param_2)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint *puVar5;
  bool bVar6;
  longlong lStack_38;
  
  if (*(uint *)(param_1 + 0x1a18) != 0) {
    for (puVar5 = *(uint **)(*(longlong *)(param_1 + 0x1a10) +
                            ((ulonglong)param_2 % (ulonglong)*(uint *)(param_1 + 0x1a18)) * 8);
        puVar5 != (uint *)0x0; puVar5 = *(uint **)(puVar5 + 0xe)) {
      if (*puVar5 == param_2) {
        lStack_38 = 0;
        uVar2 = puVar5[3];
        if (uVar2 == 0) {
          return;
        }
        uVar4 = 0;
        lVar3 = 0;
        do {
          lVar1 = *(longlong *)(*(longlong *)(puVar5 + 4) + uVar4 * 8);
          if (lVar1 != 0) {
            FUN_1401ad4c0(*(undefined8 *)(param_1 + 0x40138),lVar1);
            FUN_1401ae240(param_1,*(undefined8 *)(param_1 + 0x40138),lVar1);
            FUN_1401ad5a0(lVar1,&lStack_38);
            uVar2 = puVar5[3];
            if ((*(byte *)(lVar1 + 0x148) & 0x40) != 0) {
              lVar3 = lVar1;
            }
          }
          lVar1 = lStack_38;
          uVar4 = uVar4 + 1;
        } while (uVar4 < uVar2);
        if (lVar3 != lStack_38 && lVar3 != 0) {
          FUN_1401aeeb0(lVar3);
          uVar2 = puVar5[3];
        }
        if (uVar2 == 0) {
          return;
        }
        uVar4 = 0;
        do {
          lVar3 = *(longlong *)(*(longlong *)(puVar5 + 4) + uVar4 * 8);
          if (lVar3 != 0) {
            FUN_1401ad920(*(undefined8 *)(param_1 + 0x40138),lVar3,lVar1);
            FUN_1401ad400(param_1,lVar3);
            FUN_1401ad7b0(param_1,*(undefined8 *)(param_1 + 0x40138),lVar3);
            uVar2 = puVar5[3];
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < uVar2);
        if (uVar2 == 0) {
          return;
        }
        FUN_1401aded0(*(longlong *)(puVar5 + 4),*(longlong *)(puVar5 + 4) + (ulonglong)uVar2 * 8);
        lVar3 = **(longlong **)(puVar5 + 4);
        if (lVar3 == 0) {
          return;
        }
        if ((int)(puVar5[3] - 1) < 0) {
          return;
        }
        uVar4 = (ulonglong)(puVar5[3] - 1);
        do {
          FUN_1401ad680(lVar3,*(undefined8 *)(*(longlong *)(puVar5 + 4) + uVar4 * 8));
          bVar6 = uVar4 != 0;
          uVar4 = uVar4 - 1;
        } while (bVar6);
        return;
      }
    }
  }
  return;
}

