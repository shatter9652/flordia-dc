// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401395e0  size: 39 bytes
// Name:    FUN_1401395e0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Removing unreachable block (ram,0x000140951a75) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401395e0(void)

{
  byte *pbVar1;
  ushort *puVar2;
  byte bVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  lVar7 = func_0x000144da31b0();
  if (lVar7 != 0) {
    (**(code **)(_DAT_146cee318 + 0x18))(&DAT_146cee318,lVar7);
    lVar6 = _DAT_14ab73aa0;
    iVar5 = _DAT_14ab73a8c;
    uVar8 = (ulonglong)((uint)*(ushort *)(lVar7 + 0xd4) * _DAT_14ab73a8c);
    lVar4 = *(longlong *)(_DAT_14ab73aa0 + 0x8ac0 + (ulonglong)*(byte *)(lVar7 + 0x7e) * 0x8ad0);
    bVar3 = *(byte *)(lVar4 + 0x63a + uVar8);
    *(byte *)(lVar4 + 0x63a + uVar8) = bVar3 & 0xf7 | (bVar3 >> 3 & 1) << 3;
    pbVar1 = (byte *)(*(longlong *)(lVar6 + 0x8ac0 + (ulonglong)*(byte *)(lVar7 + 0x7e) * 0x8ad0) +
                      0x63a + (ulonglong)((uint)*(ushort *)(lVar7 + 0xd4) * iVar5));
    *pbVar1 = *pbVar1 | 4;
    func_0x0001405f2360(lVar7);
    lVar7 = (ulonglong)(iVar5 * (uint)*(ushort *)(lVar7 + 0xd4)) +
            *(longlong *)(lVar6 + 0x8ac0 + (ulonglong)*(byte *)(lVar7 + 0x7e) * 0x8ad0);
    puVar2 = (ushort *)(lVar7 + 0x3d6 + (ulonglong)uRam000000014764e82c * 0xa0);
    *puVar2 = *puVar2 | 2;
    *(undefined4 *)(lVar7 + 0x5e0) = 0x7585d45d;
    return;
  }
  return;
}

