// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140074780  size: 1520 bytes
// Name:    FUN_140074780
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144e6f6f0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140074780(ulonglong param_1,ulonglong param_2,undefined4 param_3,int *param_4)

{
  char *pcVar1;
  short *psVar2;
  int *piVar3;
  int iVar4;
  char cVar5;
  byte bVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong *puVar10;
  ulonglong *puVar11;
  ulonglong *puVar12;
  int iVar13;
  undefined1 uVar14;
  int iVar15;
  bool bVar16;
  ulonglong *puStack_58;
  char cStack_50;
  
  iVar4 = *param_4;
  iVar15 = 5;
  if (iVar4 < 5) {
    iVar15 = iVar4;
  }
  iVar13 = 4;
  if (iVar4 < 4) {
    iVar13 = iVar4;
  }
  FUN_144e6f6f0();
  uVar9 = *(ulonglong *)(param_4 + 0x1e);
  uVar14 = (undefined1)iVar15;
  if ((uVar9 == 0) || (*(longlong *)(param_4 + 0x20) == 0)) {
    if ((*(longlong *)(param_4 + 4) == 0) || ((char)param_4[6] != '\x01')) {
      puVar11 = (ulonglong *)0x0;
    }
    else {
      puVar11 = puStack_58 + 7;
      puStack_58[7] = (ulonglong)FUN_1448b4600;
      *(undefined4 *)(puStack_58 + 8) = 0;
      *(undefined1 *)((longlong)puStack_58 + 0x44) = uVar14;
      *(char *)((longlong)puStack_58 + 0x45) = (char)param_4[1];
      *(char *)((longlong)puStack_58 + 0x43) = (char)param_4[2];
      puStack_58[10] = param_1;
      puStack_58[0xb] = param_2;
      puStack_58[0xc] = *(ulonglong *)(param_4 + 0x16);
      puStack_58[0xd] = *(ulonglong *)(param_4 + 4);
    }
    uVar8 = 0;
    bVar6 = *(longlong *)(param_4 + 8) != 0 & *(byte *)(param_4 + 10);
    puStack_58[0x12] = (ulonglong)FUN_1448b4670;
    *(undefined4 *)(puStack_58 + 0x13) = 0;
    *(undefined1 *)((longlong)puStack_58 + 0x9c) = uVar14;
    *(char *)((longlong)puStack_58 + 0x9d) = (char)param_4[1];
    *(char *)((longlong)puStack_58 + 0x9b) = (char)param_4[2];
    puStack_58[0x15] = param_1;
    puStack_58[0x16] = param_2;
    *(undefined4 *)(puStack_58 + 0x17) = param_3;
    *(char *)(puStack_58 + 0x18) = (char)param_4[0x18];
    *(byte *)((longlong)puStack_58 + 0xc1) = bVar6 ^ 1;
    puStack_58[0x19] = *(ulonglong *)(param_4 + 0x16);
    uVar9 = 0;
    if ((char)param_4[6] == '\0') {
      uVar9 = *(ulonglong *)(param_4 + 4);
    }
    puStack_58[0x1a] = uVar9;
    if ((char)param_4[10] == '\0') {
      uVar8 = *(ulonglong *)(param_4 + 8);
    }
    puVar10 = puStack_58 + 0x12;
    puStack_58[0x1b] = uVar8;
    puStack_58[0x1c] = 0;
    puVar12 = puVar10;
    if (puVar11 != (ulonglong *)0x0) {
      LOCK();
      pcVar1 = (char *)((longlong)puVar11 + 10);
      cVar5 = *pcVar1;
      *pcVar1 = *pcVar1 + '\x01';
      UNLOCK();
      puVar11[(ulonglong)(byte)(cVar5 + 1) + 1] = (ulonglong)puVar10;
      LOCK();
      *(short *)(puStack_58 + 0x13) = (short)puStack_58[0x13] + 1;
      UNLOCK();
      puVar12 = puVar11;
    }
    if (bVar6 != 0) {
      puStack_58[0x1d] = (ulonglong)FUN_1448b47c0;
      *(undefined4 *)(puStack_58 + 0x1e) = 0;
      *(undefined1 *)((longlong)puStack_58 + 0xf4) = uVar14;
      *(char *)((longlong)puStack_58 + 0xf5) = (char)param_4[1];
      *(char *)((longlong)puStack_58 + 0xf3) = (char)param_4[2];
      puStack_58[0x20] = param_1;
      puStack_58[0x21] = param_2;
      puStack_58[0x22] = *(ulonglong *)(param_4 + 0x16);
      puStack_58[0x23] = *(ulonglong *)(param_4 + 8);
      puVar10 = puStack_58 + 0x1d;
      LOCK();
      pcVar1 = (char *)((longlong)puStack_58 + 0x9a);
      cVar5 = *pcVar1;
      *pcVar1 = *pcVar1 + '\x01';
      UNLOCK();
      puStack_58[(ulonglong)(byte)(cVar5 + 1) + 0x13] = (ulonglong)puVar10;
      LOCK();
      *(short *)(puStack_58 + 0x1e) = (short)puStack_58[0x1e] + 1;
      UNLOCK();
    }
    puVar11 = puVar10;
    if (*(char *)((longlong)param_4 + 0x61) == '\x01') {
      puVar11 = puStack_58 + 0x28;
      puStack_58[0x28] = (ulonglong)FUN_1448b4840;
      *(undefined4 *)(puStack_58 + 0x29) = 0;
      *(undefined1 *)((longlong)puStack_58 + 0x14c) = uVar14;
      *(char *)((longlong)puStack_58 + 0x14d) = (char)param_4[1];
      *(char *)((longlong)puStack_58 + 0x14b) = (char)param_4[2];
      puStack_58[0x2b] = param_1;
      puStack_58[0x2c] = param_2;
      *(undefined4 *)(puStack_58 + 0x2d) = param_3;
      *(undefined1 *)(puStack_58 + 0x2e) = *(undefined1 *)((longlong)param_4 + 0x62);
      *(undefined1 *)((longlong)puStack_58 + 0x171) = *(undefined1 *)((longlong)param_4 + 99);
      *(uint *)(puStack_58 + 0x2f) = (uint)*(byte *)(param_4 + 0x19);
      *(bool *)(puStack_58 + 0x30) = *(longlong *)(param_4 + 0x10) != 0;
      LOCK();
      pcVar1 = (char *)((longlong)puVar10 + 10);
      cVar5 = *pcVar1;
      *pcVar1 = *pcVar1 + '\x01';
      UNLOCK();
      puVar10[(ulonglong)(byte)(cVar5 + 1) + 1] = (ulonglong)puVar11;
      LOCK();
      *(short *)(puStack_58 + 0x29) = (short)puStack_58[0x29] + 1;
      UNLOCK();
    }
    puStack_58[0x31] = (ulonglong)FUN_1448b4960;
    *(undefined4 *)(puStack_58 + 0x32) = 0;
    *(undefined1 *)((longlong)puStack_58 + 0x194) = uVar14;
    bVar16 = true;
    *(char *)((longlong)puStack_58 + 0x195) = (char)param_4[1];
    *(char *)((longlong)puStack_58 + 0x193) = (char)param_4[2];
    puStack_58[0x34] = *(ulonglong *)(param_4 + 0xc);
    puStack_58[0x35] = *(ulonglong *)(param_4 + 0x16);
    puStack_58[0x36] = param_1;
    puStack_58[0x37] = param_2;
    puStack_58[0x38] = 0;
    puVar10 = puStack_58 + 0x31;
    LOCK();
    pcVar1 = (char *)((longlong)puVar11 + 10);
    cVar5 = *pcVar1;
    *pcVar1 = *pcVar1 + '\x01';
    UNLOCK();
    puVar11[(ulonglong)(byte)(cVar5 + 1) + 1] = (ulonglong)puVar10;
    LOCK();
    *(short *)(puStack_58 + 0x32) = (short)puStack_58[0x32] + 1;
    UNLOCK();
  }
  else {
    if ((*(char *)((longlong)param_4 + 0x62) == '\x01') && ((*(byte *)(param_2 + 0xd3) & 1) != 0)) {
      bVar6 = *(byte *)(param_2 + 0xd3) >> 4 & 1;
    }
    else {
      bVar6 = 0;
    }
    puVar12 = puStack_58 + 0x4a;
    puStack_58[0x4a] = (ulonglong)FUN_1448b4530;
    *(undefined4 *)(puStack_58 + 0x4b) = 0;
    *(undefined1 *)((longlong)puStack_58 + 0x25c) = uVar14;
    bVar16 = false;
    *(char *)((longlong)puStack_58 + 0x25d) = (char)param_4[1];
    *(char *)((longlong)puStack_58 + 0x25b) = (char)param_4[2];
    puStack_58[0x4d] = uVar9;
    puStack_58[0x4e] = *(ulonglong *)(param_4 + 0x20);
    puStack_58[0x4f] = *(ulonglong *)(param_2 + 0x98);
    *(byte *)(puStack_58 + 0x50) = bVar6;
    puStack_58[0x51] = param_2;
    puVar10 = puVar12;
  }
  if ((*(longlong *)(param_4 + 0x10) == 0) || (*(char *)((longlong)param_4 + 0x62) != '\x01')) {
    bVar6 = 0;
  }
  else {
    bVar6 = *(byte *)(param_2 + 0xd3) & 1;
  }
  puStack_58[0x39] = (ulonglong)FUN_1448b4a80;
  *(undefined4 *)(puStack_58 + 0x3a) = 0;
  *(char *)((longlong)puStack_58 + 0x1d4) = (char)iVar13 + '\x01';
  *(char *)((longlong)puStack_58 + 0x1d5) = (char)param_4[1];
  *(char *)((longlong)puStack_58 + 0x1d3) = (char)param_4[2];
  puStack_58[0x3d] = param_1;
  puStack_58[0x3e] = param_2;
  puStack_58[0x3f] = *(ulonglong *)(param_4 + 0xe);
  puStack_58[0x40] = *(ulonglong *)(param_4 + 0x16);
  *(byte *)(puStack_58 + 0x41) = bVar6;
  LOCK();
  pcVar1 = (char *)((longlong)puVar10 + 10);
  cVar5 = *pcVar1;
  *pcVar1 = *pcVar1 + '\x01';
  UNLOCK();
  puVar10[(ulonglong)(byte)(cVar5 + 1) + 1] = (ulonglong)(puStack_58 + 0x39);
  LOCK();
  *(short *)(puStack_58 + 0x3a) = (short)puStack_58[0x3a] + 1;
  UNLOCK();
  if (bVar6 != 0) {
    if ((char)param_4[0x14] == '\x01') {
      (**(code **)(param_4 + 0x10))(*(undefined8 *)(param_4 + 0x16));
    }
    else {
      puStack_58[0x42] = (ulonglong)FUN_1448b4b20;
      *(undefined4 *)(puStack_58 + 0x43) = 0;
      *(undefined2 *)((longlong)puStack_58 + 0x21c) = 0x1001;
      *(char *)((longlong)puStack_58 + 0x21b) = (char)param_4[0x15];
      puStack_58[0x45] = param_1;
      puStack_58[0x46] = param_2;
      puStack_58[0x47] = *(ulonglong *)(param_4 + 0x10);
      puStack_58[0x48] = *(ulonglong *)(param_4 + 0x16);
      LOCK();
      pcVar1 = (char *)((longlong)puStack_58 + 0x1d2);
      cVar5 = *pcVar1;
      *pcVar1 = *pcVar1 + '\x01';
      UNLOCK();
      puStack_58[(ulonglong)(byte)(cVar5 + 1) + 0x3a] = (ulonglong)(puStack_58 + 0x42);
      LOCK();
      *(short *)(puStack_58 + 0x43) = (short)puStack_58[0x43] + 1;
      UNLOCK();
      uVar9 = *(ulonglong *)(param_4 + 0x12);
      LOCK();
      pcVar1 = (char *)((longlong)puStack_58 + 0x21a);
      cVar5 = *pcVar1;
      *pcVar1 = *pcVar1 + '\x01';
      UNLOCK();
      puStack_58[(ulonglong)(byte)(cVar5 + 1) + 0x43] = uVar9;
      LOCK();
      psVar2 = (short *)(uVar9 + 8);
      *psVar2 = *psVar2 + 1;
      UNLOCK();
    }
  }
  uVar9 = *(ulonglong *)(param_4 + 0x1c);
  if (uVar9 != 0) {
    LOCK();
    pcVar1 = (char *)((longlong)puStack_58 + 0x1d2);
    cVar5 = *pcVar1;
    *pcVar1 = *pcVar1 + '\x01';
    UNLOCK();
    puStack_58[(ulonglong)(byte)(cVar5 + 1) + 0x3a] = uVar9;
    LOCK();
    *(short *)(uVar9 + 8) = *(short *)(uVar9 + 8) + 1;
    UNLOCK();
  }
  uVar7 = param_4[0x1a];
  *(char *)(param_2 + 0xd2) = (char)uVar7;
  *(undefined1 *)(param_2 + 0xd4) = 0;
  if (bVar16) {
    *(undefined4 *)(param_2 + 0xa8) = 0;
    *(undefined1 *)(param_2 + 0xc5) = 1;
    *(undefined4 *)(param_2 + 0xac) = 0;
    *(undefined1 *)(param_2 + 0xc6) = 1;
    uVar7 = param_4[0x1a];
  }
  LOCK();
  piVar3 = (int *)(param_1 + (ulonglong)uVar7 * 4);
  *piVar3 = *piVar3 + 1;
  UNLOCK();
  func_0x0001450f6bb0(puVar12);
  if (cStack_50 == '\x01') {
    puVar11 = puStack_58 + 2;
    *(int *)puVar11 = (int)*puVar11 + -1;
    uVar9 = *puStack_58;
    if ((int)*puVar11 == 0) {
      do {
        uVar8 = uVar9;
        LOCK();
        uVar9 = *puStack_58;
        if (uVar8 == uVar9) {
          *puStack_58 = (ulonglong)((int)uVar8 - 1) | 0xffffffff00000000;
          uVar9 = uVar8;
        }
        UNLOCK();
      } while (uVar8 != uVar9);
      if ((uVar8 & 0xfffffffe) != 0) {
        puVar11 = puStack_58 + 1;
        uVar9 = puStack_58[1];
        do {
          while ((longlong)uVar9 < 0) {
            cVar5 = FUN_1400062d0(puVar11,1,&stack0xffffffffffffffe0);
            if (cVar5 != '\0') {
              return;
            }
          }
          LOCK();
          uVar8 = *puVar11;
          if (uVar9 == uVar8) {
            *puVar11 = uVar9 + 0x100000000;
            uVar8 = uVar9;
          }
          UNLOCK();
          bVar16 = uVar9 != uVar8;
          uVar9 = uVar8;
        } while (bVar16);
        return;
      }
    }
    return;
  }
  return;
}

