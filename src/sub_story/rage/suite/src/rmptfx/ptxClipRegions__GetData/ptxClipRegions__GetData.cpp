// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 145915250  size: 677 bytes
// Name:    ptxClipRegions::GetData
// Subsystem: core
// Class:   ptxClipRegions
//
// Evidence:
//   GTAVSRC: ptxClipRegions::GetData  (rage/suite/src/rmptfx/ptxparticlerule.cpp)
//   literal: ptxu_AnimateTexture
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_141c29ad0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"
#include "gta6decomp/ptxClipRegions.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ptxClipRegions__GetData(void)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  uint uVar8;
  longlong lVar9;
  
  FUN_141c29ad0(_DAT_14a943760,&UNK_14677f19d,2,&UNK_140743a10);
  FUN_141c29ad0(_DAT_14a943760,&UNK_146783694,1,&UNK_140547bc0);
  FUN_141c29ad0(_DAT_14a943760,&UNK_146781ff1,0x11,&UNK_1409af0b0);
  FUN_141c29ad0(_DAT_14a943760,&UNK_14677d1b3,3,&UNK_1412d1390);
  FUN_141c29ad0(_DAT_14a943760,&UNK_14677eda2,0,&UNK_140d8b820);
  FUN_141c29ad0(_DAT_14a943760,&UNK_14677f4ac,0x10,&UNK_140aeb4c0);
  FUN_141c29ad0(_DAT_14a943760,&UNK_14677cfff,0x13,&UNK_14081c810);
  FUN_141c29ad0(_DAT_14a943760,&UNK_146781100,8,&UNK_1407e0ba0);
  FUN_141c29ad0(_DAT_14a943760,&UNK_14677a79b,9,&UNK_1407ba920);
  FUN_141c29ad0(_DAT_14a943760,&UNK_14677fdfd,0xd,&UNK_144ade870);
  FUN_141c29ad0(_DAT_14a943760,&UNK_146783a57,0xe,&UNK_14591ba30);
  FUN_141c29ad0(_DAT_14a943760,&UNK_14677ac19,0xf,&UNK_144ade880);
  FUN_141c29ad0(_DAT_14a943760,&UNK_14677a1a4,0x14,&UNK_1415553e0);
  FUN_141c29ad0(_DAT_14a943760,&UNK_146781ea4,6,&UNK_140c1dc60);
  FUN_141c29ad0(_DAT_14a943760,&UNK_14677f0aa,5,&UNK_1408a7710);
  FUN_141c29ad0(_DAT_14a943760,&UNK_14678181c,7,&UNK_140547c00);
  FUN_141c29ad0(_DAT_14a943760,&UNK_14677ee22,0x12,&UNK_140ef2060);
  FUN_141c29ad0(_DAT_14a943760,&UNK_1467785cd,4,&UNK_140547be0);
  FUN_141c29ad0(_DAT_14a943760,&UNK_146781b3f,0x1b,&UNK_1404b3ba0);
  FUN_141c29ad0(_DAT_14a943760,&UNK_1467801ae,0x1d,&UNK_140d61500);
  lVar3 = _DAT_14a943760;
  uVar8 = *(uint *)(_DAT_14a943760 + 0x29620);
  plVar1 = (longlong *)(_DAT_14a943760 + 0x29618);
  if (uVar8 != 0) {
    lVar9 = *plVar1;
    uVar6 = func_0x0001413deb10(&UNK_1467800e3);
    lVar9 = *(longlong *)(lVar9 + ((uVar6 & 0xffffffff) % (ulonglong)uVar8) * 8);
    if (lVar9 == 0) goto code_r0x000141c29b3b;
    do {
      iVar4 = func_0x000145f407d0(&UNK_1467800e3);
      if (iVar4 == 0) {
        return;
      }
      lVar9 = *(longlong *)(lVar9 + 0x10);
    } while (lVar9 != 0);
    if (uVar8 != 0) goto code_r0x000141c29b3b;
  }
  FUN_145810bd0(plVar1);
  uVar8 = *(uint *)(lVar3 + 0x29620);
code_r0x000141c29b3b:
  uVar5 = *(int *)(lVar3 + 0x29628) + 1;
  *(uint *)(lVar3 + 0x29628) = uVar5;
  if ((uVar5 == uVar8) && (*(char *)(lVar3 + 0x2962f) != '\0')) {
    func_0x0001400f6200(uVar8);
    FUN_1413dea60(plVar1);
    uVar8 = *(uint *)(lVar3 + 0x29620);
  }
  uVar6 = func_0x0001413deb10(&UNK_1467800e3);
  uVar6 = (uVar6 & 0xffffffff) % (ulonglong)uVar8;
  lVar9 = *plVar1;
  uVar2 = *(undefined8 *)(lVar9 + uVar6 * 8);
  puVar7 = (undefined8 *)func_0x000144f97130(0x18);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &UNK_1467800e3;
    puVar7[1] = 0;
    puVar7[2] = uVar2;
  }
  *(undefined8 **)(lVar9 + uVar6 * 8) = puVar7;
  *(undefined **)(lVar3 + 0x29710) = &UNK_141010590;
  return;
}

