// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140093250  size: 411 bytes
// Name:    FUN_140093250
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14325b170, FUN_140399a10, FUN_140037a50, FUN_140056cb0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140093250(char param_1)

{
  byte *pbVar1;
  byte bVar2;
  longlong lVar3;
  uint *puVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  longlong unaff_GS_OFFSET;
  bool bVar8;
  
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    func_0x0001455db994();
  }
  bVar2 = *(byte *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x8a0);
  if ((bVar2 & 1) != 0) {
    if ((bVar2 & 8) == 0) {
      if (param_1 != '\0') {
        return;
      }
      if (*(char *)(*(longlong *)
                     (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8) ==
          '\0') {
        func_0x0001455db994();
      }
      lVar3 = *(longlong *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x12a8);
      puVar4 = *(uint **)(lVar3 + 0x12198);
      cVar5 = func_0x000144e88f60(lVar3);
      if (cVar5 != '\0') {
        while ((*puVar4 & 0xe000000) != 0x2000000) {
          FUN_140037a50(puVar4,0,1);
        }
        FUN_140056cb0(lVar3);
      }
      uVar7 = *puVar4;
      do {
        LOCK();
        uVar6 = *puVar4;
        if (uVar7 == uVar6) {
          *puVar4 = uVar7 + 0x4000000;
          uVar6 = uVar7;
        }
        UNLOCK();
        bVar8 = uVar7 != uVar6;
        uVar7 = uVar6;
      } while (bVar8);
      pbVar1 = (byte *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x8a0);
      *pbVar1 = *pbVar1 | 8;
    }
    else if ((bVar2 & 0x10) != 0) {
      if (param_1 != '\0') {
        return;
      }
      FUN_14325b170();
    }
    if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8)
                 + 8) == '\0') {
      func_0x0001455db994();
    }
    lVar3 = **(longlong **)(unaff_GS_OFFSET + 0x58);
    cVar5 = func_0x000144e88f60(*(undefined8 *)(lVar3 + 0x12a8));
    if (cVar5 != '\0') {
      FUN_140399a10();
      if (*(char *)(*(longlong *)
                     (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8) ==
          '\0') {
        func_0x0001455db994();
      }
      lVar3 = *(longlong *)(lVar3 + 0x12a8);
      puVar4 = *(uint **)(lVar3 + 0x12198);
      while ((*puVar4 >> 0x19 & 1) == 0) {
        FUN_140037a50(puVar4,0,1);
      }
      FUN_140056f60(lVar3,&stack0xfffffffffffffff8,1);
      return;
    }
  }
  return;
}

