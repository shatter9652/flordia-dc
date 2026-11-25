// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140123d80  size: 2526 bytes
// Name:    FUN_140123d80
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14444f1a0, FUN_141297be0, FUN_14444ee30, FUN_14444f4e0, FUN_14098cf70, FUN_1400716e0, FUN_1454357e0, FUN_1400fd6e0, FUN_1400063f0, FUN_1402c59f0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_140123d80(longlong param_1,longlong param_2,undefined4 param_3,undefined4 param_4)

{
  short *psVar1;
  short *psVar2;
  short *psVar3;
  ushort *puVar4;
  short *psVar5;
  uint uVar6;
  ushort uVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  longlong *plVar11;
  char cVar12;
  short sVar13;
  uint uVar14;
  longlong lVar15;
  longlong *plVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  ulonglong uVar21;
  uint *puVar22;
  uint *puVar23;
  ulonglong uVar24;
  longlong unaff_GS_OFFSET;
  bool bVar25;
  bool bVar26;
  undefined1 auVar27 [64];
  longlong lStack_a8;
  short *psStack_90;
  undefined8 uStack_80;
  undefined1 uStack_78;
  longlong lStack_70;
  undefined1 aauStack_68 [2] [16];
  
  *(longlong *)(param_1 + 0x20ef8) = param_2;
  FUN_14444ee30(param_1,param_4);
  if (*(int *)(param_1 + 0x22f10) == 2) {
    FUN_14444f1a0(param_1);
    *(undefined4 *)(param_1 + 0x294) = 0;
    *(undefined4 *)(param_1 + 0x22f10) = 0;
    *(undefined4 *)(param_1 + 0x20f04) = 0;
  }
  if (*(int *)(param_1 + 0x20e4c) != 0) {
    puVar23 = *(uint **)(param_1 + 0x20e50);
    uVar8 = *(uint *)(param_1 + 0x20e4c);
    if (uVar8 != 0) {
      if (param_2 == 0) {
        lVar19 = (ulonglong)uVar8 * 0x50;
        lVar15 = _DAT_14abbf348;
        do {
          uVar24 = (ulonglong)((*puVar23 & 0xffff) << 4);
          if ((*(short *)(*(longlong *)(lVar15 + 0x28) + 8 + uVar24) == (short)(*puVar23 >> 0x10))
             && (plVar11 = *(longlong **)(*(longlong *)(lVar15 + 0x28) + uVar24),
                plVar11 != (longlong *)0x0)) {
            if (plVar11[8] != 0) {
              *(undefined1 *)(plVar11[8] + 0x95) = 1;
            }
            plVar11[8] = 0;
            (**(code **)(*plVar11 + 0x328))(plVar11,puVar23,0);
            lVar15 = _DAT_14abbf348;
          }
          puVar23 = puVar23 + 0x14;
          lVar19 = lVar19 + -0x50;
        } while (lVar19 != 0);
      }
      else {
        puVar22 = puVar23 + (ulonglong)uVar8 * 0x14;
        lVar19 = _DAT_14abbf348;
        do {
          uVar24 = (ulonglong)((*puVar23 & 0xffff) << 4);
          if ((*(short *)(*(longlong *)(lVar19 + 0x28) + 8 + uVar24) == (short)(*puVar23 >> 0x10))
             && (plVar11 = *(longlong **)(*(longlong *)(lVar19 + 0x28) + uVar24),
                plVar11 != (longlong *)0x0)) {
            if (plVar11[8] != 0) {
              *(undefined1 *)(plVar11[8] + 0x95) = 1;
            }
            plVar11[8] = 0;
            (**(code **)(*plVar11 + 0x328))(plVar11,puVar23,param_2);
            lVar19 = _DAT_14abbf348;
            if (*(char *)((longlong)plVar11 + 0x156) == '\x01') {
              uVar8 = *(uint *)(plVar11 + 2);
              uVar7 = *(ushort *)(*(longlong *)(param_2 + 8) + (ulonglong)(uVar8 & 0xffff) * 2);
              if ((((ushort)*(undefined4 *)(param_2 + 0x14) <= uVar7) ||
                  (*(uint *)(*(longlong *)(param_2 + 0x18) + (ulonglong)uVar7 * 4) != uVar8)) &&
                 (uVar9 = *(uint *)(param_2 + 0x10),
                 (ushort)*(undefined4 *)(param_2 + 0x14) < (ushort)uVar9)) {
                *(short *)(*(longlong *)(param_2 + 8) + (ulonglong)(uVar8 & 0xffff) * 2) =
                     (short)*(undefined4 *)(param_2 + 0x14);
                uVar14 = *(uint *)(param_2 + 0x14);
                do {
                  if (uVar14 == uVar9) goto LAB_140123ee3;
                  LOCK();
                  uVar6 = *(uint *)(param_2 + 0x14);
                  bVar25 = uVar14 == uVar6;
                  if (bVar25) {
                    *(uint *)(param_2 + 0x14) = uVar14 + 1;
                    uVar6 = uVar14;
                  }
                  uVar14 = uVar6;
                  UNLOCK();
                } while (!bVar25);
                *(uint *)(*(longlong *)(param_2 + 0x18) + (ulonglong)uVar14 * 4) = uVar8;
              }
            }
          }
LAB_140123ee3:
          puVar23 = puVar23 + 0x14;
        } while (puVar23 != puVar22);
      }
    }
    LOCK();
    *(undefined4 *)(param_1 + 0x20e4c) = 0;
    UNLOCK();
  }
  FUN_14444f4e0(param_1,param_2,param_3);
  lVar19 = *(longlong *)(param_1 + 0x20e60);
  uVar8 = *(uint *)(param_1 + 0x20e5c);
  if (uVar8 != 0) {
    lVar20 = 0;
    auVar27 = ZEXT1264(ZEXT812(0));
    lVar15 = _DAT_14abbf348;
    do {
      uVar9 = *(uint *)(lVar19 + lVar20);
      uVar24 = (ulonglong)((uVar9 & 0xffff) << 4);
      if (((*(short *)(*(longlong *)(lVar15 + 0x28) + 8 + uVar24) == (short)(uVar9 >> 0x10)) &&
          (lVar17 = *(longlong *)(*(longlong *)(lVar15 + 0x28) + uVar24), lVar17 != 0)) &&
         ((*(byte *)(lVar17 + 0x1c) & 0x40) != 0)) {
        aauStack_68[0] = auVar27._0_16_;
        FUN_141297be0(lVar17,aauStack_68);
        lVar15 = _DAT_14abbf348;
      }
      lVar20 = lVar20 + 4;
    } while ((ulonglong)uVar8 << 2 != lVar20);
  }
  LOCK();
  *(undefined4 *)(param_1 + 0x20e5c) = 0;
  UNLOCK();
  puVar23 = *(uint **)(param_1 + 0x20ea8);
  lStack_70 = param_1;
  if (*(uint *)(param_1 + 0x20ea4) == 0) {
LAB_140124730:
    uVar10 = *(undefined4 *)(lStack_70 + 0x20ea4);
    LOCK();
    *(undefined4 *)(lStack_70 + 0x20ea4) = 0;
    UNLOCK();
    return uVar10;
  }
  puVar22 = puVar23 + (ulonglong)*(uint *)(param_1 + 0x20ea4) * 4;
  lVar19 = **(longlong **)(unaff_GS_OFFSET + 0x58);
  psVar1 = (short *)(lVar19 + 0x12e8);
  psVar2 = (short *)(lVar19 + 0x1370);
  psVar3 = (short *)(lVar19 + 0x13a4);
  puVar4 = (ushort *)(lVar19 + 0x12ea);
  plVar11 = (longlong *)(lVar19 + 0x1438);
LAB_140124076:
  uVar24 = (ulonglong)((*puVar23 & 0xffff) << 4);
  if (((*(short *)(*(longlong *)(_DAT_14abbf348 + 0x28) + 8 + uVar24) == (short)(*puVar23 >> 0x10))
      && (lVar15 = *(longlong *)(*(longlong *)(_DAT_14abbf348 + 0x28) + uVar24), lVar15 != 0)) &&
     (*(longlong *)(lVar15 + 0x38) != 0)) {
    *psVar3 = *psVar3 + 1;
    if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8)
                 + 8) == '\0') {
      func_0x0001455db994();
    }
    if (*(short *)(lVar19 + 0x13a2) == 0) {
      if (*(char *)(*(longlong *)
                     (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8) ==
          '\0') {
        func_0x0001455db994();
      }
      uStack_78 = *psVar3 == 0;
      bVar25 = true;
      uStack_80 = 0;
      if ((bool)uStack_78) {
        uStack_80 = 0x14aad4568;
        FUN_1400fd6e0();
        bVar25 = false;
      }
    }
    else {
      bVar25 = true;
      uStack_80 = 0;
      uStack_78 = 0;
    }
    cVar12 = *(char *)(*(longlong *)
                        (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8);
    if (cVar12 == '\0') {
      func_0x0001455db994();
      cVar12 = *(char *)(*(longlong *)
                          (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8);
    }
    if (*(short *)(lVar19 + 0x13a2) == 0) {
      if (cVar12 == '\0') {
        func_0x0001455db994();
        cVar12 = *(char *)(*(longlong *)
                            (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8
                          );
      }
      bVar26 = *psVar3 != 0;
    }
    else {
      bVar26 = false;
    }
    if (cVar12 == '\0') {
      func_0x0001455db994();
    }
    if (bVar26) {
      lVar20 = **(longlong **)(unaff_GS_OFFSET + 0x58);
      sVar13 = *(short *)(lVar20 + 0x13a0);
      *(short *)(lVar20 + 0x13a0) = sVar13 + 1;
      if (sVar13 == 0) {
        FUN_1400716e0(0x14aad4568);
        lStack_a8 = 0x14aad4568;
        psStack_90 = (short *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x13a0);
      }
      else {
        psStack_90 = (short *)(lVar20 + 0x13a0);
        lStack_a8 = 0x14aad4568;
      }
    }
    else {
      lStack_a8 = 0;
      psStack_90 = (short *)0x0;
    }
    uVar24 = 0xffffffff;
    if (*psVar1 != 0) goto LAB_1401243f4;
    sVar13 = *psVar2;
    if (sVar13 == 0) {
      FUN_1400716e0(0x14a95deb8);
      sVar13 = *psVar2;
    }
    *psVar2 = sVar13 + 1;
    lVar20 = *(longlong *)(lVar15 + 0x38);
    if (lVar20 != 0) {
      uVar24 = (ulonglong)*puVar4;
      cVar12 = *(char *)(*(longlong *)
                          (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8);
      if (uVar24 == 0) {
        uVar24 = 0;
LAB_140124378:
        *puVar4 = (short)uVar24 + 1;
        if (cVar12 == '\0') {
          func_0x0001455db994();
        }
      }
      else {
        lVar17 = *(longlong *)(lVar20 + 0xa8);
        if (cVar12 == '\0') {
          uVar21 = 0;
          plVar16 = (longlong *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x12f0);
          cVar12 = '\0';
          do {
            if (cVar12 == '\0') {
              func_0x0001455db994();
              cVar12 = *(char *)(*(longlong *)
                                  (*(longlong *)(unaff_GS_OFFSET + 0x58) +
                                  (ulonglong)__tls_index * 8) + 8);
            }
            if (*plVar16 == lVar17) goto LAB_1401243c9;
            uVar21 = uVar21 + 1;
            plVar16 = plVar16 + 2;
            uVar24 = (ulonglong)*puVar4;
          } while (uVar21 < uVar24);
          goto LAB_140124378;
        }
        uVar21 = 0;
        plVar16 = (longlong *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x12f0);
        do {
          if (*plVar16 == lVar17) goto LAB_1401243c9;
          uVar21 = uVar21 + 1;
          plVar16 = plVar16 + 2;
        } while (uVar24 != uVar21);
        *puVar4 = *puVar4 + 1;
      }
      lVar20 = *(longlong *)(lVar20 + 0xa8);
      uVar21 = (ulonglong)(uint)((int)uVar24 << 4);
      lVar17 = **(longlong **)(unaff_GS_OFFSET + 0x58);
      *(longlong *)(lVar17 + 0x12f0 + uVar21) = lVar20;
      *(undefined2 *)(lVar17 + 0x12f8 + uVar21) = 1;
      FUN_1400716e0(lVar20 + 8);
      goto LAB_1401243f4;
    }
    if (*psVar1 == 0) goto LAB_1401245b4;
    goto LAB_1401245f8;
  }
  goto LAB_140124658;
LAB_1401243c9:
  uVar24 = uVar21 & 0xffff;
  psVar5 = (short *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x12f8 + uVar21 * 0x10);
  *psVar5 = *psVar5 + 1;
LAB_1401243f4:
  if (*(longlong *)(lVar15 + 0x38) == 0) {
    if (*psVar1 == 0) {
      if (-1 < (int)uVar24) {
        if (*(char *)(*(longlong *)
                       (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8) ==
            '\0') {
          func_0x0001455db994();
        }
        lVar15 = **(longlong **)(unaff_GS_OFFSET + 0x58);
        psVar5 = (short *)(lVar15 + 0x12f8 + uVar24 * 0x10);
        *psVar5 = *psVar5 + -1;
        if (*psVar5 == 0) {
          lVar15 = *(longlong *)(lVar15 + 0x12f0 + uVar24 * 0x10);
          lVar20 = *(longlong *)(lVar15 + 0x20);
          if (*(char *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1440) == '\x01') {
            lVar17 = *plVar11;
          }
          else {
            *(undefined1 *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1440) = 1;
            lVar17 = FUN_1400063f0();
            *plVar11 = lVar17;
          }
          if (lVar17 != lVar20) {
            FUN_1402c59f0(lVar15 + 8);
          }
          *puVar4 = *puVar4 - 1;
        }
      }
LAB_1401245b4:
      *psVar2 = *psVar2 + -1;
      lVar15 = _DAT_14a95ded0;
      if (*psVar2 == 0) {
        if (*(char *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1440) == '\x01') {
          lVar20 = *plVar11;
        }
        else {
          *(undefined1 *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1440) = 1;
          lVar20 = FUN_1400063f0();
          *plVar11 = lVar20;
        }
        if (lVar20 != lVar15) {
          FUN_1402c59f0(0x14a95deb8);
        }
      }
    }
  }
  else {
    cVar12 = *(char *)(*(longlong *)(lVar15 + 0x38) + 0xce);
    if (*psVar1 == 0) {
      if (-1 < (int)uVar24) {
        if (*(char *)(*(longlong *)
                       (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8) ==
            '\0') {
          func_0x0001455db994();
        }
        lVar20 = **(longlong **)(unaff_GS_OFFSET + 0x58);
        psVar5 = (short *)(lVar20 + 0x12f8 + uVar24 * 0x10);
        *psVar5 = *psVar5 + -1;
        if (*psVar5 == 0) {
          lVar20 = *(longlong *)(lVar20 + 0x12f0 + uVar24 * 0x10);
          lVar17 = *(longlong *)(lVar20 + 0x20);
          if (*(char *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1440) == '\x01') {
            lVar18 = *plVar11;
          }
          else {
            *(undefined1 *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1440) = 1;
            lVar18 = FUN_1400063f0();
            *plVar11 = lVar18;
          }
          if (lVar18 != lVar17) {
            FUN_1402c59f0(lVar20 + 8);
          }
          *puVar4 = *puVar4 - 1;
        }
      }
      *psVar2 = *psVar2 + -1;
      lVar20 = _DAT_14a95ded0;
      if (*psVar2 == 0) {
        if (*(char *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1440) == '\x01') {
          lVar17 = *plVar11;
        }
        else {
          *(undefined1 *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1440) = 1;
          lVar17 = FUN_1400063f0();
          *plVar11 = lVar17;
        }
        if (lVar17 != lVar20) {
          FUN_1402c59f0(0x14a95deb8);
        }
      }
    }
    if (cVar12 < '\0') {
      FUN_1454357e0(lVar15,0,puVar23 + 1);
    }
  }
LAB_1401245f8:
  if ((bVar26) && (*psStack_90 = *psStack_90 + -1, *psStack_90 == 0)) {
    lVar15 = *(longlong *)(lStack_a8 + 0x18);
    if (*(char *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1440) == '\x01') {
      lVar20 = *plVar11;
    }
    else {
      *(undefined1 *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1440) = 1;
      lVar20 = FUN_1400063f0();
      *plVar11 = lVar20;
    }
    if (lVar20 != lVar15) {
      FUN_1402c59f0(lStack_a8);
    }
  }
  if (!bVar25) {
    FUN_14098cf70(&uStack_80);
  }
  *psVar3 = *psVar3 + -1;
LAB_140124658:
  puVar23 = puVar23 + 4;
  if (puVar23 == puVar22) goto LAB_140124730;
  goto LAB_140124076;
}

