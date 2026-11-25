// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401b71d0  size: 602 bytes
// Name:    FUN_1401b71d0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 * FUN_1401b71d0(longlong *param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  longlong ***ppplVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
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
  longlong **pplStack_20;
  
  puVar3 = (undefined8 *)0x0;
  switch(param_2) {
  case 0:
    return puRam0000000149aafbe0;
  case 1:
    if (*(int *)((longlong)param_1 + 0x74) == 0) {
      puStack_30 = &UNK_1401b7880;
      uVar4 = FUN_1401bbf00();
      puStack_30 = &UNK_1401b788d;
      FUN_145078170(param_1,1,uVar4);
    }
    return *(undefined8 **)param_1[0xf];
  case 2:
    if (*(int *)((longlong)param_1 + 0x84) == 0) {
      puStack_30 = &UNK_14438d6b6;
      uVar4 = FUN_14438de90();
      puStack_30 = &UNK_14438d6c3;
      FUN_145078170(param_1,2,uVar4);
    }
    return *(undefined8 **)param_1[0x11];
  case 3:
    pplStack_40 = (longlong **)&UNK_1401b8451;
    puVar3 = (undefined8 *)
             FUN_144e589e0(*(undefined4 *)((longlong)param_1 + 0x94),param_1[0x13],param_3);
    if (puVar3 == (undefined8 *)0x0) {
      pplStack_40 = (longlong **)&UNK_1401b8468;
      cVar1 = FUN_140092cc0(*(undefined8 *)(*(longlong *)(*param_1 + 8) + 0x18),param_3);
      if (cVar1 == '\0') {
        puVar3 = (undefined8 *)0x0;
      }
      else {
        pplStack_40 = (longlong **)&UNK_1401b8478;
        puVar3 = (undefined8 *)FUN_144e96700(0x149aafb80);
        if (puVar3 == (undefined8 *)0x0) {
          pplStack_40 = (longlong **)&UNK_1401b84d1;
          uVar4 = func_0x000144fc99c0(0,0);
          pplStack_40 = (longlong **)&UNK_1401b84e4;
          puVar3 = (undefined8 *)FUN_144fac3c0(uVar4,0x60,0x10);
        }
        pplStack_40 = (longlong **)&UNK_1401b848d;
        FUN_145078e80(puVar3,0xffffffff);
        *puVar3 = &UNK_1465ea210;
        *(undefined4 *)(puVar3 + 10) = param_3;
        *(undefined4 *)((longlong)puVar3 + 0x54) = 0xffffffff;
        *(byte *)(puVar3 + 0xb) = *(byte *)(puVar3 + 0xb) & 0xfe;
        *(undefined4 *)(puVar3 + 5) = 3;
        pplStack_40 = (longlong **)&UNK_1401b84b9;
        FUN_145078170(param_1,3,puVar3);
      }
    }
    return puVar3;
  case 4:
    pplStack_40 = (longlong **)&UNK_14438d700;
    puVar3 = (undefined8 *)
             FUN_14438b9b0(*(undefined4 *)((longlong)param_1 + 0xa4),param_1[0x15],param_3);
    if (puVar3 != (undefined8 *)0x0) {
      return puVar3;
    }
    pplStack_40 = (longlong **)&UNK_14438dd14;
    cVar1 = FUN_140092d40(*(undefined8 *)(*(longlong *)(*param_1 + 8) + 0x18),4,param_3);
    if (cVar1 == '\0') {
      puVar3 = (undefined8 *)0x0;
    }
    else {
      pplStack_40 = (longlong **)&UNK_14438dd24;
      puVar3 = (undefined8 *)FUN_144e96700(0x149aafb20);
      if (puVar3 == (undefined8 *)0x0) {
        pplStack_40 = (longlong **)&UNK_14438dd99;
        uVar4 = func_0x000144fc99c0(0,0);
        pplStack_40 = (longlong **)&UNK_14438ddac;
        puVar3 = (undefined8 *)FUN_144fac3c0(uVar4,0x120,0x10);
      }
      pplStack_40 = (longlong **)&UNK_14438dd39;
      FUN_145078e80(puVar3,0xffffffff);
      *(undefined4 *)(puVar3 + 10) = 0;
      puVar3[0xb] = 0;
      *(undefined4 *)((longlong)puVar3 + 100) = 0xffffffff;
      *(undefined4 *)(puVar3 + 0x22) = 10;
      *(byte *)((longlong)puVar3 + 0x114) = *(byte *)((longlong)puVar3 + 0x114) & 0xfe;
      *puVar3 = &UNK_1465e9950;
      *(undefined4 *)(puVar3 + 5) = 4;
      *(undefined4 *)(puVar3 + 0xc) = param_3;
      pplStack_40 = (longlong **)&UNK_14438dd81;
      FUN_145078170(param_1,4,puVar3);
    }
    return puVar3;
  case 5:
    pplStack_40 = (longlong **)&UNK_14438d850;
    puVar3 = (undefined8 *)
             FUN_1420cc150(*(undefined4 *)((longlong)param_1 + 0xa4),param_1[0x15],param_3);
    if (puVar3 != (undefined8 *)0x0) {
      return puVar3;
    }
    pplStack_40 = (longlong **)&UNK_14438d904;
    cVar1 = FUN_140092d40(*(undefined8 *)(*(longlong *)(*param_1 + 8) + 0x18),5,param_3);
    if (cVar1 == '\0') {
      puVar3 = (undefined8 *)0x0;
    }
    else {
      pplStack_40 = (longlong **)&UNK_14438d914;
      puVar3 = (undefined8 *)FUN_144e96700(0x149aafb20);
      if (puVar3 == (undefined8 *)0x0) {
        pplStack_40 = (longlong **)&UNK_14438d989;
        uVar4 = func_0x000144fc99c0(0,0);
        pplStack_40 = (longlong **)&UNK_14438d99c;
        puVar3 = (undefined8 *)FUN_144fac3c0(uVar4,0x120,0x10);
      }
      pplStack_40 = (longlong **)&UNK_14438d929;
      FUN_145078e80(puVar3,0xffffffff);
      *(undefined4 *)(puVar3 + 10) = 0;
      puVar3[0xb] = 0;
      *(undefined4 *)((longlong)puVar3 + 100) = 0xffffffff;
      *(undefined4 *)(puVar3 + 0x22) = 10;
      *(byte *)((longlong)puVar3 + 0x114) = *(byte *)((longlong)puVar3 + 0x114) & 0xfe;
      *puVar3 = &UNK_1465e9f90;
      *(undefined4 *)(puVar3 + 5) = 5;
      *(undefined4 *)(puVar3 + 0xc) = param_3;
      pplStack_40 = (longlong **)&UNK_14438d971;
      FUN_145078170(param_1,4,puVar3);
    }
    return puVar3;
  case 6:
    pplStack_40 = (longlong **)&UNK_14438d740;
    puVar3 = (undefined8 *)
             FUN_1420cc1c0(*(undefined4 *)((longlong)param_1 + 0xa4),param_1[0x15],param_3);
    if (puVar3 != (undefined8 *)0x0) {
      return puVar3;
    }
    pplStack_40 = (longlong **)&UNK_14438dc44;
    cVar1 = FUN_140092d40(*(undefined8 *)(*(longlong *)(*param_1 + 8) + 0x18),6,param_3);
    if (cVar1 == '\0') {
      puVar3 = (undefined8 *)0x0;
    }
    else {
      pplStack_40 = (longlong **)&UNK_14438dc54;
      puVar3 = (undefined8 *)FUN_144e96700(0x149aafb20);
      if (puVar3 == (undefined8 *)0x0) {
        pplStack_40 = (longlong **)&UNK_14438dcc9;
        uVar4 = func_0x000144fc99c0(0,0);
        pplStack_40 = (longlong **)&UNK_14438dcdc;
        puVar3 = (undefined8 *)FUN_144fac3c0(uVar4,0x120,0x10);
      }
      pplStack_40 = (longlong **)&UNK_14438dc69;
      FUN_145078e80(puVar3,0xffffffff);
      *(undefined4 *)(puVar3 + 10) = 0;
      puVar3[0xb] = 0;
      *(undefined4 *)((longlong)puVar3 + 100) = 0xffffffff;
      *(undefined4 *)(puVar3 + 0x22) = 10;
      *(byte *)((longlong)puVar3 + 0x114) = *(byte *)((longlong)puVar3 + 0x114) & 0xfe;
      *puVar3 = &UNK_1465e9e50;
      *(undefined4 *)(puVar3 + 5) = 6;
      *(undefined4 *)(puVar3 + 0xc) = param_3;
      pplStack_40 = (longlong **)&UNK_14438dcb1;
      FUN_145078170(param_1,4,puVar3);
    }
    return puVar3;
  case 7:
    pplStack_40 = (longlong **)&UNK_14438d780;
    puVar3 = (undefined8 *)
             FUN_1420cc230(*(undefined4 *)((longlong)param_1 + 0xa4),param_1[0x15],param_3);
    if (puVar3 != (undefined8 *)0x0) {
      return puVar3;
    }
    pplStack_40 = (longlong **)&UNK_14438db74;
    cVar1 = FUN_140092d40(*(undefined8 *)(*(longlong *)(*param_1 + 8) + 0x18),7,param_3);
    if (cVar1 == '\0') {
      puVar3 = (undefined8 *)0x0;
    }
    else {
      pplStack_40 = (longlong **)&UNK_14438db84;
      puVar3 = (undefined8 *)FUN_144e96700(0x149aafb20);
      if (puVar3 == (undefined8 *)0x0) {
        pplStack_40 = (longlong **)&UNK_14438dbf9;
        uVar4 = func_0x000144fc99c0(0,0);
        pplStack_40 = (longlong **)&UNK_14438dc0c;
        puVar3 = (undefined8 *)FUN_144fac3c0(uVar4,0x120,0x10);
      }
      pplStack_40 = (longlong **)&UNK_14438db99;
      FUN_145078e80(puVar3,0xffffffff);
      *(undefined4 *)(puVar3 + 10) = 0;
      puVar3[0xb] = 0;
      *(undefined4 *)((longlong)puVar3 + 100) = 0xffffffff;
      *(undefined4 *)(puVar3 + 0x22) = 10;
      *(byte *)((longlong)puVar3 + 0x114) = *(byte *)((longlong)puVar3 + 0x114) & 0xfe;
      *puVar3 = &UNK_1465e9a90;
      *(undefined4 *)(puVar3 + 5) = 7;
      *(undefined4 *)(puVar3 + 0xc) = param_3;
      pplStack_40 = (longlong **)&UNK_14438dbe1;
      FUN_145078170(param_1,4,puVar3);
    }
    return puVar3;
  case 8:
    pplStack_40 = (longlong **)&UNK_14438d7c0;
    puVar3 = (undefined8 *)
             FUN_1420cc0e0(*(undefined4 *)((longlong)param_1 + 0xa4),param_1[0x15],param_3);
    if (puVar3 != (undefined8 *)0x0) {
      return puVar3;
    }
    pplStack_40 = (longlong **)&UNK_14438daa4;
    cVar1 = FUN_140092d40(*(undefined8 *)(*(longlong *)(*param_1 + 8) + 0x18),8,param_3);
    if (cVar1 == '\0') {
      puVar3 = (undefined8 *)0x0;
    }
    else {
      pplStack_40 = (longlong **)&UNK_14438dab4;
      puVar3 = (undefined8 *)FUN_144e96700(0x149aafb20);
      if (puVar3 == (undefined8 *)0x0) {
        pplStack_40 = (longlong **)&UNK_14438db29;
        uVar4 = func_0x000144fc99c0(0,0);
        pplStack_40 = (longlong **)&UNK_14438db3c;
        puVar3 = (undefined8 *)FUN_144fac3c0(uVar4,0x120,0x10);
      }
      pplStack_40 = (longlong **)&UNK_14438dac9;
      FUN_145078e80(puVar3,0xffffffff);
      *(undefined4 *)(puVar3 + 10) = 0;
      puVar3[0xb] = 0;
      *(undefined4 *)((longlong)puVar3 + 100) = 0xffffffff;
      *(undefined4 *)(puVar3 + 0x22) = 10;
      *(byte *)((longlong)puVar3 + 0x114) = *(byte *)((longlong)puVar3 + 0x114) & 0xfe;
      *puVar3 = &UNK_1465e9bd0;
      *(undefined4 *)(puVar3 + 5) = 8;
      *(undefined4 *)(puVar3 + 0xc) = param_3;
      pplStack_40 = (longlong **)&UNK_14438db11;
      FUN_145078170(param_1,4,puVar3);
    }
    return puVar3;
  case 9:
    pplStack_40 = (longlong **)&UNK_14438d806;
    puVar3 = (undefined8 *)
             FUN_1401bcd00(*(undefined4 *)((longlong)param_1 + 0xa4),param_1[0x15],9,param_3);
    if (puVar3 != (undefined8 *)0x0) {
      return puVar3;
    }
    pplStack_40 = (longlong **)&UNK_14438d9d4;
    cVar1 = FUN_140092d40(*(undefined8 *)(*(longlong *)(*param_1 + 8) + 0x18),9,param_3);
    if (cVar1 == '\0') {
      puVar3 = (undefined8 *)0x0;
    }
    else {
      pplStack_40 = (longlong **)&UNK_14438d9e4;
      puVar3 = (undefined8 *)FUN_144e96700(0x149aafb20);
      if (puVar3 == (undefined8 *)0x0) {
        pplStack_40 = (longlong **)&UNK_14438da59;
        uVar4 = func_0x000144fc99c0(0,0);
        pplStack_40 = (longlong **)&UNK_14438da6c;
        puVar3 = (undefined8 *)FUN_144fac3c0(uVar4,0x120,0x10);
      }
      pplStack_40 = (longlong **)&UNK_14438d9f9;
      FUN_145078e80(puVar3,0xffffffff);
      *(undefined4 *)(puVar3 + 10) = 0;
      puVar3[0xb] = 0;
      *(undefined4 *)((longlong)puVar3 + 100) = 0xffffffff;
      *(undefined4 *)(puVar3 + 0x22) = 10;
      *(byte *)((longlong)puVar3 + 0x114) = *(byte *)((longlong)puVar3 + 0x114) & 0xfe;
      *puVar3 = &UNK_1465e9d10;
      *(undefined4 *)(puVar3 + 5) = 9;
      *(undefined4 *)(puVar3 + 0xc) = param_3;
      pplStack_40 = (longlong **)&UNK_14438da41;
      FUN_145078170(param_1,4,puVar3);
    }
    return puVar3;
  case 10:
    pplStack_40 = (longlong **)&UNK_1401b7450;
    puVar3 = (undefined8 *)
             FUN_1455cb930(*(undefined4 *)((longlong)param_1 + 0xa4),param_1[0x15],param_3);
    if (puVar3 != (undefined8 *)0x0) {
      return puVar3;
    }
    pplStack_40 = (longlong **)&UNK_14438dde4;
    cVar1 = FUN_140092d40(*(undefined8 *)(*(longlong *)(*param_1 + 8) + 0x18),10,param_3);
    if (cVar1 == '\0') {
      puVar3 = (undefined8 *)0x0;
    }
    else {
      pplStack_40 = (longlong **)&UNK_14438ddf4;
      puVar3 = (undefined8 *)FUN_144e96700(0x149aafb20);
      if (puVar3 == (undefined8 *)0x0) {
        pplStack_40 = (longlong **)&UNK_14438de66;
        uVar4 = func_0x000144fc99c0(0,0);
        pplStack_40 = (longlong **)&UNK_14438de79;
        puVar3 = (undefined8 *)FUN_144fac3c0(uVar4,0x120,0x10);
      }
      pplStack_40 = (longlong **)&UNK_14438de09;
      FUN_145078e80(puVar3,0xffffffff);
      *(undefined4 *)(puVar3 + 10) = 0;
      puVar3[0xb] = 0;
      *(undefined4 *)((longlong)puVar3 + 100) = 0xffffffff;
      *(undefined4 *)(puVar3 + 0x22) = 10;
      *(byte *)((longlong)puVar3 + 0x114) = *(byte *)((longlong)puVar3 + 0x114) & 0xfe;
      *puVar3 = &UNK_1465e9810;
      *(undefined4 *)(puVar3 + 5) = 10;
      *(undefined4 *)(puVar3 + 0xc) = param_3;
      pplStack_40 = (longlong **)&UNK_14438de4e;
      FUN_145078170(param_1,4,puVar3);
    }
    return puVar3;
  case 0xb:
    pplStack_40 = (longlong **)&UNK_1401b7490;
    puVar3 = (undefined8 *)
             FUN_1401b7510(*(undefined4 *)((longlong)param_1 + 0xd4),param_1[0x1b],param_3);
    if (puVar3 == (undefined8 *)0x0) {
      pplStack_40 = (longlong **)&UNK_1401b74a7;
      uVar4 = FUN_1401b9ce0(*param_1,*(undefined4 *)((longlong)param_1 + 0x1c));
      pplStack_40 = (longlong **)&UNK_1401b74b1;
      cVar1 = func_0x000140092d10(uVar4,param_3);
      if (cVar1 == '\0') {
        puVar3 = (undefined8 *)0x0;
      }
      else {
        pplStack_40 = (longlong **)&UNK_1401b74c1;
        puVar3 = (undefined8 *)FUN_144e96700(0x149aafbb0);
        if (puVar3 == (undefined8 *)0x0) {
          pplStack_40 = (longlong **)&UNK_1401b74f2;
          uVar4 = func_0x000144fc99c0(0,0);
          pplStack_40 = (longlong **)&UNK_1401b7505;
          puVar3 = (undefined8 *)FUN_144fac3c0(uVar4,0x38,0x10);
        }
        pplStack_40 = (longlong **)&UNK_1401b74d3;
        FUN_1401b99b0(puVar3,param_3);
        pplStack_40 = (longlong **)&UNK_1401b74e0;
        FUN_145078170(param_1,7,puVar3);
      }
    }
    return puVar3;
  case 0xc:
    pplStack_40 = (longlong **)&UNK_1401b9c60;
    puVar3 = (undefined8 *)
             FUN_1401b9d30(*(undefined4 *)((longlong)param_1 + 0xd4),param_1[0x1b],param_3);
    if (puVar3 == (undefined8 *)0x0) {
      pplStack_40 = (longlong **)&UNK_1401b9c77;
      uVar4 = FUN_1401b9ce0(*param_1,*(undefined4 *)((longlong)param_1 + 0x1c));
      pplStack_40 = (longlong **)&UNK_1401b9c81;
      cVar1 = func_0x000140092d10(uVar4,param_3);
      if (cVar1 == '\0') {
        puVar3 = (undefined8 *)0x0;
      }
      else {
        pplStack_40 = (longlong **)&UNK_1401b9c91;
        puVar3 = (undefined8 *)FUN_144e96700(0x149aafbb0);
        if (puVar3 == (undefined8 *)0x0) {
          pplStack_40 = (longlong **)&UNK_1401b9cc2;
          uVar4 = func_0x000144fc99c0(0,0);
          pplStack_40 = (longlong **)&UNK_1401b9cd5;
          puVar3 = (undefined8 *)FUN_144fac3c0(uVar4,0x38,0x10);
        }
        pplStack_40 = (longlong **)&UNK_1401b9ca3;
        FUN_1401b9da0(puVar3,param_3);
        pplStack_40 = (longlong **)&UNK_1401b9cb0;
        FUN_145078170(param_1,7,puVar3);
      }
    }
    return puVar3;
  default:
    goto code_r0x0001401b73bc;
  case 0x1c:
    pplStack_20 = &plStack_e8;
    ppplVar2 = &pplStack_20;
    break;
  case 0x1d:
    pplStack_e0 = &plStack_e8;
    ppplVar2 = &pplStack_e0;
    puStack_d8 = &UNK_14438d8d0;
    puStack_d0 = &UNK_1401167b0;
    break;
  case 0x1e:
    pplStack_40 = &plStack_e8;
    ppplVar2 = &pplStack_40;
    puStack_38 = &UNK_14438d880;
    puStack_30 = &UNK_1401167b0;
    break;
  case 0x1f:
    pplStack_80 = &plStack_e8;
    ppplVar2 = &pplStack_80;
    puStack_78 = &UNK_14438d8a0;
    puStack_70 = &UNK_1401167b0;
    break;
  case 0x20:
    pplStack_60 = &plStack_e8;
    ppplVar2 = &pplStack_60;
    puStack_58 = &UNK_14438d890;
    puStack_50 = &UNK_1401167b0;
    break;
  case 0x21:
    pplStack_a0 = &plStack_e8;
    ppplVar2 = &pplStack_a0;
    puStack_98 = &UNK_14438d8b0;
    puStack_90 = &UNK_1401167b0;
    break;
  case 0x22:
    pplStack_c0 = &plStack_e8;
    ppplVar2 = &pplStack_c0;
    puStack_b8 = &UNK_14438d8c0;
    puStack_b0 = &UNK_1401167b0;
  }
  ppplVar2[3] = (longlong **)&SUB_140004380;
  plStack_e8 = param_1;
  puVar3 = (undefined8 *)FUN_14438abd0(*param_1,param_3,ppplVar2);
code_r0x0001401b73bc:
  return puVar3;
}

