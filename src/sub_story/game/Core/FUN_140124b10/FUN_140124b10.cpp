// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140124b10  size: 4238 bytes
// Name:    FUN_140124b10
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145647140, FUN_144dbce00, FUN_140037a50, FUN_140056cb0, FUN_140056a20
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140124b10(void)

{
  undefined1 (*pauVar1) [16];
  undefined1 *puVar2;
  undefined1 *puVar3;
  ushort uVar4;
  undefined2 uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  char cVar10;
  undefined4 uVar11;
  longlong lVar12;
  longlong lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  uint *puVar16;
  longlong lVar17;
  ulonglong uVar18;
  undefined1 *puVar19;
  longlong lVar20;
  longlong lVar21;
  longlong unaff_GS_OFFSET;
  undefined1 auVar22 [16];
  undefined8 unaff_XMM6_Qa;
  undefined8 unaff_XMM6_Qb;
  undefined1 auVar23 [64];
  undefined1 auStackX_8 [12];
  undefined1 auStackX_14 [20];
  undefined8 uStack_48;
  
  uStack_48 = 0x140124b26;
  lVar12 = FUN_145647140();
  lVar12 = -lVar12;
  *(undefined8 *)(&stack0x000014c0 + lVar12) = unaff_XMM6_Qa;
  *(undefined8 *)(&stack0x000014c8 + lVar12) = unaff_XMM6_Qb;
  if ((DAT_14908f046 == '\x01') && (DAT_149003438 == '\x01')) {
    cVar10 = *(char *)(*(longlong *)
                        (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8);
    if (*(int *)((longlong)_DAT_14a210d14 * 0x1f91c + 0x1490034ac) != 0) {
      if (cVar10 == '\0') {
        *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x140124b92;
        func_0x0001455db994();
      }
      lVar21 = **(longlong **)(unaff_GS_OFFSET + 0x58);
      lVar17 = *(longlong *)(lVar21 + 0x12a8);
      if ((_DAT_149003460 != 0) &&
         ((ushort)(*(short *)(_DAT_149003460 + 0x12) - 1U) < _DAT_14a943ab8)) {
        *(undefined1 *)(lVar17 + 0x121a4) = 1;
        *(undefined2 *)(&stack0xffffffffffffffe0 + lVar12) = 0x119;
        *(undefined4 *)(&stack0x00000088 + lVar12) = 0xffffffff;
        *(undefined2 *)(&stack0x0000008c + lVar12) = 0xffff;
        *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x140124bef;
        FUN_144dbce00(lVar17,0);
      }
      if ((_DAT_149003468 != 0) &&
         ((ushort)(*(short *)(_DAT_149003468 + 0x12) - 1U) < _DAT_14a943ab8)) {
        *(undefined1 *)(lVar17 + 0x121a4) = 1;
        *(undefined2 *)(&stack0xffffffffffffffe0 + lVar12) = 0x119;
        *(undefined4 *)(&stack0x00000088 + lVar12) = 0xffffffff;
        *(undefined2 *)(&stack0x0000008c + lVar12) = 0xffff;
        *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x140124c39;
        FUN_144dbce00(lVar17,0);
      }
      if ((_DAT_149003470 != 0) &&
         ((ushort)(*(short *)(_DAT_149003470 + 0x12) - 1U) < _DAT_14a943ab8)) {
        *(undefined1 *)(lVar17 + 0x121a4) = 1;
        *(undefined2 *)(&stack0xffffffffffffffe0 + lVar12) = 0x119;
        *(undefined4 *)(&stack0x00000088 + lVar12) = 0xffffffff;
        *(undefined2 *)(&stack0x0000008c + lVar12) = 0xffff;
        *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x140124c83;
        FUN_144dbce00(lVar17,0);
      }
      lVar13 = (longlong)_DAT_14a210d14;
      uVar18 = (ulonglong)*(uint *)(lVar13 * 0x1f91c + 0x1490034ac);
      if (uVar18 != 0) {
        puVar19 = &stack0x00000088 + lVar12;
        lVar20 = 0;
        *(longlong *)(&stack0x00000068 + lVar12) = lVar21 + 0x12a8;
        do {
          lVar21 = (longlong)*(int *)(lVar13 * 0x1f91c + 0x1490048c0 + lVar20);
          if (-1 < lVar21) {
            lVar9 = *(longlong *)(_DAT_149003450 + lVar21 * 8);
            if ((lVar9 != 0) && ((ushort)(*(short *)(lVar9 + 0x12) - 1U) < _DAT_14a943ab8)) {
              *(undefined1 *)(lVar17 + 0x121a4) = 1;
              *(undefined4 *)(&stack0x00000088 + lVar12) = 0xffffffff;
              *(undefined2 *)(&stack0x0000008c + lVar12) = 0xffff;
              *(undefined2 *)(&stack0xffffffffffffffe0 + lVar12) = 0x119;
              *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x140124d28;
              FUN_144dbce00(lVar17,0);
            }
            lVar21 = *(longlong *)(_DAT_149003458 + lVar21 * 8);
            if ((lVar21 != 0) && ((ushort)(*(short *)(lVar21 + 0x12) - 1U) < _DAT_14a943ab8)) {
              *(undefined1 *)(lVar17 + 0x121a4) = 1;
              *(undefined4 *)(&stack0x00000088 + lVar12) = 0xffffffff;
              *(undefined2 *)(&stack0x0000008c + lVar12) = 0xffff;
              *(undefined2 *)(&stack0xffffffffffffffe0 + lVar12) = 0x119;
              *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x140124d78;
              FUN_144dbce00(lVar17,0);
            }
          }
          lVar20 = lVar20 + 0x1434;
        } while (uVar18 * 0x1434 - lVar20 != 0);
        lVar13 = (longlong)_DAT_14a210d14;
        lVar21 = lVar13 * 0x1f91c;
        if ((ulonglong)*(uint *)(lVar21 + 0x1490034ac) != 0) {
          pauVar1 = (undefined1 (*) [16])(auStackX_8 + lVar12);
          puVar2 = &stack0xffffffffffffffe8 + lVar12;
          auVar23 = ZEXT1264(ZEXT812(0));
          lVar13 = lVar21 + 0x1490034b0;
          *(ulonglong *)(&stack0x00000078 + lVar12) =
               (ulonglong)*(uint *)(lVar21 + 0x1490034ac) * 0x1434 + lVar21 + 0x1490034b0;
          do {
            *(longlong *)(&stack0x00000080 + lVar12) = lVar13;
            *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x140124e02;
            func_0x000145f40560(puVar19,lVar13,0x1434);
            uVar4 = _DAT_149003434;
            if ((&stack0x000014b9)[lVar12] == '\x01') {
              if ((_DAT_149003434 != 0) &&
                 (*(longlong *)(lVar17 + 0x39c0 + (ulonglong)(_DAT_149003434 >> 2) * 8) !=
                  _DAT_149003478)) {
                *(longlong *)(lVar17 + 0x39c0 + (ulonglong)(_DAT_149003434 >> 2) * 8) =
                     _DAT_149003478;
                *(ulonglong *)(lVar17 + 0x20) =
                     *(ulonglong *)(lVar17 + 0x20) | 0x10L << ((byte)uVar4 & 3);
              }
              uVar4 = _DAT_149003436;
              if ((_DAT_149003436 != 0) &&
                 (*(longlong *)(lVar17 + 0x39c0 + (ulonglong)(_DAT_149003436 >> 2) * 8) !=
                  _DAT_149003480)) {
                *(longlong *)(lVar17 + 0x39c0 + (ulonglong)(_DAT_149003436 >> 2) * 8) =
                     _DAT_149003480;
                *(ulonglong *)(lVar17 + 0x20) =
                     *(ulonglong *)(lVar17 + 0x20) | 0x10L << ((byte)uVar4 & 3);
              }
              lVar21 = _DAT_149003440;
              uVar18 = (ulonglong)DAT_149003448;
              if (*(char *)(*(longlong *)
                             (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
                           8) == '\0') {
                *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x140124eb4;
                func_0x0001455db994();
              }
              lVar20 = **(longlong **)(&stack0x00000068 + lVar12);
              lVar13 = *(longlong *)(lVar21 + 0xc70) +
                       (ulonglong)
                       (*(uint *)(*(longlong *)(lVar21 + 0xc68) + uVar18 * 4) >> 0xf & 0x1ff) * 0x18
              ;
              *(longlong *)(lVar20 + 0x12298) = lVar13;
              lVar21 = *(longlong *)
                        (*(longlong *)(lVar21 + 0xc60) + (ulonglong)*(byte *)(lVar13 + 5) * 8);
              lVar13 = *(longlong *)(lVar20 + 0x10);
              if (lVar13 != lVar21) {
                uVar18 = 0x700002f0ff;
                if ((lVar21 != 0) && (lVar13 != 0)) {
                  if ((*(longlong **)(lVar13 + 0xe8) == (longlong *)0x0) ||
                     (((*(longlong **)(lVar21 + 0xe8) == (longlong *)0x0 ||
                       (**(longlong **)(lVar13 + 0xe8) != **(longlong **)(lVar21 + 0xe8))) ||
                      (*(char *)(lVar21 + 0x108) != *(char *)(lVar13 + 0x108))))) {
                    uVar18 = 0x1011;
                  }
                  else {
                    uVar18 = 0;
                  }
                  if (((*(longlong **)(lVar13 + 0xf0) == (longlong *)0x0) ||
                      (*(longlong **)(lVar21 + 0xf0) == (longlong *)0x0)) ||
                     ((**(longlong **)(lVar13 + 0xf0) != **(longlong **)(lVar21 + 0xf0) ||
                      (*(char *)(lVar21 + 0x109) != *(char *)(lVar13 + 0x109))))) {
                    uVar18 = uVar18 | 0x2022;
                  }
                  if (((*(longlong **)(lVar13 + 0xf8) == (longlong *)0x0) ||
                      (*(longlong **)(lVar21 + 0xf8) == (longlong *)0x0)) ||
                     ((**(longlong **)(lVar13 + 0xf8) != **(longlong **)(lVar21 + 0xf8) ||
                      (*(char *)(lVar21 + 0x10a) != *(char *)(lVar13 + 0x10a))))) {
                    uVar18 = uVar18 | 0x4044;
                  }
                  if ((((*(longlong **)(lVar13 + 0x100) == (longlong *)0x0) ||
                       (*(longlong **)(lVar21 + 0x100) == (longlong *)0x0)) ||
                      (**(longlong **)(lVar13 + 0x100) != **(longlong **)(lVar21 + 0x100))) ||
                     (*(char *)(lVar21 + 0x10b) != *(char *)(lVar13 + 0x10b))) {
                    uVar18 = uVar18 | 0x8088;
                  }
                  uVar18 = uVar18 | 0x20000;
                }
                *(longlong *)(lVar20 + 0x10) = lVar21;
                *(ulonglong *)(lVar20 + 0x20) = *(ulonglong *)(lVar20 + 0x20) | uVar18;
              }
              if (*(int *)(&stack0x0000149c + lVar12) != 0) {
                uVar18 = 0;
                do {
                  if ((_DAT_149003478 != 0) &&
                     (lVar21 = *(longlong *)(_DAT_149003478 + 8),
                     (ushort)(*(short *)(lVar21 + 0x12) - 1U) < _DAT_14a943ab8)) {
                    *(undefined2 *)(&stack0xffffffffffffffec + lVar12) =
                         *(undefined2 *)(_DAT_149003478 + 0x16);
                    *(undefined4 *)(&stack0xffffffffffffffe8 + lVar12) =
                         *(undefined4 *)(_DAT_149003478 + 0x12);
                    *(undefined1 *)(lVar17 + 0x121a4) = 1;
                    *(undefined2 *)(&stack0xffffffffffffffe0 + lVar12) = 0x105;
                    *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x14012506b;
                    FUN_144dbce00(lVar17,1,lVar21,puVar2);
                  }
                  if ((_DAT_149003480 != 0) &&
                     (lVar21 = *(longlong *)(_DAT_149003480 + 8),
                     (ushort)(*(short *)(lVar21 + 0x12) - 1U) < _DAT_14a943ab8)) {
                    *(undefined2 *)(&stack0xffffffffffffffec + lVar12) =
                         *(undefined2 *)(_DAT_149003480 + 0x16);
                    *(undefined4 *)(&stack0xffffffffffffffe8 + lVar12) =
                         *(undefined4 *)(_DAT_149003480 + 0x12);
                    *(undefined1 *)(lVar17 + 0x121a4) = 1;
                    *(undefined2 *)(&stack0xffffffffffffffe0 + lVar12) = 0x105;
                    *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x1401250b6;
                    FUN_144dbce00(lVar17,1,lVar21,puVar2);
                  }
                  lVar21 = uVar18 * 0x10;
                  uVar11 = *(undefined4 *)(&stack0x000004a0 + lVar21 + lVar12);
                  *(undefined8 *)(&stack0xffffffffffffffe8 + lVar12) =
                       *(undefined8 *)(&stack0x00000498 + lVar21 + lVar12);
                  *(undefined4 *)(&stack0xfffffffffffffff0 + lVar12) = uVar11;
                  *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x1401250e3;
                  func_0x000144e89080(lVar17,puVar2,3,0);
                  if (*(char *)(*(longlong *)
                                 (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8
                                 ) + 8) == '\0') {
                    *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x140125104;
                    func_0x0001455db994();
                  }
                  lVar13 = **(longlong **)(&stack0x00000068 + lVar12);
                  *(undefined1 *)(lVar13 + 0x121a4) = 1;
                  *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x140125131;
                  FUN_140056a20(lVar13,1,1);
                  if ((**(uint **)(lVar13 + 0x12198) & 0xc000000) == 0) {
                    *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x140125149;
                    cVar10 = func_0x000144e88f60(lVar13);
                    if (cVar10 != '\0') {
                      puVar16 = *(uint **)(lVar13 + 0x12198);
                      if ((*puVar16 & 0xe000000) != 0x2000000) {
                        *(uint **)(&stack0x00000070 + lVar12) = puVar16;
                        do {
                          *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x140125267;
                          FUN_140037a50(puVar16,0,1);
                          puVar16 = *(uint **)(&stack0x00000070 + lVar12);
                        } while ((*puVar16 & 0xe000000) != 0x2000000);
                      }
                      *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x14012524d;
                      FUN_140056cb0(lVar13);
                    }
                  }
                  lVar13 = *(longlong *)
                            (_DAT_149003450 +
                            (ulonglong)*(uint *)(&stack0x000004a4 + lVar21 + lVar12) * 8);
                  if (lVar13 == 0) {
                    lVar13 = 0;
                  }
                  else if ((ushort)(*(short *)(lVar13 + 0x12) - 1U) < _DAT_14a943ab8) {
                    *(undefined1 *)(lVar17 + 0x121a4) = 1;
                    *(undefined4 *)(&stack0xffffffffffffffe8 + lVar12) = 0xffffffff;
                    *(undefined2 *)(&stack0xffffffffffffffec + lVar12) = 0xffff;
                    *(undefined2 *)(&stack0xffffffffffffffe0 + lVar12) = 0x119;
                    *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x1401251a5;
                    FUN_144dbce00(lVar17,0);
                    lVar13 = *(longlong *)
                              (_DAT_149003450 +
                              (ulonglong)*(uint *)(&stack0x000004a4 + lVar21 + lVar12) * 8);
                  }
                  *(undefined1 *)(lVar17 + 0x121a4) = 1;
                  *(undefined4 *)(&stack0xffffffffffffffe8 + lVar12) = 0;
                  *(longlong *)(&stack0xfffffffffffffff0 + lVar12) = lVar13;
                  *(undefined1 (*) [16])(auStackX_14 + lVar12) = auVar23._0_16_;
                  *pauVar1 = auVar23._0_16_;
                  *(undefined8 *)(&stack0xfffffffffffffff8 + lVar12) = 0x400;
                  *(undefined4 *)(&stack0x00000028 + lVar12) = 1;
                  *(undefined8 *)(auStackX_14 + lVar12 + -0x14) = 4;
                  *(undefined1 **)(&stack0x00000030 + lVar12) = &stack0x0000049c + lVar21 + lVar12;
                  *(undefined8 *)(&stack0x00000038 + lVar12) = 4;
                  *(undefined8 *)(&stack0x00000040 + lVar12) = 0;
                  *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x140125218;
                  func_0x0001452dd400(lVar17,puVar2,&stack0x00000028 + lVar12);
                  uVar18 = uVar18 + 1;
                } while (uVar18 < *(uint *)(&stack0x0000149c + lVar12));
              }
              if (*(char *)(*(longlong *)
                             (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
                           8) == '\0') {
                *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x1401252a2;
                func_0x0001455db994();
              }
              puVar19 = &stack0x00000088 + lVar12;
              *(undefined8 *)(**(longlong **)(&stack0x00000068 + lVar12) + 0x12748) = 0;
              if ((_DAT_149003460 != 0) &&
                 ((ushort)(*(short *)(_DAT_149003460 + 0x12) - 1U) < _DAT_14a943ab8)) {
                *(undefined1 *)(lVar17 + 0x121a4) = 1;
                *(undefined4 *)(&stack0xffffffffffffffe8 + lVar12) = 0xffffffff;
                *(undefined2 *)(&stack0xffffffffffffffec + lVar12) = 0xffff;
                *(undefined2 *)(&stack0xffffffffffffffe0 + lVar12) = 0x119;
                *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x140125306;
                FUN_144dbce00(lVar17,0);
              }
              if ((_DAT_149003468 != 0) &&
                 ((ushort)(*(short *)(_DAT_149003468 + 0x12) - 1U) < _DAT_14a943ab8)) {
                *(undefined1 *)(lVar17 + 0x121a4) = 1;
                *(undefined4 *)(&stack0xffffffffffffffe8 + lVar12) = 0xffffffff;
                *(undefined2 *)(&stack0xffffffffffffffec + lVar12) = 0xffff;
                *(undefined2 *)(&stack0xffffffffffffffe0 + lVar12) = 0x119;
                *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x14012534c;
                FUN_144dbce00(lVar17,0);
              }
            }
            if (-1 < *(int *)(&stack0x00001498 + lVar12)) {
              if ((&stack0x000014b6)[lVar12] == '\x01') {
                uVar4 = *(ushort *)(&stack0x000014a8 + lVar12);
                *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x140125381;
                uVar14 = func_0x000142626bb0(*(undefined2 *)(&stack0x000014b0 + lVar12));
                lVar21 = _DAT_149003460;
                uVar6 = *(uint *)(&stack0x0000149c + lVar12);
                puVar3 = &stack0x00000028 + lVar12;
                *(undefined1 *)(lVar17 + 0x121a4) = 1;
                *(undefined4 *)(&stack0xffffffffffffffe8 + lVar12) = 0;
                *(longlong *)(&stack0xfffffffffffffff0 + lVar12) = lVar21;
                *(undefined1 (*) [16])(auStackX_14 + lVar12) = auVar23._0_16_;
                *pauVar1 = auVar23._0_16_;
                *(undefined4 *)(&stack0x00000028 + lVar12) = 1;
                *(undefined8 *)(&stack0x00000030 + lVar12) = uVar14;
                *(ulonglong *)(&stack0x00000038 + lVar12) = (ulonglong)uVar4 * 100;
                *(undefined8 *)(&stack0x00000040 + lVar12) = 0;
                *(ulonglong *)(&stack0xfffffffffffffff8 + lVar12) = (ulonglong)uVar6 * 100;
                *(ulonglong *)(auStackX_14 + lVar12 + -0x14) = (ulonglong)uVar4 * 100;
                *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x1401253eb;
                func_0x0001452dd400(lVar17,puVar2,puVar3);
                uVar4 = *(ushort *)(&stack0x000014a8 + lVar12);
                *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x140125407;
                uVar14 = func_0x000142626be0(*(undefined2 *)(&stack0x000014b0 + lVar12));
                lVar21 = _DAT_149003468;
                uVar6 = *(uint *)(&stack0x0000149c + lVar12);
                *(undefined1 *)(lVar17 + 0x121a4) = 1;
                *(undefined4 *)(&stack0xffffffffffffffe8 + lVar12) = 0;
                *(longlong *)(&stack0xfffffffffffffff0 + lVar12) = lVar21;
                *(undefined1 (*) [16])(auStackX_14 + lVar12) = auVar23._0_16_;
                *pauVar1 = auVar23._0_16_;
                *(undefined4 *)(&stack0x00000028 + lVar12) = 1;
                *(undefined8 *)(&stack0x00000030 + lVar12) = uVar14;
                *(ulonglong *)(&stack0x00000038 + lVar12) = (ulonglong)uVar4 * 0xe4;
                *(undefined8 *)(&stack0x00000040 + lVar12) = 0;
                *(ulonglong *)(&stack0xfffffffffffffff8 + lVar12) = (ulonglong)uVar6 * 0xe4;
                *(ulonglong *)(auStackX_14 + lVar12 + -0x14) = (ulonglong)uVar4 * 0xe4;
                *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x14012546f;
                func_0x0001452dd400(lVar17,puVar2,puVar3);
                iVar7 = *(int *)(&stack0x00001498 + lVar12);
                *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x14012547f;
                uVar11 = func_0x000144e4bb20(iVar7);
                *(undefined4 *)(&stack0x00000488 + lVar12) = uVar11;
                uVar14 = *(undefined8 *)(_DAT_149003450 + (longlong)iVar7 * 8);
                *(undefined1 *)(lVar17 + 0x121a4) = 1;
                *(undefined4 *)(&stack0x00000028 + lVar12) = 0;
                *(undefined4 *)(&stack0xffffffffffffffe8 + lVar12) = 1;
                *(undefined1 **)(&stack0xfffffffffffffff0 + lVar12) = &stack0x00000088 + lVar12;
                *(undefined8 *)(&stack0xfffffffffffffff8 + lVar12) = 0x404;
                *(undefined8 *)(auStackX_14 + lVar12 + -0x14) = 0;
                *(undefined8 *)(&stack0x00000030 + lVar12) = uVar14;
                *(undefined8 *)(&stack0x00000038 + lVar12) = 0;
                *(undefined1 (*) [16])(&stack0x00000054 + lVar12) = auVar23._0_16_;
                *(undefined1 (*) [16])(&stack0x00000048 + lVar12) = auVar23._0_16_;
                puVar19 = &stack0x00000088 + lVar12;
                *(undefined8 *)(&stack0x00000040 + lVar12) = 0xffffffffffffffff;
                *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x1401254ff;
                func_0x0001452dd400(lVar17,puVar3,puVar2);
                if (*(short *)(&stack0x000014ae + lVar12) == 0 &&
                    *(short *)(&stack0x000014aa + lVar12) == 0) {
                  *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x140125519;
                  uVar15 = func_0x000142626ba0(puVar19);
                  uVar14 = *(undefined8 *)
                            (_DAT_149003458 + (longlong)*(int *)(&stack0x00001498 + lVar12) * 8);
                  *(undefined1 *)(lVar17 + 0x121a4) = 1;
                  *(undefined4 *)(&stack0xffffffffffffffe8 + lVar12) = 1;
                  *(undefined8 *)(&stack0xfffffffffffffff0 + lVar12) = uVar15;
                  *(undefined4 *)(&stack0x00000028 + lVar12) = 0;
                  *(undefined8 *)(&stack0xfffffffffffffff8 + lVar12) = 0x1000;
                  *(undefined8 *)(auStackX_14 + lVar12 + -0x14) = 0;
                  *(undefined8 *)(&stack0x00000030 + lVar12) = uVar14;
                  *(undefined8 *)(&stack0x00000038 + lVar12) = 0;
                  *(undefined1 (*) [16])(&stack0x00000054 + lVar12) = auVar23._0_16_;
                  *(undefined1 (*) [16])(&stack0x00000048 + lVar12) = auVar23._0_16_;
                  *(undefined8 *)(&stack0x00000040 + lVar12) = 0xffffffffffffffff;
                  *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x14012558f;
                  func_0x0001452dd400(lVar17,&stack0x00000028 + lVar12,puVar2);
                }
              }
              if (((&stack0x000014b8)[lVar12] != '\0') || ((&stack0x000014b7)[lVar12] == '\x01')) {
                *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x1401255af;
                uVar15 = func_0x000142626ba0(puVar19);
                uVar14 = *(undefined8 *)
                          (_DAT_149003458 + (longlong)*(int *)(&stack0x00001498 + lVar12) * 8);
                *(undefined1 *)(lVar17 + 0x121a4) = 1;
                *(undefined4 *)(&stack0xffffffffffffffe8 + lVar12) = 1;
                *(undefined8 *)(&stack0xfffffffffffffff0 + lVar12) = uVar15;
                *(undefined4 *)(&stack0x00000028 + lVar12) = 0;
                *(undefined8 *)(&stack0xfffffffffffffff8 + lVar12) = 0x1000;
                *(undefined8 *)(auStackX_14 + lVar12 + -0x14) = 0;
                *(undefined8 *)(&stack0x00000030 + lVar12) = uVar14;
                *(undefined8 *)(&stack0x00000038 + lVar12) = 0;
                *(undefined1 (*) [16])(&stack0x00000054 + lVar12) = auVar23._0_16_;
                *(undefined1 (*) [16])(&stack0x00000048 + lVar12) = auVar23._0_16_;
                *(undefined8 *)(&stack0x00000040 + lVar12) = 0xffffffffffffffff;
                *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x140125625;
                func_0x0001452dd400(lVar17,&stack0x00000028 + lVar12,puVar2);
                if ((&stack0x000014b8)[lVar12] == '\x01') {
                  if ((ulonglong)*(ushort *)(&stack0x000014ac + lVar12) != 0) {
                    lVar13 = (ulonglong)*(ushort *)(&stack0x000014ac + lVar12) * 100;
                    *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x140125655;
                    uVar14 = func_0x000142626bb0(*(undefined2 *)(&stack0x000014b4 + lVar12));
                    lVar21 = _DAT_149003460;
                    uVar6 = *(uint *)(&stack0x000014a4 + lVar12);
                    *(undefined1 *)(lVar17 + 0x121a4) = 1;
                    *(undefined4 *)(&stack0xffffffffffffffe8 + lVar12) = 0;
                    *(longlong *)(&stack0xfffffffffffffff0 + lVar12) = lVar21;
                    *(undefined1 (*) [16])(auStackX_14 + lVar12) = auVar23._0_16_;
                    *pauVar1 = auVar23._0_16_;
                    *(undefined4 *)(&stack0x00000028 + lVar12) = 1;
                    *(undefined8 *)(&stack0x00000030 + lVar12) = uVar14;
                    *(longlong *)(&stack0x00000038 + lVar12) = lVar13;
                    *(undefined8 *)(&stack0x00000040 + lVar12) = 0;
                    *(ulonglong *)(&stack0xfffffffffffffff8 + lVar12) = (ulonglong)uVar6 * 100;
                    *(longlong *)(auStackX_14 + lVar12 + -0x14) = lVar13;
                    *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x1401256bf;
                    func_0x0001452dd400(lVar17,puVar2,&stack0x00000028 + lVar12);
                    uVar4 = *(ushort *)(&stack0x000014ac + lVar12);
                    *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x1401256db;
                    uVar14 = func_0x000142626be0(*(undefined2 *)(&stack0x000014b4 + lVar12));
                    lVar21 = _DAT_149003468;
                    uVar6 = *(uint *)(&stack0x000014a4 + lVar12);
                    *(undefined1 *)(lVar17 + 0x121a4) = 1;
                    *(undefined4 *)(&stack0xffffffffffffffe8 + lVar12) = 0;
                    puVar19 = &stack0x00000088 + lVar12;
                    *(longlong *)(&stack0xfffffffffffffff0 + lVar12) = lVar21;
                    *(undefined1 (*) [16])(auStackX_14 + lVar12) = auVar23._0_16_;
                    *pauVar1 = auVar23._0_16_;
                    *(undefined4 *)(&stack0x00000028 + lVar12) = 1;
                    *(undefined8 *)(&stack0x00000030 + lVar12) = uVar14;
                    *(ulonglong *)(&stack0x00000038 + lVar12) = (ulonglong)uVar4 * 0xe4;
                    *(undefined8 *)(&stack0x00000040 + lVar12) = 0;
                    *(ulonglong *)(&stack0xfffffffffffffff8 + lVar12) = (ulonglong)uVar6 * 0xe4;
                    *(ulonglong *)(auStackX_14 + lVar12 + -0x14) = (ulonglong)uVar4 * 0xe4;
                    *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x140125748;
                    func_0x0001452dd400(lVar17,puVar2,&stack0x00000028 + lVar12);
                  }
                  if (*(ushort *)(&stack0x000014ae + lVar12) != 0) {
                    uVar4 = *(ushort *)(&stack0x000014aa + lVar12);
                    lVar13 = (ulonglong)*(ushort *)(&stack0x000014ae + lVar12) << 6;
                    *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x140125775;
                    uVar14 = func_0x000142626c10(uVar4,*(undefined2 *)(&stack0x000014b2 + lVar12));
                    lVar21 = _DAT_149003470;
                    iVar7 = *(int *)(&stack0x000014a0 + lVar12);
                    *(undefined1 *)(lVar17 + 0x121a4) = 1;
                    *(undefined4 *)(&stack0xffffffffffffffe8 + lVar12) = 0;
                    *(undefined4 *)(&stack0x00000028 + lVar12) = 1;
                    *(undefined8 *)(&stack0x00000030 + lVar12) = uVar14;
                    *(longlong *)(&stack0x00000038 + lVar12) = lVar13;
                    *(undefined8 *)(&stack0x00000040 + lVar12) = 0;
                    *(longlong *)(&stack0xfffffffffffffff0 + lVar12) = lVar21;
                    *(undefined1 (*) [16])(auStackX_14 + lVar12) = auVar23._0_16_;
                    *pauVar1 = auVar23._0_16_;
                    *(ulonglong *)(&stack0xfffffffffffffff8 + lVar12) =
                         (ulonglong)((uint)uVar4 + iVar7) << 6;
                    *(longlong *)(auStackX_14 + lVar12 + -0x14) = lVar13;
                    *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x1401257dd;
                    func_0x0001452dd400(lVar17,puVar2,&stack0x00000028 + lVar12);
                  }
                }
                if ((*(ushort *)(&stack0x000014aa + lVar12) != 0 & (&stack0x000014b7)[lVar12]) == 1)
                {
                  lVar13 = (ulonglong)*(ushort *)(&stack0x000014aa + lVar12) << 6;
                  *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x14012580a;
                  uVar14 = func_0x000142626c40(*(undefined2 *)(&stack0x000014b2 + lVar12));
                  lVar21 = _DAT_149003470;
                  uVar6 = *(uint *)(&stack0x000014a0 + lVar12);
                  *(undefined1 *)(lVar17 + 0x121a4) = 1;
                  *(undefined4 *)(&stack0xffffffffffffffe8 + lVar12) = 0;
                  *(undefined4 *)(&stack0x00000028 + lVar12) = 1;
                  *(undefined8 *)(&stack0x00000030 + lVar12) = uVar14;
                  *(longlong *)(&stack0x00000038 + lVar12) = lVar13;
                  *(undefined8 *)(&stack0x00000040 + lVar12) = 0;
                  *(longlong *)(&stack0xfffffffffffffff0 + lVar12) = lVar21;
                  *(undefined1 (*) [16])(auStackX_14 + lVar12) = auVar23._0_16_;
                  *pauVar1 = auVar23._0_16_;
                  *(ulonglong *)(&stack0xfffffffffffffff8 + lVar12) = (ulonglong)uVar6 << 6;
                  *(longlong *)(auStackX_14 + lVar12 + -0x14) = lVar13;
                  *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x140125871;
                  func_0x0001452dd400(lVar17,puVar2,&stack0x00000028 + lVar12);
                }
              }
            }
            lVar13 = *(longlong *)(&stack0x00000080 + lVar12) + 0x1434;
          } while (lVar13 != *(longlong *)(&stack0x00000078 + lVar12));
          lVar13 = (longlong)_DAT_14a210d14;
          lVar21 = lVar13 * 0x1f91c;
          uVar6 = *(uint *)(lVar21 + 0x1490034ac);
          if ((ulonglong)uVar6 != 0) {
            lVar17 = lVar21 + 0x1490034b0;
            do {
              *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x1401258eb;
              func_0x000145f40560(&stack0x00000088 + lVar12,lVar17,0x1434);
              if (*(int *)(&stack0x00001498 + lVar12) < 0) {
                uVar8 = *(uint *)(&stack0x0000149c + lVar12);
                if ((ulonglong)uVar8 != 0) {
                  lVar13 = 0;
                  do {
                    uVar5 = *(undefined2 *)(&stack0x000004a4 + lVar13 + lVar12);
                    *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x14012591f;
                    func_0x0001426269f0(uVar5);
                    lVar13 = lVar13 + 0x10;
                  } while ((ulonglong)uVar8 << 4 != lVar13);
                }
              }
              else {
                *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x1401258fb;
                func_0x000142626a10();
              }
              lVar17 = lVar17 + 0x1434;
            } while (lVar17 != (ulonglong)uVar6 * 0x1434 + lVar21 + 0x1490034b0);
            lVar13 = (longlong)_DAT_14a210d14;
          }
        }
      }
      *(undefined4 *)(lVar13 * 0x1f91c + 0x1490034ac) = 0;
      *(undefined2 *)(lVar13 * 2 + 0x14908efe0) = 0;
      *(undefined2 *)(lVar13 * 2 + 0x14908efe4) = 0;
      cVar10 = *(char *)(*(longlong *)
                          (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8);
    }
    if (cVar10 == '\0') {
      *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x140125984;
      func_0x0001455db994();
    }
    lVar21 = **(longlong **)(unaff_GS_OFFSET + 0x58);
    lVar17 = *(longlong *)(lVar21 + 0x12a8);
    if ((_DAT_149003460 != 0) && ((ushort)(*(short *)(_DAT_149003460 + 0x12) - 1U) < _DAT_14a943ab8)
       ) {
      *(undefined1 *)(lVar17 + 0x121a4) = 1;
      *(undefined2 *)(&stack0xffffffffffffffe0 + lVar12) = 0x103;
      *(undefined4 *)(&stack0x00000088 + lVar12) = 0xffffffff;
      *(undefined2 *)(&stack0x0000008c + lVar12) = 0xffff;
      *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x1401259e1;
      FUN_144dbce00(lVar17,0);
    }
    if ((_DAT_149003468 != 0) && ((ushort)(*(short *)(_DAT_149003468 + 0x12) - 1U) < _DAT_14a943ab8)
       ) {
      *(undefined1 *)(lVar17 + 0x121a4) = 1;
      *(undefined2 *)(&stack0xffffffffffffffe0 + lVar12) = 0x103;
      *(undefined4 *)(&stack0x00000088 + lVar12) = 0xffffffff;
      *(undefined2 *)(&stack0x0000008c + lVar12) = 0xffff;
      *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x140125a2b;
      FUN_144dbce00(lVar17,0);
    }
    if ((_DAT_149003470 != 0) && ((ushort)(*(short *)(_DAT_149003470 + 0x12) - 1U) < _DAT_14a943ab8)
       ) {
      *(undefined1 *)(lVar17 + 0x121a4) = 1;
      *(undefined2 *)(&stack0xffffffffffffffe0 + lVar12) = 0x103;
      *(undefined4 *)(&stack0x00000088 + lVar12) = 0xffffffff;
      *(undefined2 *)(&stack0x0000008c + lVar12) = 0xffff;
      *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x140125a75;
      FUN_144dbce00(lVar17,0);
    }
    if (DAT_14908f044 == '\x01') {
      if (*(char *)(*(longlong *)
                     (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8) ==
          '\0') {
        *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x140125aaa;
        func_0x0001455db994();
      }
      DAT_14908f044 = '\0';
      lVar21 = *(longlong *)(lVar21 + 0x12a8);
      if (DAT_14908f045 == '\x01') {
        DAT_14908f045 = '\0';
        if (_DAT_149003488 == 0) {
          lVar17 = 0;
        }
        else {
          lVar17 = _DAT_149003488;
          if ((ushort)(*(short *)(_DAT_149003488 + 0x12) - 1U) < _DAT_14a943ab8) {
            *(undefined1 *)(lVar21 + 0x121a4) = 1;
            *(undefined2 *)(&stack0xffffffffffffffe0 + lVar12) = 0x119;
            *(undefined4 *)(&stack0x00000088 + lVar12) = 0xffffffff;
            *(undefined2 *)(&stack0x0000008c + lVar12) = 0xffff;
            *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x140125b12;
            FUN_144dbce00(lVar21,0);
            lVar17 = _DAT_149003488;
          }
        }
        uVar14 = _DAT_1490034a0;
        *(undefined1 *)(lVar21 + 0x121a4) = 1;
        auVar22._0_12_ = ZEXT812(0);
        auVar22._12_4_ = 0;
        *(undefined4 *)(&stack0x00000088 + lVar12) = 1;
        *(undefined8 *)(&stack0x00000090 + lVar12) = uVar14;
        *(undefined8 *)(&stack0x00000098 + lVar12) = 0x44;
        *(undefined8 *)(&stack0x000000a0 + lVar12) = 0;
        *(undefined4 *)(&stack0xffffffffffffffe8 + lVar12) = 0;
        *(longlong *)(&stack0xfffffffffffffff0 + lVar12) = lVar17;
        *(undefined8 *)(&stack0xfffffffffffffff8 + lVar12) = 0;
        *(undefined1 (*) [16])(auStackX_8 + lVar12) = auVar22;
        *(undefined1 (*) [16])(auStackX_14 + lVar12) = auVar22;
        *(undefined8 *)(auStackX_14 + lVar12 + -0x14) = 0xffffffffffffffff;
        *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x140125b81;
        func_0x0001452dd400(0,&stack0xffffffffffffffe8 + lVar12,&stack0x00000088 + lVar12);
      }
    }
  }
  return;
}

