// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140118780  size: 189 bytes
// Name:    FUN_140118780
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14011f9c0, FUN_140125ba0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140118780(byte param_1,char param_2,char param_3)

{
  undefined1 uVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  byte bVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 unaff_RBX;
  longlong unaff_GS_OFFSET;
  
  bVar8 = func_0x000144fd22c0();
  if (((~(bVar8 | DAT_14a9438f4) | param_1) & 1) == 0) {
    if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8)
                 + 8) == '\0') {
      func_0x0001455db994();
    }
    lVar5 = **(longlong **)(unaff_GS_OFFSET + 0x58);
    lVar6 = *(longlong *)(lVar5 + 0x12a8);
    if (*(char *)(lVar6 + 0x1237c) == '\x01') {
      *(undefined1 *)(lVar6 + 0x1237c) = 0;
    }
    if (param_3 != '\0') {
      uVar9 = FUN_14011f9c0();
      FUN_140125ba0(uVar9,0);
    }
    if (param_2 != '\0') {
      if (*(char *)(*(longlong *)
                     (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8) ==
          '\0') {
        func_0x0001455db994();
      }
      lVar6 = *(longlong *)(lVar5 + 0x12a8);
      lVar10 = (ulonglong)*(uint *)(lVar6 + 0x12190) * 0x288;
      uVar3 = *(uint *)(lVar10 + 0x147663f70);
      lVar11 = (ulonglong)uVar3 * 0x50;
      lVar5 = lVar10 + 0x147663cf0 + lVar11;
      if (*(char *)(lVar6 + 0x1237c) == '\x01') {
        *(undefined1 *)(lVar6 + 0x1237c) = 0;
      }
      iVar4 = *(int *)(lVar5 + -8);
      uVar1 = *(undefined1 *)(lVar5 + -3);
      lVar7 = *(longlong *)(lVar5 + -0x10);
      FUN_144fc6a50(lVar6,iVar4,lVar11 + -0x50 + lVar10 + 0x147663cf0,1);
      if ((lVar7 != 0 && iVar4 == 0) &&
         (cVar2 = *(char *)(*(longlong *)(lVar7 + 8) + 0x41), *(char *)(lVar6 + 0x1237a) != cVar2))
      {
        *(char *)(lVar6 + 0x1237a) = cVar2;
        *(byte *)(lVar6 + 0x12523) = *(byte *)(lVar6 + 0x12523) | 0x80;
      }
      FUN_144fc69b0(lVar6,lVar7,1,CONCAT71((int7)((ulonglong)unaff_RBX >> 8),uVar1) & 0xffffffff);
      if (*(char *)(lVar5 + -4) == '\x01') {
        *(undefined1 *)(lVar6 + 0x1237c) = 1;
        *(byte *)(lVar6 + 0x12522) = *(byte *)(lVar6 + 0x12522) | 0x40;
        *(undefined1 *)(lVar6 + 0x121a4) = 1;
        func_0x0001450a5e80(lVar6,0,0,0,0xff);
      }
      *(uint *)(lVar10 + 0x147663f70) = uVar3 - 1;
      return;
    }
  }
  return;
}

