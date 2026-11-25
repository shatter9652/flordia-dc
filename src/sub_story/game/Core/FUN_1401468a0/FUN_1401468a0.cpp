// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401468a0  size: 1339 bytes
// Name:    FUN_1401468a0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145bbdb30, FUN_143f2fe30, FUN_143f2f740, FUN_143f2faf0, FUN_143f2fa00, FUN_14500a600
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401468a0(longlong param_1,longlong *param_2)

{
  ulonglong *puVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  byte bVar11;
  byte bVar12;
  char cVar13;
  uint uVar14;
  longlong lVar15;
  longlong lVar16;
  byte *pbVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  longlong lVar22;
  byte *pbVar23;
  longlong unaff_GS_OFFSET;
  undefined1 auStack_88 [32];
  undefined1 auStack_68 [32];
  
  lVar6 = *(longlong *)(param_1 + 0x480);
  uVar19 = (ulonglong)*(int *)(lVar6 + 0x424);
  if (0 < (longlong)uVar19) {
    uVar18 = 1;
    uVar21 = 0;
    lVar7 = *(longlong *)(lVar6 + 0x428);
    pbVar17 = (byte *)(lVar7 + 0xf9a);
    do {
      if (1 < *(byte *)(lVar7 + 0x7c6 + uVar21 * 2000)) {
        lVar15 = uVar21 * 2000 + lVar7;
        if (((*(byte *)(lVar15 + 0x7ca) & 8) == 0) && (uVar21 + 1 < uVar19)) {
          uVar14 = *(uint *)(lVar15 + 2);
          lVar22 = *(longlong *)(param_1 + 0x40);
          lVar16 = *param_2;
          uVar20 = uVar19;
          pbVar23 = pbVar17;
          do {
            if ((((*(uint *)(pbVar23 + -0x7c8) & 0xffffff) == (uVar14 & 0xffffff)) &&
                (1 < pbVar23[-4])) && ((*pbVar23 & 8) == 0)) {
              lVar8 = *(longlong *)(lVar16 + 0x1aa0);
              sVar2 = *(short *)(*(longlong *)
                                  (lVar22 + (ulonglong)(uint)(int)*(short *)(lVar15 + 0x7c4) * 8) +
                                0xce);
              sVar3 = *(short *)(*(longlong *)
                                  (lVar22 + (ulonglong)(uint)(int)*(short *)(pbVar23 + -6) * 8) +
                                0xce);
              bVar11 = ~(byte)sVar3 & 0x3f;
              puVar1 = (ulonglong *)
                       ((ulonglong)(uint)(int)sVar2 * 0x220 + lVar8 +
                       (ulonglong)((uint)(int)sVar3 >> 6) * 8);
              *puVar1 = *puVar1 & (-2L << bVar11 | 0xfffffffffffffffeU >> 0x40 - bVar11);
              bVar11 = ~(byte)sVar2 & 0x3f;
              puVar1 = (ulonglong *)
                       ((ulonglong)(uint)(int)sVar3 * 0x220 + lVar8 +
                       (ulonglong)((uint)(int)sVar2 >> 6) * 8);
              *puVar1 = *puVar1 & (-2L << bVar11 | 0xfffffffffffffffeU >> 0x40 - bVar11);
            }
            uVar20 = uVar20 - 1;
            pbVar23 = pbVar23 + 2000;
          } while (uVar18 != uVar20);
        }
      }
      uVar21 = uVar21 + 1;
      uVar18 = uVar18 + 1;
      pbVar17 = pbVar17 + 2000;
    } while (uVar21 != uVar19);
  }
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    func_0x0001455db994();
  }
  if (*(longlong *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1448) == 0) {
    auStack_88 = ZEXT1232(ZEXT812(0));
    auStack_68 = auStack_88;
  }
  uVar19 = 0;
  do {
    cVar13 = func_0x000145009b70(uVar19);
    if (cVar13 != '\0') {
      *(ulonglong *)(auStack_88 + (uVar19 >> 6) * 8) =
           *(ulonglong *)(auStack_88 + (uVar19 >> 6) * 8) | 1L << (uVar19 & 0x3f);
    }
    uVar14 = (int)uVar19 + 1;
    uVar19 = (ulonglong)uVar14;
  } while (uVar14 != 0x1d3);
  uVar19 = (ulonglong)*(int *)(lVar6 + 0x424);
  if (0 < (longlong)uVar19) {
    lVar7 = *(longlong *)(param_1 + 0xb8);
    uVar21 = 0;
    do {
      cVar13 = func_0x0001455c8dc0(*(undefined8 *)(*(longlong *)(param_1 + 0x480) + 0x428),
                                   uVar21 & 0xffffffff);
      if (cVar13 != '\0') {
        lVar16 = 0x19;
        uVar18 = 0;
        lVar15 = *(longlong *)(lVar6 + 0x428) + uVar21 * 2000;
        lVar22 = *(longlong *)
                  (*(longlong *)(param_1 + 0x40) +
                  (ulonglong)
                  (uint)(int)*(short *)(*(longlong *)(lVar6 + 0x428) + 0x7c4 + uVar21 * 2000) * 8);
        do {
          if ((uVar21 != uVar18) &&
             (cVar13 = func_0x0001455c8dc0(*(undefined8 *)(*(longlong *)(param_1 + 0x480) + 0x428),
                                           uVar18 & 0xffffffff), cVar13 != '\0')) {
            lVar8 = *(longlong *)(lVar6 + 0x428);
            lVar9 = *(longlong *)
                     (*(longlong *)(param_1 + 0x40) +
                     (ulonglong)(uint)(int)*(short *)(lVar8 + 0x7ab + lVar16) * 8);
            if (((*(ulonglong *)
                   ((ulonglong)(uint)(int)*(short *)(lVar22 + 0xce) * 0x220 +
                    *(longlong *)(*param_2 + 0x1aa0) +
                   (ulonglong)((uint)(int)*(short *)(lVar9 + 0xce) >> 6) * 8) >>
                  ((ulonglong)(byte)~(byte)*(short *)(lVar9 + 0xce) & 0x3f) & 1) != 0) &&
               (cVar13 = FUN_14500a600(lVar7 + 0x1ad0,lVar22,lVar9,auStack_88,1), cVar13 != '\0')) {
              if ((((*(ulonglong *)(lVar15 + 0x7a0) == 0) ||
                   (uVar20 = *(ulonglong *)(lVar8 + 0x787 + lVar16), uVar20 == 0)) ||
                  ((uVar20 & *(ulonglong *)(lVar15 + 0x7a0)) != 0)) &&
                 (CONCAT11(*(undefined1 *)(lVar15 + 0x19),*(undefined1 *)(lVar15 + 0x1b)) ==
                  CONCAT11(*(undefined1 *)(lVar8 + lVar16),*(undefined1 *)(lVar8 + 2 + lVar16)))) {
                uVar10 = *(undefined8 *)(lVar6 + 0x428);
                cVar13 = func_0x0001455c8a50(uVar10,uVar21 & 0xffffffff,uVar18 & 0xffffffff);
                if ((cVar13 == '\0') &&
                   (cVar13 = func_0x0001455c8a50(uVar10,uVar18 & 0xffffffff,uVar21 & 0xffffffff),
                   cVar13 == '\0')) goto LAB_140146ca0;
              }
              sVar2 = *(short *)(lVar22 + 0xce);
              sVar3 = *(short *)(lVar9 + 0xce);
              bVar11 = ~(byte)sVar3 & 0x3f;
              lVar8 = *(longlong *)(*param_2 + 0x1aa0);
              puVar1 = (ulonglong *)
                       ((ulonglong)(uint)(int)sVar2 * 0x220 + lVar8 +
                       (ulonglong)((uint)(int)sVar3 >> 6) * 8);
              *puVar1 = *puVar1 & (-2L << bVar11 | 0xfffffffffffffffeU >> 0x40 - bVar11);
              bVar11 = ~(byte)sVar2 & 0x3f;
              puVar1 = (ulonglong *)
                       ((ulonglong)(uint)(int)sVar3 * 0x220 + lVar8 +
                       (ulonglong)((uint)(int)sVar2 >> 6) * 8);
              *puVar1 = *puVar1 & (-2L << bVar11 | 0xfffffffffffffffeU >> 0x40 - bVar11);
            }
          }
LAB_140146ca0:
          uVar18 = uVar18 + 1;
          lVar16 = lVar16 + 2000;
        } while (uVar19 != uVar18);
      }
      uVar21 = uVar21 + 1;
    } while (uVar21 != uVar19);
  }
  FUN_143f2f740(param_1,param_2,auStack_88);
  FUN_143f2fa00(param_1,*param_2);
  FUN_145bbdb30(param_1,param_2);
  FUN_143f2faf0(param_1,param_2,auStack_88);
  FUN_143f2fe30(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x480),
                *(undefined8 *)(*param_2 + 0x1aa0));
  uVar14 = (uint)*(short *)(param_1 + 0x4a0);
  sVar2 = *(short *)(param_1 + 0x4a2);
  if ((*(short *)(param_1 + 0x4a0) < sVar2) &&
     (iVar5 = *(int *)(param_1 + 0x494), 0 < (longlong)iVar5)) {
    lVar6 = *(longlong *)(param_1 + 0x40);
    lVar7 = *(longlong *)(param_1 + 0x498);
    lVar15 = *(longlong *)(*param_2 + 0x1aa0);
    do {
      lVar22 = 0;
      sVar3 = *(short *)(*(longlong *)(lVar6 + (ulonglong)uVar14 * 8) + 0xce);
      bVar11 = ~(byte)sVar3 & 0x3f;
      do {
        lVar16 = lVar22 * 2;
        lVar22 = lVar22 + 1;
        sVar4 = *(short *)(*(longlong *)
                            (lVar6 + (ulonglong)(uint)(int)*(short *)(lVar7 + lVar16) * 8) + 0xce);
        bVar12 = ~(byte)sVar4 & 0x3f;
        puVar1 = (ulonglong *)
                 ((ulonglong)(uint)(int)sVar3 * 0x220 + lVar15 +
                 (ulonglong)((uint)(int)sVar4 >> 6) * 8);
        *puVar1 = *puVar1 & (-2L << bVar12 | 0xfffffffffffffffeU >> 0x40 - bVar12);
        puVar1 = (ulonglong *)
                 (lVar15 + (ulonglong)((uint)(int)sVar3 >> 6) * 8 +
                 (ulonglong)(uint)(int)sVar4 * 0x220);
        *puVar1 = *puVar1 & (-2L << bVar11 | 0xfffffffffffffffeU >> 0x40 - bVar11);
      } while (iVar5 != lVar22);
      uVar14 = uVar14 + 1;
    } while (uVar14 != (int)sVar2);
  }
  return;
}

