// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140118840  size: 313 bytes
// Name:    FUN_140118840
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1452b8c20, FUN_14011f9c0, FUN_1453fa0a0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_140118840(ulonglong param_1,char param_2)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong unaff_GS_OFFSET;
  undefined1 uVar8;
  longlong lStack_30;
  
  bVar3 = func_0x000144fd22c0();
  if (((~(bVar3 | DAT_14a9438f4) | (byte)(param_1 & 0xffffffff)) & 1) == 0) {
    if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8)
                 + 8) == '\0') {
      func_0x0001455db994();
    }
    plVar1 = (longlong *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x12a8);
    lVar4 = *plVar1;
    uVar7 = CONCAT71((int7)((param_1 & 0xffffffff) >> 8),*(char *)(lVar4 + 0x1237c));
    if (*(char *)(lVar4 + 0x1237c) == '\x01') {
      if (*(char *)(*(longlong *)
                     (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8) ==
          '\0') {
        func_0x0001455db994();
        lVar4 = *plVar1;
      }
      FUN_1453fa0a0(lVar4);
    }
    lVar4 = FUN_14011f9c0();
    uVar5 = func_0x00014031a7b0();
    cVar2 = *(char *)(*(longlong *)
                       (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8);
    if (param_2 == '\0') {
      if (cVar2 == '\0') {
        func_0x0001455db994();
      }
      lVar6 = *plVar1;
      uVar8 = 0;
    }
    else {
      if (cVar2 == '\0') {
        func_0x0001455db994();
      }
      lVar6 = *plVar1;
      uVar8 = 1;
    }
    lStack_30 = lVar4;
    FUN_1452b8c20(lVar6,lVar4 != 0,&lStack_30,uVar5,uVar8,0,0,0);
  }
  else {
    uVar7 = 0;
  }
  return uVar7;
}

