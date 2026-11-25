// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 142756f00  size: 1056 bytes
// Name:    strPackfileManager::SetExtraContentIndex
// Subsystem: streaming
// Class:   strPackfileManager
//
// Evidence:
//   GTAVSRC: strPackfileManager::SetExtraContentIndex  (game/scene/MountableContent.cpp)
//   literal: %s%%PLATFORM%%/data/cacheLoaderData_DLC%s/
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_141d32d90, FUN_1412da940, FUN_142757540, FUN_144e4cc20, FUN_1458a6670, FUN_1409eb250, FUN_1409dad30, FUN_142749bd0, FUN_144da8040, FUN_1423ca960, FUN_14588fc50, FUN_141e10090, FUN_1409daae0, FUN_142755420, FUN_142755110, FUN_1417fcb70, FUN_1423d83b0, FUN_141702e30, FUN_144feae90, FUN_141744930, FUN_145ad4fe0, FUN_14274a060, FUN_142757320, FUN_143a8d130, FUN_142748e80, FUN_14555cb80
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"
#include "gta6decomp/strPackfileManager.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void strPackfileManager__SetExtraContentIndex(longlong param_1,int *param_2,int *param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  char cVar5;
  undefined1 uVar6;
  int *piVar7;
  longlong lVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  undefined *puVar11;
  ushort uVar12;
  longlong lVar13;
  undefined1 auVar14 [16];
  undefined1 auStack_370 [8];
  undefined1 auStack_368 [16];
  undefined4 uStack_358;
  undefined1 uStack_351;
  undefined1 auStack_348 [32];
  undefined1 auStack_328 [32];
  undefined1 auStack_308 [32];
  undefined1 auStack_2e8 [32];
  undefined1 auStack_2c8 [32];
  undefined1 auStack_2a8 [32];
  undefined1 auStack_288 [32];
  undefined1 auStack_268 [32];
  undefined1 auStack_248 [32];
  undefined1 auStack_228 [32];
  undefined1 auStack_208 [32];
  undefined1 auStack_1e8 [32];
  undefined1 auStack_1c8 [32];
  undefined1 auStack_1a8 [32];
  undefined1 auStack_188 [32];
  undefined1 auStack_168 [32];
  undefined1 auStack_148 [32];
  undefined1 auStack_128 [32];
  undefined1 auStack_108 [32];
  undefined1 auStack_e8 [32];
  undefined1 auStack_c8 [32];
  undefined1 auStack_a8 [32];
  undefined1 auStack_88 [32];
  undefined1 auStack_68 [32];
  
  cVar5 = FUN_142757320();
  lVar13 = _DAT_148fdce30;
  if (cVar5 == '\0') {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar10 = (ulonglong)*(ushort *)(param_1 + 0x160);
  if (uVar10 == 0) {
    return;
  }
  piVar7 = *(int **)(param_1 + 0x158);
  while (*piVar7 != *param_2) {
    piVar7 = piVar7 + 6;
    uVar10 = uVar10 - 1;
    if (uVar10 == 0) {
      return;
    }
  }
  if ((ulonglong)*(ushort *)(piVar7 + 4) == 0) {
    return;
  }
  uVar10 = 0;
  while (*(int *)(*(longlong *)(piVar7 + 2) + uVar10 * 4) != *param_3) {
    uVar10 = uVar10 + 1;
    if (*(ushort *)(piVar7 + 4) == uVar10) {
      return;
    }
  }
  uVar6 = func_0x000144db6ef0(*(undefined4 *)(param_1 + 0x1dc));
  *(undefined1 *)(lVar13 + 0xf0) = uVar6;
  iVar2 = *param_3;
  cVar5 = FUN_142755110(*(undefined8 *)(param_1 + 0x1e8),*(undefined2 *)(param_1 + 0x1f0),*param_2,
                        iVar2);
  if ((cVar5 == '\0') &&
     (lVar8 = FUN_142748e80(*(undefined4 *)(_DAT_14abcd238 + 0x50),
                            *(undefined8 *)(_DAT_14abcd238 + 0x58),iVar2), lVar8 != 0)) {
    cVar5 = FUN_1417fcb70(lVar8 + 0x88);
    if (cVar5 == '\0') {
      return;
    }
    if (*(short *)(lVar8 + 0x18) == 0) {
      FUN_142757540(lVar8);
    }
    else {
      iVar2 = *(int *)(_DAT_1499aa6c0 + 0x14c);
      if ((iVar2 != 2) && (*(char *)(_DAT_1499aa6c0 + 0x151) != '\x01')) {
        return;
      }
      auVar14._0_12_ = ZEXT812(0);
      auVar14._12_4_ = 0;
      auStack_88 = ZEXT1632(auVar14);
      auStack_108 = ZEXT1632(auVar14);
      auStack_208 = ZEXT1632(auVar14);
      auStack_348 = ZEXT1632(auVar14);
      iVar3 = *param_3;
      auStack_328 = auStack_348;
      auStack_308 = auStack_348;
      auStack_2e8 = auStack_348;
      auStack_2c8 = auStack_348;
      auStack_2a8 = auStack_348;
      auStack_288 = auStack_348;
      auStack_268 = auStack_348;
      auStack_248 = auStack_348;
      auStack_228 = auStack_348;
      auStack_1e8 = auStack_208;
      auStack_1c8 = auStack_208;
      auStack_1a8 = auStack_208;
      auStack_188 = auStack_208;
      auStack_168 = auStack_208;
      auStack_148 = auStack_208;
      auStack_128 = auStack_208;
      auStack_e8 = auStack_108;
      auStack_c8 = auStack_108;
      auStack_a8 = auStack_108;
      auStack_68 = auStack_88;
      uVar9 = FUN_144da8040(1,*(undefined4 *)(param_1 + 0x140));
      FUN_144e4cc20(auStack_148,&UNK_1467797c9,uVar9,iVar3);
      bVar1 = *(byte *)(param_1 + 0x1d7);
      uVar12 = *(ushort *)(param_1 + 0x1d0);
      if ((char)bVar1 < '\0') {
        uVar12 = bVar1 & 0x7f;
      }
      if (uVar12 == 0) {
        puVar11 = &UNK_14678d1bb;
        if (*(undefined **)(param_1 + 0x110) != (undefined *)0x0) {
          puVar11 = *(undefined **)(param_1 + 0x110);
        }
        if (*(char *)(param_1 + 0x11f) < '\0') {
          puVar11 = (undefined *)(param_1 + 0x110);
        }
      }
      else {
        puVar11 = &UNK_14678d1bb;
        if (*(undefined **)(param_1 + 0x1c8) != (undefined *)0x0) {
          puVar11 = *(undefined **)(param_1 + 0x1c8);
        }
        if ((char)bVar1 < '\0') {
          puVar11 = (undefined *)(param_1 + 0x1c8);
        }
      }
      FUN_144e4cc20(auStack_248,&UNK_146789754,puVar11,&UNK_14678d1bb);
      FUN_14555cb80(auStack_248,auStack_348);
      DAT_14788fad0 = 1;
      func_0x000145b40210();
      _DAT_14788fb04 = *param_3;
      FUN_1409dad30(auStack_370,0x4000,1);
      _DAT_14788fc28 = *param_3;
      FUN_141e10090(0xffff);
      func_0x0001458012e0();
      FUN_1423ca960(0);
      FUN_1458a6670();
      FUN_1409eb250(0xffffffff);
      puVar11 = *(undefined **)(param_1 + 0x28);
      if (puVar11 == (undefined *)0x0) {
        puVar11 = &UNK_14678d1bb;
      }
      if (*(char *)(param_1 + 0x37) < '\0') {
        puVar11 = (undefined *)(param_1 + 0x28);
      }
      FUN_143a8d130(puVar11);
      FUN_14588fc50(_DAT_1492e3560,*(undefined8 *)(lVar8 + 0x10),*(undefined2 *)(lVar8 + 0x18));
      FUN_14274a060(*(undefined4 *)(_DAT_14abcd238 + 0x50),*(undefined8 *)(_DAT_14abcd238 + 0x58),
                    *param_3);
      FUN_144feae90();
      func_0x000145822b30(8);
      FUN_141d32d90(0x20);
      FUN_1423ca960(0);
      FUN_142757540(lVar8);
      FUN_145ad4fe0();
      func_0x0001458c0fc0();
      auStack_368._0_12_ = ZEXT812(0);
      auStack_368._12_4_ = 0;
      uStack_351 = 0;
      uStack_358 = 0;
      FUN_142749bd0(*(undefined4 *)(_DAT_14abcd238 + 0x50),*(undefined8 *)(_DAT_14abcd238 + 0x58),
                    *param_3,auStack_368);
      func_0x0001423d8ad0(*param_3,1);
      FUN_1423d83b0();
      FUN_141702e30();
      FUN_141744930(*param_3);
      FUN_1412da940(auStack_368);
      _DAT_14788fb04 = 0;
      _DAT_14788fc28 = 0;
      FUN_1409daae0(auStack_370);
      *(int *)(_DAT_1499aa6c0 + 0x14c) = iVar2;
    }
    FUN_142755420(param_1,*param_2,*param_3,1);
    lVar13 = _DAT_148fdce30;
  }
  *(undefined1 *)(lVar13 + 0xf0) = 0;
  return;
}

