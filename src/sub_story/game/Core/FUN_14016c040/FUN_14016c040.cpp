// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14016c040  size: 928 bytes
// Name:    FUN_14016c040
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144cd6000, FUN_1452f8e50, FUN_1455a77e0, FUN_14214f850
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14016c040(longlong param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6,undefined8 param_7,longlong param_8)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_528 [96];
  undefined4 uStack_4c8;
  undefined4 uStack_460;
  undefined4 uStack_3f8;
  undefined4 uStack_390;
  undefined4 uStack_328;
  undefined4 uStack_2c0;
  undefined4 uStack_258;
  undefined4 uStack_1f0;
  undefined4 uStack_188;
  int iStack_120;
  longlong lStack_118;
  undefined4 uStack_110;
  undefined8 uStack_100;
  undefined4 uStack_4c;
  char cStack_40;
  
  bVar2 = *(byte *)(param_1 + 0x5aa);
  bVar1 = bVar2 & 0xef;
  *(byte *)(param_1 + 0x5aa) = bVar1;
  if ((bVar2 & 1) == 0) {
    if ((bVar2 & 4) != 0) {
      if (*(int *)(param_1 + 0x330) == 0) {
        FUN_144cd6000(param_1);
        func_0x000140b2d5b0(param_1);
        func_0x000140b2d530(param_1);
        func_0x000140b2d4b0(param_1);
        func_0x000140b2d4d0(param_1);
        bVar1 = *(byte *)(param_1 + 0x5aa);
      }
      bVar1 = bVar1 & 0xfb;
      *(byte *)(param_1 + 0x5aa) = bVar1;
    }
    if (*(int *)(param_1 + 0x330) != 0) {
      *(byte *)(param_1 + 0x5aa) = bVar1 | 2;
      uStack_4c8 = 0;
      uStack_460 = 0;
      uStack_3f8 = 0;
      uStack_390 = 0;
      uStack_328 = 0;
      uStack_2c0 = 0;
      uStack_258 = 0;
      uStack_1f0 = 0;
      uStack_188 = 0;
      iStack_120 = 0;
      lStack_118 = 0;
      uStack_110 = 0;
      uStack_100 = 0;
      FUN_1452f8e50(param_1,auStack_528,param_2,*param_3,param_4,param_7,param_5);
      if ((*(byte *)(param_1 + 0x5aa) & 8) != 0) {
        FUN_144cd6000(param_1);
        switch(*(undefined4 *)(param_1 + 0x330)) {
        case 1:
          *(byte *)(param_1 + 0x5aa) =
               *(byte *)(param_1 + 0x5aa) & 0xdf | (*(int *)(param_1 + 0x334) == -0x5483ec4d) << 5;
          break;
        case 2:
          uVar5 = FUN_140b24940(uRam000000014abc3ad0);
          *(undefined8 *)(param_1 + 0x318) = uVar5;
          FUN_141338a10(param_1,auStack_528);
          break;
        case 3:
          uVar5 = FUN_1433f6870(uRam000000014abbe948);
          *(undefined8 *)(param_1 + 0x318) = uVar5;
          break;
        case 4:
          lVar6 = FUN_1433f69a0(uRam000000014abbe950);
          *(longlong *)(param_1 + 0x318) = lVar6;
          if (lVar6 != 0) {
            FUN_14214f730(param_1,lVar6);
          }
          FUN_14516bcf0(param_1,auStack_528);
        }
        *(byte *)(param_1 + 0x5aa) = *(byte *)(param_1 + 0x5aa) & 0xf7;
      }
      switch(*(undefined4 *)(param_1 + 0x330)) {
      case 1:
        FUN_1406b1d50(param_1,param_6,auStack_528);
        *param_3 = uStack_4c;
        bVar2 = 0;
        if ((lStack_118 == 0) && (bVar2 = 0, iStack_120 < 1)) {
          cVar3 = FUN_14214f850(param_1);
          bVar2 = cVar3 << 2;
        }
        *(byte *)(param_1 + 0x5ae) = *(byte *)(param_1 + 0x5ae) & 0xfb | bVar2;
        break;
      case 2:
        cStack_40 = *(longlong *)(param_1 + 0x318) != 0;
        break;
      case 3:
        FUN_144cd60a0(param_1,auStack_528);
        break;
      case 4:
        FUN_14516bcf0(param_1,auStack_528);
        cStack_40 = *(longlong *)(param_1 + 0x318) != 0;
      }
      if (param_8 != 0) {
        uVar4 = *(uint *)(param_8 + 0x22c);
        if ((uVar4 & 2) != 0) {
          func_0x0001402a2050(param_1,param_8 + 0x104);
          uVar4 = *(uint *)(param_8 + 0x22c);
        }
        if ((uVar4 & 4) != 0) {
          func_0x0001413392e0(param_1,param_8 + 0x70);
          uVar4 = *(uint *)(param_8 + 0x22c);
        }
        if ((uVar4 & 0x10) != 0) {
          func_0x000141339340(param_1,param_8 + 0xd4);
        }
      }
      func_0x0001455d9f10(param_1);
      if ((*(byte *)(param_1 + 0x5aa) & 0x20) == 0) {
        FUN_1455a77e0(param_1,auStack_528);
      }
      if (*(int *)(param_1 + 0x330) == 2) {
        cVar3 = FUN_14214f850(param_1);
        *(byte *)(param_1 + 0x5ae) = *(byte *)(param_1 + 0x5ae) & 0xfb | cVar3 << 2;
      }
      if (cStack_40 == '\0') {
        *(byte *)(param_1 + 0x5ac) = *(byte *)(param_1 + 0x5ac) & 0xbf;
      }
    }
  }
  return;
}

