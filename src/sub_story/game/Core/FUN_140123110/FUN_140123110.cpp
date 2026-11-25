// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140123110  size: 1568 bytes
// Name:    FUN_140123110
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144dbce00, FUN_1428f9ce0, FUN_140037a50, FUN_140056cb0, FUN_140392f90, FUN_140056a20, FUN_1403d8d90
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140123110(longlong param_1,longlong param_2)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  uint *puVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong unaff_GS_OFFSET;
  bool bVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined4 uStack_b4a;
  undefined2 uStack_b46;
  undefined4 uStack_b44;
  undefined8 uStack_b40;
  undefined4 uStack_b38;
  int iStack_b34;
  undefined8 uStack_b30;
  undefined1 auStack_b28 [32];
  undefined1 auStack_b08 [32];
  undefined4 uStack_ae8;
  undefined4 uStack_ae4;
  undefined4 uStack_ae0;
  undefined4 uStack_adc;
  uint uStack_ad8;
  undefined4 uStack_ad4;
  undefined8 uStack_ad0;
  undefined1 auStack_ac8 [1824];
  float fStack_3a8;
  int iStack_3a4;
  uint uStack_3a0;
  uint uStack_39c;
  undefined1 auStack_398 [32];
  undefined1 auStack_378 [16];
  undefined1 auStack_368 [16];
  undefined1 auStack_358 [16];
  undefined1 auStack_338 [32];
  undefined1 auStack_318 [16];
  undefined1 auStack_308 [16];
  undefined1 auStack_2f8 [16];
  undefined1 auStack_2d8 [32];
  undefined1 auStack_2b8 [16];
  undefined1 auStack_2a8 [16];
  undefined1 auStack_298 [16];
  undefined1 auStack_268 [32];
  undefined1 auStack_248 [16];
  undefined1 auStack_238 [16];
  undefined1 auStack_228 [16];
  undefined1 auStack_208 [32];
  undefined1 auStack_1e8 [16];
  undefined1 auStack_1d8 [16];
  undefined1 auStack_1c8 [16];
  undefined1 auStack_1a8 [32];
  undefined1 auStack_188 [16];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [16];
  
  if ((*(short *)(param_1 + 0x991c) != 0) && (lVar8 = *(longlong *)(param_1 + 0x9ed0), lVar8 != 0))
  {
    if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8)
                 + 8) == '\0') {
      func_0x0001455db994();
      lVar8 = *(longlong *)(param_1 + 0x9ed0);
      if (lVar8 == 0) {
        return;
      }
    }
    auStack_378 = ZEXT816(0);
    auStack_358 = (undefined1  [16])0x0;
    auStack_368 = (undefined1  [16])0x0;
    auStack_398 = ZEXT1632(auStack_378);
    auStack_2f8 = (undefined1  [16])0x0;
    auStack_2d8 = ZEXT1632(auStack_378);
    auStack_298 = (undefined1  [16])0x0;
    auStack_228 = (undefined1  [16])0x0;
    auStack_1a8 = ZEXT1632(auStack_378);
    auStack_1c8 = (undefined1  [16])0x0;
    auStack_168 = (undefined1  [16])0x0;
    lVar2 = *(longlong *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x12a8);
    auStack_338 = auStack_398;
    auStack_318 = auStack_378;
    auStack_308 = auStack_378;
    auStack_2b8 = auStack_378;
    auStack_2a8 = auStack_378;
    auStack_268 = auStack_2d8;
    auStack_248 = auStack_378;
    auStack_238 = auStack_378;
    auStack_208 = auStack_2d8;
    auStack_1e8 = auStack_378;
    auStack_1d8 = auStack_378;
    auStack_188 = auStack_378;
    auStack_178 = auStack_378;
    iVar6 = func_0x0001428ede40(*(undefined8 *)(param_1 + 0x9ec8));
    fStack_3a8 = (float)(_DAT_14615a740 / (double)(iVar6 - 1));
    uStack_39c = (uint)*(byte *)(param_2 + 0x8c0);
    iStack_3a4 = iVar6;
    FUN_140392f90(param_2 + 0x730,auStack_398);
    uStack_3a0 = (uint)*(byte *)(param_2 + 0xa54);
    FUN_1403d8d90(param_2 + 0x8c4,auStack_268);
    uVar1 = *(ushort *)(param_1 + 0x9922);
    if (uVar1 != 0) {
      uVar7 = func_0x000144e3d460(lVar2,uVar1,auStack_ac8,0xa90);
      func_0x000144da8e20(lVar2,uVar1,uVar7);
      *(undefined2 *)(lVar2 + 0x70c0 + (ulonglong)(uVar1 >> 2) * 2) = 0;
    }
    lVar3 = *(longlong *)(lVar8 + 8);
    if ((ushort)(*(short *)(lVar3 + 0x12) - 1U) < _DAT_14a943ab8) {
      uStack_b40 = CONCAT62(uStack_b40._2_6_,*(undefined2 *)(lVar8 + 0x16));
      uStack_b44 = *(undefined4 *)(lVar8 + 0x12);
      *(undefined1 *)(lVar2 + 0x121a4) = 1;
      FUN_144dbce00(lVar2,1,lVar3,&uStack_b44,0x105);
    }
    uVar1 = *(ushort *)(param_1 + 0x991e);
    if ((uVar1 != 0) && (*(longlong *)(lVar2 + 0x39c0 + (ulonglong)(uVar1 >> 2) * 8) != lVar8)) {
      *(longlong *)(lVar2 + 0x39c0 + (ulonglong)(uVar1 >> 2) * 8) = lVar8;
      *(ulonglong *)(lVar2 + 0x20) = *(ulonglong *)(lVar2 + 0x20) | 0x10L << ((byte)uVar1 & 3);
    }
    uStack_b44 = *(undefined4 *)(param_2 + 0xa60);
    uStack_b40 = *(undefined8 *)(param_2 + 0xa64);
    uStack_b38 = *(undefined4 *)(param_2 + 0xa6c);
    iStack_b34 = *(int *)(param_2 + 0xa70);
    bVar12 = iStack_b34 == 0;
    auVar14[1] = bVar12;
    auVar14[0] = bVar12;
    auVar14[2] = bVar12;
    auVar14[3] = bVar12;
    auVar14[4] = bVar12;
    auVar14[5] = bVar12;
    auVar14[6] = bVar12;
    auVar14[7] = bVar12;
    auVar14[8] = bVar12;
    auVar14[9] = bVar12;
    auVar14[10] = bVar12;
    auVar14[0xb] = bVar12;
    auVar14[0xc] = bVar12;
    auVar14[0xd] = bVar12;
    auVar14[0xe] = bVar12;
    auVar14[0xf] = bVar12;
    auVar13 = vpslld_avx(auVar14,0x1f);
    auVar14 = vpsrad_avx(auVar13,0x1f);
    auVar13._8_8_ = 0;
    auVar13._0_8_ = *(ulonglong *)(param_2 + 0xa74);
    auVar13 = vpandn_avx(auVar14,auVar13);
    uStack_b30 = auVar13._0_8_;
    uStack_ae4 = *(undefined4 *)(param_2 + 0xac0);
    uStack_ae8 = *(undefined4 *)(param_2 + 0xabc);
    auStack_b28 = vpermilps_avx(*(undefined1 (*) [32])(param_2 + 0xa7c),_DAT_14615ae40);
    auStack_b08 = vpermps_avx2(_DAT_14615f8a0,*(undefined1 (*) [32])(param_2 + 0xa9c));
    uStack_adc = *(undefined4 *)(param_2 + 0xac4);
    uStack_ae0 = *(undefined4 *)(param_2 + 0xacc);
    uStack_ad8 = (uint)*(byte *)(param_2 + 0xad0);
    uStack_ad4 = *(undefined4 *)(param_2 + 0xac8);
    uStack_ad0 = *(undefined8 *)(param_2 + 0xad4);
    uVar1 = *(ushort *)(param_1 + 0x9920);
    if (uVar1 != 0) {
      uVar7 = func_0x000144e3d460(lVar2,uVar1,&uStack_b44,0x7c);
      func_0x000144da8e20(lVar2,uVar1,uVar7);
      *(undefined2 *)(lVar2 + 0x70c0 + (ulonglong)(uVar1 >> 2) * 2) = 0;
    }
    lVar8 = FUN_1428f9ce0();
    if (lVar8 == 0) {
      plVar9 = (longlong *)&DAT_14a958670;
    }
    else {
      lVar8 = FUN_1428f9ce0();
      plVar9 = (longlong *)(lVar8 + 8);
    }
    lVar8 = *plVar9;
    if ((ushort)(*(short *)(lVar8 + 0x12) - 1U) < _DAT_14a943ab8) {
      *(undefined1 *)(lVar2 + 0x121a4) = 1;
      uStack_b4a = 0xffffffff;
      uStack_b46 = 0xffff;
      FUN_144dbce00(lVar2,0,lVar8,&uStack_b4a,0x103);
    }
    uVar1 = *(ushort *)(param_1 + 0x991c);
    if (uVar1 != 0) {
      uVar11 = (ulonglong)(uVar1 >> 2);
      if (*(longlong *)(lVar2 + 0x40 + uVar11 * 8) != *(longlong *)(lVar8 + 0x28)) {
        *(longlong *)(lVar2 + 0x40 + uVar11 * 8) = *(longlong *)(lVar8 + 0x28);
        *(ulonglong *)(lVar2 + 0x20) = *(ulonglong *)(lVar2 + 0x20) | 1L << ((byte)uVar1 & 3);
        func_0x000144d9dcb0(lVar2,uVar1,0);
        *(undefined2 *)(lVar2 + 0x6200 + uVar11 * 2) = 0;
      }
    }
    lVar3 = *(longlong *)(param_1 + 0x98b0);
    uVar10 = iVar6 + 7U >> 3;
    lVar8 = *(longlong *)(lVar3 + 0xc70) +
            (ulonglong)
            (*(uint *)(*(longlong *)(lVar3 + 0xc68) + (ulonglong)*(byte *)(param_1 + 0x98ca) * 4) >>
             0xf & 0x1ff) * 0x18;
    *(longlong *)(lVar2 + 0x12298) = lVar8;
    lVar8 = *(longlong *)(*(longlong *)(lVar3 + 0xc60) + (ulonglong)*(byte *)(lVar8 + 5) * 8);
    lVar3 = *(longlong *)(lVar2 + 0x10);
    if (lVar3 != lVar8) {
      uVar11 = 0x700002f0ff;
      if ((lVar8 != 0) && (lVar3 != 0)) {
        if ((*(longlong **)(lVar3 + 0xe8) == (longlong *)0x0) ||
           (((*(longlong **)(lVar8 + 0xe8) == (longlong *)0x0 ||
             (**(longlong **)(lVar3 + 0xe8) != **(longlong **)(lVar8 + 0xe8))) ||
            (*(char *)(lVar8 + 0x108) != *(char *)(lVar3 + 0x108))))) {
          uVar11 = 0x1011;
        }
        else {
          uVar11 = 0;
        }
        if (((*(longlong **)(lVar3 + 0xf0) == (longlong *)0x0) ||
            (*(longlong **)(lVar8 + 0xf0) == (longlong *)0x0)) ||
           ((**(longlong **)(lVar3 + 0xf0) != **(longlong **)(lVar8 + 0xf0) ||
            (*(char *)(lVar8 + 0x109) != *(char *)(lVar3 + 0x109))))) {
          uVar11 = uVar11 | 0x2022;
        }
        if (((*(longlong **)(lVar3 + 0xf8) == (longlong *)0x0) ||
            (*(longlong **)(lVar8 + 0xf8) == (longlong *)0x0)) ||
           ((**(longlong **)(lVar3 + 0xf8) != **(longlong **)(lVar8 + 0xf8) ||
            (*(char *)(lVar8 + 0x10a) != *(char *)(lVar3 + 0x10a))))) {
          uVar11 = uVar11 | 0x4044;
        }
        if ((((*(longlong **)(lVar3 + 0x100) == (longlong *)0x0) ||
             (*(longlong **)(lVar8 + 0x100) == (longlong *)0x0)) ||
            (**(longlong **)(lVar3 + 0x100) != **(longlong **)(lVar8 + 0x100))) ||
           (*(char *)(lVar8 + 0x10b) != *(char *)(lVar3 + 0x10b))) {
          uVar11 = uVar11 | 0x8088;
        }
        uVar11 = uVar11 | 0x20000;
      }
      *(longlong *)(lVar2 + 0x10) = lVar8;
      *(ulonglong *)(lVar2 + 0x20) = *(ulonglong *)(lVar2 + 0x20) | uVar11;
    }
    *(undefined1 *)(lVar2 + 0x121a4) = 1;
    FUN_140056a20(lVar2,uVar10,uVar10,iVar6);
    if (((**(uint **)(lVar2 + 0x12198) & 0xc000000) == 0) &&
       (cVar5 = func_0x000144e88f60(lVar2), cVar5 != '\0')) {
      puVar4 = *(uint **)(lVar2 + 0x12198);
      while ((*puVar4 & 0xe000000) != 0x2000000) {
        FUN_140037a50(puVar4,0,1);
      }
      FUN_140056cb0(lVar2);
    }
  }
  return;
}

