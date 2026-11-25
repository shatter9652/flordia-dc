// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140150620  size: 57 bytes
// Name:    FUN_140150620
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1403e35f0, FUN_140155f70, FUN_1401508a0
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

void FUN_140150620(longlong param_1)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  ushort uVar4;
  longlong *plVar5;
  code *pcVar6;
  byte *pbVar7;
  byte bVar8;
  longlong lVar9;
  char cVar10;
  uint uVar11;
  ulonglong uVar12;
  
  FUN_1403e35f0();
  FUN_1401508a0(&stack0xffffffffffffffe8);
  FUN_140155f70(&stack0xffffffffffffffe8);
  if (*(short *)(*(longlong *)(lRam000000014a9b3db0 + 0x7e8) +
                ((ulonglong)(param_1 - *_DAT_14abbe2e8) / (ulonglong)*(uint *)(_DAT_14abbe2e8 + 1) &
                0xffff) * 2) == -1) {
    return;
  }
  if (*(char *)(param_1 + 0x30) == '\x03') {
    FUN_1404323b0(*(undefined4 *)(param_1 + 0x9c));
  }
  else if (*(char *)(param_1 + 0x30) == '\x02') {
    FUN_1404323f0(param_1);
  }
  uVar11 = *(uint *)(param_1 + 0xe8);
  *(uint *)(param_1 + 0xe8) = uVar11 & 0xfffffeff;
  if ((uVar11 >> 8 & 1) != 0) {
    func_0x000140432390(lRam000000014a9b3db0,param_1);
  }
  FUN_145269dd0(param_1,0xff);
  func_0x000145269e90(lRam000000014a9b3db0,param_1);
  lVar9 = lRam000000014a9b3db0;
  if (*(char *)(param_1 + 0x30) != '\x03') {
    return;
  }
  if (((*(byte *)(param_1 + 0xe8) & 2) == 0) ||
     (cVar10 = func_0x00014501d380(*(undefined4 *)(param_1 + 0x9c)), cVar10 == '\0')) {
    uVar11 = (uint)((ulonglong)(param_1 - *_DAT_14abb6918) /
                   (ulonglong)*(uint *)(_DAT_14abb6918 + 1));
    uVar12 = (ulonglong)(uVar11 >> 5 & 0x7ff);
    if ((*(uint *)(*(longlong *)(lVar9 + 0x730) + uVar12 * 4) >> (uVar11 & 0x1f) & 1) != 0) {
      LOCK();
      pbVar7 = (byte *)(*(longlong *)(lVar9 + 0x730) + uVar12 * 4 +
                       ((longlong)(int)(uVar11 & 0x1f) >> 3));
      bVar8 = *pbVar7;
      *pbVar7 = *pbVar7 & ~('\x01' << (uVar11 & 7));
      UNLOCK();
      if ((bVar8 >> (uVar11 & 7) & 1) != 0) {
        LOCK();
        *(int *)(lVar9 + 0x740) = *(int *)(lVar9 + 0x740) + -1;
        UNLOCK();
        goto code_r0x00014043276a;
      }
    }
  }
  else {
    uVar11 = (uint)((ulonglong)(param_1 - *_DAT_14abb6918) /
                   (ulonglong)*(uint *)(_DAT_14abb6918 + 1));
    uVar12 = (ulonglong)(uVar11 >> 5 & 0x7ff);
    if ((*(uint *)(*(longlong *)(lVar9 + 0x730) + uVar12 * 4) >> (uVar11 & 0x1f) & 1) == 0) {
      LOCK();
      piVar1 = (int *)(lVar9 + 0x740);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      if (iVar3 + 1 <= *(int *)(lVar9 + 0x744)) {
        LOCK();
        puVar2 = (uint *)(*(longlong *)(lVar9 + 0x730) + uVar12 * 4);
        *puVar2 = *puVar2 | 1 << (uVar11 & 0x1f);
        UNLOCK();
code_r0x00014043276a:
        uVar4 = *(ushort *)(lVar9 + 0x728);
        if ((ulonglong)uVar4 != 0) {
          uVar12 = 0;
          do {
            plVar5 = *(longlong **)(*(longlong *)(lVar9 + 0x720) + uVar12 * 8);
            pcVar6 = *(code **)(*plVar5 + 8);
            if (pcVar6 == FUN_144e98ed0) {
              FUN_144e98ed0(plVar5,uVar11);
            }
            else if (pcVar6 != (code *)&UNK_145eb5b10) {
              (*pcVar6)(plVar5,uVar11,0);
            }
            uVar12 = uVar12 + 1;
          } while (uVar4 != uVar12);
        }
        return;
      }
      LOCK();
      *(int *)(lVar9 + 0x740) = *(int *)(lVar9 + 0x740) + -1;
      UNLOCK();
    }
  }
  return;
}

