// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401b57c0  size: 176 bytes
// Name:    FUN_1401b57c0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145078300, FUN_1401b5990, FUN_1401b6e10
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 * FUN_1401b57c0(longlong *param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  longlong ***ppplVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  longlong *plStack_e8;
  longlong **pplStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  longlong **pplStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  longlong **pplStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  longlong **pplStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  longlong **pplStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  longlong **pplStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined8 uStack_20;
  ulonglong in_stack_ffffffffffffffe8;
  undefined4 uVar10;
  
  uStack_20 = (longlong **)CONCAT44(0x275822c4,(undefined4)uStack_20);
  puStack_50 = (undefined *)0x1401b57dd;
  iVar3 = func_0x000144debc60(*(undefined8 *)(*param_1 + 0x20));
  if (iVar3 < 2) {
    puStack_50 = (undefined *)0x1401b57ea;
    cVar2 = func_0x000144da4370(*(undefined1 *)((longlong)param_1 + 0x3c));
    uVar7 = *(undefined8 *)(*param_1 + 0x20);
  }
  else {
    uVar7 = *(undefined8 *)(*param_1 + 0x20);
    puStack_50 = (undefined *)0x1401b5866;
    cVar2 = func_0x000144da4370(*(undefined1 *)((longlong)param_1 + 0x3c));
  }
  if (cVar2 == '\0') {
    puStack_50 = (undefined *)0x1401b5802;
    FUN_145078300();
  }
  else {
    puStack_50 = (undefined *)0x1401b584c;
    FUN_1401b6e10(uVar7,(longlong)&uStack_20 + 4,0);
  }
  iVar3 = (int)in_stack_ffffffffffffffe8;
  if (iVar3 == 0) {
    return puRam0000000149aafbe0;
  }
  puStack_50 = (undefined *)0x1401b582d;
  plVar4 = (longlong *)
           FUN_1401b5990(param_1[2],*(undefined8 *)(*param_1 + 0x230),(longlong)&uStack_20 + 4);
  if (plVar4 == (longlong *)0x0) {
    return (undefined8 *)0x0;
  }
  uVar10 = (undefined4)(in_stack_ffffffffffffffe8 >> 0x20);
  uVar9 = in_stack_ffffffffffffffe8 & 0xffffffff;
  iVar1 = *(int *)((longlong)plVar4 + 0x1c);
  if (iVar1 != 0) {
    if (1 < iVar1 - 2U) {
      if (iVar1 == 1) {
        puStack_50 = &UNK_1401b5974;
        func_0x0001403df4b0((longlong)&uStack_20 + 4,uVar10);
        puStack_50 = &UNK_1401b5981;
        puVar8 = (undefined8 *)func_0x00014438e150(plVar4,uVar9,uStack_20._4_4_);
      }
      else {
        puVar8 = (undefined8 *)0x0;
      }
      return puVar8;
    }
    if (iVar3 == 0x15) {
      pplStack_40 = (longlong **)&UNK_1401b77de;
      lVar6 = FUN_1450b1cd0(*(undefined8 *)(*(longlong *)(*plVar4 + 8) + 0x40));
      if (lVar6 != 0) {
        pplStack_40 = (longlong **)&UNK_14438e922;
        puVar8 = (undefined8 *)FUN_145f0a370();
        pplStack_40 = (longlong **)&UNK_14438e935;
        FUN_1401b76f0(puVar8,0x15,lVar6);
        *puVar8 = &UNK_1465ea470;
        pplStack_40 = (longlong **)&UNK_14438e94c;
        FUN_145078170(plVar4,6,puVar8);
        return puVar8;
      }
    }
    else {
      if (iVar3 == 0) {
        return puRam0000000149aafbe0;
      }
      if (iVar3 != 1) {
        if (iVar3 - 0x16U < 6) {
          pplStack_40 = (longlong **)&UNK_1401b783a;
          lVar6 = FUN_1450b1cd0(*(undefined8 *)(*(longlong *)(*plVar4 + 8) + 0x40));
          if (lVar6 != 0) {
            puStack_50 = &UNK_14438e8d6;
            puVar8 = (undefined8 *)FUN_145f0a370();
            puStack_50 = &UNK_14438e8e6;
            FUN_1401b76f0(puVar8,uVar9,lVar6);
            *puVar8 = &UNK_1465ea340;
            puStack_50 = &UNK_14438e8fd;
            FUN_145078170(plVar4,6,puVar8);
            return puVar8;
          }
        }
        return (undefined8 *)0x0;
      }
    }
FUN_1401b7860:
    if (*(int *)((longlong)plVar4 + 0x74) == 0) {
      puStack_30 = &UNK_1401b7880;
      uVar7 = FUN_1401bbf00();
      puStack_30 = &UNK_1401b788d;
      FUN_145078170(plVar4,1,uVar7);
    }
    return *(undefined8 **)plVar4[0xf];
  }
  puVar8 = (undefined8 *)0x0;
  switch(uVar9) {
  case 0:
    return puRam0000000149aafbe0;
  case 1:
    goto FUN_1401b7860;
  case 2:
    if (*(int *)((longlong)plVar4 + 0x84) == 0) {
      puStack_30 = &UNK_14438d6b6;
      uVar7 = FUN_14438de90();
      puStack_30 = &UNK_14438d6c3;
      FUN_145078170(plVar4,2,uVar7);
    }
    return *(undefined8 **)plVar4[0x11];
  case 3:
    pplStack_40 = (longlong **)&UNK_1401b8451;
    puVar8 = (undefined8 *)
             FUN_144e589e0(*(undefined4 *)((longlong)plVar4 + 0x94),plVar4[0x13],uVar10);
    if (puVar8 == (undefined8 *)0x0) {
      pplStack_40 = (longlong **)&UNK_1401b8468;
      cVar2 = FUN_140092cc0(*(undefined8 *)(*(longlong *)(*plVar4 + 8) + 0x18),uVar10);
      if (cVar2 == '\0') {
        puVar8 = (undefined8 *)0x0;
      }
      else {
        pplStack_40 = (longlong **)&UNK_1401b8478;
        puVar8 = (undefined8 *)FUN_144e96700(0x149aafb80);
        if (puVar8 == (undefined8 *)0x0) {
          pplStack_40 = (longlong **)&UNK_1401b84d1;
          uVar7 = func_0x000144fc99c0(0,0);
          pplStack_40 = (longlong **)&UNK_1401b84e4;
          puVar8 = (undefined8 *)FUN_144fac3c0(uVar7,0x60,0x10);
        }
        pplStack_40 = (longlong **)&UNK_1401b848d;
        FUN_145078e80(puVar8,0xffffffff);
        *puVar8 = &UNK_1465ea210;
        *(undefined4 *)(puVar8 + 10) = uVar10;
        *(undefined4 *)((longlong)puVar8 + 0x54) = 0xffffffff;
        *(byte *)(puVar8 + 0xb) = *(byte *)(puVar8 + 0xb) & 0xfe;
        *(undefined4 *)(puVar8 + 5) = 3;
        pplStack_40 = (longlong **)&UNK_1401b84b9;
        FUN_145078170(plVar4,3,puVar8);
      }
    }
    return puVar8;
  case 4:
    pplStack_40 = (longlong **)&UNK_14438d700;
    puVar8 = (undefined8 *)
             FUN_14438b9b0(*(undefined4 *)((longlong)plVar4 + 0xa4),plVar4[0x15],uVar10);
    if (puVar8 != (undefined8 *)0x0) {
      return puVar8;
    }
    pplStack_40 = (longlong **)&UNK_14438dd14;
    cVar2 = FUN_140092d40(*(undefined8 *)(*(longlong *)(*plVar4 + 8) + 0x18),4,uVar10);
    if (cVar2 == '\0') {
      puVar8 = (undefined8 *)0x0;
    }
    else {
      pplStack_40 = (longlong **)&UNK_14438dd24;
      puVar8 = (undefined8 *)FUN_144e96700(0x149aafb20);
      if (puVar8 == (undefined8 *)0x0) {
        pplStack_40 = (longlong **)&UNK_14438dd99;
        uVar7 = func_0x000144fc99c0(0,0);
        pplStack_40 = (longlong **)&UNK_14438ddac;
        puVar8 = (undefined8 *)FUN_144fac3c0(uVar7,0x120,0x10);
      }
      pplStack_40 = (longlong **)&UNK_14438dd39;
      FUN_145078e80(puVar8,0xffffffff);
      *(undefined4 *)(puVar8 + 10) = 0;
      puVar8[0xb] = 0;
      *(undefined4 *)((longlong)puVar8 + 100) = 0xffffffff;
      *(undefined4 *)(puVar8 + 0x22) = 10;
      *(byte *)((longlong)puVar8 + 0x114) = *(byte *)((longlong)puVar8 + 0x114) & 0xfe;
      *puVar8 = &UNK_1465e9950;
      *(undefined4 *)(puVar8 + 5) = 4;
      *(undefined4 *)(puVar8 + 0xc) = uVar10;
      pplStack_40 = (longlong **)&UNK_14438dd81;
      FUN_145078170(plVar4,4,puVar8);
    }
    return puVar8;
  case 5:
    pplStack_40 = (longlong **)&UNK_14438d850;
    puVar8 = (undefined8 *)
             FUN_1420cc150(*(undefined4 *)((longlong)plVar4 + 0xa4),plVar4[0x15],uVar10);
    if (puVar8 != (undefined8 *)0x0) {
      return puVar8;
    }
    pplStack_40 = (longlong **)&UNK_14438d904;
    cVar2 = FUN_140092d40(*(undefined8 *)(*(longlong *)(*plVar4 + 8) + 0x18),5,uVar10);
    if (cVar2 == '\0') {
      puVar8 = (undefined8 *)0x0;
    }
    else {
      pplStack_40 = (longlong **)&UNK_14438d914;
      puVar8 = (undefined8 *)FUN_144e96700(0x149aafb20);
      if (puVar8 == (undefined8 *)0x0) {
        pplStack_40 = (longlong **)&UNK_14438d989;
        uVar7 = func_0x000144fc99c0(0,0);
        pplStack_40 = (longlong **)&UNK_14438d99c;
        puVar8 = (undefined8 *)FUN_144fac3c0(uVar7,0x120,0x10);
      }
      pplStack_40 = (longlong **)&UNK_14438d929;
      FUN_145078e80(puVar8,0xffffffff);
      *(undefined4 *)(puVar8 + 10) = 0;
      puVar8[0xb] = 0;
      *(undefined4 *)((longlong)puVar8 + 100) = 0xffffffff;
      *(undefined4 *)(puVar8 + 0x22) = 10;
      *(byte *)((longlong)puVar8 + 0x114) = *(byte *)((longlong)puVar8 + 0x114) & 0xfe;
      *puVar8 = &UNK_1465e9f90;
      *(undefined4 *)(puVar8 + 5) = 5;
      *(undefined4 *)(puVar8 + 0xc) = uVar10;
      pplStack_40 = (longlong **)&UNK_14438d971;
      FUN_145078170(plVar4,4,puVar8);
    }
    return puVar8;
  case 6:
    pplStack_40 = (longlong **)&UNK_14438d740;
    puVar8 = (undefined8 *)
             FUN_1420cc1c0(*(undefined4 *)((longlong)plVar4 + 0xa4),plVar4[0x15],uVar10);
    if (puVar8 != (undefined8 *)0x0) {
      return puVar8;
    }
    pplStack_40 = (longlong **)&UNK_14438dc44;
    cVar2 = FUN_140092d40(*(undefined8 *)(*(longlong *)(*plVar4 + 8) + 0x18),6,uVar10);
    if (cVar2 == '\0') {
      puVar8 = (undefined8 *)0x0;
    }
    else {
      pplStack_40 = (longlong **)&UNK_14438dc54;
      puVar8 = (undefined8 *)FUN_144e96700(0x149aafb20);
      if (puVar8 == (undefined8 *)0x0) {
        pplStack_40 = (longlong **)&UNK_14438dcc9;
        uVar7 = func_0x000144fc99c0(0,0);
        pplStack_40 = (longlong **)&UNK_14438dcdc;
        puVar8 = (undefined8 *)FUN_144fac3c0(uVar7,0x120,0x10);
      }
      pplStack_40 = (longlong **)&UNK_14438dc69;
      FUN_145078e80(puVar8,0xffffffff);
      *(undefined4 *)(puVar8 + 10) = 0;
      puVar8[0xb] = 0;
      *(undefined4 *)((longlong)puVar8 + 100) = 0xffffffff;
      *(undefined4 *)(puVar8 + 0x22) = 10;
      *(byte *)((longlong)puVar8 + 0x114) = *(byte *)((longlong)puVar8 + 0x114) & 0xfe;
      *puVar8 = &UNK_1465e9e50;
      *(undefined4 *)(puVar8 + 5) = 6;
      *(undefined4 *)(puVar8 + 0xc) = uVar10;
      pplStack_40 = (longlong **)&UNK_14438dcb1;
      FUN_145078170(plVar4,4,puVar8);
    }
    return puVar8;
  case 7:
    pplStack_40 = (longlong **)&UNK_14438d780;
    puVar8 = (undefined8 *)
             FUN_1420cc230(*(undefined4 *)((longlong)plVar4 + 0xa4),plVar4[0x15],uVar10);
    if (puVar8 != (undefined8 *)0x0) {
      return puVar8;
    }
    pplStack_40 = (longlong **)&UNK_14438db74;
    cVar2 = FUN_140092d40(*(undefined8 *)(*(longlong *)(*plVar4 + 8) + 0x18),7,uVar10);
    if (cVar2 == '\0') {
      puVar8 = (undefined8 *)0x0;
    }
    else {
      pplStack_40 = (longlong **)&UNK_14438db84;
      puVar8 = (undefined8 *)FUN_144e96700(0x149aafb20);
      if (puVar8 == (undefined8 *)0x0) {
        pplStack_40 = (longlong **)&UNK_14438dbf9;
        uVar7 = func_0x000144fc99c0(0,0);
        pplStack_40 = (longlong **)&UNK_14438dc0c;
        puVar8 = (undefined8 *)FUN_144fac3c0(uVar7,0x120,0x10);
      }
      pplStack_40 = (longlong **)&UNK_14438db99;
      FUN_145078e80(puVar8,0xffffffff);
      *(undefined4 *)(puVar8 + 10) = 0;
      puVar8[0xb] = 0;
      *(undefined4 *)((longlong)puVar8 + 100) = 0xffffffff;
      *(undefined4 *)(puVar8 + 0x22) = 10;
      *(byte *)((longlong)puVar8 + 0x114) = *(byte *)((longlong)puVar8 + 0x114) & 0xfe;
      *puVar8 = &UNK_1465e9a90;
      *(undefined4 *)(puVar8 + 5) = 7;
      *(undefined4 *)(puVar8 + 0xc) = uVar10;
      pplStack_40 = (longlong **)&UNK_14438dbe1;
      FUN_145078170(plVar4,4,puVar8);
    }
    return puVar8;
  case 8:
    pplStack_40 = (longlong **)&UNK_14438d7c0;
    puVar8 = (undefined8 *)
             FUN_1420cc0e0(*(undefined4 *)((longlong)plVar4 + 0xa4),plVar4[0x15],uVar10);
    if (puVar8 != (undefined8 *)0x0) {
      return puVar8;
    }
    pplStack_40 = (longlong **)&UNK_14438daa4;
    cVar2 = FUN_140092d40(*(undefined8 *)(*(longlong *)(*plVar4 + 8) + 0x18),8,uVar10);
    if (cVar2 == '\0') {
      puVar8 = (undefined8 *)0x0;
    }
    else {
      pplStack_40 = (longlong **)&UNK_14438dab4;
      puVar8 = (undefined8 *)FUN_144e96700(0x149aafb20);
      if (puVar8 == (undefined8 *)0x0) {
        pplStack_40 = (longlong **)&UNK_14438db29;
        uVar7 = func_0x000144fc99c0(0,0);
        pplStack_40 = (longlong **)&UNK_14438db3c;
        puVar8 = (undefined8 *)FUN_144fac3c0(uVar7,0x120,0x10);
      }
      pplStack_40 = (longlong **)&UNK_14438dac9;
      FUN_145078e80(puVar8,0xffffffff);
      *(undefined4 *)(puVar8 + 10) = 0;
      puVar8[0xb] = 0;
      *(undefined4 *)((longlong)puVar8 + 100) = 0xffffffff;
      *(undefined4 *)(puVar8 + 0x22) = 10;
      *(byte *)((longlong)puVar8 + 0x114) = *(byte *)((longlong)puVar8 + 0x114) & 0xfe;
      *puVar8 = &UNK_1465e9bd0;
      *(undefined4 *)(puVar8 + 5) = 8;
      *(undefined4 *)(puVar8 + 0xc) = uVar10;
      pplStack_40 = (longlong **)&UNK_14438db11;
      FUN_145078170(plVar4,4,puVar8);
    }
    return puVar8;
  case 9:
    pplStack_40 = (longlong **)&UNK_14438d806;
    puVar8 = (undefined8 *)
             FUN_1401bcd00(*(undefined4 *)((longlong)plVar4 + 0xa4),plVar4[0x15],9,uVar10);
    if (puVar8 != (undefined8 *)0x0) {
      return puVar8;
    }
    pplStack_40 = (longlong **)&UNK_14438d9d4;
    cVar2 = FUN_140092d40(*(undefined8 *)(*(longlong *)(*plVar4 + 8) + 0x18),9,uVar10);
    if (cVar2 == '\0') {
      puVar8 = (undefined8 *)0x0;
    }
    else {
      pplStack_40 = (longlong **)&UNK_14438d9e4;
      puVar8 = (undefined8 *)FUN_144e96700(0x149aafb20);
      if (puVar8 == (undefined8 *)0x0) {
        pplStack_40 = (longlong **)&UNK_14438da59;
        uVar7 = func_0x000144fc99c0(0,0);
        pplStack_40 = (longlong **)&UNK_14438da6c;
        puVar8 = (undefined8 *)FUN_144fac3c0(uVar7,0x120,0x10);
      }
      pplStack_40 = (longlong **)&UNK_14438d9f9;
      FUN_145078e80(puVar8,0xffffffff);
      *(undefined4 *)(puVar8 + 10) = 0;
      puVar8[0xb] = 0;
      *(undefined4 *)((longlong)puVar8 + 100) = 0xffffffff;
      *(undefined4 *)(puVar8 + 0x22) = 10;
      *(byte *)((longlong)puVar8 + 0x114) = *(byte *)((longlong)puVar8 + 0x114) & 0xfe;
      *puVar8 = &UNK_1465e9d10;
      *(undefined4 *)(puVar8 + 5) = 9;
      *(undefined4 *)(puVar8 + 0xc) = uVar10;
      pplStack_40 = (longlong **)&UNK_14438da41;
      FUN_145078170(plVar4,4,puVar8);
    }
    return puVar8;
  case 10:
    pplStack_40 = (longlong **)&UNK_1401b7450;
    puVar8 = (undefined8 *)
             FUN_1455cb930(*(undefined4 *)((longlong)plVar4 + 0xa4),plVar4[0x15],uVar10);
    if (puVar8 != (undefined8 *)0x0) {
      return puVar8;
    }
    pplStack_40 = (longlong **)&UNK_14438dde4;
    cVar2 = FUN_140092d40(*(undefined8 *)(*(longlong *)(*plVar4 + 8) + 0x18),10,uVar10);
    if (cVar2 == '\0') {
      puVar8 = (undefined8 *)0x0;
    }
    else {
      pplStack_40 = (longlong **)&UNK_14438ddf4;
      puVar8 = (undefined8 *)FUN_144e96700(0x149aafb20);
      if (puVar8 == (undefined8 *)0x0) {
        pplStack_40 = (longlong **)&UNK_14438de66;
        uVar7 = func_0x000144fc99c0(0,0);
        pplStack_40 = (longlong **)&UNK_14438de79;
        puVar8 = (undefined8 *)FUN_144fac3c0(uVar7,0x120,0x10);
      }
      pplStack_40 = (longlong **)&UNK_14438de09;
      FUN_145078e80(puVar8,0xffffffff);
      *(undefined4 *)(puVar8 + 10) = 0;
      puVar8[0xb] = 0;
      *(undefined4 *)((longlong)puVar8 + 100) = 0xffffffff;
      *(undefined4 *)(puVar8 + 0x22) = 10;
      *(byte *)((longlong)puVar8 + 0x114) = *(byte *)((longlong)puVar8 + 0x114) & 0xfe;
      *puVar8 = &UNK_1465e9810;
      *(undefined4 *)(puVar8 + 5) = 10;
      *(undefined4 *)(puVar8 + 0xc) = uVar10;
      pplStack_40 = (longlong **)&UNK_14438de4e;
      FUN_145078170(plVar4,4,puVar8);
    }
    return puVar8;
  case 0xb:
    pplStack_40 = (longlong **)&UNK_1401b7490;
    puVar8 = (undefined8 *)
             FUN_1401b7510(*(undefined4 *)((longlong)plVar4 + 0xd4),plVar4[0x1b],uVar10);
    if (puVar8 == (undefined8 *)0x0) {
      pplStack_40 = (longlong **)&UNK_1401b74a7;
      uVar7 = FUN_1401b9ce0(*plVar4,*(undefined4 *)((longlong)plVar4 + 0x1c));
      pplStack_40 = (longlong **)&UNK_1401b74b1;
      cVar2 = func_0x000140092d10(uVar7,uVar10);
      if (cVar2 == '\0') {
        puVar8 = (undefined8 *)0x0;
      }
      else {
        pplStack_40 = (longlong **)&UNK_1401b74c1;
        puVar8 = (undefined8 *)FUN_144e96700(0x149aafbb0);
        if (puVar8 == (undefined8 *)0x0) {
          pplStack_40 = (longlong **)&UNK_1401b74f2;
          uVar7 = func_0x000144fc99c0(0,0);
          pplStack_40 = (longlong **)&UNK_1401b7505;
          puVar8 = (undefined8 *)FUN_144fac3c0(uVar7,0x38,0x10);
        }
        pplStack_40 = (longlong **)&UNK_1401b74d3;
        FUN_1401b99b0(puVar8,uVar10);
        pplStack_40 = (longlong **)&UNK_1401b74e0;
        FUN_145078170(plVar4,7,puVar8);
      }
    }
    return puVar8;
  case 0xc:
    pplStack_40 = (longlong **)&UNK_1401b9c60;
    puVar8 = (undefined8 *)
             FUN_1401b9d30(*(undefined4 *)((longlong)plVar4 + 0xd4),plVar4[0x1b],uVar10);
    if (puVar8 == (undefined8 *)0x0) {
      pplStack_40 = (longlong **)&UNK_1401b9c77;
      uVar7 = FUN_1401b9ce0(*plVar4,*(undefined4 *)((longlong)plVar4 + 0x1c));
      pplStack_40 = (longlong **)&UNK_1401b9c81;
      cVar2 = func_0x000140092d10(uVar7,uVar10);
      if (cVar2 == '\0') {
        puVar8 = (undefined8 *)0x0;
      }
      else {
        pplStack_40 = (longlong **)&UNK_1401b9c91;
        puVar8 = (undefined8 *)FUN_144e96700(0x149aafbb0);
        if (puVar8 == (undefined8 *)0x0) {
          pplStack_40 = (longlong **)&UNK_1401b9cc2;
          uVar7 = func_0x000144fc99c0(0,0);
          pplStack_40 = (longlong **)&UNK_1401b9cd5;
          puVar8 = (undefined8 *)FUN_144fac3c0(uVar7,0x38,0x10);
        }
        pplStack_40 = (longlong **)&UNK_1401b9ca3;
        FUN_1401b9da0(puVar8,uVar10);
        pplStack_40 = (longlong **)&UNK_1401b9cb0;
        FUN_145078170(plVar4,7,puVar8);
      }
    }
    return puVar8;
  default:
    goto code_r0x0001401b73bc;
  case 0x1c:
    uStack_20 = &plStack_e8;
    ppplVar5 = (longlong ***)&uStack_20;
    break;
  case 0x1d:
    pplStack_e0 = &plStack_e8;
    ppplVar5 = &pplStack_e0;
    puStack_d8 = &UNK_14438d8d0;
    puStack_d0 = &UNK_1401167b0;
    break;
  case 0x1e:
    pplStack_40 = &plStack_e8;
    ppplVar5 = &pplStack_40;
    puStack_38 = &UNK_14438d880;
    puStack_30 = &UNK_1401167b0;
    break;
  case 0x1f:
    pplStack_80 = &plStack_e8;
    ppplVar5 = &pplStack_80;
    puStack_78 = &UNK_14438d8a0;
    puStack_70 = &UNK_1401167b0;
    break;
  case 0x20:
    pplStack_60 = &plStack_e8;
    ppplVar5 = &pplStack_60;
    puStack_58 = &UNK_14438d890;
    puStack_50 = &UNK_1401167b0;
    break;
  case 0x21:
    pplStack_a0 = &plStack_e8;
    ppplVar5 = &pplStack_a0;
    puStack_98 = &UNK_14438d8b0;
    puStack_90 = &UNK_1401167b0;
    break;
  case 0x22:
    pplStack_c0 = &plStack_e8;
    ppplVar5 = &pplStack_c0;
    puStack_b8 = &UNK_14438d8c0;
    puStack_b0 = &UNK_1401167b0;
  }
  ppplVar5[3] = (longlong **)&SUB_140004380;
  plStack_e8 = plVar4;
  puVar8 = (undefined8 *)FUN_14438abd0(*plVar4,uVar10,ppplVar5);
code_r0x0001401b73bc:
  return puVar8;
}

