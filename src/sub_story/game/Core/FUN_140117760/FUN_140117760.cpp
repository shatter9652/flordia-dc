// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140117760  size: 171 bytes
// Name:    FUN_140117760
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140117760(longlong param_1,longlong *param_2,int param_3,short param_4,longlong param_5)

{
  short *psVar1;
  short sVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ushort uVar8;
  uint uVar9;
  bool bVar10;
  
  lVar4 = (longlong)param_3 * 0x20;
  uVar8 = (ushort)((int)param_4 + 7U) & 0xfffc;
  LOCK();
  psVar1 = (short *)(param_1 + 0x18 + lVar4);
  sVar2 = *psVar1;
  *psVar1 = *psVar1 + uVar8;
  UNLOCK();
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0xffffffff;
  param_2[2] = 0;
  if ((ushort)(sVar2 + uVar8) <= *(ushort *)(param_1 + 0x1a + lVar4)) {
    param_1 = param_1 + lVar4;
    uVar7 = (int)param_4 + 7U >> 2;
    uVar3 = *(uint *)(param_1 + 0x10);
    do {
      uVar5 = (uVar3 & 0xffff) + uVar7;
      uVar6 = uVar3;
      if (*(ushort *)(param_1 + 4) < uVar5) {
        uVar6 = 0;
      }
      uVar9 = (uint)(*(ushort *)(param_1 + 4) < uVar5) * 0x10000 + uVar3 & 0xffff0000;
      LOCK();
      uVar5 = *(uint *)(param_1 + 0x10);
      bVar10 = uVar3 == uVar5;
      if (bVar10) {
        *(uint *)(param_1 + 0x10) = uVar6 + uVar7 & 0xffff | uVar9;
        uVar5 = uVar3;
      }
      uVar3 = uVar5;
      UNLOCK();
    } while (!bVar10);
    lVar4 = *(longlong *)(param_1 + 8);
    *(uint *)(param_2 + 1) = uVar9 | uVar6 & 0xffff;
    *param_2 = (ulonglong)((uVar6 & 0xffff) << 2) + lVar4;
    param_2[2] = param_5;
  }
  return;
}

