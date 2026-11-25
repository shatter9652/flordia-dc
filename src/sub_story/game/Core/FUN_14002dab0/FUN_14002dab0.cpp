// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14002dab0  size: 1002 bytes
// Name:    FUN_14002dab0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1400063f0, FUN_1402c59f0, FUN_144e296b0, FUN_1455998b0, FUN_1400716e0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_14002dab0(longlong param_1)

{
  short *psVar1;
  short *psVar2;
  ushort *puVar3;
  longlong *plVar4;
  short *psVar5;
  float fVar6;
  ushort uVar7;
  char cVar8;
  uint uVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong unaff_GS_OFFSET;
  
  uVar15 = (ulonglong)*(uint *)(param_1 + 0xc4);
  if (*(uint *)(param_1 + 0xc4) == 0) {
    return 0;
  }
  lVar10 = **(longlong **)(unaff_GS_OFFSET + 0x58);
  psVar1 = (short *)(lVar10 + 0x12e8);
  psVar2 = (short *)(lVar10 + 0x1370);
  puVar3 = (ushort *)(lVar10 + 0x12ea);
  plVar4 = (longlong *)(lVar10 + 0x1438);
LAB_14002daf9:
  uVar9 = (int)uVar15 - 1;
  uVar15 = (ulonglong)uVar9;
  fVar6 = *(float *)(*(longlong *)(param_1 + 200) + 8 + uVar15 * 0x10);
  lVar10 = *(longlong *)(*(longlong *)(param_1 + 200) + uVar15 * 0x10);
  *(uint *)(param_1 + 0xc4) = uVar9;
  if (fVar6 < *(float *)(param_1 + 0x20d0)) {
    if (*(longlong *)(lVar10 + 0x38) == 0) {
      lVar10 = func_0x000145329b50(*(undefined4 *)(lVar10 + 0x30));
      if (((*(char *)(param_1 + 0xb1) == '\0') &&
          (lVar14 = *(longlong *)(lVar10 + 0x38), lVar14 != 0)) &&
         ((*(byte *)(lVar10 + 0x1c) & 8) == 0)) {
        uVar9 = 0xffffffff;
        if (*psVar1 != 0) goto LAB_14002dd2a;
        if (*psVar2 != 0) {
          *psVar2 = *psVar2 + 1;
LAB_14002dbbb:
          uVar7 = *puVar3;
          uVar9 = (uint)uVar7;
          cVar8 = *(char *)(*(longlong *)
                             (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
                           8);
          if ((ulonglong)uVar7 == 0) {
            uVar9 = 0;
LAB_14002dca2:
            *puVar3 = (short)uVar9 + 1;
            if (cVar8 == '\0') {
              func_0x0001455db994();
            }
          }
          else {
            lVar12 = *(longlong *)(lVar14 + 0xa8);
            if (cVar8 == '\0') {
              uVar15 = 0;
              plVar11 = (longlong *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x12f0);
              cVar8 = '\0';
              do {
                if (cVar8 == '\0') {
                  func_0x0001455db994();
                  cVar8 = *(char *)(*(longlong *)
                                     (*(longlong *)(unaff_GS_OFFSET + 0x58) +
                                     (ulonglong)__tls_index * 8) + 8);
                }
                if (*plVar11 == lVar12) goto LAB_14002dd00;
                uVar9 = (uint)*puVar3;
                uVar15 = uVar15 + 1;
                plVar11 = plVar11 + 2;
              } while (uVar15 < *puVar3);
              goto LAB_14002dca2;
            }
            uVar15 = 0;
            plVar11 = (longlong *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x12f0);
            do {
              if (*plVar11 == lVar12) goto LAB_14002dd00;
              uVar15 = uVar15 + 1;
              plVar11 = plVar11 + 2;
            } while (uVar7 != uVar15);
            *puVar3 = uVar7 + 1;
          }
          lVar14 = *(longlong *)(lVar14 + 0xa8);
          lVar12 = **(longlong **)(unaff_GS_OFFSET + 0x58);
          *(longlong *)(lVar12 + 0x12f0 + (ulonglong)(uVar9 << 4)) = lVar14;
          *(undefined2 *)(lVar12 + 0x12f8 + (ulonglong)(uVar9 << 4)) = 1;
          FUN_1400716e0(lVar14 + 8);
          goto LAB_14002dd2a;
        }
        FUN_1400716e0(0x14a95deb8);
        lVar14 = *(longlong *)(lVar10 + 0x38);
        *psVar2 = *psVar2 + 1;
        if (lVar14 != 0) goto LAB_14002dbbb;
        if (*psVar1 != 0) goto LAB_14002de1b;
        goto LAB_14002dde4;
      }
      goto LAB_14002de1b;
    }
    FUN_144e296b0(*(undefined8 *)(lVar10 + 0x30),param_1);
    FUN_144e296b0(*(undefined8 *)(lVar10 + 0x38),param_1);
    goto LAB_14002de2a;
  }
  goto LAB_14002de30;
LAB_14002dd00:
  uVar9 = (uint)uVar15 & 0xffff;
  psVar5 = (short *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x12f8 + uVar15 * 0x10);
  *psVar5 = *psVar5 + 1;
LAB_14002dd2a:
  lVar14 = *(longlong *)(lVar10 + 0x38);
  if (((lVar14 != 0) && (*(longlong *)(lVar14 + 0x90) != 0)) && (*(longlong *)(lVar14 + 0x88) == 0))
  {
    FUN_144e296b0(*(undefined8 *)(*(longlong *)(lVar14 + 0xa8) + 0x30),param_1);
  }
  if (*psVar1 == 0) {
    if (-1 < (int)uVar9) {
      if (*(char *)(*(longlong *)
                     (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8) ==
          '\0') {
        func_0x0001455db994();
      }
      lVar14 = **(longlong **)(unaff_GS_OFFSET + 0x58);
      psVar5 = (short *)(lVar14 + 0x12f8 + (ulonglong)uVar9 * 0x10);
      *psVar5 = *psVar5 + -1;
      if (*psVar5 == 0) {
        lVar14 = *(longlong *)(lVar14 + 0x12f0 + (ulonglong)uVar9 * 0x10);
        lVar12 = *(longlong *)(lVar14 + 0x20);
        if (*(char *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1440) == '\x01') {
          lVar13 = *plVar4;
        }
        else {
          *(undefined1 *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1440) = 1;
          lVar13 = FUN_1400063f0();
          *plVar4 = lVar13;
        }
        if (lVar13 != lVar12) {
          FUN_1402c59f0(lVar14 + 8);
        }
        *puVar3 = *puVar3 - 1;
      }
    }
LAB_14002dde4:
    *psVar2 = *psVar2 + -1;
    lVar14 = _DAT_14a95ded0;
    if (*psVar2 == 0) {
      if (*(char *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1440) == '\x01') {
        lVar12 = *plVar4;
      }
      else {
        *(undefined1 *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1440) = 1;
        lVar12 = FUN_1400063f0();
        *plVar4 = lVar12;
      }
      if (lVar12 != lVar14) {
        FUN_1402c59f0(0x14a95deb8);
      }
    }
  }
LAB_14002de1b:
  cVar8 = FUN_1455998b0(param_1,lVar10);
  if (cVar8 != '\0') {
    return lVar10;
  }
LAB_14002de2a:
  uVar15 = (ulonglong)*(uint *)(param_1 + 0xc4);
LAB_14002de30:
  if ((int)uVar15 == 0) {
    return 0;
  }
  goto LAB_14002daf9;
}

