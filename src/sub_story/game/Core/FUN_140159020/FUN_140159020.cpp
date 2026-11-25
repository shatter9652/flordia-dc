// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140159020  size: 252 bytes
// Name:    FUN_140159020
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1455060a0, FUN_14501e980, FUN_144f21090, FUN_1401638e0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140159020(longlong *param_1,uint param_2,longlong param_3)

{
  short *psVar1;
  short sVar2;
  ushort uVar3;
  ushort *puVar4;
  longlong *plVar5;
  char cVar6;
  ushort uVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  bool bVar14;
  
  if ((ulonglong)*(uint *)((longlong)param_1 + 300) != 0) {
    puVar12 = (undefined8 *)param_1[0x26];
    puVar10 = puVar12 + (ulonglong)*(uint *)((longlong)param_1 + 300) * 2;
    do {
      cVar6 = (*(code *)puVar12[1])(*puVar12,param_2);
      if (cVar6 != '\0') {
        return;
      }
      puVar12 = puVar12 + 2;
    } while (puVar12 != puVar10);
  }
  (**(code **)(*param_1 + 0x28))(param_1,param_3);
  lVar9 = (ulonglong)(param_2 >> 0x11 & 0x1f) * 0x238;
  if (*(byte *)(lVar9 + 0x14abbf3f5) != 0xff) {
    *(undefined2 *)
     (*(longlong *)(lVar9 + 0x14abbf3d0) +
     (ulonglong)
     ((param_2 & 0x1ffff) * *(int *)(lVar9 + 0x14abbf3c4) + (uint)*(byte *)(lVar9 + 0x14abbf3f5)) *
     2) = 0xffff;
  }
  cVar6 = FUN_144f21090(param_3,0xd);
  if ((param_3 != 0) && (cVar6 == '\0')) {
    FUN_14501e980(param_3 + 0x98);
    FUN_1401638e0(param_3 + 0x10);
    plVar5 = _DAT_1499aae58;
    FUN_1455060a0(_DAT_1499aae58,param_3);
    if (plVar5[3] != 0) {
      uVar11 = (ulonglong)(param_3 - *plVar5) >> 0x10;
      uVar13 = ((ulonglong)*(uint *)(plVar5 + 1) - 1) + (param_3 - *plVar5) >> 0x10;
      if (uVar11 <= uVar13) {
        do {
          LOCK();
          psVar1 = (short *)(plVar5[3] + 2 + uVar11 * 2);
          sVar2 = *psVar1;
          *psVar1 = *psVar1 + -1;
          UNLOCK();
          if (sVar2 == 0x101) {
            FUN_140004b40(0x1471b63b8);
            puVar4 = (ushort *)plVar5[3];
            uVar7 = *puVar4;
            do {
              LOCK();
              uVar3 = *puVar4;
              bVar14 = uVar7 == uVar3;
              if (bVar14) {
                *puVar4 = uVar7 | 0x8000;
                uVar3 = uVar7;
              }
              uVar7 = uVar3;
              UNLOCK();
            } while (!bVar14);
            if (-1 < (short)uVar7) {
              uVar8 = (ulonglong)uRam00000001471b7420;
              uRam00000001471b7420 = uRam00000001471b7420 + 1;
              *(longlong **)(uVar8 * 8 + 0x1471b6420) = plVar5;
            }
            func_0x000144d9dab0(0x1471b63b8);
          }
          bVar14 = uVar11 != uVar13;
          uVar11 = uVar11 + 1;
        } while (bVar14);
      }
      return;
    }
  }
  return;
}

