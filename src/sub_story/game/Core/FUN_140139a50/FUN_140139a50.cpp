// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140139a50  size: 351 bytes
// Name:    FUN_140139a50
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140399be0, FUN_140037a50
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140139a50(void)

{
  byte *pbVar1;
  byte bVar2;
  longlong *plVar3;
  longlong lVar4;
  uint *puVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong unaff_GS_OFFSET;
  bool bVar11;
  
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    func_0x0001455db994();
  }
  bVar2 = *(byte *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x8a0);
  uVar9 = CONCAT71((int7)((ulonglong)**(longlong **)(unaff_GS_OFFSET + 0x58) >> 8),bVar2) &
          0xffffffff;
  if ((bVar2 & 0x18) == 8 && (~(byte)uVar9 & 1) == 0) {
    FUN_140399be0(CONCAT71((int7)(uVar9 >> 8),1),1);
    plVar3 = *(longlong **)(unaff_GS_OFFSET + 0x58);
    pbVar1 = (byte *)(*plVar3 + 0x8a0);
    *pbVar1 = *pbVar1 | 0x10;
    if (*(char *)(plVar3[__tls_index] + 8) == '\0') {
      func_0x0001455db994();
      bVar11 = *(char *)(*(longlong *)
                          (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8)
               == '\0';
    }
    else {
      bVar11 = false;
    }
    lVar4 = **(longlong **)(unaff_GS_OFFSET + 0x58);
    lVar10 = *(longlong *)(lVar4 + 0x12a8);
    *(undefined4 *)(lVar4 + 0x92c) = *(undefined4 *)(lVar10 + 0x121a0);
    *(undefined8 *)(lVar4 + 0x8b8) = *(undefined8 *)(lVar4 + 0x8b0);
    *(undefined8 *)(lVar4 + 0x8d8) = *(undefined8 *)(lVar4 + 0x8d0);
    *(undefined8 *)(lVar4 + 0x8b0) = 0;
    *(undefined8 *)(lVar4 + 0x8d0) = 0;
    if (bVar11) {
      func_0x0001455db994();
      lVar10 = *(longlong *)(lVar4 + 0x12a8);
    }
    puVar5 = *(uint **)(lVar10 + 0x12198);
    uVar8 = *puVar5;
    do {
      LOCK();
      uVar7 = *puVar5;
      if (uVar8 == uVar7) {
        *puVar5 = uVar8 + 0xfc000000;
        uVar7 = uVar8;
      }
      UNLOCK();
      bVar11 = uVar8 != uVar7;
      uVar8 = uVar7;
    } while (bVar11);
    cVar6 = func_0x000144e88f60(lVar10);
    if (cVar6 != '\0') {
      while ((*puVar5 & 0xe000000) != 0x2000000) {
        FUN_140037a50(puVar5,0,1);
      }
      FUN_140056f60(lVar10,&stack0xfffffffffffffff8,1);
      return;
    }
  }
  return;
}

