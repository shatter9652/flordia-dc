// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140144f40  size: 1046 bytes
// Name:    FUN_140144f40
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1401457e0, FUN_141704e90, FUN_1456a8490, FUN_140145360, FUN_141704e20
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Possible PIC construction at 0x000140003bda: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001401452e5: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001401451c2: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001401452ea) */
/* WARNING: Removing unreachable block (ram,0x000140003bdf) */
/* WARNING: Removing unreachable block (ram,0x0001401451c7) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140144f40(longlong *param_1)

{
  short *psVar1;
  short sVar2;
  uint uVar3;
  code *pcVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  char cVar9;
  undefined4 uVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  int iVar14;
  longlong *plVar15;
  longlong lVar16;
  ulonglong uVar17;
  byte bVar18;
  ushort uVar19;
  ulonglong unaff_RBX;
  uint uVar20;
  longlong unaff_RSI;
  longlong unaff_RDI;
  ulonglong uVar21;
  int iVar22;
  ulonglong uVar23;
  longlong unaff_GS_OFFSET;
  undefined8 auStack_90 [6];
  ulonglong uStack_60;
  ulonglong uStack_58;
  ulonglong uStack_50;
  longlong *plStack_48;
  
  lVar5 = param_1[1];
  auStack_90[0] = 0x140144f5c;
  uVar10 = FUN_141704e20();
  auStack_90[0] = 0x140144f66;
  FUN_141704e90(lVar5,uVar10);
  lVar5 = param_1[1];
  lVar6 = *param_1;
  uVar3 = *(uint *)((longlong)param_1 + 0x14);
  iVar22 = 0;
  if ((ulonglong)*(uint *)(lVar5 + 4) == 0) {
    uStack_60 = 0;
  }
  else {
    auStack_90[0] = 0x140144f8e;
    uStack_60 = func_0x000144d9c140(4,(ulonglong)*(uint *)(lVar5 + 4) << 2);
    iVar14 = *(int *)(lVar5 + 4);
    if (0 < iVar14) {
      lVar11 = 0;
      uVar23 = 0;
      do {
        uVar21 = uVar23;
        if (*(char *)(*(longlong *)(*(longlong *)(lVar6 + 0x40) + lVar11 * 8) + 0xe0) != '\x03') {
          lVar13 = *(longlong *)(lVar5 + 8);
          uVar12 = (ulonglong)*(byte *)(lVar13 + lVar11 * 2);
          if (uVar12 == 0xfd) {
            bVar18 = *(byte *)(lVar13 + 1 + lVar11 * 2);
            if (bVar18 == 0xfe) goto LAB_140144fe9;
            lVar16 = param_1[3];
LAB_140144fce:
            psVar1 = (short *)(lVar16 + 0xc + (ulonglong)bVar18 * 0x14);
            *psVar1 = *psVar1 + 1;
          }
          else {
            lVar16 = param_1[3];
            psVar1 = (short *)(lVar16 + 0xe + uVar12 * 0x14);
            *psVar1 = *psVar1 + 1;
            bVar18 = *(byte *)(lVar13 + 1 + lVar11 * 2);
            if (bVar18 != 0xfe) goto LAB_140144fce;
          }
          uVar21 = (ulonglong)((int)uVar23 + 1);
          *(int *)(uStack_60 + uVar23 * 4) = (int)lVar11;
          iVar14 = *(int *)(lVar5 + 4);
        }
LAB_140144fe9:
        uVar20 = (uint)uVar21;
        lVar11 = lVar11 + 1;
        uVar23 = uVar21;
      } while (lVar11 < iVar14);
      goto LAB_14014501a;
    }
  }
  uVar20 = 0;
LAB_14014501a:
  if (0 < (int)uVar3) {
    uVar23 = 0;
    lVar11 = 0x10;
    iVar22 = 0;
    do {
      lVar13 = param_1[3];
      sVar2 = *(short *)(lVar13 + -4 + lVar11);
      if (*(short *)(lVar13 + -2 + lVar11) != 0 || sVar2 != 0) {
        iVar14 = iVar22;
        if ((sVar2 != 0) && ((*(uint *)(lVar13 + -0xc + lVar11) & 2) != 0)) {
          iVar14 = iVar22 + 1;
          *(char *)(lVar13 + lVar11) = (char)iVar22;
        }
        auStack_90[0] = 0x140145065;
        FUN_1401457e0(param_1,uVar23 & 0xffffffff);
        iVar22 = iVar14;
      }
      uVar23 = uVar23 + 1;
      lVar11 = lVar11 + 0x14;
    } while (uVar3 != uVar23);
  }
  uVar3 = *(uint *)((longlong)param_1 + 0x24);
  if ((ulonglong)uVar3 != 0) {
    plStack_48 = (longlong *)param_1[5];
    lVar11 = 0;
    do {
      auStack_90[0] = 0x140145333;
      func_0x000141534710(*(undefined8 *)((longlong)plStack_48 + lVar11 + 8));
      lVar11 = lVar11 + 0x10;
    } while ((ulonglong)uVar3 << 4 != lVar11);
  }
  *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  auStack_90[0] = 0x140145091;
  FUN_1456a8490(param_1 + 4,iVar22);
  uVar23 = uStack_60;
  if ((int)uVar20 < 1) {
    if (uStack_60 == 0) {
      return;
    }
  }
  else {
    uVar21 = 0;
    plStack_48 = param_1;
    do {
      uVar12 = (ulonglong)*(uint *)(uVar23 + uVar21 * 4);
      uVar17 = (ulonglong)*(byte *)(*(longlong *)(lVar5 + 8) + uVar12 * 2);
      if (uVar17 != 0xfd) {
        lVar11 = *(longlong *)(*(longlong *)(lVar6 + 0x40) + uVar12 * 8);
        uVar7 = *(undefined8 *)
                 (*(longlong *)(lVar6 + 0x40) +
                 (ulonglong)*(uint *)(param_1[3] + 8 + uVar17 * 0x14) * 8);
        auStack_90[0] = 0x1401450e4;
        cVar9 = FUN_140145360(lVar11,uVar7,lVar6);
        if (cVar9 == '\0') {
          auStack_90[0] = 0x14014510c;
          lVar13 = func_0x000144f2e340(*(undefined8 *)(*(longlong *)(lVar11 + 0x80) + 0x20),
                                       *(undefined4 *)(lVar11 + 0x88));
          uVar19 = *(ushort *)(lVar13 + 0xf08);
          uVar12 = *(ulonglong *)(lVar13 + 0xf00);
          if (uVar19 == *(ushort *)(lVar13 + 0xf0a)) {
            uStack_58 = (ulonglong)uVar19;
            auStack_90[0] = 0x140145146;
            uStack_50 = uVar12;
            uVar12 = func_0x000144d9c140(8,(uint)uVar19 * 8 + 0x20);
            if (uVar19 != 0) {
              auStack_90[0] = 0x1401451ba;
              func_0x000145f40560(uVar12,uStack_50,(int)uStack_58 << 3);
            }
            if (uStack_50 != 0) {
              register0x00000020 = (BADSPACEBASE *)auStack_90;
              auStack_90[0] = 0x1401451c7;
              uVar23 = uStack_50;
              unaff_RBX = uVar12;
              unaff_RSI = lVar5;
              unaff_RDI = lVar6;
              goto FUN_140003ab0;
            }
            *(short *)(lVar13 + 0xf0a) = (short)uStack_58 + 4;
            *(ulonglong *)(lVar13 + 0xf00) = uVar12;
            uVar19 = *(ushort *)(lVar13 + 0xf08);
          }
          *(ushort *)(lVar13 + 0xf08) = uVar19 + 1;
          *(undefined8 *)(uVar12 + (ulonglong)uVar19 * 8) = uVar7;
          *(undefined1 *)(lVar11 + 0xf6) = 1;
          param_1 = plStack_48;
          uVar23 = uStack_60;
        }
      }
      uVar21 = uVar21 + 1;
    } while (uVar20 != uVar21);
    uVar21 = (ulonglong)uVar20 + 1;
    do {
      uVar12 = (ulonglong)*(uint *)((uVar23 - 8) + uVar21 * 4);
      uVar17 = (ulonglong)*(byte *)(*(longlong *)(lVar5 + 8) + 1 + uVar12 * 2);
      if (uVar17 != 0xfe) {
        uVar7 = *(undefined8 *)(*(longlong *)(lVar6 + 0x40) + uVar12 * 8);
        lVar11 = *(longlong *)
                  (*(longlong *)(lVar6 + 0x40) +
                  (ulonglong)*(uint *)(param_1[3] + 8 + uVar17 * 0x14) * 8);
        auStack_90[0] = 0x14014520d;
        cVar9 = FUN_140145360(lVar11,uVar7,lVar6);
        if (cVar9 == '\0') {
          auStack_90[0] = 0x140145236;
          lVar13 = func_0x000144f2e340(*(undefined8 *)(*(longlong *)(lVar11 + 0x80) + 0x20),
                                       *(undefined4 *)(lVar11 + 0x88));
          uVar19 = *(ushort *)(lVar13 + 0xf08);
          uVar23 = *(ulonglong *)(lVar13 + 0xf00);
          if (uVar19 == *(ushort *)(lVar13 + 0xf0a)) {
            uStack_58 = (ulonglong)uVar19;
            auStack_90[0] = 0x14014526e;
            uStack_50 = uVar23;
            uVar23 = func_0x000144d9c140(8,(uint)uVar19 * 8 + 0x20);
            if (uVar19 != 0) {
              auStack_90[0] = 0x1401452e3;
              func_0x000145f40560(uVar23,uStack_50,(int)uStack_58 << 3);
            }
            if (uStack_50 != 0) {
              register0x00000020 = (BADSPACEBASE *)auStack_90;
              auStack_90[0] = 0x1401452ea;
              uVar23 = uStack_50;
              unaff_RBX = (ulonglong)uVar19;
              unaff_RSI = lVar5;
              unaff_RDI = lVar6;
              break;
            }
            *(short *)(lVar13 + 0xf0a) = (short)uStack_58 + 4;
            *(ulonglong *)(lVar13 + 0xf00) = uVar23;
            uVar19 = *(ushort *)(lVar13 + 0xf08);
          }
          *(ushort *)(lVar13 + 0xf08) = uVar19 + 1;
          *(undefined8 *)(uVar23 + (ulonglong)uVar19 * 8) = uVar7;
          *(undefined1 *)(lVar11 + 0xf6) = 1;
          param_1 = plStack_48;
          uVar23 = uStack_60;
        }
      }
      uVar21 = uVar21 - 1;
    } while (1 < uVar21);
  }
FUN_140003ab0:
  *(longlong *)((longlong)register0x00000020 + -8) = unaff_RSI;
  *(longlong *)((longlong)register0x00000020 + -0x10) = unaff_RDI;
  *(ulonglong *)((longlong)register0x00000020 + -0x18) = unaff_RBX;
  if (uVar23 != 0) {
    if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8)
                 + 8) == '\0') {
      *(undefined8 *)((longlong)register0x00000020 + -0x50) = 0x140003ae4;
      func_0x0001455db994();
    }
    plVar8 = _DAT_14aad45b0;
    lVar5 = **(longlong **)(unaff_GS_OFFSET + 0x58);
    plVar15 = *(longlong **)(lVar5 + 0x13a8);
    if (plVar15 == (longlong *)0x0) {
      if (*(char *)(*(longlong *)
                     (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8) ==
          '\0') {
        *(undefined8 *)((longlong)register0x00000020 + -0x50) = 0x140003b50;
        func_0x0001455db994();
      }
      *(longlong **)(lVar5 + 0x13a8) = plVar8;
      plVar15 = plVar8;
    }
    pcVar4 = *(code **)(*plVar15 + 200);
    *(undefined8 *)((longlong)register0x00000020 + -0x50) = 0x140003b0b;
    cVar9 = (*pcVar4)(plVar15,uVar23);
    if (cVar9 != '\0') {
code_r0x000140093420:
      if (uVar23 == 0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x00014009342c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar15 + 0x10))();
      return;
    }
    if (((uVar23 < _DAT_149e1dac0) || (_DAT_149e1dac0 + _DAT_149e1dac8 <= uVar23)) &&
       ((uVar23 < _DAT_149e1dad0 || (_DAT_149e1dad0 + _DAT_149e1dac8 <= uVar23)))) {
      *(undefined8 *)((longlong)register0x00000020 + -0x50) = 0x140003b96;
      FUN_14005a140((undefined8 *)((longlong)register0x00000020 + -0x28));
      plVar15 = *(longlong **)((longlong)register0x00000020 + -0x28);
      do {
        if (plVar15 == (longlong *)0x0) {
LAB_140003bea:
          *(undefined8 *)((longlong)register0x00000020 + -0x50) = 0x140003bf4;
          FUN_14005a120((undefined1 *)((longlong)register0x00000020 + -0x28));
LAB_140003bf4:
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pcVar4 = *(code **)(*plVar15 + 200);
        *(undefined8 *)((longlong)register0x00000020 + -0x50) = 0x140003baa;
        cVar9 = (*pcVar4)(plVar15,uVar23);
        plVar15 = *(longlong **)((longlong)register0x00000020 + -0x28);
        if (cVar9 != '\0') {
          *(undefined8 *)((longlong)register0x00000020 + -0x50) = 0x140003bcf;
          FUN_14005a120((undefined1 *)((longlong)register0x00000020 + -0x28));
          if (plVar15 == (longlong *)0x0) goto LAB_140003bf4;
          *(undefined8 *)((longlong)register0x00000020 + -0x50) = 0x140003bdf;
          goto code_r0x000140093420;
        }
        if (plVar15 == *(longlong **)((longlong)register0x00000020 + -0x20)) {
          *(undefined8 *)((longlong)register0x00000020 + -0x28) = 0;
          goto LAB_140003bea;
        }
        plVar15 = (longlong *)plVar15[1];
        *(longlong **)((longlong)register0x00000020 + -0x28) = plVar15;
      } while( true );
    }
  }
  return;
}

