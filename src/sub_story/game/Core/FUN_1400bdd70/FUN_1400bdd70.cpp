// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400bdd70  size: 171 bytes
// Name:    FUN_1400bdd70
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1427ba3d0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400bdd70(longlong param_1)

{
  byte *pbVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auVar7 [16];
  
  if (((*(byte *)(param_1 + 0x16f4) & 1) == 0) && (iVar3 = *(int *)(param_1 + 0x1404), iVar3 != 0))
  {
    iVar4 = 0;
    auVar7._0_12_ = ZEXT812(0);
    auVar7._12_4_ = 0;
    do {
      lVar5 = (longlong)iVar4;
      iVar4 = iVar4 + 1;
      *(undefined8 *)(param_1 + 0xa00 + lVar5 * 0x28) = 0;
      *(undefined4 *)(param_1 + 0xa08 + lVar5 * 0x28) = 0x3fffff;
      *(undefined1 (*) [16])(param_1 + 0xa0c + lVar5 * 0x28) = auVar7;
      *(undefined1 (*) [16])(param_1 + 0xa16 + lVar5 * 0x28) = auVar7;
      pbVar1 = (byte *)(param_1 + 0xa26 + lVar5 * 0x28);
      *pbVar1 = *pbVar1 & 0xfe;
    } while (iVar3 != iVar4);
    *(undefined4 *)(param_1 + 0x1404) = 0;
    uVar2 = *(ushort *)(param_1 + 0x1700);
    if (uVar2 != 0) {
      lVar5 = *(longlong *)(param_1 + 0x16f8);
      lVar6 = 0;
      do {
        FUN_1427ba3d0(*(undefined8 *)(lVar5 + lVar6));
        lVar6 = lVar6 + 8;
      } while ((ulonglong)uVar2 * 8 != lVar6);
    }
    *(undefined2 *)(param_1 + 0x1700) = 0;
  }
  return;
}

