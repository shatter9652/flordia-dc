// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400d0610  size: 720 bytes
// Name:    FUN_1400d0610
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144f67ed0, FUN_1453346f0, FUN_144f67d00, FUN_144f67c80, FUN_145647140, FUN_144f67b10, FUN_145258bf0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1400d0610(longlong *param_1,int param_2)

{
  byte bVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [32];
  undefined1 auVar4 [32];
  undefined1 auVar5 [32];
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined4 *puVar9;
  undefined2 uVar10;
  uint uVar11;
  undefined8 unaff_RBX;
  undefined7 uVar13;
  ulonglong uVar12;
  longlong *plVar14;
  short sVar15;
  longlong lVar16;
  ulonglong uVar17;
  undefined1 auVar18 [32];
  undefined1 auVar19 [32];
  undefined1 in_ZMM3 [64];
  undefined1 auVar20 [32];
  undefined8 uStack_650;
  longlong lStack_648;
  undefined4 uStack_640;
  undefined1 auStack_63b [11];
  undefined1 auStack_630 [14];
  undefined2 auStack_622 [757];
  int iStack_38;
  char cStack_32;
  
  if ((*(byte *)((longlong)param_1 + 0x475) & 0x40) == 0) {
    param_1[0x90] = param_1[0x90] | 0x400000000000;
  }
  uVar13 = (undefined7)((ulonglong)unaff_RBX >> 8);
  if (param_2 == 0) {
    func_0x000144f997f0(param_1);
    FUN_144f67ed0(&lStack_648);
    plVar14 = &lStack_648;
    if ((int)param_1[0xc2] == 1) {
      uStack_650 = 0x1400d0741;
      lVar7 = FUN_145647140();
      lVar7 = -lVar7;
      puVar9 = (undefined4 *)((longlong)&lStack_648 + lVar7);
      uVar10 = 0;
      *(undefined2 *)((longlong)auStack_622 + lVar7) = 0;
      *(undefined8 *)((longlong)&uStack_640 + lVar7) = 0;
      *(undefined8 *)(auStack_63b + lVar7) = 0;
      *(undefined8 *)(auStack_630 + lVar7) = 0;
      *(undefined8 *)(auStack_630 + lVar7 + 5) = 0;
      uVar12 = (ulonglong)*(uint *)((longlong)param_1 + 0x664);
      *(undefined8 *)((longlong)&uStack_650 + lVar7) = 0x1400d0777;
      lVar8 = FUN_145647140();
      lVar8 = -lVar8;
      plVar14 = (longlong *)((longlong)&lStack_648 + lVar8 + lVar7);
      *(undefined2 *)(puVar9 + 8) = uVar10;
      *(longlong *)(puVar9 + 2) = (longlong)&lStack_648 + lVar8 + lVar7;
      sVar15 = (short)uVar12;
      *(short *)((longlong)puVar9 + 0x12) = sVar15;
      *(undefined1 *)(puVar9 + 5) = 0;
      *(short *)(puVar9 + 4) = sVar15;
      if (sVar15 != 0) {
        auVar18._8_8_ = _DAT_145f437c0;
        auVar18._0_8_ = _DAT_145f437c0;
        auVar18._16_8_ = _DAT_145f437c0;
        auVar18._24_8_ = _DAT_145f437c0;
        auVar3 = vpcmpeqd_avx2(in_ZMM3._0_32_,in_ZMM3._0_32_);
        lVar16 = (uVar12 & 0xffff) - 1;
        uVar17 = 0;
        auVar19._8_8_ = lVar16;
        auVar19._0_8_ = lVar16;
        auVar19._16_8_ = lVar16;
        auVar19._24_8_ = lVar16;
        auVar4 = vpmovsxbq_avx2(ZEXT416(_DAT_145f43800));
        do {
          auVar20._8_8_ = uVar17;
          auVar20._0_8_ = uVar17;
          auVar20._16_8_ = uVar17;
          auVar20._24_8_ = uVar17;
          auVar20 = vpor_avx2(auVar20,auVar4);
          auVar20 = vpcmpgtq_avx2(auVar20 ^ auVar18,auVar19 ^ auVar18);
          auVar20 = auVar20 ^ auVar3;
          auVar2 = vpackssdw_avx(auVar20._0_16_,auVar20._16_16_);
          auVar2 = vpmaskmovd_avx2(auVar2,*(undefined1 (*) [16])
                                           ((longlong)param_1 + uVar17 * 4 + 0x668));
          auVar5 = vpmovzxdq_avx2(auVar2);
          auVar20 = vpmaskmovq_avx2(auVar20,auVar5);
          *(undefined1 (*) [32])((longlong)&lStack_648 + uVar17 * 8 + lVar8 + lVar7) = auVar20;
          uVar17 = uVar17 + 4;
        } while (((int)(uVar12 & 0xffff) + 3U & 0xfffffffc) != uVar17);
      }
      auStack_63b._3_8_ = puVar9;
      *puVar9 = 1;
      uStack_640 = 0;
    }
    if (((*(byte *)((longlong)param_1 + 0x869) & 8) != 0) && (iStack_38 != 0)) {
      if (cStack_32 == '\x01') {
        *(undefined8 *)((longlong)plVar14 + -0x28) = 0x1400d0852;
        lVar8 = func_0x000144febb80(&lStack_648);
        lVar7 = *(longlong *)(lVar8 + 0xc0);
        iVar6 = *(int *)(lVar8 + 200);
        uVar11 = 0;
        do {
          if (*(char *)(lVar7 + 0x1e + (ulonglong)uVar11) == '\x03') {
            *(undefined1 *)(lVar7 + 0x166 + (ulonglong)uVar11) = 1;
          }
          uVar11 = uVar11 + iVar6;
          iStack_38 = iStack_38 + -1;
        } while (iStack_38 != 0);
      }
      else if (*(char *)(lStack_648 + 0x1e) == '\x03') {
        *(undefined1 *)(lStack_648 + 0x166) = 1;
      }
    }
    *(undefined8 *)((longlong)plVar14 + -0x28) = 0x1400d08a2;
    iVar6 = FUN_145258bf0(&lStack_648);
    uVar12 = CONCAT71(uVar13,iVar6 != 0);
    *(undefined8 *)((longlong)plVar14 + -0x28) = 0x1400d08b7;
    FUN_144f67c80(&lStack_648);
  }
  else {
    lVar7 = FUN_144f67d00();
    if (lVar7 != 0) {
      if (*(char *)(*param_1 + 0x1e) == '\x05') {
        lVar8 = func_0x000144febb80(param_1);
        *(undefined1 *)(lVar8 + 0xea) = 0;
      }
      iVar6 = FUN_1453346f0(_DAT_147ed0450,lVar7);
      uVar12 = CONCAT71(uVar13,1);
      if (iVar6 != -1) goto LAB_1400d08bb;
      FUN_144f67b10(lVar7);
    }
    if (*(char *)(*param_1 + 0x1e) == '\x05') {
      lVar7 = func_0x00014010a570(param_1);
      bVar1 = *(byte *)(lVar7 + 0xe8);
      for (uVar11 = 0; bVar1 != uVar11; uVar11 = uVar11 + 1) {
        lVar7 = func_0x000144febb80(param_1);
        lVar7 = *(longlong *)
                 (*(longlong *)(lVar7 + 0xc0) + 0x10 + (ulonglong)(*(int *)(lVar7 + 200) * uVar11));
        if (lVar7 != 0) {
          *(undefined4 *)(lVar7 + 0x20) = 2;
        }
      }
    }
    else if (param_1[0xc3] != 0) {
      *(undefined4 *)(param_1[0xc3] + 0x20) = 2;
    }
    uVar12 = 0;
  }
LAB_1400d08bb:
  return uVar12 & 0xffffffff;
}

