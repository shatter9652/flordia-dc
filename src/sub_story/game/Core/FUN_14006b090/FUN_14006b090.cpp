// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14006b090  size: 286 bytes
// Name:    FUN_14006b090
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1402e5b80
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Removing unreachable block (ram,0x000144e98e4e) */
/* WARNING: Removing unreachable block (ram,0x000144e98e60) */
/* WARNING: Removing unreachable block (ram,0x000144e98e90) */
/* WARNING: Removing unreachable block (ram,0x000144e98ea2) */
/* WARNING: Removing unreachable block (ram,0x000144e98e95) */
/* WARNING: Removing unreachable block (ram,0x000144e98e73) */
/* WARNING: Removing unreachable block (ram,0x000144e98e7a) */
/* WARNING: Removing unreachable block (ram,0x000144e98e82) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14006b090(longlong *param_1,longlong param_2,char param_3)

{
  uint *puVar1;
  ushort uVar2;
  longlong *plVar3;
  code *pcVar4;
  byte *pbVar5;
  byte bVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong unaff_GS_OFFSET;
  longlong *plStack_50;
  longlong lStack_48;
  char cStack_40;
  longlong **pplStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    func_0x0001455db994();
  }
  if (*(char *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x10a9) == '\x01') {
    uVar9 = (ulonglong)(param_2 - *_DAT_14abbe8c8) / (ulonglong)*(uint *)(_DAT_14abbe8c8 + 1);
    uVar8 = (uint)uVar9;
    puVar1 = (uint *)(param_1[2] + (ulonglong)(uVar8 >> 5 & 0x7ff) * 4);
    uVar10 = 1 << (uVar8 & 0x1f);
    if (param_3 == '\0') {
      if ((*puVar1 & uVar10) != 0) {
        LOCK();
        pbVar5 = (byte *)((longlong)puVar1 + ((longlong)(int)(uVar8 & 0x1f) >> 3));
        bVar6 = *pbVar5;
        *pbVar5 = *pbVar5 & ~('\x01' << (uVar8 & 7));
        UNLOCK();
        if ((bVar6 >> (uVar8 & 7) & 1) != 0) {
          LOCK();
          *(int *)(param_1 + 4) = (int)param_1[4] + -1;
          UNLOCK();
          goto LAB_14006b132;
        }
      }
    }
    else if ((*puVar1 & uVar10) == 0) {
      LOCK();
      plVar3 = param_1 + 4;
      lVar7 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + 1;
      UNLOCK();
      if ((int)lVar7 + 1 <= *(int *)((longlong)param_1 + 0x24)) {
        LOCK();
        *puVar1 = *puVar1 | uVar10;
        UNLOCK();
LAB_14006b132:
        uVar2 = *(ushort *)(param_1 + 1);
        if ((ulonglong)uVar2 != 0) {
          uVar9 = uVar9 & 0xffffffff;
          uVar11 = 0;
          do {
            plVar3 = *(longlong **)(*param_1 + uVar11 * 8);
            pcVar4 = *(code **)(*plVar3 + 8);
            if (pcVar4 == FUN_144e98ed0) {
              FUN_144e98ed0(plVar3,uVar9);
            }
            else if (pcVar4 != (code *)&UNK_145eb5b10) {
              (*pcVar4)(plVar3,uVar9,0);
            }
            uVar11 = uVar11 + 1;
          } while (uVar2 != uVar11);
        }
        return;
      }
      LOCK();
      *(int *)(param_1 + 4) = (int)param_1[4] + -1;
      UNLOCK();
    }
  }
  else {
    pplStack_38 = &plStack_50;
    puStack_30 = &UNK_143f58080;
    puStack_28 = &UNK_141b7b630;
    plStack_50 = param_1;
    lStack_48 = param_2;
    cStack_40 = param_3;
    FUN_1402e5b80(4);
  }
  return;
}

