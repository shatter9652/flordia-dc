// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140171d10  size: 2153 bytes
// Name:    FUN_140171d10
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14006e840, FUN_1411a18c0, FUN_144e63cf0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


byte FUN_140171d10(longlong param_1,longlong *param_2)

{
  undefined1 uVar1;
  byte bVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  byte bVar7;
  short sVar8;
  bool bVar9;
  short sVar10;
  char *pcVar11;
  bool bVar12;
  bool bVar13;
  short sVar14;
  short sVar15;
  uint uVar16;
  char acStack_40 [4];
  uint uStack_3c;
  
  lVar4 = FUN_144e63cf0(param_2[4],*(undefined4 *)((longlong)param_2 + 0x9c));
  if (lVar4 == 0) {
    bVar2 = 0;
    bVar7 = *(byte *)(param_1 + 0x482) & 0xef;
  }
  else {
    bVar7 = *(byte *)(param_1 + 0x482) & 0xef | (1 < (byte)(*(char *)(lVar4 + 0xc) - 1U)) << 4;
    *(byte *)(param_1 + 0x482) = bVar7;
    bVar2 = (*(char *)(lVar4 + 0xc) == '\x02') << 5;
  }
  *(byte *)(param_1 + 0x482) = bVar7 & 0xdf | bVar2;
  cVar3 = (**(code **)(*param_2 + 0x288))(param_2);
  sVar15 = -1;
  sVar8 = -1;
  if (cVar3 != '\0') {
    uVar5 = (**(code **)(*param_2 + 0xa8))(param_2);
    FUN_14006e840(uVar5,acStack_40,0x41e5d6a1);
    sVar8 = -1;
    if (acStack_40[0] != '\0') {
      sVar8 = (short)uStack_3c;
    }
  }
  *(short *)(param_1 + 0x42c) = sVar8;
  cVar3 = (**(code **)(*param_2 + 0x288))(param_2);
  if (cVar3 != '\0') {
    uVar5 = (**(code **)(*param_2 + 0xa8))(param_2);
    FUN_14006e840(uVar5,acStack_40,0xe07293b0);
    sVar15 = -1;
    if (acStack_40[0] != '\0') {
      sVar15 = (short)uStack_3c;
    }
  }
  *(short *)(param_1 + 0x42e) = sVar15;
  cVar3 = (**(code **)(*param_2 + 0x288))(param_2);
  sVar14 = -1;
  if (cVar3 != '\0') {
    uVar5 = (**(code **)(*param_2 + 0xa8))(param_2);
    FUN_14006e840(uVar5,acStack_40,0xf242374f);
    sVar14 = -1;
    if (acStack_40[0] != '\0') {
      sVar14 = (short)uStack_3c;
    }
  }
  *(short *)(param_1 + 0x430) = sVar14;
  cVar3 = (**(code **)(*param_2 + 0x288))(param_2);
  uVar16 = 0xffffffff;
  if (cVar3 != '\0') {
    uVar5 = (**(code **)(*param_2 + 0xa8))(param_2);
    FUN_14006e840(uVar5,acStack_40,0x2b3fa955);
    uVar16 = 0xffffffff;
    if (acStack_40[0] != '\0') {
      uVar16 = uStack_3c;
    }
  }
  *(short *)(param_1 + 0x432) = (short)uVar16;
  cVar3 = (**(code **)(*param_2 + 0x288))(param_2);
  if (cVar3 == '\0') {
    sVar10 = -1;
  }
  else {
    uVar5 = (**(code **)(*param_2 + 0xa8))(param_2);
    FUN_14006e840(uVar5,acStack_40,0xfa0cc6e4);
    sVar10 = -1;
    if (acStack_40[0] != '\0') {
      sVar10 = (short)uStack_3c;
    }
  }
  *(short *)(param_1 + 0x434) = sVar10;
  bVar12 = ((short)uVar16 != -1 && sVar14 != -1) && (sVar8 != -1 && sVar15 != -1);
  cVar3 = func_0x000145281cb0(*(undefined1 *)(param_1 + 0x482));
  if (cVar3 != '\0') {
    bVar12 = bVar12 && sVar10 != -1;
  }
  cVar3 = (**(code **)(*param_2 + 0x288))(param_2);
  if (cVar3 == '\0') {
    pcVar11 = (char *)0xffffffff;
  }
  else {
    uVar5 = (**(code **)(*param_2 + 0xa8))(param_2);
    FUN_14006e840(uVar5,acStack_40,0xa54d1d66);
    pcVar11 = (char *)0xffffffff;
    if (acStack_40[0] != '\0') {
      pcVar11 = (char *)(ulonglong)uStack_3c;
    }
  }
  *(short *)(param_1 + 0x436) = (short)pcVar11;
  cVar3 = func_0x000145281cb0(*(undefined1 *)(param_1 + 0x482));
  if (cVar3 != '\0') {
    bVar12 = (bool)(bVar12 & (short)pcVar11 != -1);
  }
  FUN_1411a18c0(param_1,param_2);
  cVar3 = (**(code **)(*param_2 + 0x288))(param_2);
  sVar8 = -1;
  if (cVar3 != '\0') {
    uVar5 = (**(code **)(*param_2 + 0xa8))(param_2);
    pcVar11 = acStack_40;
    FUN_14006e840(uVar5,pcVar11,0x34c53e77);
    sVar8 = -1;
    if (acStack_40[0] != '\0') {
      sVar8 = (short)uStack_3c;
    }
  }
  *(short *)(param_1 + 0x43c) = sVar8;
  cVar3 = (**(code **)(*param_2 + 0x288))(param_2);
  sVar8 = -1;
  if (cVar3 != '\0') {
    uVar5 = (**(code **)(*param_2 + 0xa8))(param_2);
    pcVar11 = acStack_40;
    FUN_14006e840(uVar5,pcVar11,0x216b0232);
    sVar8 = -1;
    if (acStack_40[0] != '\0') {
      sVar8 = (short)uStack_3c;
    }
  }
  *(short *)(param_1 + 0x43e) = sVar8;
  uVar1 = *(undefined1 *)(param_1 + 0x482);
  cVar3 = (**(code **)(*param_2 + 0x288))(param_2);
  sVar8 = -1;
  if (cVar3 != '\0') {
    cVar3 = func_0x000145281cb0(CONCAT71((int7)((ulonglong)pcVar11 >> 8),uVar1) & 0xffffffff);
    uVar5 = 0x2b3fa955;
    if (cVar3 != '\0') {
      uVar5 = 0xa78f21ea;
    }
    uVar6 = (**(code **)(*param_2 + 0xa8))(param_2);
    FUN_14006e840(uVar6,acStack_40,uVar5);
    sVar8 = -1;
    if (acStack_40[0] != '\0') {
      sVar8 = (short)uStack_3c;
    }
  }
  *(short *)(param_1 + 0x440) = sVar8;
  cVar3 = (**(code **)(*param_2 + 0x288))(param_2);
  sVar8 = -1;
  if (cVar3 != '\0') {
    uVar5 = (**(code **)(*param_2 + 0xa8))(param_2);
    FUN_14006e840(uVar5,acStack_40,0x291edacb);
    sVar8 = -1;
    if (acStack_40[0] != '\0') {
      sVar8 = (short)uStack_3c;
    }
  }
  *(short *)(param_1 + 0x442) = sVar8;
  cVar3 = (**(code **)(*param_2 + 0x288))(param_2);
  sVar8 = -1;
  if (cVar3 != '\0') {
    uVar5 = (**(code **)(*param_2 + 0xa8))(param_2);
    FUN_14006e840(uVar5,acStack_40,0x2546b0e4);
    sVar8 = -1;
    if (acStack_40[0] != '\0') {
      sVar8 = (short)uStack_3c;
    }
  }
  *(short *)(param_1 + 0x444) = sVar8;
  cVar3 = (**(code **)(*param_2 + 0x288))(param_2);
  sVar8 = -1;
  if (cVar3 != '\0') {
    uVar5 = (**(code **)(*param_2 + 0xa8))(param_2);
    FUN_14006e840(uVar5,acStack_40,0xc31edf14);
    sVar8 = -1;
    if (acStack_40[0] != '\0') {
      sVar8 = (short)uStack_3c;
    }
  }
  *(short *)(param_1 + 0x446) = sVar8;
  cVar3 = (**(code **)(*param_2 + 0x288))(param_2);
  sVar8 = -1;
  if (cVar3 != '\0') {
    uVar5 = (**(code **)(*param_2 + 0xa8))(param_2);
    FUN_14006e840(uVar5,acStack_40,0x9d89d325);
    sVar8 = -1;
    if (acStack_40[0] != '\0') {
      sVar8 = (short)uStack_3c;
    }
  }
  *(short *)(param_1 + 0x448) = sVar8;
  cVar3 = (**(code **)(*param_2 + 0x288))(param_2);
  sVar8 = -1;
  if (cVar3 != '\0') {
    uVar5 = (**(code **)(*param_2 + 0xa8))(param_2);
    FUN_14006e840(uVar5,acStack_40,0x9e0fb7af);
    sVar8 = -1;
    if (acStack_40[0] != '\0') {
      sVar8 = (short)uStack_3c;
    }
  }
  *(short *)(param_1 + 0x42a) = sVar8;
  cVar3 = (**(code **)(*param_2 + 0x288))(param_2);
  sVar8 = -1;
  if (cVar3 != '\0') {
    uVar5 = (**(code **)(*param_2 + 0xa8))(param_2);
    FUN_14006e840(uVar5,acStack_40,0x6686685c);
    sVar8 = -1;
    if (acStack_40[0] != '\0') {
      sVar8 = (short)uStack_3c;
    }
  }
  *(short *)(param_1 + 0x428) = sVar8;
  cVar3 = (**(code **)(*param_2 + 0x288))(param_2);
  sVar8 = -1;
  if (cVar3 != '\0') {
    uVar5 = (**(code **)(*param_2 + 0xa8))(param_2);
    FUN_14006e840(uVar5,acStack_40,0x3363e579);
    sVar8 = -1;
    if (acStack_40[0] != '\0') {
      sVar8 = (short)uStack_3c;
    }
  }
  *(short *)(param_1 + 0x44a) = sVar8;
  cVar3 = (**(code **)(*param_2 + 0x288))(param_2);
  sVar8 = -1;
  if (cVar3 != '\0') {
    uVar5 = (**(code **)(*param_2 + 0xa8))(param_2);
    FUN_14006e840(uVar5,acStack_40,0x295d8f8);
    sVar8 = -1;
    if (acStack_40[0] != '\0') {
      sVar8 = (short)uStack_3c;
    }
  }
  *(short *)(param_1 + 0x44c) = sVar8;
  cVar3 = (**(code **)(*param_2 + 0x288))(param_2);
  sVar8 = -1;
  if (cVar3 != '\0') {
    uVar5 = (**(code **)(*param_2 + 0xa8))(param_2);
    FUN_14006e840(uVar5,acStack_40,0xfb61fbb5);
    sVar8 = -1;
    if (acStack_40[0] != '\0') {
      sVar8 = (short)uStack_3c;
    }
  }
  *(short *)(param_1 + 0x44e) = sVar8;
  cVar3 = (**(code **)(*param_2 + 0x288))(param_2);
  if (cVar3 == '\0') {
    sVar8 = -1;
  }
  else {
    uVar5 = (**(code **)(*param_2 + 0xa8))(param_2);
    FUN_14006e840(uVar5,acStack_40,0xb13045dc);
    sVar8 = -1;
    if (acStack_40[0] != '\0') {
      sVar8 = (short)uStack_3c;
    }
  }
  *(short *)(param_1 + 0x450) = sVar8;
  bVar9 = false;
  if ((((*(short *)(param_1 + 0x43c) != -1) && (*(short *)(param_1 + 0x43e) != -1)) &&
      (*(short *)(param_1 + 0x440) != -1)) && (bVar9 = false, *(short *)(param_1 + 0x444) != -1)) {
    bVar2 = *(byte *)(param_1 + 0x482);
    bVar9 = false;
    if ((((bVar2 & 0x10) != 0 || *(short *)(param_1 + 0x42a) != -1) &&
        (*(short *)(param_1 + 0x44a) != -1)) && (*(short *)(param_1 + 0x44c) != -1)) {
      bVar13 = *(short *)(param_1 + 0x44e) != -1 || (bVar2 & 0x20) != 0;
      bVar9 = sVar8 != -1;
      if (*(short *)(param_1 + 0x44e) == -1) {
        bVar9 = bVar13;
      }
      if ((bVar2 & 0x20) != 0) {
        bVar9 = bVar13;
      }
    }
  }
  cVar3 = (**(code **)(*param_2 + 0x288))(param_2);
  sVar8 = -1;
  if (cVar3 != '\0') {
    uVar5 = (**(code **)(*param_2 + 0xa8))(param_2);
    FUN_14006e840(uVar5,acStack_40,0x6a42f7fe);
    sVar8 = -1;
    if (acStack_40[0] != '\0') {
      sVar8 = (short)uStack_3c;
    }
  }
  *(short *)(param_1 + 0x45c) = sVar8;
  cVar3 = (**(code **)(*param_2 + 0x288))(param_2);
  sVar8 = -1;
  if (cVar3 != '\0') {
    uVar5 = (**(code **)(*param_2 + 0xa8))(param_2);
    FUN_14006e840(uVar5,acStack_40,0x56515084);
    sVar8 = -1;
    if (acStack_40[0] != '\0') {
      sVar8 = (short)uStack_3c;
    }
  }
  *(short *)(param_1 + 0x45e) = sVar8;
  cVar3 = (**(code **)(*param_2 + 0x288))(param_2);
  if (cVar3 == '\0') {
    sVar8 = -1;
  }
  else {
    uVar5 = (**(code **)(*param_2 + 0xa8))(param_2);
    FUN_14006e840(uVar5,acStack_40,0x36afa2f7);
    sVar8 = -1;
    if (acStack_40[0] != '\0') {
      sVar8 = (short)uStack_3c;
    }
  }
  *(short *)(param_1 + 0x460) = sVar8;
  return bVar9 & bVar12;
}

