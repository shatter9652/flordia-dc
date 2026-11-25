// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401097f0  size: 83 bytes
// Name:    FUN_1401097f0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401097f0(undefined8 param_1)

{
  undefined1 uVar1;
  ulonglong uVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  undefined2 *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong unaff_GS_OFFSET;
  bool bVar9;
  undefined1 auVar10 [16];
  longlong lStack_20;
  
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    func_0x0001455db994();
  }
  if ((*(byte *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x12d8) & 0x40) != 0) {
    return;
  }
  FUN_140004b40(0x1499a6d88);
  puVar6 = (undefined2 *)FUN_14408a390(param_1);
  uVar1 = uRam0000000149e4ff30;
  if ((puVar6 != (undefined2 *)0x0) && (*(char *)(puVar6 + 0xc) == '\x01')) {
    FUN_144ec6720();
    uRam0000000149e4ff30 = 0;
    puVar6[1] = 0;
    if (*(longlong *)(puVar6 + 4) != 0) {
      func_0x000144d9c130();
    }
    auVar10._0_12_ = ZEXT812(0);
    auVar10._12_4_ = 0;
    *puVar6 = 0;
    *(undefined1 (*) [16])(puVar6 + 4) = auVar10;
    FUN_144ec6670();
  }
  iRam00000001499a6d98 = iRam00000001499a6d98 + -1;
  uVar8 = uRam00000001499a6d88;
  if (iRam00000001499a6d98 == 0) {
    do {
      uVar7 = uVar8;
      LOCK();
      uVar8 = uVar7;
      uVar2 = (ulonglong)((int)uVar7 - 1) | 0xffffffff00000000;
      if (uVar7 != uRam00000001499a6d88) {
        uVar8 = uRam00000001499a6d88;
        uVar2 = uRam00000001499a6d88;
      }
      uRam00000001499a6d88 = uVar2;
      UNLOCK();
    } while (uVar7 != uVar8);
    if ((uVar7 & 0xfffffffe) != 0) {
      lStack_20 = lRam00000001499a6d90;
      iRam00000001499a6d98 = 0;
      uRam0000000149e4ff30 = uVar1;
      do {
        while (lStack_20 < 0) {
          cVar4 = FUN_1400062d0(0x1499a6d90,1,&lStack_20);
          if (cVar4 != '\0') {
            return;
          }
        }
        LOCK();
        lVar5 = lStack_20;
        lVar3 = lStack_20 + 0x100000000;
        if (lStack_20 != lRam00000001499a6d90) {
          lVar5 = lRam00000001499a6d90;
          lVar3 = lRam00000001499a6d90;
        }
        lRam00000001499a6d90 = lVar3;
        UNLOCK();
        bVar9 = lStack_20 != lVar5;
        lStack_20 = lVar5;
      } while (bVar9);
      return;
    }
  }
  uRam0000000149e4ff30 = uVar1;
  return;
}

