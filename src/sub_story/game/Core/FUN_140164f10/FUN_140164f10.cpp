// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140164f10  size: 644 bytes
// Name:    FUN_140164f10
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144e4ba80
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140164f10(longlong param_1,undefined4 param_2,float param_3,int *param_4)

{
  undefined1 (*pauVar1) [32];
  longlong lVar2;
  uint *puVar3;
  undefined8 uVar4;
  undefined1 auVar5 [32];
  char cVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  longlong lVar11;
  code *pcVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  longlong lVar22;
  longlong lVar23;
  undefined1 (*pauVar24) [32];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  float fVar27;
  float fVar29;
  float fVar30;
  undefined1 auVar28 [16];
  float fVar31;
  undefined1 auVar32 [16];
  
  iVar7 = *param_4;
  iVar8 = param_4[1];
  iVar9 = param_4[2];
  if ((iVar8 == _DAT_149e2fecc) && (DAT_14764e828 == '\0')) {
    iVar20 = FUN_144e4ba80();
    uVar21 = FUN_144e4ba80();
    if (uVar21 < iVar20 + 1000U) {
      do {
        if (*(char *)(_DAT_14a924088 + 0x3cdf9) != '\0') goto LAB_140164f93;
        func_0x00014092eca0(1);
        iVar19 = _DAT_149e2fecc;
        uVar21 = FUN_144e4ba80();
      } while ((iVar8 == iVar19) && (uVar21 < iVar20 + 1000U));
      if (iVar8 != iVar19) goto LAB_140164f9a;
    }
LAB_140164f93:
    DAT_14764e828 = '\x01';
  }
LAB_140164f9a:
  if (*(int *)(param_1 + 0x61c) == 0) {
    *(undefined4 *)(param_1 + 0x61c) = param_2;
  }
  else {
    lVar2 = param_1 + 0x340 + (longlong)iVar7 * 0xa0;
    fVar27 = *(float *)(param_1 + 0x398 + (longlong)iVar9 * 0xa0);
    auVar28._8_8_ = 0;
    auVar28._0_8_ = *(ulonglong *)(param_1 + 0x39c + (longlong)iVar9 * 0xa0);
    fVar29 = *(float *)(lVar2 + 0x58);
    auVar32._8_8_ = 0;
    auVar32._0_8_ = *(ulonglong *)(lVar2 + 0x5c);
    *(undefined4 *)(param_1 + 0x61c) = param_2;
    *(undefined4 *)(lVar2 + 100) = param_2;
    cVar6 = *(char *)(param_1 + 0x632);
    *(char *)(param_1 + 0x632) = cVar6 + '\x01';
    *(char *)(lVar2 + 0x94) = cVar6;
    if (param_3 <= 0.0) {
      *(undefined4 *)(lVar2 + 0x54) = 0;
      *(undefined8 *)(lVar2 + 0x4c) = 0;
    }
    else {
      auVar32 = vsubps_avx(auVar32,auVar28);
      auVar28 = vmovlhps_avx(ZEXT416((uint)(fVar29 - fVar27)),auVar32);
      auVar32 = vshufps_avx(auVar28,auVar32,0xd8);
      param_3 = param_3 * _DAT_14615f324;
      auVar26._4_4_ = param_3;
      auVar26._0_4_ = param_3;
      auVar26._8_4_ = param_3;
      auVar26._12_4_ = param_3;
      auVar28 = vrcpps_avx(auVar26);
      fVar27 = auVar28._0_4_;
      fVar29 = auVar28._4_4_;
      fVar30 = auVar28._8_4_;
      fVar31 = auVar28._12_4_;
      auVar25._0_4_ = (-((fVar27 * param_3 - _DAT_145fc6ed8) * fVar27) + fVar27) * auVar32._0_4_;
      auVar25._4_4_ = (-((fVar29 * param_3 - _DAT_145fc6ed8) * fVar29) + fVar29) * auVar32._4_4_;
      auVar25._8_4_ = (-((fVar30 * param_3 - _DAT_145fc6ed8) * fVar30) + fVar30) * auVar32._8_4_;
      auVar25._12_4_ = (-((fVar31 * param_3 - _DAT_145fc6ed8) * fVar31) + fVar31) * auVar32._12_4_;
      uVar4 = vmovlps_avx(auVar25);
      *(undefined8 *)(lVar2 + 0x4c) = uVar4;
      uVar10 = vextractps_avx(auVar25,2);
      *(undefined4 *)(lVar2 + 0x54) = uVar10;
    }
  }
  lVar2 = param_1 + 0x340 + (longlong)iVar7 * 0xa0;
  puVar3 = (uint *)(param_1 + 0x340 + (longlong)iVar8 * 0xa0);
  if (iVar7 != iVar8) {
    puVar3[1] = 0;
    uVar21 = *(uint *)(lVar2 + 4);
    if ((ulonglong)uVar21 != 0) {
      lVar11 = *(longlong *)(lVar2 + 8);
      if (*puVar3 < uVar21) {
        if (*(longlong *)(puVar3 + 2) != 0) {
          func_0x000144d9c130();
        }
        puVar3[2] = 0;
        puVar3[3] = 0;
        *puVar3 = 0;
        lVar22 = func_0x000144d9c140(0x10);
        *(longlong *)(puVar3 + 2) = lVar22;
        if (lVar22 == 0) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        *puVar3 = uVar21;
      }
      lVar22 = *(longlong *)(puVar3 + 2);
      lVar23 = 0;
      do {
        pauVar24 = (undefined1 (*) [32])(lVar22 + lVar23);
        if (pauVar24 != (undefined1 (*) [32])0x0) {
          pauVar1 = (undefined1 (*) [32])(lVar11 + lVar23);
          auVar5 = *pauVar1;
          pauVar24[1] = pauVar1[1];
          *pauVar24 = auVar5;
        }
        lVar23 = lVar23 + 0x40;
      } while ((ulonglong)uVar21 << 6 != lVar23);
      puVar3[1] = uVar21;
    }
  }
  uVar4 = *(undefined8 *)(lVar2 + 0x10);
  uVar13 = *(undefined8 *)(lVar2 + 0x18);
  uVar14 = *(undefined8 *)(lVar2 + 0x20);
  uVar15 = *(undefined8 *)(lVar2 + 0x28);
  uVar16 = *(undefined8 *)(lVar2 + 0x28);
  uVar17 = *(undefined8 *)(lVar2 + 0x30);
  uVar18 = *(undefined8 *)(lVar2 + 0x38);
  *(undefined8 *)(puVar3 + 8) = *(undefined8 *)(lVar2 + 0x20);
  *(undefined8 *)(puVar3 + 10) = uVar16;
  *(undefined8 *)(puVar3 + 0xc) = uVar17;
  *(undefined8 *)(puVar3 + 0xe) = uVar18;
  *(undefined8 *)(puVar3 + 4) = uVar4;
  *(undefined8 *)(puVar3 + 6) = uVar13;
  *(undefined8 *)(puVar3 + 8) = uVar14;
  *(undefined8 *)(puVar3 + 10) = uVar15;
  uVar4 = *(undefined8 *)(lVar2 + 0x48);
  uVar13 = *(undefined8 *)(lVar2 + 0x50);
  uVar14 = *(undefined8 *)(lVar2 + 0x58);
  *(undefined8 *)(puVar3 + 0x10) = *(undefined8 *)(lVar2 + 0x40);
  *(undefined8 *)(puVar3 + 0x12) = uVar4;
  *(undefined8 *)(puVar3 + 0x14) = uVar13;
  *(undefined8 *)(puVar3 + 0x16) = uVar14;
  puVar3[0x18] = *(uint *)(lVar2 + 0x60);
  uVar4 = *(undefined8 *)(lVar2 + 0x6c);
  uVar13 = *(undefined8 *)(lVar2 + 0x74);
  uVar14 = *(undefined8 *)(lVar2 + 0x7c);
  uVar15 = *(undefined8 *)(lVar2 + 0x6f);
  uVar16 = *(undefined8 *)(lVar2 + 0x77);
  uVar17 = *(undefined8 *)(lVar2 + 0x7f);
  uVar18 = *(undefined8 *)(lVar2 + 0x87);
  *(undefined8 *)(puVar3 + 0x19) = *(undefined8 *)(lVar2 + 100);
  *(undefined8 *)(puVar3 + 0x1b) = uVar4;
  *(undefined8 *)(puVar3 + 0x1d) = uVar13;
  *(undefined8 *)(puVar3 + 0x1f) = uVar14;
  *(undefined8 *)((longlong)puVar3 + 0x6f) = uVar15;
  *(undefined8 *)((longlong)puVar3 + 0x77) = uVar16;
  *(undefined8 *)((longlong)puVar3 + 0x7f) = uVar17;
  *(undefined8 *)((longlong)puVar3 + 0x87) = uVar18;
  *(undefined1 *)((longlong)puVar3 + 0x8f) = *(undefined1 *)(lVar2 + 0x8f);
  uVar4 = *(undefined8 *)(lVar2 + 0x90);
  *(undefined8 *)((longlong)puVar3 + 0x95) = *(undefined8 *)(lVar2 + 0x95);
  *(undefined8 *)(puVar3 + 0x24) = uVar4;
  return;
}

