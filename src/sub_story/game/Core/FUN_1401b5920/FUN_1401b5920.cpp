// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401b5920  size: 99 bytes
// Name:    FUN_1401b5920
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 * FUN_1401b5920(longlong *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  char cVar2;
  longlong ***ppplVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
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
  
  iVar1 = *(int *)((longlong)param_1 + 0x1c);
  if (iVar1 != 0) {
    if (1 < iVar1 - 2U) {
      if (iVar1 == 1) {
        puStack_50 = (undefined *)0x1401b5974;
        func_0x0001403df4b0((longlong)&uStack_20 + 4,param_3);
        puStack_50 = (undefined *)0x1401b5981;
        puVar6 = (undefined8 *)func_0x00014438e150(param_1,param_2,uStack_20._4_4_);
      }
      else {
        puVar6 = (undefined8 *)0x0;
      }
      return puVar6;
    }
    if (param_2 == 0x15) {
      pplStack_40 = (longlong **)&UNK_1401b77de;
      lVar4 = FUN_1450b1cd0(*(undefined8 *)(*(longlong *)(*param_1 + 8) + 0x40));
      if (lVar4 != 0) {
        pplStack_40 = (longlong **)&UNK_14438e922;
        puVar6 = (undefined8 *)FUN_145f0a370();
        pplStack_40 = (longlong **)&UNK_14438e935;
        FUN_1401b76f0(puVar6,0x15,lVar4);
        *puVar6 = &UNK_1465ea470;
        pplStack_40 = (longlong **)&UNK_14438e94c;
        FUN_145078170(param_1,6,puVar6);
        return puVar6;
      }
    }
    else {
      if (param_2 == 0) {
        return puRam0000000149aafbe0;
      }
      if (param_2 != 1) {
        if (param_2 - 0x16U < 6) {
          pplStack_40 = (longlong **)&UNK_1401b783a;
          lVar4 = FUN_1450b1cd0(*(undefined8 *)(*(longlong *)(*param_1 + 8) + 0x40));
          if (lVar4 != 0) {
            puStack_50 = &UNK_14438e8d6;
            puVar6 = (undefined8 *)FUN_145f0a370();
            puStack_50 = &UNK_14438e8e6;
            FUN_1401b76f0(puVar6,param_2,lVar4);
            *puVar6 = &UNK_1465ea340;
            puStack_50 = &UNK_14438e8fd;
            FUN_145078170(param_1,6,puVar6);
            return puVar6;
          }
        }
        return (undefined8 *)0x0;
      }
    }
FUN_1401b7860:
    if (*(int *)((longlong)param_1 + 0x74) == 0) {
      puStack_30 = &UNK_1401b7880;
      uVar5 = FUN_1401bbf00();
      puStack_30 = &UNK_1401b788d;
      FUN_145078170(param_1,1,uVar5);
    }
    return *(undefined8 **)param_1[0xf];
  }
  puVar6 = (undefined8 *)0x0;
  switch(param_2) {
  case 0:
    return puRam0000000149aafbe0;
  case 1:
    goto FUN_1401b7860;
  case 2:
    if (*(int *)((longlong)param_1 + 0x84) == 0) {
      puStack_30 = &UNK_14438d6b6;
      uVar5 = FUN_14438de90();
      puStack_30 = &UNK_14438d6c3;
      FUN_145078170(param_1,2,uVar5);
    }
    return *(undefined8 **)param_1[0x11];
  case 3:
    pplStack_40 = (longlong **)&UNK_1401b8451;
    puVar6 = (undefined8 *)
             FUN_144e589e0(*(undefined4 *)((longlong)param_1 + 0x94),param_1[0x13],param_3);
    if (puVar6 == (undefined8 *)0x0) {
      pplStack_40 = (longlong **)&UNK_1401b8468;
      cVar2 = FUN_140092cc0(*(undefined8 *)(*(longlong *)(*param_1 + 8) + 0x18),param_3);
      if (cVar2 == '\0') {
        puVar6 = (undefined8 *)0x0;
      }
      else {
        pplStack_40 = (longlong **)&UNK_1401b8478;
        puVar6 = (undefined8 *)FUN_144e96700(0x149aafb80);
        if (puVar6 == (undefined8 *)0x0) {
          pplStack_40 = (longlong **)&UNK_1401b84d1;
          uVar5 = func_0x000144fc99c0(0,0);
          pplStack_40 = (longlong **)&UNK_1401b84e4;
          puVar6 = (undefined8 *)FUN_144fac3c0(uVar5,0x60,0x10);
        }
        pplStack_40 = (longlong **)&UNK_1401b848d;
        FUN_145078e80(puVar6,0xffffffff);
        *puVar6 = &UNK_1465ea210;
        *(undefined4 *)(puVar6 + 10) = param_3;
        *(undefined4 *)((longlong)puVar6 + 0x54) = 0xffffffff;
        *(byte *)(puVar6 + 0xb) = *(byte *)(puVar6 + 0xb) & 0xfe;
        *(undefined4 *)(puVar6 + 5) = 3;
        pplStack_40 = (longlong **)&UNK_1401b84b9;
        FUN_145078170(param_1,3,puVar6);
      }
    }
    return puVar6;
  case 4:
    pplStack_40 = (longlong **)&UNK_14438d700;
    puVar6 = (undefined8 *)
             FUN_14438b9b0(*(undefined4 *)((longlong)param_1 + 0xa4),param_1[0x15],param_3);
    if (puVar6 != (undefined8 *)0x0) {
      return puVar6;
    }
    pplStack_40 = (longlong **)&UNK_14438dd14;
    cVar2 = FUN_140092d40(*(undefined8 *)(*(longlong *)(*param_1 + 8) + 0x18),4,param_3);
    if (cVar2 == '\0') {
      puVar6 = (undefined8 *)0x0;
    }
    else {
      pplStack_40 = (longlong **)&UNK_14438dd24;
      puVar6 = (undefined8 *)FUN_144e96700(0x149aafb20);
      if (puVar6 == (undefined8 *)0x0) {
        pplStack_40 = (longlong **)&UNK_14438dd99;
        uVar5 = func_0x000144fc99c0(0,0);
        pplStack_40 = (longlong **)&UNK_14438ddac;
        puVar6 = (undefined8 *)FUN_144fac3c0(uVar5,0x120,0x10);
      }
      pplStack_40 = (longlong **)&UNK_14438dd39;
      FUN_145078e80(puVar6,0xffffffff);
      *(undefined4 *)(puVar6 + 10) = 0;
      puVar6[0xb] = 0;
      *(undefined4 *)((longlong)puVar6 + 100) = 0xffffffff;
      *(undefined4 *)(puVar6 + 0x22) = 10;
      *(byte *)((longlong)puVar6 + 0x114) = *(byte *)((longlong)puVar6 + 0x114) & 0xfe;
      *puVar6 = &UNK_1465e9950;
      *(undefined4 *)(puVar6 + 5) = 4;
      *(undefined4 *)(puVar6 + 0xc) = param_3;
      pplStack_40 = (longlong **)&UNK_14438dd81;
      FUN_145078170(param_1,4,puVar6);
    }
    return puVar6;
  case 5:
    pplStack_40 = (longlong **)&UNK_14438d850;
    puVar6 = (undefined8 *)
             FUN_1420cc150(*(undefined4 *)((longlong)param_1 + 0xa4),param_1[0x15],param_3);
    if (puVar6 != (undefined8 *)0x0) {
      return puVar6;
    }
    pplStack_40 = (longlong **)&UNK_14438d904;
    cVar2 = FUN_140092d40(*(undefined8 *)(*(longlong *)(*param_1 + 8) + 0x18),5,param_3);
    if (cVar2 == '\0') {
      puVar6 = (undefined8 *)0x0;
    }
    else {
      pplStack_40 = (longlong **)&UNK_14438d914;
      puVar6 = (undefined8 *)FUN_144e96700(0x149aafb20);
      if (puVar6 == (undefined8 *)0x0) {
        pplStack_40 = (longlong **)&UNK_14438d989;
        uVar5 = func_0x000144fc99c0(0,0);
        pplStack_40 = (longlong **)&UNK_14438d99c;
        puVar6 = (undefined8 *)FUN_144fac3c0(uVar5,0x120,0x10);
      }
      pplStack_40 = (longlong **)&UNK_14438d929;
      FUN_145078e80(puVar6,0xffffffff);
      *(undefined4 *)(puVar6 + 10) = 0;
      puVar6[0xb] = 0;
      *(undefined4 *)((longlong)puVar6 + 100) = 0xffffffff;
      *(undefined4 *)(puVar6 + 0x22) = 10;
      *(byte *)((longlong)puVar6 + 0x114) = *(byte *)((longlong)puVar6 + 0x114) & 0xfe;
      *puVar6 = &UNK_1465e9f90;
      *(undefined4 *)(puVar6 + 5) = 5;
      *(undefined4 *)(puVar6 + 0xc) = param_3;
      pplStack_40 = (longlong **)&UNK_14438d971;
      FUN_145078170(param_1,4,puVar6);
    }
    return puVar6;
  case 6:
    pplStack_40 = (longlong **)&UNK_14438d740;
    puVar6 = (undefined8 *)
             FUN_1420cc1c0(*(undefined4 *)((longlong)param_1 + 0xa4),param_1[0x15],param_3);
    if (puVar6 != (undefined8 *)0x0) {
      return puVar6;
    }
    pplStack_40 = (longlong **)&UNK_14438dc44;
    cVar2 = FUN_140092d40(*(undefined8 *)(*(longlong *)(*param_1 + 8) + 0x18),6,param_3);
    if (cVar2 == '\0') {
      puVar6 = (undefined8 *)0x0;
    }
    else {
      pplStack_40 = (longlong **)&UNK_14438dc54;
      puVar6 = (undefined8 *)FUN_144e96700(0x149aafb20);
      if (puVar6 == (undefined8 *)0x0) {
        pplStack_40 = (longlong **)&UNK_14438dcc9;
        uVar5 = func_0x000144fc99c0(0,0);
        pplStack_40 = (longlong **)&UNK_14438dcdc;
        puVar6 = (undefined8 *)FUN_144fac3c0(uVar5,0x120,0x10);
      }
      pplStack_40 = (longlong **)&UNK_14438dc69;
      FUN_145078e80(puVar6,0xffffffff);
      *(undefined4 *)(puVar6 + 10) = 0;
      puVar6[0xb] = 0;
      *(undefined4 *)((longlong)puVar6 + 100) = 0xffffffff;
      *(undefined4 *)(puVar6 + 0x22) = 10;
      *(byte *)((longlong)puVar6 + 0x114) = *(byte *)((longlong)puVar6 + 0x114) & 0xfe;
      *puVar6 = &UNK_1465e9e50;
      *(undefined4 *)(puVar6 + 5) = 6;
      *(undefined4 *)(puVar6 + 0xc) = param_3;
      pplStack_40 = (longlong **)&UNK_14438dcb1;
      FUN_145078170(param_1,4,puVar6);
    }
    return puVar6;
  case 7:
    pplStack_40 = (longlong **)&UNK_14438d780;
    puVar6 = (undefined8 *)
             FUN_1420cc230(*(undefined4 *)((longlong)param_1 + 0xa4),param_1[0x15],param_3);
    if (puVar6 != (undefined8 *)0x0) {
      return puVar6;
    }
    pplStack_40 = (longlong **)&UNK_14438db74;
    cVar2 = FUN_140092d40(*(undefined8 *)(*(longlong *)(*param_1 + 8) + 0x18),7,param_3);
    if (cVar2 == '\0') {
      puVar6 = (undefined8 *)0x0;
    }
    else {
      pplStack_40 = (longlong **)&UNK_14438db84;
      puVar6 = (undefined8 *)FUN_144e96700(0x149aafb20);
      if (puVar6 == (undefined8 *)0x0) {
        pplStack_40 = (longlong **)&UNK_14438dbf9;
        uVar5 = func_0x000144fc99c0(0,0);
        pplStack_40 = (longlong **)&UNK_14438dc0c;
        puVar6 = (undefined8 *)FUN_144fac3c0(uVar5,0x120,0x10);
      }
      pplStack_40 = (longlong **)&UNK_14438db99;
      FUN_145078e80(puVar6,0xffffffff);
      *(undefined4 *)(puVar6 + 10) = 0;
      puVar6[0xb] = 0;
      *(undefined4 *)((longlong)puVar6 + 100) = 0xffffffff;
      *(undefined4 *)(puVar6 + 0x22) = 10;
      *(byte *)((longlong)puVar6 + 0x114) = *(byte *)((longlong)puVar6 + 0x114) & 0xfe;
      *puVar6 = &UNK_1465e9a90;
      *(undefined4 *)(puVar6 + 5) = 7;
      *(undefined4 *)(puVar6 + 0xc) = param_3;
      pplStack_40 = (longlong **)&UNK_14438dbe1;
      FUN_145078170(param_1,4,puVar6);
    }
    return puVar6;
  case 8:
    pplStack_40 = (longlong **)&UNK_14438d7c0;
    puVar6 = (undefined8 *)
             FUN_1420cc0e0(*(undefined4 *)((longlong)param_1 + 0xa4),param_1[0x15],param_3);
    if (puVar6 != (undefined8 *)0x0) {
      return puVar6;
    }
    pplStack_40 = (longlong **)&UNK_14438daa4;
    cVar2 = FUN_140092d40(*(undefined8 *)(*(longlong *)(*param_1 + 8) + 0x18),8,param_3);
    if (cVar2 == '\0') {
      puVar6 = (undefined8 *)0x0;
    }
    else {
      pplStack_40 = (longlong **)&UNK_14438dab4;
      puVar6 = (undefined8 *)FUN_144e96700(0x149aafb20);
      if (puVar6 == (undefined8 *)0x0) {
        pplStack_40 = (longlong **)&UNK_14438db29;
        uVar5 = func_0x000144fc99c0(0,0);
        pplStack_40 = (longlong **)&UNK_14438db3c;
        puVar6 = (undefined8 *)FUN_144fac3c0(uVar5,0x120,0x10);
      }
      pplStack_40 = (longlong **)&UNK_14438dac9;
      FUN_145078e80(puVar6,0xffffffff);
      *(undefined4 *)(puVar6 + 10) = 0;
      puVar6[0xb] = 0;
      *(undefined4 *)((longlong)puVar6 + 100) = 0xffffffff;
      *(undefined4 *)(puVar6 + 0x22) = 10;
      *(byte *)((longlong)puVar6 + 0x114) = *(byte *)((longlong)puVar6 + 0x114) & 0xfe;
      *puVar6 = &UNK_1465e9bd0;
      *(undefined4 *)(puVar6 + 5) = 8;
      *(undefined4 *)(puVar6 + 0xc) = param_3;
      pplStack_40 = (longlong **)&UNK_14438db11;
      FUN_145078170(param_1,4,puVar6);
    }
    return puVar6;
  case 9:
    pplStack_40 = (longlong **)&UNK_14438d806;
    puVar6 = (undefined8 *)
             FUN_1401bcd00(*(undefined4 *)((longlong)param_1 + 0xa4),param_1[0x15],9,param_3);
    if (puVar6 != (undefined8 *)0x0) {
      return puVar6;
    }
    pplStack_40 = (longlong **)&UNK_14438d9d4;
    cVar2 = FUN_140092d40(*(undefined8 *)(*(longlong *)(*param_1 + 8) + 0x18),9,param_3);
    if (cVar2 == '\0') {
      puVar6 = (undefined8 *)0x0;
    }
    else {
      pplStack_40 = (longlong **)&UNK_14438d9e4;
      puVar6 = (undefined8 *)FUN_144e96700(0x149aafb20);
      if (puVar6 == (undefined8 *)0x0) {
        pplStack_40 = (longlong **)&UNK_14438da59;
        uVar5 = func_0x000144fc99c0(0,0);
        pplStack_40 = (longlong **)&UNK_14438da6c;
        puVar6 = (undefined8 *)FUN_144fac3c0(uVar5,0x120,0x10);
      }
      pplStack_40 = (longlong **)&UNK_14438d9f9;
      FUN_145078e80(puVar6,0xffffffff);
      *(undefined4 *)(puVar6 + 10) = 0;
      puVar6[0xb] = 0;
      *(undefined4 *)((longlong)puVar6 + 100) = 0xffffffff;
      *(undefined4 *)(puVar6 + 0x22) = 10;
      *(byte *)((longlong)puVar6 + 0x114) = *(byte *)((longlong)puVar6 + 0x114) & 0xfe;
      *puVar6 = &UNK_1465e9d10;
      *(undefined4 *)(puVar6 + 5) = 9;
      *(undefined4 *)(puVar6 + 0xc) = param_3;
      pplStack_40 = (longlong **)&UNK_14438da41;
      FUN_145078170(param_1,4,puVar6);
    }
    return puVar6;
  case 10:
    pplStack_40 = (longlong **)&UNK_1401b7450;
    puVar6 = (undefined8 *)
             FUN_1455cb930(*(undefined4 *)((longlong)param_1 + 0xa4),param_1[0x15],param_3);
    if (puVar6 != (undefined8 *)0x0) {
      return puVar6;
    }
    pplStack_40 = (longlong **)&UNK_14438dde4;
    cVar2 = FUN_140092d40(*(undefined8 *)(*(longlong *)(*param_1 + 8) + 0x18),10,param_3);
    if (cVar2 == '\0') {
      puVar6 = (undefined8 *)0x0;
    }
    else {
      pplStack_40 = (longlong **)&UNK_14438ddf4;
      puVar6 = (undefined8 *)FUN_144e96700(0x149aafb20);
      if (puVar6 == (undefined8 *)0x0) {
        pplStack_40 = (longlong **)&UNK_14438de66;
        uVar5 = func_0x000144fc99c0(0,0);
        pplStack_40 = (longlong **)&UNK_14438de79;
        puVar6 = (undefined8 *)FUN_144fac3c0(uVar5,0x120,0x10);
      }
      pplStack_40 = (longlong **)&UNK_14438de09;
      FUN_145078e80(puVar6,0xffffffff);
      *(undefined4 *)(puVar6 + 10) = 0;
      puVar6[0xb] = 0;
      *(undefined4 *)((longlong)puVar6 + 100) = 0xffffffff;
      *(undefined4 *)(puVar6 + 0x22) = 10;
      *(byte *)((longlong)puVar6 + 0x114) = *(byte *)((longlong)puVar6 + 0x114) & 0xfe;
      *puVar6 = &UNK_1465e9810;
      *(undefined4 *)(puVar6 + 5) = 10;
      *(undefined4 *)(puVar6 + 0xc) = param_3;
      pplStack_40 = (longlong **)&UNK_14438de4e;
      FUN_145078170(param_1,4,puVar6);
    }
    return puVar6;
  case 0xb:
    pplStack_40 = (longlong **)&UNK_1401b7490;
    puVar6 = (undefined8 *)
             FUN_1401b7510(*(undefined4 *)((longlong)param_1 + 0xd4),param_1[0x1b],param_3);
    if (puVar6 == (undefined8 *)0x0) {
      pplStack_40 = (longlong **)&UNK_1401b74a7;
      uVar5 = FUN_1401b9ce0(*param_1,*(undefined4 *)((longlong)param_1 + 0x1c));
      pplStack_40 = (longlong **)&UNK_1401b74b1;
      cVar2 = func_0x000140092d10(uVar5,param_3);
      if (cVar2 == '\0') {
        puVar6 = (undefined8 *)0x0;
      }
      else {
        pplStack_40 = (longlong **)&UNK_1401b74c1;
        puVar6 = (undefined8 *)FUN_144e96700(0x149aafbb0);
        if (puVar6 == (undefined8 *)0x0) {
          pplStack_40 = (longlong **)&UNK_1401b74f2;
          uVar5 = func_0x000144fc99c0(0,0);
          pplStack_40 = (longlong **)&UNK_1401b7505;
          puVar6 = (undefined8 *)FUN_144fac3c0(uVar5,0x38,0x10);
        }
        pplStack_40 = (longlong **)&UNK_1401b74d3;
        FUN_1401b99b0(puVar6,param_3);
        pplStack_40 = (longlong **)&UNK_1401b74e0;
        FUN_145078170(param_1,7,puVar6);
      }
    }
    return puVar6;
  case 0xc:
    pplStack_40 = (longlong **)&UNK_1401b9c60;
    puVar6 = (undefined8 *)
             FUN_1401b9d30(*(undefined4 *)((longlong)param_1 + 0xd4),param_1[0x1b],param_3);
    if (puVar6 == (undefined8 *)0x0) {
      pplStack_40 = (longlong **)&UNK_1401b9c77;
      uVar5 = FUN_1401b9ce0(*param_1,*(undefined4 *)((longlong)param_1 + 0x1c));
      pplStack_40 = (longlong **)&UNK_1401b9c81;
      cVar2 = func_0x000140092d10(uVar5,param_3);
      if (cVar2 == '\0') {
        puVar6 = (undefined8 *)0x0;
      }
      else {
        pplStack_40 = (longlong **)&UNK_1401b9c91;
        puVar6 = (undefined8 *)FUN_144e96700(0x149aafbb0);
        if (puVar6 == (undefined8 *)0x0) {
          pplStack_40 = (longlong **)&UNK_1401b9cc2;
          uVar5 = func_0x000144fc99c0(0,0);
          pplStack_40 = (longlong **)&UNK_1401b9cd5;
          puVar6 = (undefined8 *)FUN_144fac3c0(uVar5,0x38,0x10);
        }
        pplStack_40 = (longlong **)&UNK_1401b9ca3;
        FUN_1401b9da0(puVar6,param_3);
        pplStack_40 = (longlong **)&UNK_1401b9cb0;
        FUN_145078170(param_1,7,puVar6);
      }
    }
    return puVar6;
  default:
    goto code_r0x0001401b73bc;
  case 0x1c:
    uStack_20 = &plStack_e8;
    ppplVar3 = (longlong ***)&uStack_20;
    break;
  case 0x1d:
    pplStack_e0 = &plStack_e8;
    ppplVar3 = &pplStack_e0;
    puStack_d8 = &UNK_14438d8d0;
    puStack_d0 = &UNK_1401167b0;
    break;
  case 0x1e:
    pplStack_40 = &plStack_e8;
    ppplVar3 = &pplStack_40;
    puStack_38 = &UNK_14438d880;
    puStack_30 = &UNK_1401167b0;
    break;
  case 0x1f:
    pplStack_80 = &plStack_e8;
    ppplVar3 = &pplStack_80;
    puStack_78 = &UNK_14438d8a0;
    puStack_70 = &UNK_1401167b0;
    break;
  case 0x20:
    pplStack_60 = &plStack_e8;
    ppplVar3 = &pplStack_60;
    puStack_58 = &UNK_14438d890;
    puStack_50 = &UNK_1401167b0;
    break;
  case 0x21:
    pplStack_a0 = &plStack_e8;
    ppplVar3 = &pplStack_a0;
    puStack_98 = &UNK_14438d8b0;
    puStack_90 = &UNK_1401167b0;
    break;
  case 0x22:
    pplStack_c0 = &plStack_e8;
    ppplVar3 = &pplStack_c0;
    puStack_b8 = &UNK_14438d8c0;
    puStack_b0 = &UNK_1401167b0;
  }
  ppplVar3[3] = (longlong **)&SUB_140004380;
  plStack_e8 = param_1;
  puVar6 = (undefined8 *)FUN_14438abd0(*param_1,param_3,ppplVar3);
code_r0x0001401b73bc:
  return puVar6;
}

