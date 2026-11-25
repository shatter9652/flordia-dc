// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140038aa0  size: 1035 bytes
// Name:    FUN_140038aa0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1402c59f0, FUN_1400716e0, FUN_1400063f0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_140038aa0(ulonglong param_1)

{
  ushort *puVar1;
  short *psVar2;
  longlong *plVar3;
  short *psVar4;
  short sVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  char cVar9;
  ushort uVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  longlong unaff_GS_OFFSET;
  
  uVar15 = param_1 >> 0x20;
  lVar6 = **(longlong **)(unaff_GS_OFFSET + 0x58);
  puVar1 = (ushort *)(lVar6 + 0x12ea);
  psVar2 = (short *)(lVar6 + 0x1370);
  plVar3 = (longlong *)(lVar6 + 0x1438);
LAB_140038ae7:
  uVar17 = (ulonglong)(((uint)param_1 & 0xffff) << 4);
  if (*(short *)(*(longlong *)(_DAT_14abbf348 + 0x28) + 8 + uVar17) != (short)(param_1 >> 0x10)) {
    return 0;
  }
  lVar7 = *(longlong *)(*(longlong *)(_DAT_14abbf348 + 0x28) + uVar17);
  if (lVar7 == 0) {
    return 0;
  }
  lVar8 = *(longlong *)(lVar7 + 0x30);
  if (lVar8 != 0) {
    if (((short)uVar15 == -2) || (uVar10 = func_0x0001403dc2f0(lVar7,uVar15), uVar10 == 0xfffe)) {
      uVar17 = *(ulonglong *)(lVar8 + 0x18);
      if ((uVar17 != 0 && (ulonglong)**(byte **)(lVar8 + 8) != 0xff) &&
         ((*(byte *)(uVar17 + 0x1ad + (ulonglong)**(byte **)(lVar8 + 8) * 0x1b0) & 2) != 0)) {
LAB_140038e98:
        return CONCAT71((int7)(uVar17 >> 8),1);
      }
    }
    else {
      if (uVar10 == 0xffff) {
        return 0;
      }
      if (*(longlong *)(lVar8 + 0x18) != 0) {
        do {
          uVar17 = (ulonglong)uVar10;
          uVar16 = (ulonglong)*(byte *)(*(longlong *)(lVar8 + 8) + uVar17 * 4);
          if ((uVar16 != 0xff) &&
             ((*(byte *)(*(longlong *)(lVar8 + 0x18) + 0x1ad + uVar16 * 0x1b0) & 2) != 0))
          goto LAB_140038e98;
          uVar10 = *(ushort *)(*(longlong *)(lVar8 + 8) + 2 + uVar17 * 4);
        } while (uVar10 != 0xfffe);
      }
    }
  }
  uVar14 = 0xffffffff;
  if (*(short *)(lVar6 + 0x12e8) == 0) {
    sVar5 = *psVar2;
    if (sVar5 == 0) {
      FUN_1400716e0(0x14a95deb8);
      sVar5 = *psVar2;
    }
    *psVar2 = sVar5 + 1;
    lVar8 = *(longlong *)(lVar7 + 0x38);
    if (lVar8 != 0) {
      uVar10 = *puVar1;
      uVar14 = (uint)uVar10;
      cVar9 = *(char *)(*(longlong *)
                         (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8);
      if ((ulonglong)uVar10 == 0) {
        uVar14 = 0;
LAB_140038ce7:
        *puVar1 = (short)uVar14 + 1;
        if (cVar9 == '\0') {
          func_0x0001455db994();
        }
      }
      else {
        lVar12 = *(longlong *)(lVar8 + 0xa8);
        if (cVar9 == '\0') {
          uVar17 = 0;
          plVar11 = (longlong *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x12f0);
          cVar9 = '\0';
          do {
            if (cVar9 == '\0') {
              func_0x0001455db994();
              cVar9 = *(char *)(*(longlong *)
                                 (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8
                                 ) + 8);
            }
            if (*plVar11 == lVar12) goto LAB_140038d38;
            uVar17 = uVar17 + 1;
            plVar11 = plVar11 + 2;
            uVar14 = (uint)*puVar1;
          } while (uVar17 < *puVar1);
          goto LAB_140038ce7;
        }
        uVar17 = 0;
        plVar11 = (longlong *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x12f0);
        do {
          if (*plVar11 == lVar12) goto LAB_140038d38;
          uVar17 = uVar17 + 1;
          plVar11 = plVar11 + 2;
        } while (uVar10 != uVar17);
        *puVar1 = uVar10 + 1;
      }
      lVar8 = *(longlong *)(lVar8 + 0xa8);
      lVar12 = **(longlong **)(unaff_GS_OFFSET + 0x58);
      *(longlong *)(lVar12 + 0x12f0 + (ulonglong)(uVar14 << 4)) = lVar8;
      *(undefined2 *)(lVar12 + 0x12f8 + (ulonglong)(uVar14 << 4)) = 1;
      FUN_1400716e0(lVar8 + 8);
    }
  }
  goto LAB_140038d5f;
LAB_140038d38:
  uVar14 = (uint)uVar17 & 0xffff;
  psVar4 = (short *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x12f8 + uVar17 * 0x10);
  *psVar4 = *psVar4 + 1;
LAB_140038d5f:
  lVar7 = *(longlong *)(lVar7 + 0x38);
  if (lVar7 != 0) {
    param_1 = *(ulonglong *)(lVar7 + 0xb0);
    uVar15 = param_1 >> 0x20;
  }
  if (*(short *)(lVar6 + 0x12e8) == 0) {
    if (-1 < (int)uVar14) {
      if (*(char *)(*(longlong *)
                     (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8) ==
          '\0') {
        func_0x0001455db994();
      }
      lVar8 = **(longlong **)(unaff_GS_OFFSET + 0x58);
      psVar4 = (short *)(lVar8 + 0x12f8 + (ulonglong)uVar14 * 0x10);
      *psVar4 = *psVar4 + -1;
      if (*psVar4 == 0) {
        lVar8 = *(longlong *)(lVar8 + 0x12f0 + (ulonglong)uVar14 * 0x10);
        lVar12 = *(longlong *)(lVar8 + 0x20);
        if (*(char *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1440) == '\x01') {
          lVar13 = *plVar3;
        }
        else {
          *(undefined1 *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1440) = 1;
          lVar13 = FUN_1400063f0();
          *plVar3 = lVar13;
        }
        if (lVar13 != lVar12) {
          FUN_1402c59f0(lVar8 + 8);
        }
        *puVar1 = *puVar1 - 1;
      }
    }
    *psVar2 = *psVar2 + -1;
    lVar8 = _DAT_14a95ded0;
    if (*psVar2 == 0) {
      if (*(char *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1440) == '\x01') {
        lVar12 = *plVar3;
      }
      else {
        *(undefined1 *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1440) = 1;
        lVar12 = FUN_1400063f0();
        *plVar3 = lVar12;
      }
      if (lVar12 != lVar8) {
        FUN_1402c59f0(0x14a95deb8);
      }
    }
  }
  if (lVar7 == 0) {
    return 0;
  }
  goto LAB_140038ae7;
}

