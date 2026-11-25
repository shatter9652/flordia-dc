// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140083a90  size: 78 bytes
// Name:    FUN_140083a90
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140871a00, FUN_140083c50
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140083a90(longlong param_1,undefined8 *param_2,undefined4 *param_3)

{
  ulonglong *puVar1;
  int *piVar2;
  uint *puVar3;
  short *psVar4;
  short sVar5;
  ushort uVar6;
  undefined4 uVar7;
  ushort *puVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  code *pcVar12;
  char cVar13;
  ushort uVar14;
  int iVar15;
  longlong lVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong *plVar19;
  uint uVar20;
  byte bVar21;
  byte bVar22;
  longlong *plVar23;
  uint uVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  bool bVar27;
  undefined4 auStack_60 [2];
  longlong *plStack_58;
  longlong *plStack_50;
  undefined4 *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  
  plStack_50 = (longlong *)0x140083aa7;
  lVar16 = FUN_140871a00();
  if (lVar16 == 0) {
    uVar7 = *(undefined4 *)(param_1 + 0x9c);
    lVar16 = 0;
  }
  else {
    plStack_50 = (longlong *)0x140083abd;
    FUN_140083c50(lVar16,*param_2,*param_3);
    uVar7 = *(undefined4 *)(param_1 + 0x9c);
  }
  puStack_30 = &UNK_14087179d;
  lVar18 = func_0x000144fdf400(uVar7);
  plVar19 = plRam00000001490996a0;
  uVar26 = plRam00000001490996a0[4];
  do {
    iVar15 = (int)uVar26;
    if (iVar15 == 0x1fffe) goto code_r0x000140871891;
    uVar17 = uVar26 & 0xffffffff;
    LOCK();
    uVar25 = plVar19[4];
    bVar27 = uVar26 == uVar25;
    if (bVar27) {
      plVar19[4] = (ulonglong)(*(uint *)(plVar19[5] + uVar17 * 4) & 0x1ffff) |
                   uVar26 & 0xffffffff00000000;
      uVar25 = uVar26;
    }
    UNLOCK();
    uVar26 = uVar25;
  } while (!bVar27);
  LOCK();
  *(int *)(plVar19 + 2) = (int)plVar19[2] + 1;
  UNLOCK();
  puVar3 = (uint *)(plVar19[5] + uVar17 * 4);
  *puVar3 = *puVar3 | *(uint *)(plVar19 + 6);
  if (*plVar19 == 0) {
code_r0x000140871891:
    pcVar12 = (code *)swi(3);
    (*pcVar12)(plVar19,lVar16);
    return;
  }
  plVar23 = (longlong *)(*plVar19 + (ulonglong)(uint)((int)plVar19[1] * iVar15));
  if (plVar19[3] != 0) {
    pcStack_40 = (code *)&UNK_140871871;
    FUN_14004c030(plVar19,plVar23);
  }
  pcStack_40 = (code *)&UNK_14087187c;
  func_0x0001408718a0(plVar23,lVar16);
  if (plVar23 == (longlong *)0x0) {
    return;
  }
  plVar19 = (longlong *)*plVar23;
  if (plVar19 == (longlong *)0x0) {
    if ((code *)plVar23[0xe] != (code *)0x0) {
      (*(code *)plVar23[0xe])((longlong)plVar23 + 0x1fU & 0xfffffffffffffff0);
    }
    plVar19 = plRam00000001490996a0;
    auVar10._8_8_ = 0;
    auVar10._0_8_ = (longlong)plVar23 - *plRam00000001490996a0;
    uVar20 = SUB164(auVar10 / ZEXT416(*(uint *)(plRam00000001490996a0 + 1)),0);
    uVar24 = *(uint *)(plRam00000001490996a0[5] +
                      (SUB168(auVar10 / ZEXT416(*(uint *)(plRam00000001490996a0 + 1)),0) &
                      0xffffffff) * 4) & 0xfffe0000 | uVar20;
    uVar20 = uVar20 & 0x1ffff | 0x20000;
    if (uVar24 < 0xfffe0000) {
      uVar20 = uVar24 + 0x20000;
    }
    puVar1 = (ulonglong *)(plRam00000001490996a0 + 4);
    LOCK();
    *(int *)(plRam00000001490996a0 + 2) = (int)plRam00000001490996a0[2] + -1;
    UNLOCK();
    uVar26 = *puVar1;
    do {
      *(uint *)(plVar19[5] + (ulonglong)(uVar20 & 0x1ffff) * 4) =
           (uint)uVar26 & 0x1ffff | uVar20 & 0xfffe0000;
      LOCK();
      uVar25 = plVar19[4];
      bVar27 = uVar26 == uVar25;
      if (bVar27) {
        plVar19[4] = (uVar26 & 0xffffffff00000000) + 0x100000000 | (ulonglong)(uVar20 & 0x1ffff);
        uVar25 = uVar26;
      }
      UNLOCK();
      uVar26 = uVar25;
    } while (!bVar27);
    goto code_r0x000140871eab;
  }
  uVar26 = *(ulonglong *)(lVar18 + 8) & 0xfffffffffffffff0;
  cVar13 = func_0x000140233920(uVar26);
  if (cVar13 == '\0') {
    lVar16 = func_0x000144eda390(*(undefined4 *)(uVar26 + 0x9c));
    if (lVar16 == 0) {
      bVar21 = 0;
code_r0x000140871d04:
      cVar13 = func_0x0001426afcb0(*(undefined2 *)((longlong)plVar19 + 0x6e));
      bVar22 = 1;
      if (cVar13 != '\0') {
        bVar22 = bVar21;
      }
    }
    else {
      bVar22 = *(byte *)(lVar16 + 0x140);
      bVar21 = bVar22;
      if ((bVar22 & 1) == 0) goto code_r0x000140871d04;
    }
    if ((bVar22 & 1) == 0) {
      cVar13 = (**(code **)(*plVar19 + 0x350))(plVar19);
      if ((cVar13 != '\0') || (cVar13 = (**(code **)(*plVar19 + 0x358))(plVar19), cVar13 != '\0')) {
        LOCK();
        *(int *)(lVar18 + 0xdb0) = _DAT_14abbef40 + 10000;
        UNLOCK();
      }
      LOCK();
      piVar2 = (int *)(lVar18 + 0x1a8);
      iVar15 = *piVar2;
      *piVar2 = *piVar2 + 1;
      UNLOCK();
      if (iVar15 + 1U < 0x21) {
        func_0x0001439bef80(lVar18 + 0x20,plVar23);
        *(byte *)(plVar19 + 5) = *(byte *)(plVar19 + 5) | 0x80;
        return;
      }
      LOCK();
      UNLOCK();
      if (iRam00000001490996ac + 1U < 0x200) {
        auStack_60[0] = *(undefined4 *)(uVar26 + 0x9c);
        puStack_48 = auStack_60;
        pcStack_40 = FUN_1439befc0;
        puStack_38 = &UNK_141b7b630;
        puStack_30 = &SUB_140004380;
        iRam00000001490996ac = iRam00000001490996ac + 1;
        plStack_58 = plVar23;
        plStack_50 = plVar19;
        FUN_1402425d0(0x1499753a8);
        return;
      }
      LOCK();
      UNLOCK();
      (**(code **)*plVar19)(plVar19);
      if ((code *)plVar23[0xe] != (code *)0x0) {
        (*(code *)plVar23[0xe])((longlong)plVar23 + 0x1fU & 0xfffffffffffffff0);
      }
      plVar19 = plRam00000001490996a0;
      auVar9._8_8_ = 0;
      auVar9._0_8_ = (longlong)plVar23 - *plRam00000001490996a0;
      uVar20 = SUB164(auVar9 / ZEXT416(*(uint *)(plRam00000001490996a0 + 1)),0);
      uVar24 = *(uint *)(plRam00000001490996a0[5] +
                        (SUB168(auVar9 / ZEXT416(*(uint *)(plRam00000001490996a0 + 1)),0) &
                        0xffffffff) * 4) & 0xfffe0000 | uVar20;
      uVar20 = uVar20 & 0x1ffff | 0x20000;
      if (uVar24 < 0xfffe0000) {
        uVar20 = uVar24 + 0x20000;
      }
      puVar1 = (ulonglong *)(plRam00000001490996a0 + 4);
      LOCK();
      *(int *)(plRam00000001490996a0 + 2) = (int)plRam00000001490996a0[2] + -1;
      UNLOCK();
      uVar26 = *puVar1;
      do {
        *(uint *)(plVar19[5] + (ulonglong)(uVar20 & 0x1ffff) * 4) =
             (uint)uVar26 & 0x1ffff | uVar20 & 0xfffe0000;
        LOCK();
        uVar25 = plVar19[4];
        bVar27 = uVar26 == uVar25;
        if (bVar27) {
          plVar19[4] = (uVar26 & 0xffffffff00000000) + 0x100000000 | (ulonglong)(uVar20 & 0x1ffff);
          uVar25 = uVar26;
        }
        UNLOCK();
        uVar26 = uVar25;
      } while (!bVar27);
      goto code_r0x000140871eab;
    }
  }
  (**(code **)*plVar19)(plVar19);
  if ((code *)plVar23[0xe] != (code *)0x0) {
    (*(code *)plVar23[0xe])((longlong)plVar23 + 0x1fU & 0xfffffffffffffff0);
  }
  plVar19 = plRam00000001490996a0;
  auVar11._8_8_ = 0;
  auVar11._0_8_ = (longlong)plVar23 - *plRam00000001490996a0;
  uVar20 = SUB164(auVar11 / ZEXT416(*(uint *)(plRam00000001490996a0 + 1)),0);
  uVar24 = *(uint *)(plRam00000001490996a0[5] +
                    (SUB168(auVar11 / ZEXT416(*(uint *)(plRam00000001490996a0 + 1)),0) & 0xffffffff)
                    * 4) & 0xfffe0000 | uVar20;
  uVar20 = uVar20 & 0x1ffff | 0x20000;
  if (uVar24 < 0xfffe0000) {
    uVar20 = uVar24 + 0x20000;
  }
  puVar1 = (ulonglong *)(plRam00000001490996a0 + 4);
  LOCK();
  *(int *)(plRam00000001490996a0 + 2) = (int)plRam00000001490996a0[2] + -1;
  UNLOCK();
  uVar26 = *puVar1;
  do {
    *(uint *)(plVar19[5] + (ulonglong)(uVar20 & 0x1ffff) * 4) =
         (uint)uVar26 & 0x1ffff | uVar20 & 0xfffe0000;
    LOCK();
    uVar25 = plVar19[4];
    bVar27 = uVar26 == uVar25;
    if (bVar27) {
      plVar19[4] = (uVar26 & 0xffffffff00000000) + 0x100000000 | (ulonglong)(uVar20 & 0x1ffff);
      uVar25 = uVar26;
    }
    UNLOCK();
    uVar26 = uVar25;
  } while (!bVar27);
code_r0x000140871eab:
  if (plVar19[3] == 0) {
    return;
  }
  uVar26 = (ulonglong)((longlong)plVar23 - *plVar19) >> 0x10;
  uVar25 = ((ulonglong)*(uint *)(plVar19 + 1) - 1) + ((longlong)plVar23 - *plVar19) >> 0x10;
  if (uVar26 <= uVar25) {
    do {
      LOCK();
      psVar4 = (short *)(plVar19[3] + 2 + uVar26 * 2);
      sVar5 = *psVar4;
      *psVar4 = *psVar4 + -1;
      UNLOCK();
      if (sVar5 == 0x101) {
        plStack_50 = (longlong *)&UNK_1401890d5;
        FUN_140004b40(0x1471b63b8);
        puVar8 = (ushort *)plVar19[3];
        uVar14 = *puVar8;
        do {
          LOCK();
          uVar6 = *puVar8;
          bVar27 = uVar14 == uVar6;
          if (bVar27) {
            *puVar8 = uVar14 | 0x8000;
            uVar6 = uVar14;
          }
          uVar14 = uVar6;
          UNLOCK();
        } while (!bVar27);
        if (-1 < (short)uVar14) {
          uVar17 = (ulonglong)uRam00000001471b7420;
          uRam00000001471b7420 = uRam00000001471b7420 + 1;
          *(longlong **)(uVar17 * 8 + 0x1471b6420) = plVar19;
        }
        plStack_50 = (longlong *)&UNK_14018910b;
        func_0x000144d9dab0(0x1471b63b8);
      }
      bVar27 = uVar26 != uVar25;
      uVar26 = uVar26 + 1;
    } while (bVar27);
  }
  return;
}

