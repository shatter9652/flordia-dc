// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140cc89c0  size: 2157 bytes
// Name:    rage::GetTextureTemplateTypeString
// Subsystem: rage
// Class:   rage
//
// Evidence:
//   GTAVSRC: rage::GetTextureTemplateTypeString  (tools/AssetAnalysisTool/src/AssetAnalysisTool.cpp)
//   literal: billboard_nobump
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1450cd090, FUN_145b34940, FUN_1409ed760, FUN_145cb4960, FUN_144ec5e20, FUN_141d40f90, FUN_141adcc20, FUN_145cb4b70, FUN_1400063f0, FUN_141adcd90, FUN_145e14a10, FUN_140715f40, FUN_1419f4000, FUN_1416f3e70, FUN_141adce60, FUN_145bf9f30, FUN_1425eed50, FUN_1408e8930, FUN_140643cd0, FUN_142603f50, FUN_142604710, FUN_141e6c4d0, CFileMgr::Write, FUN_1415f2230
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"
#include "gta6decomp/rage.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rage__GetTextureTemplateTypeString(void)

{
  undefined8 *puVar1;
  undefined2 uVar2;
  longlong lVar3;
  code *pcVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 (*pauVar7) [32];
  undefined1 (*pauVar8) [32];
  undefined8 *puVar9;
  char cVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  char cVar15;
  longlong unaff_GS_OFFSET;
  undefined4 uVar16;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined5 uStack_60;
  undefined3 uStack_5b;
  undefined5 uStack_58;
  char cStack_53;
  char acStack_52 [21];
  undefined1 auStack_3d [29];
  
  FUN_145b34940();
  FUN_142603f50();
  uVar6 = FUN_140643cd0();
  lVar13 = 0;
  uStack_68 = _DAT_146300a3f;
  uStack_60 = (undefined5)_UNK_146300a47;
  uStack_5b = 0xf4e6e4;
  uStack_58 = 0x87b8fbb3f6;
  cVar10 = -0x73;
  cStack_53 = '\x01';
  do {
    cVar15 = *(char *)((longlong)&uStack_68 + lVar13) + cVar10;
    cVar10 = cVar10 + -1;
    acStack_52[lVar13] = cVar15;
    lVar13 = lVar13 + 1;
  } while (lVar13 != 0x15);
  FUN_140715f40(uVar6);
  if (cStack_53 == '\x01') {
    lVar13 = -0x15;
    do {
      auStack_3d[lVar13] = 0;
      lVar13 = lVar13 + 1;
    } while (lVar13 != 0);
  }
  _DAT_148562680 = FUN_141adcc20(&UNK_14677e4b9,0);
  uVar6 = FUN_140643cd0();
  func_0x000140704900(uVar6);
  uVar6 = func_0x000144f97130(0x40);
  FUN_141adcd90(uVar6);
  _DAT_1485626b0 = uVar6;
  FUN_141adce60(uVar6,_DAT_148562680,0);
  lVar13 = _DAT_148562680;
  uVar2 = *(undefined2 *)(_DAT_148562680 + 0xcf8);
  uVar6 = *(undefined8 *)(_DAT_148562680 + 0xc80);
  DAT_148562688 = func_0x000144f28cd0(uVar6,uVar2,0x5bfe48ef);
  DAT_14766c520 = func_0x000144f28cd0(uVar6,uVar2,0x653fa597);
  DAT_14766c521 = func_0x000144f28cd0(uVar6,uVar2,0x2d0688ed);
  DAT_14766c522 = func_0x000144f28cd0(uVar6,uVar2,0xd308ec62);
  DAT_14766c523 = func_0x000144f28cd0(uVar6,uVar2,0xda83f9e);
  DAT_14766c524 = func_0x000144f28cd0(uVar6,uVar2,0x2cf4c058);
  DAT_14766c525 = func_0x000144f28cd0(uVar6,uVar2,0xd14d492e);
  DAT_14766c526 = func_0x000144f28cd0(uVar6,uVar2,0x7b4a6b78);
  DAT_14766c527 = func_0x000144f28cd0(uVar6,uVar2,0xb403afad);
  DAT_14766c528 = func_0x000144f28cd0(uVar6,uVar2,0x76bc3c84);
  DAT_14766c529 = func_0x000144f28cd0(uVar6,uVar2,0xd62cbe1f);
  DAT_14766c53a = func_0x000144f28cd0(uVar6,uVar2,0x4975b439);
  DAT_14766c53b = func_0x000144f28cd0(uVar6,uVar2,0xf89c1748);
  DAT_14766c53c = func_0x000144f28cd0(uVar6,uVar2,0x857521fd);
  DAT_14766c53d = func_0x000144f28cd0(uVar6,uVar2,0xb3584614);
  DAT_14766c52a = func_0x000144f28cd0(uVar6,uVar2,0xf5a48d6b);
  DAT_14766c52b = func_0x000144f28cd0(*(undefined8 *)(lVar13 + 0xc80),uVar2,0x98bb3530);
  DAT_14766c52c = func_0x000144f28cd0(*(undefined8 *)(lVar13 + 0xc80),uVar2,0x8005941a);
  DAT_14766c52d = func_0x000144f28cd0(*(undefined8 *)(lVar13 + 0xc80),uVar2,0x74569536);
  DAT_14766c52e = func_0x000144f28cd0(*(undefined8 *)(lVar13 + 0xc80),uVar2,0x89e946ac);
  DAT_14766c52f = func_0x000144f28cd0(*(undefined8 *)(lVar13 + 0xc80),uVar2,0xf7b1a7cb);
  DAT_14766c530 = func_0x000144f28cd0(*(undefined8 *)(lVar13 + 0xc80),uVar2,0xd299bddf);
  DAT_14766c531 = func_0x000144f28cd0(*(undefined8 *)(lVar13 + 0xc80),uVar2,0x91a1f693);
  DAT_14766c532 = func_0x000144f28cd0(*(undefined8 *)(lVar13 + 0xc80),uVar2,0xfac53be8);
  DAT_14766c533 = func_0x000144f28cd0(*(undefined8 *)(lVar13 + 0xc80),uVar2,0x8c7c82dd);
  DAT_14766c534 = func_0x000144f28cd0(*(undefined8 *)(lVar13 + 0xc80),uVar2,0xe0ec940e);
  DAT_14766c535 = func_0x000144f28cd0(*(undefined8 *)(lVar13 + 0xc80),uVar2,0xeb163f47);
  DAT_14766c536 = func_0x000144f28cd0(*(undefined8 *)(lVar13 + 0xc80),uVar2,0x5d23af8f);
  DAT_14766c537 = func_0x000144f28cd0(*(undefined8 *)(lVar13 + 0xc80),uVar2,0x87abb043);
  DAT_14766c538 = func_0x000144f28cd0(*(undefined8 *)(lVar13 + 0xc80),uVar2,0x222008d9);
  DAT_14766c539 = func_0x000144f28cd0(*(undefined8 *)(lVar13 + 0xc80),uVar2,0xcfbc9966);
  _DAT_147676766 = FUN_1408e8930(0xeed2a2aa,3);
  _DAT_147676768 = FUN_1408e8930(0x2092f017,3);
  _DAT_14766c53e = FUN_1408e8930(0x63031fb5,0);
  _DAT_147676760 = FUN_1408e8930(0x1ab3f264,0);
  _DAT_147676762 = FUN_1408e8930(0x97071119,0);
  _DAT_147676764 = FUN_1408e8930(0xf0b67341,0);
  _DAT_14766c540 = FUN_1408e8930(0x91de37e5,0);
  puStack_70 = &UNK_14677d887;
  func_0x000144dac8f0(&uStack_68,&puStack_70,0x40);
  FUN_1419f4000(&uStack_68,&UNK_146779550,0x40);
  FUN_1415f2230(&uStack_68);
  puStack_70 = &UNK_14677d887;
  func_0x000144dac8f0(&uStack_68,&puStack_70,0x40);
  FUN_1419f4000(&uStack_68,&UNK_146779550,0x40);
  FUN_1415f2230(&uStack_68);
  puStack_70 = &UNK_146783e63;
  func_0x000144dac8f0(&uStack_68,&puStack_70,0x40);
  FUN_1419f4000(&uStack_68,&UNK_146779550,0x40);
  FUN_1415f2230(&uStack_68);
  FUN_142604710();
  FUN_1409ed760(_DAT_14a94d9f0);
  if (DAT_146adb3c1 == '\x01') {
    DAT_146adb3c1 = CFileMgr__Write();
  }
  pauVar7 = (undefined1 (*) [32])func_0x000144f97130(0x48);
  if (pauVar7 != (undefined1 (*) [32])0x0) {
    *(undefined8 *)pauVar7[2] = 0;
    pauVar7[1] = ZEXT1232(ZEXT812(0));
    *pauVar7 = ZEXT1232(ZEXT812(0));
    FUN_145e14a10(pauVar7);
    *(undefined **)*pauVar7 = &UNK_146202ec0;
  }
  _DAT_1485626a8 = pauVar7;
  pauVar8 = (undefined1 (*) [32])func_0x000144f97130(0x48);
  if (pauVar8 != (undefined1 (*) [32])0x0) {
    *(undefined8 *)pauVar8[2] = 0;
    pauVar8[1] = ZEXT1232(ZEXT812(0));
    *pauVar8 = ZEXT1232(ZEXT812(0));
    FUN_145e14a10(pauVar8);
    pauVar7 = _DAT_1485626a8;
    *(undefined **)*pauVar8 = &UNK_146202ec0;
  }
  _DAT_147676640 = pauVar8;
  FUN_145bf9f30(pauVar7);
  FUN_145cb4960(_DAT_147676640);
  FUN_144ec5e20(_DAT_1485626a8);
  FUN_144ec5e20(_DAT_147676640);
  _DAT_148d7a9d0 = FUN_141e6c4d0();
  _DAT_14767655c = FUN_1408e8930(0x81e387cc,0);
  _DAT_147676568 = FUN_1408e8930(0xe72fa566,0);
  _DAT_14856268a = FUN_1408e8930(0xcd3cd0c7,1);
  _DAT_14856268c = FUN_1408e8930(0x251937ff,0);
  uVar11 = _DAT_1476765c4 + 1;
  lVar13 = func_0x000144f97130(0x78);
  func_0x000141c86e30(lVar13);
  uVar16 = 0;
  _DAT_148d7a9c8 = lVar13;
  *(undefined1 (*) [32])(lVar13 + 0x58) = ZEXT1232(ZEXT812(0));
  FUN_141d40f90(lVar13,0,uVar11 & 0xfffffffe,8,1,0,2,0x2d,0,0);
  _DAT_147676588 = FUN_1408e8930(0x72be9840,1);
  DAT_14767658a =
       func_0x000144f28cd0(*(undefined8 *)(_DAT_148562680 + 0xc80),
                           *(undefined2 *)(_DAT_148562680 + 0xcf8));
  uVar11 = _DAT_1476765c4;
  uVar12 = (ulonglong)_DAT_1476765c4;
  if ((_DAT_147676594 < _DAT_1476765c4) && (_DAT_147676590 < _DAT_1476765c4)) {
    FUN_145cb4b70(uVar12);
  }
  else {
    _DAT_147676594 = _DAT_1476765c4;
    if (_DAT_1476765c4 == 0) goto LAB_140cc90e5;
  }
  _DAT_147676594 = uVar11;
  puVar1 = _DAT_147676598 + uVar12;
  puVar9 = _DAT_147676598;
  do {
    *puVar9 = 0xf0000000000;
    puVar9 = puVar9 + 1;
  } while (puVar9 != puVar1);
LAB_140cc90e5:
  lVar5 = _DAT_14a943aa8;
  lVar3 = _DAT_14a92da38;
  lVar14 = 0;
  lVar13 = *(longlong *)(_DAT_14a92da38 + 0x28);
  do {
    *(int *)(lVar14 + 0x14766c550) = (int)((ulonglong)(*(longlong *)(lVar13 + 0x18) - lVar5) >> 5);
    lVar14 = lVar14 + 4;
  } while (lVar14 != 0x5000);
  lVar14 = 0;
  do {
    *(int *)(lVar14 * 4 + 0x147671550) =
         (int)((ulonglong)(*(longlong *)(lVar13 + 0x18) - lVar5) >> 5);
    lVar14 = lVar14 + 1;
  } while (lVar14 != 0x1400);
  _DAT_147676550 = FUN_1450cd090(0x4b60199a);
  _DAT_147676570 = lVar3;
  _DAT_147676578 = lVar3;
  _DAT_147676580 = lVar3;
  pauVar7 = (undefined1 (*) [32])func_0x000144f97130(0x40);
  *pauVar7 = ZEXT1232(ZEXT812(0));
  pauVar7[1] = ZEXT1232(ZEXT812(0));
  func_0x00014002fc20(pauVar7);
  _DAT_1485644c0 = pauVar7;
  cVar10 = FUN_1425eed50(pauVar7,0,5,0x10,1,CONCAT44(uVar16,4));
  if (cVar10 == '\0') {
    if (*(char *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1440) == '\x01') {
      lVar13 = *(longlong *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1438);
    }
    else {
      lVar3 = **(longlong **)(unaff_GS_OFFSET + 0x58);
      *(undefined1 *)(lVar3 + 0x1440) = 1;
      lVar13 = FUN_1400063f0();
      *(longlong *)(lVar3 + 0x1438) = lVar13;
    }
    if (lVar13 != -1) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  FUN_1416f3e70();
  return;
}

