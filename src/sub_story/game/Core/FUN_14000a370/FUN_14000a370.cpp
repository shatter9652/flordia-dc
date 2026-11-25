// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14000a370  size: 609 bytes
// Name:    FUN_14000a370
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


ulonglong FUN_14000a370(longlong *param_1,longlong param_2)

{
  undefined1 (*pauVar1) [16];
  uint uVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  bool bVar6;
  bool bVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  ulonglong uVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  
  lVar3 = *param_1;
  uVar2 = *(uint *)(param_1 + 1);
  uVar17 = *(uint *)(param_1 + 2);
  pauVar1 = (undefined1 (*) [16])(param_1 + 4);
  auVar20._8_8_ = 0;
  auVar20._0_8_ = param_1[4];
  auVar22._8_8_ = 0;
  auVar22._0_8_ = param_1[5];
  auVar20 = vpunpcklqdq_avx(auVar20,auVar22);
  uVar19 = lVar3 + 7U & 0xfffffffffffffff8;
  uVar18 = (int)uVar19 + ((int)param_2 - (int)lVar3);
  do {
    uVar8 = (ulonglong)uVar17 + lVar3 + 7U & 0xfffffffffffffff8;
    uVar11 = (int)(uVar8 + param_2) - (int)lVar3;
    uVar14 = auVar20._0_8_;
    uVar15 = auVar20._8_8_;
LAB_14000a3da:
    while( true ) {
      uVar13 = (uint)uVar14;
      uVar16 = (uint)(uVar15 >> 0x20);
      uVar9 = uVar8;
      uVar12 = uVar11;
      if (uVar13 <= uVar17) break;
      if (uVar11 < uVar13) {
LAB_14000a3fa:
        *(uint *)(param_1 + 2) = uVar12;
        return uVar9;
      }
      LOCK();
      auVar20 = *pauVar1;
      auVar4._8_8_ = uVar15;
      auVar4._0_8_ = uVar14;
      if (auVar4 == auVar20) {
        *(ulonglong *)*pauVar1 = uVar14;
        param_1[5] = (ulonglong)(uVar16 | 1) << 0x20 | uVar15 & 0xffffffff;
        uVar9 = uVar14;
        uVar10 = uVar15;
      }
      else {
        uVar9 = auVar20._0_8_;
        uVar10 = auVar20._8_8_;
      }
      UNLOCK();
      bVar6 = uVar14 == uVar9;
      bVar7 = uVar15 == uVar10;
      uVar14 = uVar9;
      uVar15 = uVar10;
      if (bVar6 && bVar7) {
        func_0x0001402a1be0(param_1[6],1);
        uVar14 = param_1[4];
        uVar15 = param_1[5];
      }
    }
    if ((uVar8 + param_2 <= (ulonglong)uVar2 + lVar3) ||
       (uVar9 = uVar19, uVar12 = uVar18, uVar18 < uVar13)) goto LAB_14000a3fa;
    if ((*(uint *)((longlong)param_1 + 0xc) != uVar13) ||
       (*(int *)((uVar14 & 0xffffffff) + *param_1) != 0)) {
      LOCK();
      auVar20 = *pauVar1;
      auVar5._8_8_ = uVar15;
      auVar5._0_8_ = uVar14;
      if (auVar5 == auVar20) {
        *(ulonglong *)*pauVar1 = uVar14;
        param_1[5] = (ulonglong)(uVar16 | 1) << 0x20 | uVar15 & 0xffffffff;
        uVar9 = uVar14;
        uVar10 = uVar15;
      }
      else {
        uVar9 = auVar20._0_8_;
        uVar10 = auVar20._8_8_;
      }
      UNLOCK();
      bVar6 = uVar14 == uVar9;
      bVar7 = uVar15 == uVar10;
      uVar14 = uVar9;
      uVar15 = uVar10;
      if (bVar6 && bVar7) {
        func_0x0001402a1be0(param_1[6],1);
        uVar14 = param_1[4];
        uVar15 = param_1[5];
      }
      goto LAB_14000a3da;
    }
    param_1[4] = 0;
    param_1[5] = 0;
    uVar17 = 4;
    *(undefined8 *)((longlong)param_1 + 0xc) = 0x400000000;
    *(undefined4 *)*param_1 = 0;
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
    auVar21._8_8_ = 0;
    auVar21._0_8_ = param_1[4];
    auVar23._8_8_ = 0;
    auVar23._0_8_ = param_1[5];
    auVar20 = vpunpcklqdq_avx(auVar21,auVar23);
  } while( true );
}

