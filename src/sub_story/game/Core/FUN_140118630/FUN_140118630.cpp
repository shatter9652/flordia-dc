// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140118630  size: 107 bytes
// Name:    FUN_140118630
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140118cb0, FUN_1401186e0, FUN_140118840, FUN_140118980, FUN_1401186a0, FUN_140118780
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140118630(undefined4 param_1)

{
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  char cVar7;
  byte bVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong lVar13;
  undefined8 unaff_RBX;
  byte bVar14;
  longlong unaff_GS_OFFSET;
  
  uVar9 = FUN_140118980(0);
  bVar14 = DAT_14a9438f4 ^ 1;
  uVar10 = FUN_140118840(param_1,0);
  FUN_1401186a0(10000);
  FUN_140118780(param_1,uVar10,0);
  FUN_140118cb0();
  cVar7 = FUN_140118840(param_1,uVar9);
  FUN_1401186e0();
  bVar8 = func_0x000144fd22c0();
  if (((~(bVar8 | DAT_14a9438f4) | (byte)param_1) & 1) == 0) {
    if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8)
                 + 8) == '\0') {
      func_0x0001455db994();
    }
    lVar4 = **(longlong **)(unaff_GS_OFFSET + 0x58);
    lVar5 = *(longlong *)(lVar4 + 0x12a8);
    if (*(char *)(lVar5 + 0x1237c) == '\x01') {
      *(undefined1 *)(lVar5 + 0x1237c) = 0;
    }
    if ((bVar14 & (byte)uVar9) != 0) {
      uVar11 = FUN_14011f9c0();
      FUN_140125ba0(uVar11,0);
    }
    if (cVar7 != '\0') {
      if (*(char *)(*(longlong *)
                     (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8) ==
          '\0') {
        func_0x0001455db994();
      }
      lVar5 = *(longlong *)(lVar4 + 0x12a8);
      lVar12 = (ulonglong)*(uint *)(lVar5 + 0x12190) * 0x288;
      uVar2 = *(uint *)(lVar12 + 0x147663f70);
      lVar13 = (ulonglong)uVar2 * 0x50;
      lVar4 = lVar12 + 0x147663cf0 + lVar13;
      if (*(char *)(lVar5 + 0x1237c) == '\x01') {
        *(undefined1 *)(lVar5 + 0x1237c) = 0;
      }
      iVar3 = *(int *)(lVar4 + -8);
      uVar1 = *(undefined1 *)(lVar4 + -3);
      lVar6 = *(longlong *)(lVar4 + -0x10);
      FUN_144fc6a50(lVar5,iVar3,lVar13 + -0x50 + lVar12 + 0x147663cf0,1);
      if ((lVar6 != 0 && iVar3 == 0) &&
         (cVar7 = *(char *)(*(longlong *)(lVar6 + 8) + 0x41), *(char *)(lVar5 + 0x1237a) != cVar7))
      {
        *(char *)(lVar5 + 0x1237a) = cVar7;
        *(byte *)(lVar5 + 0x12523) = *(byte *)(lVar5 + 0x12523) | 0x80;
      }
      FUN_144fc69b0(lVar5,lVar6,1,CONCAT71((int7)((ulonglong)unaff_RBX >> 8),uVar1) & 0xffffffff);
      if (*(char *)(lVar4 + -4) == '\x01') {
        *(undefined1 *)(lVar5 + 0x1237c) = 1;
        *(byte *)(lVar5 + 0x12522) = *(byte *)(lVar5 + 0x12522) | 0x40;
        *(undefined1 *)(lVar5 + 0x121a4) = 1;
        func_0x0001450a5e80(lVar5,0,0,0,0xff);
      }
      *(uint *)(lVar12 + 0x147663f70) = uVar2 - 1;
      return;
    }
  }
  return;
}

