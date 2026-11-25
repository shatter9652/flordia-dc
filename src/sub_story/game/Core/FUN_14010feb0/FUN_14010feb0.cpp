// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14010feb0  size: 93 bytes
// Name:    FUN_14010feb0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145441be0, FUN_14010ff10
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Possible PIC construction at 0x000140110255: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000140110392: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00014011025a) */
/* WARNING: Removing unreachable block (ram,0x00014011028e) */
/* WARNING: Removing unreachable block (ram,0x000140110309) */
/* WARNING: Removing unreachable block (ram,0x000140110311) */
/* WARNING: Removing unreachable block (ram,0x000140110316) */
/* WARNING: Removing unreachable block (ram,0x000140110319) */
/* WARNING: Removing unreachable block (ram,0x00014011029f) */
/* WARNING: Removing unreachable block (ram,0x0001401102b7) */
/* WARNING: Removing unreachable block (ram,0x0001401102ba) */
/* WARNING: Removing unreachable block (ram,0x0001401102cb) */
/* WARNING: Removing unreachable block (ram,0x0001401102dc) */
/* WARNING: Removing unreachable block (ram,0x0001401102e9) */
/* WARNING: Removing unreachable block (ram,0x0001401102f2) */
/* WARNING: Removing unreachable block (ram,0x000140110399) */
/* WARNING: Removing unreachable block (ram,0x0001401103e7) */
/* WARNING: Removing unreachable block (ram,0x0001401103b3) */
/* WARNING: Removing unreachable block (ram,0x0001401102ff) */
/* WARNING: Removing unreachable block (ram,0x000140110307) */
/* WARNING: Removing unreachable block (ram,0x000140110323) */
/* WARNING: Removing unreachable block (ram,0x000140110325) */
/* WARNING: Removing unreachable block (ram,0x000140110328) */
/* WARNING: Removing unreachable block (ram,0x00014011032d) */
/* WARNING: Removing unreachable block (ram,0x000140110376) */
/* WARNING: Removing unreachable block (ram,0x000140110355) */
/* WARNING: Removing unreachable block (ram,0x0001401103d8) */
/* WARNING: Removing unreachable block (ram,0x000140110397) */
/* WARNING: Removing unreachable block (ram,0x00014011035a) */

void FUN_14010feb0(longlong param_1)

{
  undefined4 uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong unaff_RBX;
  longlong unaff_RSI;
  undefined1 *unaff_RDI;
  undefined1 auVar10 [16];
  undefined8 auStack_170 [7];
  undefined1 auStack_134 [28];
  undefined1 auStack_118 [32];
  undefined1 auStack_f8 [32];
  undefined1 auStack_d8 [32];
  undefined1 auStack_b8 [32];
  undefined1 auStack_98 [32];
  undefined1 auStack_78 [32];
  undefined1 auStack_58 [32];
  undefined1 auStack_38 [32];
  
  if ((*(byte *)(param_1 + 0xbc) & 0x10) != 0) {
    if (*(char *)(param_1 + 0xa0) == '\0') {
      auStack_38._8_8_ = 0x14010fee2;
      cVar5 = FUN_145441be0(*(undefined8 *)((longlong)*(char *)(param_1 + 0xb8) * 8 + 0x149ab7da0));
      if (cVar5 == '\0') goto LAB_14010feee;
    }
    auStack_38._8_8_ = 0x14010feee;
    FUN_14010ff10(param_1);
  }
LAB_14010feee:
  if ((*(byte *)(param_1 + 0xbc) & 0x12) != 2) {
    return;
  }
  auStack_170[0] = 0x1401100fc;
  FUN_144e65ca0(auStack_134,0xffffffff);
  auVar10._0_12_ = ZEXT812(0);
  auVar10._12_4_ = 0;
  auStack_58 = ZEXT1632(auVar10);
  auStack_d8 = ZEXT1632(auVar10);
  auStack_118 = ZEXT1632(auVar10);
  auStack_170[0] = 0x140110151;
  auStack_f8 = auStack_118;
  auStack_b8 = auStack_d8;
  auStack_98 = auStack_d8;
  auStack_78 = auStack_d8;
  auStack_38 = auStack_58;
  FUN_140004b40(0x149ab3cf8);
  *(undefined4 *)(param_1 + 0xac) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x20) = 0;
  auStack_170[0] = 0x14011016e;
  iVar6 = func_0x000144fb9860(*(undefined2 *)(param_1 + 0xb4));
  if (iVar6 == 0) {
    lVar7 = *(longlong *)(param_1 + 8);
    if (((*(uint *)(param_1 + 0xa4) < 0xfffffffe) || (*(longlong *)(lVar7 + 0x30) == 0)) ||
       ((*(byte *)(param_1 + 0xbc) & 4) == 0)) {
      *(undefined8 *)(lVar7 + 0x30) = 0;
      auStack_170[0] = 0x1401101c0;
      func_0x000145f40580(*(undefined8 *)(lVar7 + 0x10),0,*(undefined4 *)(lVar7 + 0x20));
      uVar1 = *(undefined4 *)(param_1 + 0xa4);
    }
    else {
      uVar1 = *(undefined4 *)(param_1 + 0xa8);
      *(undefined4 *)(param_1 + 0xa4) = uVar1;
    }
    auStack_170[0] = 0x1401101cb;
    lVar7 = func_0x000140048a40(uVar1);
    if (lVar7 == 0) {
      *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(param_1 + 0xa4);
      auStack_170[0] = 0x1401103d3;
      FUN_145c1a980(param_1,0);
    }
    else {
      unaff_RDI = auStack_118;
      auStack_170[0] = 0x1401101e9;
      FUN_140048ba0(unaff_RDI,0x100,lVar7);
      uVar2 = *(uint *)(param_1 + 0xa4);
      unaff_RBX = (ulonglong)uVar2;
      auStack_170[0] = 0x1401101f7;
      FUN_1443b0420(param_1);
      auStack_170[0] = 0x1401101ff;
      FUN_1455946d0(param_1);
      *(undefined4 *)(param_1 + 0xa4) = 0xffffffff;
      *(byte *)(param_1 + 0xbc) = *(byte *)(param_1 + 0xbc) & 0xfd;
      *(undefined1 *)(param_1 + 0xbb) = *(undefined1 *)(param_1 + 0xba);
      *(undefined1 *)(param_1 + 0xba) = 0;
      auStack_170[0] = 0x14011022d;
      FUN_141e09fb0(param_1,1);
      *(uint *)(param_1 + 0xa8) = uVar2;
      *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_1 + 0x18);
      *(undefined4 *)(param_1 + 0x18) = 0;
      *(byte *)(param_1 + 0xbd) = *(byte *)(param_1 + 0xbd) & 0xfc;
      *(byte *)(param_1 + 0xbc) = *(byte *)(param_1 + 0xbc) & 0x7f;
      register0x00000020 = (BADSPACEBASE *)auStack_170;
      auStack_170[0] = 0x14011025a;
      unaff_RSI = param_1;
    }
  }
  iRam0000000149ab3d08 = iRam0000000149ab3d08 + -1;
  uVar9 = uRam0000000149ab3cf8;
  if (iRam0000000149ab3d08 == 0) {
    do {
      uVar8 = uVar9;
      LOCK();
      uVar9 = uVar8;
      uVar3 = (ulonglong)((int)uVar8 - 1) | 0xffffffff00000000;
      if (uVar8 != uRam0000000149ab3cf8) {
        uVar9 = uRam0000000149ab3cf8;
        uVar3 = uRam0000000149ab3cf8;
      }
      uRam0000000149ab3cf8 = uVar3;
      UNLOCK();
    } while (uVar8 != uVar9);
    if ((uVar8 & 0xfffffffe) != 0) {
      *(longlong *)((longlong)register0x00000020 + -8) = unaff_RSI;
      *(undefined1 **)((longlong)register0x00000020 + -0x10) = unaff_RDI;
      *(ulonglong *)((longlong)register0x00000020 + -0x18) = unaff_RBX;
      *(longlong *)((longlong)register0x00000020 + -0x20) = lRam0000000149ab3d00;
      iRam0000000149ab3d08 = 0;
      lVar7 = lRam0000000149ab3d00;
      while( true ) {
        while (lVar7 < 0) {
          *(undefined8 *)((longlong)register0x00000020 + -0x50) = 0x140019c89;
          cVar5 = FUN_1400062d0(0x149ab3d00,1,(longlong *)((longlong)register0x00000020 + -0x20));
          if (cVar5 != '\0') {
            return;
          }
          lVar7 = *(longlong *)((longlong)register0x00000020 + -0x20);
        }
        LOCK();
        lVar4 = lVar7 + 0x100000000;
        if (lVar7 != lRam0000000149ab3d00) {
          lVar7 = lRam0000000149ab3d00;
          lVar4 = lRam0000000149ab3d00;
        }
        lRam0000000149ab3d00 = lVar4;
        UNLOCK();
        if (*(longlong *)((longlong)register0x00000020 + -0x20) == lVar7) break;
        *(longlong *)((longlong)register0x00000020 + -0x20) = lVar7;
      }
      return;
    }
  }
  return;
}

