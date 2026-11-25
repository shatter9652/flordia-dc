// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14005ab20  size: 396 bytes
// Name:    FUN_14005ab20
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144f80120, FUN_140037a50
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14005ab20(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  uint *puVar3;
  char cVar4;
  longlong unaff_GS_OFFSET;
  undefined1 auVar5 [16];
  undefined1 auVar6 [32];
  
  cVar4 = FUN_144f80120();
  if (cVar4 != '\0') {
    if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8)
                 + 8) == '\0') {
      func_0x0001455db994();
    }
    lVar2 = *(longlong *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x12a8);
    if (*(longlong *)(param_1 + 0x40) == 0) {
      iVar1 = *(int *)(*(longlong *)(param_1 + 0x10) + 8);
    }
    else {
      iVar1 = (*(uint *)(*(longlong *)(param_1 + 0x40) + 10) & 0x7fffff) * 3;
    }
    if (*(longlong *)(lVar2 + 0x12320) != 0) {
      *(undefined8 *)(lVar2 + 0x12320) = 0;
      *(byte *)(lVar2 + 0x12522) = *(byte *)(lVar2 + 0x12522) | 0x80;
    }
    if (*(int *)(lVar2 + 0x12530) != 0) {
      auVar5._0_12_ = ZEXT812(0);
      auVar5._12_4_ = 0;
      *(undefined1 (*) [32])(lVar2 + 0x12500) = ZEXT1632(auVar5);
      *(undefined1 (*) [32])(lVar2 + 0x124e0) = ZEXT1632(auVar5);
      auVar6 = ZEXT1632(auVar5);
      *(undefined1 (*) [32])(lVar2 + 0x124c0) = auVar6;
      *(undefined1 (*) [32])(lVar2 + 0x124a0) = auVar6;
      *(undefined1 (*) [32])(lVar2 + 0x12480) = auVar6;
      *(undefined1 (*) [32])(lVar2 + 0x12460) = auVar6;
      auVar6 = ZEXT1632(auVar5);
      *(undefined1 (*) [32])(lVar2 + 0x12440) = auVar6;
      *(undefined1 (*) [32])(lVar2 + 0x12420) = auVar6;
      *(undefined1 (*) [32])(lVar2 + 0x12538) = auVar6;
      *(undefined1 (*) [32])(lVar2 + 0x12558) = auVar6;
      *(undefined1 (*) [32])(lVar2 + 0x12578) = auVar6;
      *(undefined1 (*) [32])(lVar2 + 0x12598) = auVar6;
      *(undefined1 (*) [32])(lVar2 + 0x125b8) = auVar6;
      *(undefined1 (*) [32])(lVar2 + 0x125d8) = auVar6;
      *(undefined1 (*) [32])(lVar2 + 0x125f8) = ZEXT1632(auVar5);
      *(undefined1 (*) [32])(lVar2 + 0x12618) = ZEXT1632(auVar5);
      *(byte *)(lVar2 + 0x12523) = *(byte *)(lVar2 + 0x12523) | 0x20;
    }
    *(undefined4 *)(lVar2 + 0x12530) = 0;
    func_0x00014517acc0(lVar2,iVar1,0);
    if ((**(uint **)(lVar2 + 0x12198) & 0xc000000) == 0) {
      cVar4 = func_0x000144e88f60(lVar2);
      if (cVar4 != '\0') {
        puVar3 = *(uint **)(lVar2 + 0x12198);
        while ((*puVar3 & 0xe000000) != 0x2000000) {
          FUN_140037a50(puVar3,0,1);
        }
        FUN_140056f60(lVar2,&stack0xfffffffffffffff8,1);
        return;
      }
    }
  }
  return;
}

