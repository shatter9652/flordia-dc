// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400f83f0  size: 204 bytes
// Name:    FUN_1400f83f0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1400f84c0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400f83f0(longlong param_1)

{
  ulonglong *puVar1;
  short *psVar2;
  short sVar3;
  ushort uVar4;
  ushort *puVar5;
  longlong *plVar6;
  ushort uVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  bool bVar13;
  
  if (param_1 != 0) {
    FUN_1400f84c0();
    plVar6 = _DAT_1498f1490;
    uVar10 = (ulonglong)(param_1 - *_DAT_1498f1490) / (ulonglong)*(uint *)(_DAT_1498f1490 + 1);
    uVar8 = (uint)uVar10;
    uVar11 = (*(uint *)(_DAT_1498f1490[5] + (uVar10 & 0xffffffff) * 4) & 0x1ff8000 | uVar8) + 0x8000
    ;
    puVar1 = (ulonglong *)(_DAT_1498f1490 + 4);
    uVar8 = uVar8 & 0xffff | 0x8000;
    if ((uVar11 & 0x1ff8000) != 0) {
      uVar8 = uVar11;
    }
    LOCK();
    *(int *)(_DAT_1498f1490 + 2) = (int)_DAT_1498f1490[2] + -1;
    UNLOCK();
    uVar10 = *puVar1;
    do {
      *(uint *)(plVar6[5] + (ulonglong)(uVar8 & 0x7fff) * 4) =
           (uint)uVar10 & 0x7fff | uVar8 & 0x1ff8000;
      LOCK();
      uVar12 = plVar6[4];
      bVar13 = uVar10 == uVar12;
      if (bVar13) {
        plVar6[4] = (uVar10 & 0xffffffff00000000 | (ulonglong)(uVar8 & 0x7fff)) + 0x100000000;
        uVar12 = uVar10;
      }
      UNLOCK();
      uVar10 = uVar12;
    } while (!bVar13);
    if (plVar6[3] != 0) {
      uVar10 = (ulonglong)(param_1 - *plVar6) >> 0x10;
      uVar12 = ((ulonglong)*(uint *)(plVar6 + 1) - 1) + (param_1 - *plVar6) >> 0x10;
      if (uVar10 <= uVar12) {
        do {
          LOCK();
          psVar2 = (short *)(plVar6[3] + 2 + uVar10 * 2);
          sVar3 = *psVar2;
          *psVar2 = *psVar2 + -1;
          UNLOCK();
          if (sVar3 == 0x101) {
            FUN_140004b40(0x1471b63b8);
            puVar5 = (ushort *)plVar6[3];
            uVar7 = *puVar5;
            do {
              LOCK();
              uVar4 = *puVar5;
              bVar13 = uVar7 == uVar4;
              if (bVar13) {
                *puVar5 = uVar7 | 0x8000;
                uVar4 = uVar7;
              }
              uVar7 = uVar4;
              UNLOCK();
            } while (!bVar13);
            if (-1 < (short)uVar7) {
              uVar9 = (ulonglong)uRam00000001471b7420;
              uRam00000001471b7420 = uRam00000001471b7420 + 1;
              *(longlong **)(uVar9 * 8 + 0x1471b6420) = plVar6;
            }
            func_0x000144d9dab0(0x1471b63b8);
          }
          bVar13 = uVar10 != uVar12;
          uVar10 = uVar10 + 1;
        } while (bVar13);
      }
      return;
    }
  }
  return;
}

