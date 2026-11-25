// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14010e170  size: 218 bytes
// Name:    FUN_14010e170
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140133150, FUN_145378c70
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14010e170(longlong param_1,uint param_2,longlong param_3)

{
  int *piVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  bool bVar6;
  bool bVar7;
  uint uVar8;
  undefined1 (*pauVar9) [16];
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  ulonglong uVar16;
  char cVar17;
  ulonglong uVar18;
  undefined8 unaff_XMM6_Qa;
  undefined8 unaff_XMM6_Qb;
  undefined1 auVar19 [64];
  
  pauVar9 = (undefined1 (*) [16])FUN_145378c70();
  uVar10 = 0;
  lVar13 = 0;
  LOCK();
  auVar2 = *pauVar9;
  if (ZEXT816(0) == auVar2) {
    *(undefined8 *)*pauVar9 = 0;
    *(undefined8 *)(*pauVar9 + 8) = 0;
  }
  else {
    lVar13 = auVar2._8_8_;
    uVar10 = auVar2._0_8_;
  }
  UNLOCK();
  while ((char)(uVar10 >> 0x20) == '\0') {
    *(longlong *)(param_3 + 0x30) = lVar13;
    LOCK();
    auVar2 = *pauVar9;
    auVar3._8_8_ = lVar13;
    auVar3._0_8_ = uVar10;
    if (auVar3 == auVar2) {
      *(ulonglong *)*pauVar9 = uVar10 | 0x300000000;
      *(longlong *)(*pauVar9 + 8) = param_3;
      uVar11 = uVar10;
      lVar14 = lVar13;
    }
    else {
      uVar11 = auVar2._0_8_;
      lVar14 = auVar2._8_8_;
    }
    UNLOCK();
    bVar6 = uVar10 == uVar11;
    bVar7 = lVar13 == lVar14;
    lVar13 = lVar14;
    uVar10 = uVar11;
    if (bVar6 && bVar7) {
      return;
    }
  }
  *(undefined8 *)(param_3 + 0x30) = 0;
  if ((char)(uVar10 >> 0x28) == -1) {
    uVar8 = func_0x000144fdffd0(param_1);
    uVar10 = (ulonglong)uVar8;
  }
  else {
    uVar10 = uVar10 >> 0x28;
  }
  FUN_140133150(param_1,uVar10,0,param_3);
  lVar13 = param_1 + 0x30;
  auVar19 = ZEXT1264(ZEXT812(0));
  do {
    uVar11 = 0;
    lVar14 = 0;
    lVar15 = 0;
    pauVar9 = (undefined1 (*) [16])(lVar13 + (ulonglong)((param_2 & 0x3f) << 5));
    LOCK();
    auVar2 = *pauVar9;
    if (ZEXT816(0) == auVar2) {
      *(undefined8 *)*pauVar9 = 0;
      *(undefined8 *)(*pauVar9 + 8) = 0;
    }
    else {
      lVar14 = auVar2._8_8_;
      uVar11 = auVar2._0_8_;
    }
    UNLOCK();
    while( true ) {
      uVar18 = uVar11 >> 0x20 & 0xff;
      cVar17 = (char)uVar10;
      if (uVar18 != 0) break;
      if (lVar15 != lVar14) {
        uVar10 = uVar10 & 0xffffffff;
        if (cVar17 == -1) {
          uVar8 = func_0x000144fdffd0(param_1);
          uVar10 = (ulonglong)uVar8;
        }
        FUN_144fe0070(param_1,uVar10,1,lVar14,lVar15,lVar13,unaff_XMM6_Qa,unaff_XMM6_Qb);
        lVar15 = lVar14;
      }
      LOCK();
      auVar2 = *pauVar9;
      auVar5._8_8_ = lVar14;
      auVar5._0_8_ = uVar11;
      if (auVar5 == auVar2) {
        *(ulonglong *)*pauVar9 = (uVar10 & 0xff) << 0x28 | uVar11 & 0xff0000ffffffff | 0x100000000;
        *(undefined8 *)(*pauVar9 + 8) = 0;
        uVar18 = uVar11;
        lVar12 = lVar14;
      }
      else {
        uVar18 = auVar2._0_8_;
        lVar12 = auVar2._8_8_;
      }
      UNLOCK();
      bVar6 = uVar11 == uVar18;
      bVar7 = lVar14 == lVar12;
      lVar14 = lVar12;
      uVar11 = uVar18;
      if (bVar6 && bVar7) {
        return;
      }
    }
    uVar16 = uVar11 >> 0x28;
    if (cVar17 != -1) {
      uVar16 = uVar10 & 0xff;
    }
    uVar8 = (uint)uVar16;
    if (lVar15 != lVar14) {
      if ((char)uVar16 == -1) {
        uVar8 = func_0x000144fdffd0(param_1);
        uVar16 = (ulonglong)uVar8;
      }
      uVar8 = (uint)uVar16;
      FUN_144fe0070(param_1,uVar16,(int)uVar18 == 2,lVar14,lVar15,lVar13,unaff_XMM6_Qa,unaff_XMM6_Qb
                   );
    }
    if ((char)uVar8 != -1) {
      lVar15 = *(longlong *)pauVar9[1];
      uVar10 = (ulonglong)((uVar8 & 0xff) - (uint)*(byte *)(param_1 + 8));
      lVar12 = *(longlong *)(param_1 + 0x10);
      if (lVar15 != 0) {
        do {
          if (*(char *)(lVar15 + 0x30) == -1) {
            *(char *)(lVar15 + 0x30) = (char)uVar8;
            piVar1 = (int *)(lVar12 + uVar10 * 4);
            *piVar1 = *piVar1 + 1;
          }
          lVar15 = *(longlong *)(lVar15 + 0x38);
        } while (lVar15 != 0);
        lVar12 = *(longlong *)(param_1 + 0x10);
      }
      if (*(int *)(lVar12 + uVar10 * 4) == 0) {
        func_0x000144fe0020(param_1,uVar8);
      }
    }
    *(undefined8 *)pauVar9[1] = 0;
    lVar15 = *(longlong *)(pauVar9[1] + 8);
    while (lVar15 != 0) {
      uVar8 = (uint)*(byte *)(lVar15 + 0x30) - (uint)*(byte *)(param_1 + 8);
      if (uVar8 < *(uint *)(param_1 + 0xc)) {
        piVar1 = (int *)(*(longlong *)(param_1 + 0x10) + (ulonglong)uVar8 * 4);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          func_0x000144fe0020();
        }
      }
      *(undefined1 *)(lVar15 + 0x30) = 0xff;
      *(undefined1 (*) [16])(lVar15 + 0x38) = auVar19._0_16_;
      lVar15 = *(longlong *)(lVar15 + 0x40);
    }
    *(undefined8 *)(pauVar9[1] + 8) = 0;
    do {
      uVar10 = uVar11;
      LOCK();
      auVar2 = *pauVar9;
      auVar4._8_8_ = lVar14;
      auVar4._0_8_ = uVar10;
      if (auVar4 == auVar2) {
        *(ulonglong *)*pauVar9 = (ulonglong)(param_2 + 0x40) | 0xff0000000000;
        *(undefined8 *)(*pauVar9 + 8) = 0;
        uVar11 = uVar10;
        lVar15 = lVar14;
      }
      else {
        uVar11 = auVar2._0_8_;
        lVar15 = auVar2._8_8_;
      }
      UNLOCK();
      bVar6 = lVar14 != lVar15;
      lVar14 = lVar15;
    } while (uVar11 != uVar10 || bVar6);
    uVar10 = uVar10 >> 0x30 & 0xff;
    if (uVar10 != 0) {
      func_0x000140005930();
    }
    param_2 = param_2 + 1;
    uVar10 = CONCAT71((int7)(uVar10 >> 8),0xff);
  } while( true );
}

