// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14390b4a0  size: 5187 bytes
// Name:    GlassInfo::Init
// Subsystem: core
// Class:   GlassInfo
//
// Evidence:
//   GTAVSRC: GlassInfo::Init  (rage/suite/src/breakableglass/glassmanager.cpp)
//   literal: glass_pv_env
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1452fc820, FUN_145d98e20, FUN_141ca7840, FUN_145ab57e0, FUN_145b209b0, FUN_145d98f20, FUN_145c0c480, FUN_145b93cd0, FUN_1438fa080, FUN_140715f40, FUN_1426989e0, FUN_145a78a50, FUN_142064d20, FUN_141db2db0, FUN_145cae840, FUN_14574f060, FUN_145b21f60, FUN_145d98ea0, FUN_14444d390, FUN_145b678d0, FUN_14582f250, FUN_141adcbd0, FUN_145a1dbf0, FUN_145963a70, FUN_140643cd0, FUN_145babfd0, FUN_1455db934, FUN_140ad5cf0, FUN_1459b26c0, FUN_145d98b90, FUN_1452fcc00, FUN_1455db8cc, FUN_145d97890, FUN_14390c900, FUN_145d98c10
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"
#include "gta6decomp/GlassInfo.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void GlassInfo__Init(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  longlong unaff_GS_OFFSET;
  undefined8 uStack_3b8;
  undefined5 uStack_3b0;
  undefined2 uStack_3ab;
  undefined4 uStack_3a9;
  char cStack_3a5;
  byte abStack_3a4 [2];
  undefined2 uStack_3a2;
  undefined *puStack_3a0;
  undefined1 auStack_391 [4];
  undefined1 auStack_38d [5];
  ulonglong uStack_388;
  uint auStack_380 [2];
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined *puStack_368;
  undefined8 uStack_360;
  int iStack_358;
  int iStack_354;
  int iStack_350;
  undefined4 uStack_34c;
  undefined8 uStack_348;
  int iStack_340;
  undefined4 uStack_33c;
  undefined4 uStack_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined *puStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined *puStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined *puStack_2d0;
  undefined1 auStack_2c8 [8];
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined *puStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined *puStack_290;
  undefined8 uStack_288;
  code *pcStack_280;
  undefined8 uStack_278;
  code *pcStack_270;
  undefined8 uStack_268;
  code *pcStack_260;
  int iStack_258;
  int iStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  code *pcStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined *puStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined *puStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined *puStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined *puStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined *puStack_170;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  code *pcStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  func_0x000144dd57c0(&uStack_360,0,&UNK_14390c8f0,0,0);
  uStack_348 = &UNK_1429edad0;
  uRam000000014a95de40 = CONCAT44(iStack_354,iStack_358);
  uRam000000014a95de48 = CONCAT44(uStack_34c,iStack_350);
  _DAT_14a95de38 = uStack_360;
  puRam000000014a95de50 = &UNK_1429edad0;
  FUN_14390c900();
  uVar2 = func_0x0001450cef40(*(undefined8 *)(_DAT_14abbeef0 + 8),
                              *(undefined4 *)(_DAT_14abbeef0 + 0x10),0x74ecfdd6,1);
  FUN_145b209b0(uVar2);
  uVar4 = *(uint *)(_DAT_1499ab190 + 0xc);
  iVar6 = *(int *)(_DAT_1499aad98 + 0xc);
  uVar3 = func_0x0001450cef40(*(undefined8 *)(_DAT_14abbeef0 + 8),
                              *(undefined4 *)(_DAT_14abbeef0 + 0x10),0x82f5f4b0,1);
  iVar12 = iVar6 + uVar4;
  uStack_388 = (ulonglong)uVar4;
  FUN_145d98b90();
  FUN_145d98c10();
  iVar1 = *(int *)(_DAT_1499aaf20 + 0xc);
  FUN_145d98e20();
  uVar9 = *(undefined8 *)(_DAT_14abbeef0 + 8);
  uVar2 = *(undefined4 *)(_DAT_14abbeef0 + 0x10);
  uVar4 = func_0x0001450cef40(uVar9,uVar2,0x6d91825,1);
  if (_DAT_1490905d8 < uVar4) {
    FUN_145d98ea0(uVar4);
    uVar9 = *(undefined8 *)(_DAT_14abbeef0 + 8);
    uVar2 = *(undefined4 *)(_DAT_14abbeef0 + 0x10);
  }
  iVar11 = iVar12 / 2 + 0x140;
  iVar5 = func_0x0001450cef40(uVar9,uVar2,0x1b3b74d5,1);
  if (*(int *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 4
              ) < _DAT_149090738) {
    FUN_1455db8cc(&DAT_149090738);
    if (_DAT_149090738 == -1) {
      _DAT_149090734 = iVar11 * 3;
      FUN_1455db934(&DAT_149090738);
    }
  }
  if (*(int *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 4
              ) < _DAT_149090740) {
    FUN_1455db8cc(&DAT_149090740);
    if (_DAT_149090740 == -1) {
      _DAT_14909073c = _DAT_149090734 * 2;
      FUN_1455db934(&DAT_149090740);
    }
  }
  iVar5 = iVar5 + iVar6 * 10;
  if (*(int *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 4
              ) < _DAT_149090748) {
    FUN_1455db8cc(&DAT_149090748);
    if (_DAT_149090748 == -1) {
      _DAT_149090744 =
           *(int *)(_DAT_1492ab488 + 0xc) + 0x46 + *(int *)(_DAT_149e40a50 + 0xc) + iVar5;
      FUN_1455db934(&DAT_149090748);
    }
  }
  iVar10 = 0x7ffe;
  if (_DAT_149090744 < 0x7ffe) {
    iVar10 = _DAT_149090744;
  }
  _DAT_149090744 = iVar10;
  lVar7 = func_0x000144f97130(0x141b8);
  FUN_145c0c480(lVar7);
  iStack_258 = _DAT_149090744;
  uVar9 = *(undefined8 *)(_DAT_14abbeef0 + 8);
  uVar2 = *(undefined4 *)(_DAT_14abbeef0 + 0x10);
  _DAT_14abbf348 = lVar7;
  iStack_254 = iVar11;
  uStack_250 = func_0x0001450cef40(uVar9,uVar2,0xb89c741e,1);
  uStack_24c = func_0x0001450cef40(uVar9,uVar2,0x793345fc,1);
  FUN_141db2db0(lVar7,&iStack_258);
  _DAT_1490905b8 = lVar7;
  func_0x000144dd57c0(&uStack_360,0,FUN_140646520,0,0);
  uStack_348 = &UNK_140644000;
  uRam0000000149e4ec90 = CONCAT44(iStack_354,iStack_358);
  uRam0000000149e4ec98 = CONCAT44(uStack_34c,iStack_350);
  _DAT_149e4ec88 = uStack_360;
  puRam0000000149e4eca0 = &UNK_140644000;
  func_0x000144dd57c0(&uStack_360,0,FUN_1438e2c60,0,0);
  uStack_348 = &UNK_141b33280;
  uRam0000000149e4ecb0 = CONCAT44(iStack_354,iStack_358);
  uRam0000000149e4ecb8 = CONCAT44(uStack_34c,iStack_350);
  _DAT_149e4eca8 = uStack_360;
  puRam0000000149e4ecc0 = &UNK_141b33280;
  func_0x00014444e0b0();
  uStack_360 = 0x20000000200000;
  iStack_358 = _DAT_149090734;
  iStack_354 = (int)((float)iVar12 * _DAT_146159cc0);
  iStack_350 = _DAT_14909073c;
  uStack_348 = (undefined *)CONCAT44(uStack_348._4_4_,uVar3);
  uVar9 = *(undefined8 *)(_DAT_14abbeef0 + 8);
  uVar2 = *(undefined4 *)(_DAT_14abbeef0 + 0x10);
  uVar3 = func_0x0001450cef40(uVar9,uVar2,0xc4094887,1);
  uStack_348 = (undefined *)CONCAT44(uVar3,(undefined4)uStack_348);
  uVar4 = *(int *)(_DAT_1492ab488 + 0xc) - iVar12;
  iStack_340 = iVar6 * 3 + (int)uStack_388 * 2 + *(int *)(_DAT_1499aae00 + 0xc) +
               (int)((float)(int)(~((int)uVar4 >> 0x1f) & uVar4) * _DAT_1461671d4);
  uStack_33c = func_0x0001450cef40(uVar9,uVar2,0x83043f23,1);
  uStack_338 = func_0x0001450cef40(uVar9,uVar2,0x67bdec74,1);
  uStack_334 = func_0x0001450cef40(uVar9,uVar2,0x60b754da,1);
  uStack_330 = func_0x0001450cef40(uVar9,uVar2,0xf78fa955,1);
  uStack_34c = func_0x0001450cef40(uVar9,uVar2,0xac8d503);
  lVar8 = func_0x000144f97130(0x22f20);
  FUN_14444d390(lVar8,lVar7,&uStack_360);
  _DAT_1490905c0 = lVar8;
  func_0x000145f17f50(lVar8);
  func_0x000144dd57c0(&uStack_3b8,0,&UNK_14390ca90,0,0);
  puStack_3a0 = &UNK_144fd1ab0;
  *(ulonglong *)(lVar8 + 0x20c50) =
       CONCAT26(uStack_3a2,
                CONCAT15(abStack_3a4[1],
                         CONCAT14(abStack_3a4[0],CONCAT13(cStack_3a5,uStack_3a9._1_3_))));
  *(undefined8 *)(lVar8 + 0x20c40) = uStack_3b8;
  *(ulonglong *)(lVar8 + 0x20c48) = CONCAT17((undefined1)uStack_3a9,CONCAT25(uStack_3ab,uStack_3b0))
  ;
  *(undefined **)(lVar8 + 0x20c58) = &UNK_144fd1ab0;
  func_0x000144dd57c0(&uStack_3b8,0,&SUB_140004380,0,0);
  puStack_3a0 = &UNK_144fd1ab0;
  *(ulonglong *)(lVar8 + 0x20d50) =
       CONCAT26(uStack_3a2,
                CONCAT15(abStack_3a4[1],
                         CONCAT14(abStack_3a4[0],CONCAT13(cStack_3a5,uStack_3a9._1_3_))));
  *(undefined8 *)(lVar8 + 0x20d40) = uStack_3b8;
  *(ulonglong *)(lVar8 + 0x20d48) = CONCAT17((undefined1)uStack_3a9,CONCAT25(uStack_3ab,uStack_3b0))
  ;
  *(undefined **)(lVar8 + 0x20d58) = &UNK_144fd1ab0;
  func_0x000144dd57c0(&uStack_3b8,0,FUN_14011f7a0,0,0);
  puStack_3a0 = &UNK_144fd1ab0;
  *(ulonglong *)(lVar8 + 0x20d70) =
       CONCAT26(uStack_3a2,
                CONCAT15(abStack_3a4[1],
                         CONCAT14(abStack_3a4[0],CONCAT13(cStack_3a5,uStack_3a9._1_3_))));
  *(undefined8 *)(lVar8 + 0x20d60) = uStack_3b8;
  *(ulonglong *)(lVar8 + 0x20d68) = CONCAT17((undefined1)uStack_3a9,CONCAT25(uStack_3ab,uStack_3b0))
  ;
  *(undefined **)(lVar8 + 0x20d78) = &UNK_144fd1ab0;
  func_0x000144dd57c0(&uStack_3b8,0,FUN_140494690,0,0);
  puStack_3a0 = &UNK_144fd1ab0;
  *(ulonglong *)(lVar8 + 0x20d90) =
       CONCAT26(uStack_3a2,
                CONCAT15(abStack_3a4[1],
                         CONCAT14(abStack_3a4[0],CONCAT13(cStack_3a5,uStack_3a9._1_3_))));
  *(undefined8 *)(lVar8 + 0x20d80) = uStack_3b8;
  *(ulonglong *)(lVar8 + 0x20d88) = CONCAT17((undefined1)uStack_3a9,CONCAT25(uStack_3ab,uStack_3b0))
  ;
  *(undefined **)(lVar8 + 0x20d98) = &UNK_144fd1ab0;
  func_0x000144dd57c0(&uStack_3b8,0,FUN_140674a10,0,0);
  puStack_3a0 = &UNK_144fd1ab0;
  *(ulonglong *)(lVar8 + 0x20c70) =
       CONCAT26(uStack_3a2,
                CONCAT15(abStack_3a4[1],
                         CONCAT14(abStack_3a4[0],CONCAT13(cStack_3a5,uStack_3a9._1_3_))));
  *(undefined8 *)(lVar8 + 0x20c60) = uStack_3b8;
  *(ulonglong *)(lVar8 + 0x20c68) = CONCAT17((undefined1)uStack_3a9,CONCAT25(uStack_3ab,uStack_3b0))
  ;
  *(undefined **)(lVar8 + 0x20c78) = &UNK_144fd1ab0;
  func_0x000144dd57c0(&uStack_3b8,0,FUN_140698310,0,0);
  puStack_3a0 = &UNK_144fd1ab0;
  *(ulonglong *)(lVar8 + 0x20c90) =
       CONCAT26(uStack_3a2,
                CONCAT15(abStack_3a4[1],
                         CONCAT14(abStack_3a4[0],CONCAT13(cStack_3a5,uStack_3a9._1_3_))));
  *(undefined8 *)(lVar8 + 0x20c80) = uStack_3b8;
  *(ulonglong *)(lVar8 + 0x20c88) = CONCAT17((undefined1)uStack_3a9,CONCAT25(uStack_3ab,uStack_3b0))
  ;
  *(undefined **)(lVar8 + 0x20c98) = &UNK_144fd1ab0;
  func_0x000144dd57c0(&uStack_3b8,0,FUN_140a5bff0,0,0);
  puStack_3a0 = &UNK_144fd1ab0;
  *(ulonglong *)(lVar8 + 0x20cb0) =
       CONCAT26(uStack_3a2,
                CONCAT15(abStack_3a4[1],
                         CONCAT14(abStack_3a4[0],CONCAT13(cStack_3a5,uStack_3a9._1_3_))));
  *(undefined8 *)(lVar8 + 0x20ca0) = uStack_3b8;
  *(ulonglong *)(lVar8 + 0x20ca8) = CONCAT17((undefined1)uStack_3a9,CONCAT25(uStack_3ab,uStack_3b0))
  ;
  *(undefined **)(lVar8 + 0x20cb8) = &UNK_144fd1ab0;
  func_0x000144dd57c0(&uStack_3b8,0,&UNK_140769610,0,0);
  puStack_3a0 = &UNK_144fd1ab0;
  *(ulonglong *)(lVar8 + 0x20cd0) =
       CONCAT26(uStack_3a2,
                CONCAT15(abStack_3a4[1],
                         CONCAT14(abStack_3a4[0],CONCAT13(cStack_3a5,uStack_3a9._1_3_))));
  *(undefined8 *)(lVar8 + 0x20cc0) = uStack_3b8;
  *(ulonglong *)(lVar8 + 0x20cc8) = CONCAT17((undefined1)uStack_3a9,CONCAT25(uStack_3ab,uStack_3b0))
  ;
  *(undefined **)(lVar8 + 0x20cd8) = &UNK_144fd1ab0;
  func_0x000144dd57c0(&uStack_3b8,0,&UNK_14053a0f0,0,0);
  puStack_3a0 = &UNK_144fd1ab0;
  *(ulonglong *)(lVar8 + 0x20cf0) =
       CONCAT26(uStack_3a2,
                CONCAT15(abStack_3a4[1],
                         CONCAT14(abStack_3a4[0],CONCAT13(cStack_3a5,uStack_3a9._1_3_))));
  *(undefined8 *)(lVar8 + 0x20ce0) = uStack_3b8;
  *(ulonglong *)(lVar8 + 0x20ce8) = CONCAT17((undefined1)uStack_3a9,CONCAT25(uStack_3ab,uStack_3b0))
  ;
  *(undefined **)(lVar8 + 0x20cf8) = &UNK_144fd1ab0;
  func_0x000144dd57c0(&uStack_3b8,0,FUN_1408e9d00,0,0);
  puStack_3a0 = &UNK_144fd1ab0;
  *(ulonglong *)(lVar8 + 0x20d10) =
       CONCAT26(uStack_3a2,
                CONCAT15(abStack_3a4[1],
                         CONCAT14(abStack_3a4[0],CONCAT13(cStack_3a5,uStack_3a9._1_3_))));
  *(undefined8 *)(lVar8 + 0x20d00) = uStack_3b8;
  *(ulonglong *)(lVar8 + 0x20d08) = CONCAT17((undefined1)uStack_3a9,CONCAT25(uStack_3ab,uStack_3b0))
  ;
  *(undefined **)(lVar8 + 0x20d18) = &UNK_144fd1ab0;
  func_0x000144dd57c0(&uStack_3b8,0,FUN_1406437f0,0,0);
  puStack_3a0 = &UNK_144fd1ab0;
  *(ulonglong *)(lVar8 + 0x20d30) =
       CONCAT26(uStack_3a2,
                CONCAT15(abStack_3a4[1],
                         CONCAT14(abStack_3a4[0],CONCAT13(cStack_3a5,uStack_3a9._1_3_))));
  *(undefined8 *)(lVar8 + 0x20d20) = uStack_3b8;
  *(ulonglong *)(lVar8 + 0x20d28) = CONCAT17((undefined1)uStack_3a9,CONCAT25(uStack_3ab,uStack_3b0))
  ;
  *(undefined **)(lVar8 + 0x20d38) = &UNK_144fd1ab0;
  func_0x000144dd57c0(&uStack_3b8,0,FUN_1406994c0,0,0);
  puStack_3a0 = &UNK_14536a4d0;
  uStack_180 = CONCAT17((undefined1)uStack_3a9,CONCAT25(uStack_3ab,uStack_3b0));
  uStack_178 = CONCAT26(uStack_3a2,
                        CONCAT15(abStack_3a4[1],
                                 CONCAT14(abStack_3a4[0],CONCAT13(cStack_3a5,uStack_3a9._1_3_))));
  puStack_170 = &UNK_14536a4d0;
  uStack_188 = uStack_3b8;
  func_0x000145f17f70(lVar8);
  func_0x000144dd57c0(&uStack_3b8,0,&UNK_14095eb70,0,0);
  _DAT_149090618 = 0;
  puStack_3a0 = &UNK_14095eb60;
  *(ulonglong *)(lVar8 + 0x20df0) =
       CONCAT26(uStack_3a2,
                CONCAT15(abStack_3a4[1],
                         CONCAT14(abStack_3a4[0],CONCAT13(cStack_3a5,uStack_3a9._1_3_))));
  *(undefined **)(lVar8 + 0x20df8) = &UNK_14095eb60;
  _DAT_149090620 = FUN_14390b330;
  *(undefined8 *)(lVar8 + 0x20de0) = uStack_3b8;
  *(ulonglong *)(lVar8 + 0x20de8) = CONCAT17((undefined1)uStack_3a9,CONCAT25(uStack_3ab,uStack_3b0))
  ;
  func_0x000145f17f60(*(undefined8 *)(lVar8 + 0x20ed0));
  DAT_149e4ed28 = 1;
  DAT_149dd71e0 = 1;
  DAT_146dd528e = func_0x0001409d3e70(0x9fb96690,1);
  func_0x0001409d3e70(0x15e52ebe,1);
  FUN_1459b26c0();
  lVar7 = func_0x000144f97130(0x30);
  if (lVar7 != 0) {
    FUN_140ad5cf0(lVar7,*(undefined2 *)(_DAT_14abbf348 + 0x24),
                  *(undefined2 *)(_DAT_14abbf348 + 0x24),1,1);
  }
  _DAT_1490905d0 = lVar7;
  FUN_145a78a50();
  (**(code **)(*_DAT_14a9b33c0 + 8))(_DAT_14a9b33c0,0);
  _DAT_149dd71d8 = &UNK_144fac420;
  _DAT_149095b10 = 0x146bd1658;
  _DAT_14aad3fb8 = 0x146bd1650;
  FUN_145b21f60();
  FUN_145b93cd0();
  FUN_145d98f20();
  FUN_145b678d0();
  uVar2 = func_0x0001450cef40(*(undefined8 *)(_DAT_14abbeef0 + 8),
                              *(undefined4 *)(_DAT_14abbeef0 + 0x10),0xee3d1bee,1);
  FUN_14582f250(uVar2);
  FUN_145d97890();
  lVar7 = func_0x000144f97130(0x18);
  if (lVar7 != 0) {
    func_0x000145ef4d20(lVar7);
  }
  _DAT_149dc5d20 = lVar7;
  iVar6 = func_0x0001450cef40(*(undefined8 *)(_DAT_14abbeef0 + 8),
                              *(undefined4 *)(_DAT_14abbeef0 + 0x10),0x65cd8c55,1);
  iVar5 = iVar5 + iVar6;
  lVar7 = func_0x000144f97130(0x20);
  if (lVar7 != 0) {
    FUN_142064d20(lVar7,iVar5);
  }
  _DAT_149090270 = lVar7;
  lVar7 = func_0x000144f97130(0x2c0);
  if (lVar7 != 0) {
    uStack_388 = CONCAT44(uStack_388._4_4_,iVar6);
    func_0x000144dd57c0(&uStack_3b8,0,&UNK_1406b9e40,0,0);
    puStack_3a0 = &UNK_1406b9e30;
    uStack_2a0 = CONCAT17((undefined1)uStack_3a9,CONCAT25(uStack_3ab,uStack_3b0));
    uStack_298 = CONCAT26(uStack_3a2,
                          CONCAT15(abStack_3a4[1],
                                   CONCAT14(abStack_3a4[0],CONCAT13(cStack_3a5,uStack_3a9._1_3_))));
    puStack_290 = &UNK_1406b9e30;
    uStack_2a8 = uStack_3b8;
    func_0x000144dd57c0(auStack_380,0,&SUB_140164010,0,0);
    puStack_368 = &UNK_14095eb60;
    puStack_2b0 = &UNK_14095eb60;
    uStack_2b8 = uStack_370;
    uStack_2c0 = uStack_378;
    func_0x000144dd57c0(&uStack_60,0,FUN_14095fb40,0,0);
    puStack_48 = &UNK_14095eb60;
    puStack_2d0 = &UNK_14095eb60;
    uStack_2d8 = uStack_50;
    uStack_2e8 = uStack_60;
    uStack_2e0 = uStack_58;
    func_0x000144dd57c0(&uStack_80,0,FUN_14095ecb0,0,0);
    puStack_68 = &UNK_14095eb60;
    puStack_2f0 = &UNK_14095eb60;
    uStack_2f8 = uStack_70;
    uStack_308 = uStack_80;
    uStack_300 = uStack_78;
    func_0x000144dd57c0(&uStack_a0,0,FUN_1438d9860,0,0);
    puStack_88 = &UNK_1406b9e30;
    puStack_310 = &UNK_1406b9e30;
    uStack_318 = uStack_90;
    uStack_328 = uStack_a0;
    uStack_320 = uStack_98;
    func_0x000144dd57c0(&uStack_c0,0,FUN_1438d9690,0,0);
    puStack_a8 = &UNK_14095eb60;
    puStack_190 = &UNK_14095eb60;
    uStack_198 = uStack_b0;
    uStack_1a8 = uStack_c0;
    uStack_1a0 = uStack_b8;
    func_0x000144dd57c0(&uStack_e0,0,&UNK_140961160,0,0);
    puStack_c8 = &UNK_14095eb60;
    puStack_1b0 = &UNK_14095eb60;
    uStack_1b8 = uStack_d0;
    uStack_1c8 = uStack_e0;
    uStack_1c0 = uStack_d8;
    func_0x000144dd57c0(&uStack_100,0,FUN_1438d95d0,0,0);
    puStack_e8 = &UNK_140644000;
    puStack_1d0 = &UNK_140644000;
    uStack_1d8 = uStack_f0;
    uStack_1e8 = uStack_100;
    uStack_1e0 = uStack_f8;
    func_0x000144dd57c0(&uStack_120,0,&UNK_1409611a0,0,0);
    puStack_108 = &UNK_14095eb60;
    puStack_1f0 = &UNK_14095eb60;
    uStack_1f8 = uStack_110;
    uStack_208 = uStack_120;
    uStack_200 = uStack_118;
    func_0x000144dd57c0(&uStack_140,0,FUN_1409606f0,0,0);
    puStack_128 = &UNK_14095eb60;
    puStack_210 = &UNK_14095eb60;
    uStack_218 = uStack_130;
    uStack_228 = uStack_140;
    uStack_220 = uStack_138;
    func_0x000144dd57c0(&uStack_160,0,FUN_140167e60,0,0);
    iVar6 = (int)uStack_388;
    pcStack_148 = FUN_140167e20;
    pcStack_230 = FUN_140167e20;
    uStack_238 = uStack_150;
    uStack_248 = uStack_160;
    uStack_240 = uStack_158;
    FUN_1426989e0(lVar7,&uStack_248,&uStack_228,&uStack_208,&uStack_1e8,&uStack_1c8,&uStack_1a8,
                  &uStack_328,&uStack_308,&uStack_2e8,auStack_2c8,&uStack_2a8,iVar5,iVar1 + iVar5);
  }
  _DAT_1490905c8 = lVar7;
  func_0x000144dd57c0(&uStack_3b8,0,&UNK_140644350,0,0);
  puStack_3a0 = &UNK_140644000;
  uRam0000000149dd71c0 = CONCAT17((undefined1)uStack_3a9,CONCAT25(uStack_3ab,uStack_3b0));
  uRam0000000149dd71c8 =
       CONCAT26(uStack_3a2,
                CONCAT15(abStack_3a4[1],
                         CONCAT14(abStack_3a4[0],CONCAT13(cStack_3a5,uStack_3a9._1_3_))));
  _DAT_149dd71b8 = uStack_3b8;
  puRam0000000149dd71d0 = &UNK_140644000;
  func_0x000144dd57c0(&uStack_3b8,0,FUN_140645740,0,0);
  puStack_3a0 = &UNK_140644000;
  uRam0000000149095b20 = CONCAT17((undefined1)uStack_3a9,CONCAT25(uStack_3ab,uStack_3b0));
  uRam0000000149095b28 =
       CONCAT26(uStack_3a2,
                CONCAT15(abStack_3a4[1],
                         CONCAT14(abStack_3a4[0],CONCAT13(cStack_3a5,uStack_3a9._1_3_))));
  _DAT_149095b18 = uStack_3b8;
  puRam0000000149095b30 = &UNK_140644000;
  func_0x000144dd57c0(&uStack_3b8,0,FUN_14095eb90,0,0);
  puStack_3a0 = &UNK_14095eb60;
  uRam0000000149095b40 = CONCAT17((undefined1)uStack_3a9,CONCAT25(uStack_3ab,uStack_3b0));
  uRam0000000149095b48 =
       CONCAT26(uStack_3a2,
                CONCAT15(abStack_3a4[1],
                         CONCAT14(abStack_3a4[0],CONCAT13(cStack_3a5,uStack_3a9._1_3_))));
  _DAT_149095b38 = uStack_3b8;
  _DAT_149095b50 = &UNK_14095eb60;
  func_0x000144dd57c0(&uStack_3b8,0,FUN_14095f2c0,0,0);
  puStack_3a0 = &UNK_14095eb60;
  uRam0000000149095b60 = CONCAT17((undefined1)uStack_3a9,CONCAT25(uStack_3ab,uStack_3b0));
  uRam0000000149095b68 =
       CONCAT26(uStack_3a2,
                CONCAT15(abStack_3a4[1],
                         CONCAT14(abStack_3a4[0],CONCAT13(cStack_3a5,uStack_3a9._1_3_))));
  _DAT_149095b58 = uStack_3b8;
  puRam0000000149095b70 = &UNK_14095eb60;
  func_0x000144dd57c0(&uStack_3b8,0,&UNK_1437e7d50,0,0);
  puStack_3a0 = &UNK_140644000;
  uRam0000000149095b80 = CONCAT17((undefined1)uStack_3a9,CONCAT25(uStack_3ab,uStack_3b0));
  uRam0000000149095b88 =
       CONCAT26(uStack_3a2,
                CONCAT15(abStack_3a4[1],
                         CONCAT14(abStack_3a4[0],CONCAT13(cStack_3a5,uStack_3a9._1_3_))));
  _DAT_149095b78 = uStack_3b8;
  puRam0000000149095b90 = &UNK_140644000;
  func_0x000144dd57c0(&uStack_3b8,0,FUN_140960090,0,0);
  puStack_3a0 = &UNK_14095eb60;
  uRam0000000149095ba0 = CONCAT17((undefined1)uStack_3a9,CONCAT25(uStack_3ab,uStack_3b0));
  uRam0000000149095ba8 =
       CONCAT26(uStack_3a2,
                CONCAT15(abStack_3a4[1],
                         CONCAT14(abStack_3a4[0],CONCAT13(cStack_3a5,uStack_3a9._1_3_))));
  _DAT_149095b98 = uStack_3b8;
  puRam0000000149095bb0 = &UNK_14095eb60;
  func_0x000144dd57c0(&uStack_3b8,0,FUN_1437e7d90,0,0);
  DAT_149ab0698 = 1;
  puStack_3a0 = &UNK_14095eb60;
  uRam0000000149ab0680 = CONCAT17((undefined1)uStack_3a9,CONCAT25(uStack_3ab,uStack_3b0));
  uRam0000000149ab0688 =
       CONCAT26(uStack_3a2,
                CONCAT15(abStack_3a4[1],
                         CONCAT14(abStack_3a4[0],CONCAT13(cStack_3a5,uStack_3a9._1_3_))));
  _DAT_149ab0678 = uStack_3b8;
  puRam0000000149ab0690 = &UNK_14095eb60;
  func_0x000144dd57c0(&uStack_3b8,0,FUN_1408a9910,0,0);
  puStack_3a0 = &UNK_1404f9e70;
  uRam0000000149e4eba0 = CONCAT17((undefined1)uStack_3a9,CONCAT25(uStack_3ab,uStack_3b0));
  uRam0000000149e4eba8 =
       CONCAT26(uStack_3a2,
                CONCAT15(abStack_3a4[1],
                         CONCAT14(abStack_3a4[0],CONCAT13(cStack_3a5,uStack_3a9._1_3_))));
  _DAT_149e4eb98 = uStack_3b8;
  puRam0000000149e4ebb0 = &UNK_1404f9e70;
  *(int *)(*(longlong *)(_DAT_149fe6500 + 0x198) + 0xc) = iVar6;
  func_0x000144dd57c0(&uStack_3b8,0,FUN_144f80990,0,0);
  DAT_146d7a789 = DAT_146d7a789 & 0xfd;
  puStack_3a0 = &UNK_144f80970;
  *(ulonglong *)(lVar7 + 0x2a8) =
       CONCAT26(uStack_3a2,
                CONCAT15(abStack_3a4[1],
                         CONCAT14(abStack_3a4[0],CONCAT13(cStack_3a5,uStack_3a9._1_3_))));
  *(undefined **)(lVar7 + 0x2b0) = &UNK_144f80970;
  *(undefined8 *)(lVar7 + 0x298) = uStack_3b8;
  *(ulonglong *)(lVar7 + 0x2a0) = CONCAT17((undefined1)uStack_3a9,CONCAT25(uStack_3ab,uStack_3b0));
  *(undefined8 *)(lVar7 + 0x1a0) = 0x2000;
  *(undefined8 *)(lVar7 + 0x1b0) = 0x2000;
  *(undefined8 *)(lVar7 + 0x1b8) = 0x2e;
  FUN_141ca7840(auStack_380,0x346347a77a5c99b1);
  if ((~auStack_380[0] & 0x3fffff) == 0) {
    FUN_145963a70(1);
    FUN_141ca7840(&uStack_3b8,0x346347a77a5c99b1);
    auStack_380[0] = (uint)uStack_3b8;
  }
  uVar4 = auStack_380[0];
  uVar9 = FUN_140643cd0();
  lVar7 = 0;
  uStack_3b8 = _DAT_14651d5aa;
  uStack_3b0 = (undefined5)_UNK_14651d5b2;
  uStack_3ab = (undefined2)((ulonglong)_UNK_14651d5b2 >> 0x28);
  uStack_3a9 = 0x68141504;
  cStack_3a5 = '\x01';
  do {
    abStack_3a4[lVar7] = (char)lVar7 + 0x56U ^ *(byte *)((longlong)&uStack_3b8 + lVar7);
    lVar7 = lVar7 + 1;
  } while (lVar7 != 0x13);
  FUN_140715f40(uVar9);
  if (cStack_3a5 == '\x01') {
    lVar7 = -0x13;
    do {
      auStack_391[lVar7] = 0;
      lVar7 = lVar7 + 1;
    } while (lVar7 != 0);
  }
  FUN_1452fc820();
  FUN_145babfd0(uVar4);
  uVar9 = func_0x000144fc99c0(0,0);
  FUN_14574f060(uVar9);
  FUN_1452fcc00();
  func_0x0001458857a0();
  FUN_145a1dbf0();
  uStack_268 = 0;
  pcStack_260 = FUN_1438d9790;
  func_0x000145f35a90();
  uStack_278 = 0;
  pcStack_270 = FUN_1438d9730;
  func_0x000145f35aa0();
  if (_DAT_14a21b740 != (code *)0x0) {
    (*_DAT_14a21b740)(0x14a21b6e0);
  }
  pcRam000000014a21b6e0 = FUN_14390b290;
  _DAT_14a21b730 = FUN_14390cab0;
  _DAT_14a21b738 = &UNK_145220e00;
  lVar7 = 0;
  uStack_288 = 0;
  _DAT_14a21b740 = (code *)0x0;
  pcStack_280 = FUN_1438d97f0;
  func_0x000145f35ab0();
  func_0x000145bd5c00();
  uVar9 = FUN_140643cd0();
  func_0x000140704900(uVar9);
  uVar9 = FUN_140643cd0();
  uStack_3b8 = _DAT_14651d5bd;
  uStack_3b0 = (undefined5)_UNK_14651d5c5;
  uStack_3ab = 0x5d53;
  uStack_3a9 = 0x4a14494b;
  cStack_3a5 = 0xf;
  abStack_3a4[0] = 0x3e;
  abStack_3a4[1] = '\x01';
  do {
    *(byte *)((longlong)&uStack_3a2 + lVar7) =
         (char)lVar7 + 0x2aU ^ *(byte *)((longlong)&uStack_3b8 + lVar7);
    lVar7 = lVar7 + 1;
  } while (lVar7 != 0x15);
  FUN_140715f40(uVar9);
  if (abStack_3a4[1] == '\x01') {
    lVar7 = -0x15;
    do {
      auStack_38d[lVar7] = 0;
      lVar7 = lVar7 + 1;
    } while (lVar7 != 0);
  }
  lVar7 = FUN_141adcbd0(&UNK_1467807a1);
  _DAT_149090610 = lVar7;
  *(undefined4 *)(lVar7 + 0x3c) = 0xff02;
  func_0x000145f359e0(lVar7);
  func_0x000145b1af30();
  uStack_3b8 = FUN_141adcbd0(&UNK_146783117);
  uVar9 = FUN_141adcbd0(&UNK_1467807a1);
  uStack_3b0 = (undefined5)uVar9;
  uStack_3ab = (undefined2)((ulonglong)uVar9 >> 0x28);
  uStack_3a9._0_1_ = (undefined1)((ulonglong)uVar9 >> 0x38);
  func_0x000145f359f0(&uStack_3b8);
  uStack_3b8 = FUN_141adcbd0(&UNK_1467795aa);
  uVar9 = FUN_141adcbd0(&UNK_1467807a1);
  uStack_3b0 = (undefined5)uVar9;
  uStack_3ab = (undefined2)((ulonglong)uVar9 >> 0x28);
  uStack_3a9._0_1_ = (undefined1)((ulonglong)uVar9 >> 0x38);
  func_0x000145f359f0(&uStack_3b8);
  uStack_3b8 = FUN_141adcbd0(&UNK_14678310e);
  uVar9 = FUN_141adcbd0(&UNK_146780798);
  uStack_3b0 = (undefined5)uVar9;
  uStack_3ab = (undefined2)((ulonglong)uVar9 >> 0x28);
  uStack_3a9._0_1_ = (undefined1)((ulonglong)uVar9 >> 0x38);
  func_0x000145f359f0(&uStack_3b8);
  uStack_3b8 = FUN_141adcbd0(&UNK_146779d3e);
  uVar9 = FUN_141adcbd0(&UNK_146779d1a);
  uStack_3b0 = (undefined5)uVar9;
  uStack_3ab = (undefined2)((ulonglong)uVar9 >> 0x28);
  uStack_3a9._0_1_ = (undefined1)((ulonglong)uVar9 >> 0x38);
  func_0x000145f359f0(&uStack_3b8);
  uStack_3b8 = FUN_141adcbd0(&UNK_14677df48);
  uVar9 = FUN_141adcbd0(&UNK_14677df21);
  uStack_3b0 = (undefined5)uVar9;
  uStack_3ab = (undefined2)((ulonglong)uVar9 >> 0x28);
  uStack_3a9._0_1_ = (undefined1)((ulonglong)uVar9 >> 0x38);
  func_0x000145f359f0(&uStack_3b8);
  uVar9 = FUN_140643cd0();
  func_0x000140704900(uVar9);
  FUN_145ab57e0();
  _DAT_149fd6aa8 = 1;
  if (DAT_14a95df10 != '\0') {
    _DAT_149fd6aa8 = 8;
  }
  _DAT_14a95df14 = _DAT_149fd6aa8;
  FUN_1438fa080();
  FUN_145cae840();
  _DAT_149090658 = 0x1499759d8;
  uRam0000000149090660 = 0x1499759d8;
  uRam0000000149090668 = 0x1499759d8;
  uRam0000000149090670 = 0x1499759d8;
  if (_DAT_149fd6ad8 != (code *)0x0) {
    (*_DAT_149fd6ad8)(0x149fd6ab0);
  }
  _DAT_149fd6ac8 = FUN_14390caf0;
  _DAT_149fd6ad0 = &SUB_140004380;
  _DAT_149fd6ad8 = (code *)&SUB_140004380;
  if (_DAT_149fd6b08 != (code *)0x0) {
    (*_DAT_149fd6b08)(0x149fd6ae0);
  }
  _DAT_149fd6af8 = FUN_14390cb40;
  _DAT_149fd6b00 = &SUB_140004380;
  _DAT_149fd6b08 = (code *)&SUB_140004380;
  return;
}

