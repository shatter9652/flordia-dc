// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140159170  size: 41 bytes
// Name:    FUN_140159170
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140159170(longlong *param_1)

{
  short *psVar1;
  ushort *puVar2;
  ushort uVar3;
  uint uVar4;
  undefined8 uVar5;
  char cVar6;
  short sVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 uVar11;
  ulonglong uVar12;
  longlong *plVar13;
  longlong lVar14;
  undefined1 **ppuVar15;
  undefined4 uVar16;
  ulonglong uVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  longlong unaff_GS_OFFSET;
  undefined1 *puStack_d8;
  undefined4 uStack_d0;
  undefined1 uStack_c4;
  undefined8 uStack_c0;
  longlong lStack_b8;
  undefined8 uStack_b0;
  undefined1 uStack_a8;
  short *psStack_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  longlong *plStack_90;
  longlong lStack_88;
  short *psStack_80;
  undefined1 *puStack_78;
  longlong *plStack_70;
  longlong lStack_68;
  short *psStack_60;
  undefined8 *puStack_58;
  ulonglong uStack_50;
  char cStack_41;
  
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    (**(code **)(*param_1 + 0x20))();
  }
  plVar13 = param_1 + 2;
  if (*(char *)((longlong)param_1 + 0x97) != '\0') {
    return;
  }
  *(undefined1 *)((longlong)param_1 + 0x97) = 1;
  *(undefined1 *)((longlong)param_1 + 0x93) = 0;
  if ((*(int *)((longlong)param_1 + 0x1c) == 0) ||
     ((*pcRam0000000149095b50)(&DAT_149095b38,plVar13), *(int *)((longlong)param_1 + 0x1c) == 0)) {
    ppuVar15 = &puStack_d8;
    puStack_78 = (undefined1 *)0x0;
  }
  else {
    lVar8 = FUN_145647140();
    ppuVar15 = (undefined1 **)((longlong)&puStack_d8 + -lVar8);
    puStack_78 = (undefined1 *)((longlong)&puStack_d8 + -lVar8);
  }
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    *(undefined **)((longlong)ppuVar15 + -0x28) = &UNK_14015bdda;
    func_0x0001455db994();
  }
  lVar8 = **(longlong **)(unaff_GS_OFFSET + 0x58);
  if (*(short *)(lVar8 + 0x13a2) == 0) {
    if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8)
                 + 8) == '\0') {
      *(undefined **)((longlong)ppuVar15 + -0x28) = &UNK_14015be29;
      func_0x0001455db994();
    }
    uStack_b0 = 0;
    uStack_a8 = *(short *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x13a4) == 0;
    uStack_98 = (undefined4)
                CONCAT71((int7)((ulonglong)**(longlong **)(unaff_GS_OFFSET + 0x58) >> 8),1);
    if ((bool)uStack_a8) {
      uStack_b0 = 0x14aad4568;
      *(undefined **)((longlong)ppuVar15 + -0x28) = &UNK_14015be65;
      FUN_1400fd6e0();
      uStack_98 = 0;
    }
  }
  else {
    uStack_98 = (undefined4)
                CONCAT71((int7)((ulonglong)*(longlong **)(unaff_GS_OFFSET + 0x58) >> 8),1);
    uStack_b0 = 0;
    uStack_a8 = 0;
  }
  psVar1 = (short *)(lVar8 + 0x13a2);
  cVar6 = *(char *)(*(longlong *)
                     (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8);
  if (cVar6 == '\0') {
    *(undefined **)((longlong)ppuVar15 + -0x28) = &UNK_14015be9b;
    func_0x0001455db994();
    cVar6 = *(char *)(*(longlong *)
                       (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8);
  }
  if (*psVar1 == 0) {
    if (cVar6 == '\0') {
      *(undefined **)((longlong)ppuVar15 + -0x28) = &UNK_14015becf;
      func_0x0001455db994();
      cVar6 = *(char *)(*(longlong *)
                         (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8);
    }
    uVar16 = (undefined4)
             CONCAT71((int7)((ulonglong)psVar1 >> 8),
                      *(short *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x13a4) != 0);
  }
  else {
    uVar16 = 0;
  }
  if (cVar6 == '\0') {
    *(undefined **)((longlong)ppuVar15 + -0x28) = &UNK_14015bf11;
    func_0x0001455db994();
  }
  if ((char)uVar16 == '\0') {
    lStack_68 = 0;
    psStack_80 = (short *)0x0;
  }
  else {
    lVar8 = **(longlong **)(unaff_GS_OFFSET + 0x58);
    sVar7 = *(short *)(lVar8 + 0x13a0);
    *(short *)(lVar8 + 0x13a0) = sVar7 + 1;
    if (sVar7 == 0) {
      lStack_68 = 0x14aad4568;
      *(undefined **)((longlong)ppuVar15 + -0x28) = &UNK_14015bf7b;
      FUN_1400716e0();
      psStack_80 = (short *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x13a0);
    }
    else {
      psStack_80 = (short *)(lVar8 + 0x13a0);
      lStack_68 = 0x14aad4568;
    }
  }
  cStack_41 = '\x01';
  uVar17 = (ulonglong)((*(uint *)(param_1 + 0x11) & 0xffff) << 4);
  if (*(short *)(*(longlong *)(_DAT_14abbf348 + 0x28) + 8 + uVar17) ==
      (short)(*(uint *)(param_1 + 0x11) >> 0x10)) {
    lVar8 = *(longlong *)(*(longlong *)(_DAT_14abbf348 + 0x28) + uVar17);
  }
  else {
    lVar8 = 0;
  }
  uStack_50 = 0;
  uStack_94 = uVar16;
  if ((ulonglong)*(uint *)((longlong)param_1 + 0x1c) != 0) {
    puVar19 = (undefined8 *)param_1[4];
    puVar18 = puVar19 + *(uint *)((longlong)param_1 + 0x1c);
    lVar14 = **(longlong **)(unaff_GS_OFFSET + 0x58);
    uStack_50 = 0;
    psStack_a0 = (short *)(lVar14 + 0x12e8);
    psStack_60 = (short *)(lVar14 + 0x1370);
    puVar2 = (ushort *)(lVar14 + 0x12ea);
    plStack_70 = (longlong *)(lVar14 + 0x1438);
    plStack_90 = plVar13;
    lStack_88 = lVar8;
    puStack_58 = puVar18;
    do {
      lVar14 = *(longlong *)*puVar19;
      if ((lVar14 != 0) && ((*(byte *)(lVar14 + 0x1c) & 8) != 0)) {
        if (*(char *)(*(longlong *)
                       (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8) ==
            '\0') {
          *(undefined **)((longlong)ppuVar15 + -0x28) = &UNK_14015c076;
          func_0x0001455db994();
          if (*(char *)(*(longlong *)
                         (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8)
              == '\0') {
            *(undefined **)((longlong)ppuVar15 + -0x28) = &UNK_14015c09f;
            func_0x0001455db994();
          }
        }
        uVar17 = 0xffffffff;
        if (*psStack_a0 == 0) {
          if (*(char *)(*(longlong *)
                         (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8)
              == '\0') {
            *(undefined **)((longlong)ppuVar15 + -0x28) = &UNK_14015c14d;
            func_0x0001455db994();
          }
          if (*psStack_60 == 0) {
            *(undefined **)((longlong)ppuVar15 + -0x28) = &UNK_14015c16b;
            FUN_1400716e0(0x14a95deb8);
          }
          if (*(char *)(*(longlong *)
                         (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8)
              == '\0') {
            *(undefined **)((longlong)ppuVar15 + -0x28) = &UNK_14015c194;
            func_0x0001455db994();
          }
          *psStack_60 = *psStack_60 + 1;
          lVar9 = *(longlong *)(lVar14 + 0x38);
          if (lVar9 != 0) {
            lVar8 = *(longlong *)(lVar9 + 0xa8);
            uVar17 = 0;
            cVar6 = *(char *)((*(longlong **)(unaff_GS_OFFSET + 0x58))[__tls_index] + 8);
            plVar13 = (longlong *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x12f0);
            lStack_b8 = lVar9;
            while( true ) {
              if (cVar6 == '\0') {
                *(undefined **)((longlong)ppuVar15 + -0x28) = &UNK_14015c1e9;
                func_0x0001455db994();
                cVar6 = *(char *)(*(longlong *)
                                   (*(longlong *)(unaff_GS_OFFSET + 0x58) +
                                   (ulonglong)__tls_index * 8) + 8);
              }
              uVar3 = *puVar2;
              if (uVar3 <= uVar17) {
                if (cVar6 == '\0') {
                  *(undefined **)((longlong)ppuVar15 + -0x28) = &UNK_14015c417;
                  func_0x0001455db994();
                  lVar8 = lStack_88;
                  plVar13 = plStack_90;
                  uVar17 = (ulonglong)*puVar2;
                  lVar9 = *(longlong *)
                           (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8);
                  *puVar2 = *puVar2 + 1;
                  if (*(char *)(lVar9 + 8) == '\0') {
                    *(undefined **)((longlong)ppuVar15 + -0x28) = &UNK_14015c454;
                    func_0x0001455db994();
                  }
                }
                else {
                  *puVar2 = uVar3 + 1;
                  lVar8 = lStack_88;
                  plVar13 = plStack_90;
                  uVar17 = (ulonglong)uVar3;
                }
                uVar12 = (ulonglong)(uint)((int)uVar17 << 4);
                lVar9 = **(longlong **)(unaff_GS_OFFSET + 0x58);
                lVar10 = *(longlong *)(lStack_b8 + 0xa8);
                *(longlong *)(lVar9 + 0x12f0 + uVar12) = lVar10;
                *(undefined2 *)(lVar9 + 0x12f8 + uVar12) = 1;
                *(undefined **)((longlong)ppuVar15 + -0x28) = &UNK_14015c497;
                FUN_1400716e0(lVar10 + 8);
                goto code_r0x00014015c0b2;
              }
              if (cVar6 == '\0') {
                *(undefined **)((longlong)ppuVar15 + -0x28) = &UNK_14015c220;
                func_0x0001455db994();
                cVar6 = *(char *)(*(longlong *)
                                   (*(longlong *)(unaff_GS_OFFSET + 0x58) +
                                   (ulonglong)__tls_index * 8) + 8);
              }
              if (*plVar13 == lVar8) break;
              uVar17 = uVar17 + 1;
              plVar13 = plVar13 + 2;
            }
            *(short *)(plVar13 + 1) = (short)plVar13[1] + 1;
            lVar8 = lStack_88;
            plVar13 = plStack_90;
          }
        }
code_r0x00014015c0b2:
        if (((*(longlong *)(lVar14 + 0x38) != 0) &&
            (lVar9 = *(longlong *)(*(longlong *)(lVar14 + 0x38) + 0x88), lVar9 != 0)) &&
           (*(longlong *)(lVar9 + 0x80) == lVar8)) {
          *(undefined4 *)(puStack_78 + (uStack_50 & 0xffffffff) * 4) =
               *(undefined4 *)(lVar14 + 0x10);
          uStack_50 = (ulonglong)((int)uStack_50 + 1);
        }
        if (*(char *)(*(longlong *)
                       (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8) ==
            '\0') {
          *(undefined **)((longlong)ppuVar15 + -0x28) = &UNK_14015c10d;
          func_0x0001455db994();
        }
        puVar18 = puStack_58;
        if (*psStack_a0 == 0) {
          if (-1 < (int)uVar17) {
            if (*(char *)(*(longlong *)
                           (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8)
                == '\0') {
              *(undefined **)((longlong)ppuVar15 + -0x28) = &UNK_14015c27c;
              func_0x0001455db994();
            }
            lVar9 = (uVar17 & 0xffffffff) * 0x10;
            lVar14 = **(longlong **)(unaff_GS_OFFSET + 0x58);
            psVar1 = (short *)(lVar14 + 0x12f8 + lVar9);
            *psVar1 = *psVar1 + -1;
            if (*psVar1 == 0) {
              lVar14 = *(longlong *)(lVar14 + 0x12f0 + lVar9);
              lVar9 = *(longlong *)(lVar14 + 0x20);
              if (*(char *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1440) == '\x01') {
                lVar10 = *plStack_70;
              }
              else {
                *(undefined1 *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1440) = 1;
                *(undefined **)((longlong)ppuVar15 + -0x28) = &UNK_14015c4ee;
                lVar10 = FUN_1400063f0();
                *plStack_70 = lVar10;
              }
              if (lVar10 != lVar9) {
                *(undefined **)((longlong)ppuVar15 + -0x28) = &UNK_14015c2dd;
                FUN_1402c59f0(lVar14 + 8);
              }
              if (*(char *)(*(longlong *)
                             (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
                           8) == '\0') {
                *(undefined **)((longlong)ppuVar15 + -0x28) = &UNK_14015c306;
                func_0x0001455db994();
              }
              *puVar2 = *puVar2 - 1;
            }
          }
          if (*(char *)(*(longlong *)
                         (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8)
              == '\0') {
            *(undefined **)((longlong)ppuVar15 + -0x28) = &UNK_14015c344;
            func_0x0001455db994();
            puVar18 = puStack_58;
            sVar7 = *psStack_60 + -1;
            cVar6 = *(char *)(*(longlong *)
                               (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8)
                             + 8);
            *psStack_60 = sVar7;
            if (cVar6 == '\0') {
              *(undefined **)((longlong)ppuVar15 + -0x28) = &UNK_14015c37d;
              func_0x0001455db994();
              sVar7 = *psStack_60;
            }
          }
          else {
            sVar7 = *psStack_60 + -1;
            *psStack_60 = sVar7;
            puVar18 = puStack_58;
          }
          lVar14 = _DAT_14a95ded0;
          if (sVar7 == 0) {
            if (*(char *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1440) == '\x01') {
              lVar9 = *plStack_70;
            }
            else {
              *(undefined1 *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1440) = 1;
              *(undefined **)((longlong)ppuVar15 + -0x28) = &UNK_14015c4bc;
              lVar9 = FUN_1400063f0();
              *plStack_70 = lVar9;
            }
            puVar18 = puStack_58;
            if (lVar9 != lVar14) {
              *(undefined **)((longlong)ppuVar15 + -0x28) = &UNK_14015c3df;
              FUN_1402c59f0(0x14a95deb8);
              puVar18 = puStack_58;
            }
          }
        }
      }
      puVar19 = puVar19 + 1;
    } while (puVar19 != puVar18);
  }
  if (lVar8 != 0) {
    uStack_c4 = 2;
    uStack_c0 = 0x100000000;
    puStack_d8 = puStack_78;
    uStack_d0 = (undefined4)uStack_50;
    *(undefined **)((longlong)ppuVar15 + -0x28) = &UNK_14015c540;
    FUN_14098d540(lVar8);
  }
  if (((char)uStack_94 != '\0') && (*psStack_80 = *psStack_80 + -1, *psStack_80 == 0)) {
    lVar8 = *(longlong *)(lStack_68 + 0x18);
    if (*(char *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1440) == '\x01') {
      lVar14 = *(longlong *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1438);
    }
    else {
      lVar9 = **(longlong **)(unaff_GS_OFFSET + 0x58);
      *(undefined1 *)(lVar9 + 0x1440) = 1;
      *(undefined **)((longlong)ppuVar15 + -0x28) = &UNK_14015c74a;
      lVar14 = FUN_1400063f0();
      *(longlong *)(lVar9 + 0x1438) = lVar14;
    }
    lVar9 = lStack_68;
    if (lVar14 != lVar8) {
      *(undefined **)((longlong)ppuVar15 + -0x28) = &UNK_14015c599;
      FUN_1402c59f0(lVar9);
    }
  }
  if ((char)uStack_98 == '\0') {
    *(undefined **)((longlong)ppuVar15 + -0x28) = &UNK_14015c5b0;
    FUN_14098cf70(&uStack_b0);
  }
  *(undefined1 *)((longlong)plVar13 + 0x83) = 1;
  uVar4 = *(uint *)((longlong)plVar13 + 0xc);
  if ((ulonglong)uVar4 != 0) {
    lVar8 = plVar13[2];
    lVar14 = 0;
    do {
      uVar5 = *(undefined8 *)(lVar8 + lVar14);
      *(undefined **)((longlong)ppuVar15 + -0x28) = &UNK_14015c5df;
      FUN_141f97950(uVar5);
      lVar14 = lVar14 + 8;
    } while ((ulonglong)uVar4 << 3 != lVar14);
  }
  *(undefined4 *)((longlong)plVar13 + 0xc) = 0;
  uVar4 = *(uint *)(plVar13 + 7);
  if ((ulonglong)uVar4 != 0) {
    lVar8 = plVar13[8];
    lVar14 = 0;
    do {
      if (!SBORROW1('\0',*(char *)(lVar8 + lVar14))) {
        *(undefined1 *)(lVar8 + lVar14) = 0x80;
      }
      if (!SBORROW1('\0',*(char *)(lVar8 + 1 + lVar14))) {
        *(undefined1 *)(lVar8 + 1 + lVar14) = 0x80;
      }
      if (!SBORROW1('\0',*(char *)(lVar8 + 2 + lVar14))) {
        *(undefined1 *)(lVar8 + 2 + lVar14) = 0x80;
      }
      if (!SBORROW1('\0',*(char *)(lVar8 + 3 + lVar14))) {
        *(undefined1 *)(lVar8 + 3 + lVar14) = 0x80;
      }
      if (!SBORROW1('\0',*(char *)(lVar8 + 4 + lVar14))) {
        *(undefined1 *)(lVar8 + 4 + lVar14) = 0x80;
      }
      if (!SBORROW1('\0',*(char *)(lVar8 + 5 + lVar14))) {
        *(undefined1 *)(lVar8 + 5 + lVar14) = 0x80;
      }
      if (!SBORROW1('\0',*(char *)(lVar8 + 6 + lVar14))) {
        *(undefined1 *)(lVar8 + 6 + lVar14) = 0x80;
      }
      if (!SBORROW1('\0',*(char *)(lVar8 + 7 + lVar14))) {
        *(undefined1 *)(lVar8 + 7 + lVar14) = 0x80;
      }
      if (!SBORROW1('\0',*(char *)(lVar8 + 8 + lVar14))) {
        *(undefined1 *)(lVar8 + 8 + lVar14) = 0x80;
      }
      if (!SBORROW1('\0',*(char *)(lVar8 + 9 + lVar14))) {
        *(undefined1 *)(lVar8 + 9 + lVar14) = 0x80;
      }
      if (!SBORROW1('\0',*(char *)(lVar8 + 10 + lVar14))) {
        *(undefined1 *)(lVar8 + 10 + lVar14) = 0x80;
      }
      if (!SBORROW1('\0',*(char *)(lVar8 + 0xb + lVar14))) {
        *(undefined1 *)(lVar8 + 0xb + lVar14) = 0x80;
      }
      if (!SBORROW1('\0',*(char *)(lVar8 + 0xc + lVar14))) {
        *(undefined1 *)(lVar8 + 0xc + lVar14) = 0x80;
      }
      if (!SBORROW1('\0',*(char *)(lVar8 + 0xd + lVar14))) {
        *(undefined1 *)(lVar8 + 0xd + lVar14) = 0x80;
      }
      if (!SBORROW1('\0',*(char *)(lVar8 + 0xe + lVar14))) {
        *(undefined1 *)(lVar8 + 0xe + lVar14) = 0x80;
      }
      if (!SBORROW1('\0',*(char *)(lVar8 + 0xf + lVar14))) {
        *(undefined1 *)(lVar8 + 0xf + lVar14) = 0x80;
      }
      lVar14 = lVar14 + 0x110;
    } while ((ulonglong)uVar4 * 0x110 - lVar14 != 0);
  }
  *(undefined4 *)((longlong)plVar13 + 0x3c) = 0;
  uVar11 = *(undefined1 *)((longlong)plVar13 + 0x85);
  if (cStack_41 != '\0') {
    uVar11 = 0;
  }
  *(undefined1 *)((longlong)plVar13 + 0x85) = uVar11;
  *(undefined1 *)((longlong)plVar13 + 0x86) = 0;
  return;
}

