// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140189080  size: 163 bytes
// Name:    FUN_140189080
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140004b40
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140189080(longlong *param_1,longlong param_2)

{
  short *psVar1;
  short sVar2;
  ushort uVar3;
  ushort *puVar4;
  ushort uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  bool bVar9;
  
  uVar7 = (ulonglong)(param_2 - *param_1) >> 0x10;
  uVar8 = ((ulonglong)*(uint *)(param_1 + 1) - 1) + (param_2 - *param_1) >> 0x10;
  if (uVar7 <= uVar8) {
    do {
      LOCK();
      psVar1 = (short *)(param_1[3] + 2 + uVar7 * 2);
      sVar2 = *psVar1;
      *psVar1 = *psVar1 + -1;
      UNLOCK();
      if (sVar2 == 0x101) {
        FUN_140004b40(0x1471b63b8);
        puVar4 = (ushort *)param_1[3];
        uVar5 = *puVar4;
        do {
          LOCK();
          uVar3 = *puVar4;
          bVar9 = uVar5 == uVar3;
          if (bVar9) {
            *puVar4 = uVar5 | 0x8000;
            uVar3 = uVar5;
          }
          uVar5 = uVar3;
          UNLOCK();
        } while (!bVar9);
        if (-1 < (short)uVar5) {
          uVar6 = (ulonglong)_DAT_1471b7420;
          _DAT_1471b7420 = _DAT_1471b7420 + 1;
          *(longlong **)(uVar6 * 8 + 0x1471b6420) = param_1;
        }
        func_0x000144d9dab0(0x1471b63b8);
      }
      bVar9 = uVar7 != uVar8;
      uVar7 = uVar7 + 1;
    } while (bVar9);
  }
  return;
}

