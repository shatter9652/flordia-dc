// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 143d97af0  size: 1148 bytes
// Name:    CDebug::SetVersionNumber
// Subsystem: core
// Class:   CDebug
//
// Evidence:
//   GTAVSRC: CDebug::SetVersionNumber  (game/debug/Debug.cpp)
//   literal: common:/data/version.txt
//
// Referenced strings (3 in this body, 3 including direct callees):
//   "[INSTALL_VERSION[BUILD_VERSION]"
//   "[BUILD_VERSION]"
//   "[SAVEGAME_VERSIO"
// Callees: FUN_141f685f0, FUN_145c8f630, FUN_145352540, FUN_141f68830, FUN_1412da520, FUN_140f344f0, FUN_143d97f70, FUN_145b80770
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"
#include "gta6decomp/CDebug.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void CDebug__SetVersionNumber(void)

{
  char cVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  byte bVar7;
  char cVar8;
  longlong lVar9;
  char *pcVar10;
  undefined8 uVar11;
  longlong lVar12;
  bool bVar13;
  int iVar14;
  longlong lVar15;
  ulonglong uVar16;
  undefined7 uVar17;
  int iVar18;
  ulonglong uVar19;
  byte bVar20;
  undefined1 auVar21 [64];
  undefined1 auVar22 [64];
  undefined1 auVar23 [64];
  undefined1 auVar24 [64];
  ulonglong uStack_d8;
  undefined1 uStack_d0;
  undefined1 uStack_cf;
  undefined6 uStack_ce;
  char cStack_c8;
  undefined8 uStack_c7;
  undefined1 uStack_bf;
  undefined8 auStack_90 [10];
  
  FUN_141f68830();
  lVar9 = FUN_141f685f0(&UNK_1467798ac,&UNK_14677e36c);
  if (lVar9 == 0) {
    DAT_14983d4b0 = 0;
    DAT_14983d4d0 = 0;
  }
  else {
    auVar22 = ZEXT1664(_DAT_146178e30);
    auVar23 = ZEXT1664(_DAT_146178e40);
    auVar24 = ZEXT1664(_DAT_146178e50);
    auVar2 = vpunpcklqdq_avx(SUB6416(ZEXT864(0x5f4e4f4953524556),0),
                             SUB6416(ZEXT864(0x5d5245424d554e),0));
    auVar21 = ZEXT1664(auVar2);
LAB_143d97bf6:
    while( true ) {
      uVar16 = 0x4e4f49535245565b;
      pcVar10 = (char *)FUN_140f344f0();
      if (pcVar10 == (char *)0x0) break;
      if ((*pcVar10 != '\0') && (*pcVar10 != '#')) {
        FUN_1412da520(pcVar10,&UNK_14677cfa8,&uStack_d8);
        if ((cStack_c8 == '\0' && uStack_d8 == 0x4e4f49535245565b) &&
            CONCAT62(uStack_ce,CONCAT11(uStack_cf,uStack_d0)) == 0x5d5245424d554e5f) {
          uVar11 = FUN_140f344f0(lVar9,1);
          FUN_1412da520(uVar11,&UNK_14677cfa8,&DAT_14983d4b0);
          uVar19 = 0;
          iVar18 = 0;
          bVar20 = 0;
          do {
            cVar1 = (&DAT_14983d4b0)[uVar19];
            uVar16 = CONCAT71((int7)(uVar16 >> 8),cVar1);
            bVar7 = func_0x00014375e880(uVar16 & 0xffffffff);
            bVar7 = cVar1 == '.' | bVar7;
            if (bVar7 == 1) {
              *(char *)((longlong)iVar18 + 0x14983d530) = cVar1;
              iVar18 = iVar18 + 1;
            }
            else if ((bVar20 & 1) != 0) goto LAB_143d97c9f;
            if ((0x1d < uVar19) || (uVar19 = uVar19 + 1, bVar20 = bVar7, 0x1e < iVar18))
            goto LAB_143d97c9f;
          } while( true );
        }
        goto LAB_143d97d19;
      }
    }
    if (DAT_14983d550 == '\0') {
      lVar12 = 0;
      iVar18 = 0;
      bVar13 = false;
      do {
        cVar1 = (&DAT_14983d4b0)[lVar12];
        if (bVar13) {
          if ((cVar1 == '\0') || (cVar1 == '_')) break;
          if (0x1f < iVar18) {
            iVar18 = 0;
            break;
          }
          lVar15 = (longlong)iVar18;
          iVar18 = iVar18 + 1;
          (&DAT_14983d550)[lVar15] = cVar1;
LAB_143d97e4c:
          bVar13 = true;
        }
        else {
          if ((cVar1 == '_') || (cVar1 == '-')) goto LAB_143d97e4c;
          bVar13 = false;
        }
        lVar12 = lVar12 + 1;
      } while (lVar12 != 0x1f);
      (&DAT_14983d550)[iVar18] = 0;
    }
    if (DAT_14983d570 == '\0') {
      lVar12 = 0;
      iVar18 = 0;
      iVar14 = 0;
      do {
        cVar1 = (&DAT_14983d4b0)[lVar12];
        if (iVar14 == 2) {
          if ((cVar1 == '\0') || (cVar1 == '-')) break;
          if (0x1f < iVar18) {
            iVar18 = 0;
            break;
          }
          lVar15 = (longlong)iVar18;
          iVar18 = iVar18 + 1;
          (&DAT_14983d570)[lVar15] = cVar1;
          iVar14 = 2;
        }
        else if ((cVar1 == '_') || (cVar1 == '-')) {
          iVar14 = iVar14 + 1;
        }
        lVar12 = lVar12 + 1;
      } while (lVar12 != 0x1f);
      (&DAT_14983d570)[iVar18] = 0;
      if (DAT_14983d570 == '\0') {
        _DAT_14983d578 = 0x79;
        _DAT_14983d570 = 0x726f74735f627573;
      }
    }
    func_0x000141c12e50(0x14983d5b0,&UNK_14678a245,0x80);
    auStack_90[0] = FUN_145c8f630();
    FUN_145352540(0x14983d5b0,auStack_90,0x80);
    FUN_143d97f70();
    FUN_145b80770(0x14983d5b0,&UNK_14677cfa3,&DAT_14983d4b0);
    FUN_145b80770(0x14983d5b0,&UNK_14678620c);
    func_0x000145c90c10(lVar9);
  }
  return;
LAB_143d97c9f:
  uVar19 = 0;
  bVar13 = false;
  *(undefined1 *)((longlong)iVar18 + 0x14983d530) = 0;
  do {
    cVar1 = *(char *)(uVar19 + 0x14983d530);
    uVar17 = (undefined7)(uVar16 >> 8);
    uVar16 = CONCAT71(uVar17,cVar1);
    cVar8 = func_0x00014375e880(uVar16 & 0xffffffff);
    if (cVar8 == '\0') {
      if (cVar1 != '.' || bVar13) goto LAB_143d97cf2;
      bVar13 = true;
      uVar16 = CONCAT71(uVar17,0x2e);
    }
    else {
      if ((bool)(cVar1 == '.' & bVar13)) goto LAB_143d97cf2;
      bVar13 = (bool)(bVar13 | cVar1 == '.');
    }
    (&DAT_14983d4d0)[uVar19] = (char)uVar16;
    uVar19 = uVar19 + 1;
  } while (uVar19 != 0x1f);
  uVar19 = 0x1f;
LAB_143d97cf2:
  (&DAT_14983d4d0)[uVar19 & 0xffffffff] = 0;
LAB_143d97d19:
  auVar5._1_6_ = uStack_ce;
  auVar5[0] = uStack_cf;
  auVar5[7] = cStack_c8;
  auVar5._8_8_ = uStack_c7;
  auVar2[8] = uStack_d0;
  auVar2._0_8_ = uStack_d8;
  auVar2[9] = uStack_cf;
  auVar2._10_6_ = uStack_ce;
  auVar2 = vpor_avx(auVar22._0_16_ ^ auVar2,auVar21._0_16_ ^ auVar5);
  if (auVar2 == (undefined1  [16])0x0) {
    uVar11 = FUN_140f344f0(lVar9,1);
    FUN_1412da520(uVar11,&UNK_14677cfa8,0x14983d590);
  }
  auVar3[8] = uStack_d0;
  auVar3._0_8_ = uStack_d8;
  auVar3[9] = uStack_cf;
  auVar3._10_6_ = uStack_ce;
  if (auVar23._0_16_ == auVar3) {
    uVar11 = FUN_140f344f0(lVar9,1);
    FUN_1412da520(uVar11,&UNK_14677cfa8,&DAT_14983d550);
  }
  if ((cStack_c8 == '\0' && uStack_d8 == 0x5f48434e4152425b) &&
      CONCAT62(uStack_ce,CONCAT11(uStack_cf,uStack_d0)) == 0x5d4e4f4953524556) {
    uVar11 = FUN_140f344f0(lVar9,1);
    FUN_1412da520(uVar11,&UNK_14677cfa8,&DAT_14983d570);
  }
  auVar6[6] = cStack_c8;
  auVar6._0_6_ = uStack_ce;
  auVar6._7_8_ = uStack_c7;
  auVar6[0xf] = uStack_bf;
  auVar4[8] = uStack_d0;
  auVar4._0_8_ = uStack_d8;
  auVar4[9] = uStack_cf;
  auVar4._10_6_ = uStack_ce;
  auVar2 = vpor_avx(auVar24._0_16_ ^ auVar4,auVar21._0_16_ ^ auVar6);
  if (auVar2 == (undefined1  [16])0x0) {
    uVar11 = FUN_140f344f0(lVar9,1);
    FUN_1412da520(uVar11,&UNK_1467854e3,0x146c31604);
  }
  goto LAB_143d97bf6;
}

