// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401bfba0  size: 1135 bytes
// Name:    FUN_1401bfba0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1402c59f0, FUN_1400063f0, FUN_1400716e0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_1401bfba0(longlong param_1)

{
  short *psVar1;
  ushort *puVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  char cVar6;
  short sVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  short *psVar11;
  longlong *plVar12;
  ulonglong uVar13;
  longlong unaff_GS_OFFSET;
  
  if ((*(byte *)(param_1 + 0x1c) & 8) != 0) {
    if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8)
                 + 8) == '\0') {
      func_0x0001455db994();
      psVar11 = (short *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x12e8);
      if (*(char *)((*(longlong **)(unaff_GS_OFFSET + 0x58))[__tls_index] + 8) == '\0') {
        func_0x0001455db994();
      }
    }
    else {
      psVar11 = (short *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x12e8);
    }
    uVar10 = 0xffffffff;
    if (*psVar11 == 0) {
      if (*(char *)(*(longlong *)
                     (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8) ==
          '\0') {
        func_0x0001455db994();
      }
      lVar3 = **(longlong **)(unaff_GS_OFFSET + 0x58);
      if (*(short *)(lVar3 + 0x1370) == 0) {
        FUN_1400716e0(0x14a95deb8);
      }
      psVar1 = (short *)(lVar3 + 0x1370);
      if (*(char *)(*(longlong *)
                     (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8) ==
          '\0') {
        func_0x0001455db994();
      }
      *psVar1 = *psVar1 + 1;
      lVar3 = *(longlong *)(param_1 + 0x38);
      if (lVar3 != 0) {
        lVar8 = *(longlong *)(lVar3 + 0xa8);
        uVar13 = 0;
        lVar9 = **(longlong **)(unaff_GS_OFFSET + 0x58);
        cVar6 = *(char *)((*(longlong **)(unaff_GS_OFFSET + 0x58))[__tls_index] + 8);
        puVar2 = (ushort *)(lVar9 + 0x12ea);
        plVar12 = (longlong *)(lVar9 + 0x12f0);
        while( true ) {
          if (cVar6 == '\0') {
            func_0x0001455db994();
            cVar6 = *(char *)(*(longlong *)
                               (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8)
                             + 8);
          }
          uVar10 = (ulonglong)*puVar2;
          if (uVar10 <= uVar13) {
            if (cVar6 == '\0') {
              func_0x0001455db994();
              uVar10 = (ulonglong)*puVar2;
              lVar8 = *(longlong *)
                       (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8);
              *puVar2 = *puVar2 + 1;
              if (*(char *)(lVar8 + 8) == '\0') {
                func_0x0001455db994();
              }
            }
            else {
              *puVar2 = *puVar2 + 1;
            }
            lVar3 = *(longlong *)(lVar3 + 0xa8);
            uVar13 = (ulonglong)(uint)((int)uVar10 << 4);
            lVar8 = **(longlong **)(unaff_GS_OFFSET + 0x58);
            *(longlong *)(lVar8 + 0x12f0 + uVar13) = lVar3;
            *(undefined2 *)(lVar8 + 0x12f8 + uVar13) = 1;
            FUN_1400716e0(lVar3 + 8);
            goto LAB_1401bfc2e;
          }
          if (cVar6 == '\0') {
            func_0x0001455db994();
            cVar6 = *(char *)(*(longlong *)
                               (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8)
                             + 8);
          }
          if (*plVar12 == lVar8) break;
          uVar13 = uVar13 + 1;
          plVar12 = plVar12 + 2;
        }
        *(short *)(plVar12 + 1) = (short)plVar12[1] + 1;
        uVar10 = uVar13;
      }
    }
LAB_1401bfc2e:
    bVar5 = true;
    if ((*(longlong *)(param_1 + 0x38) != 0) &&
       (lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x88), lVar3 != 0)) {
      param_1 = *(longlong *)(lVar3 + 0x80);
      bVar5 = false;
    }
    if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8)
                 + 8) == '\0') {
      func_0x0001455db994();
    }
    if (*psVar11 == 0) {
      if (-1 < (int)uVar10) {
        if (*(char *)(*(longlong *)
                       (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8) ==
            '\0') {
          func_0x0001455db994();
        }
        lVar8 = (uVar10 & 0xffffffff) * 0x10;
        lVar3 = **(longlong **)(unaff_GS_OFFSET + 0x58);
        psVar11 = (short *)(lVar3 + 0x12f8 + lVar8);
        *psVar11 = *psVar11 + -1;
        if (*psVar11 == 0) {
          lVar3 = *(longlong *)(lVar3 + 0x12f0 + lVar8);
          lVar8 = *(longlong *)(lVar3 + 0x20);
          if (*(char *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1440) == '\x01') {
            lVar9 = *(longlong *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1438);
          }
          else {
            lVar4 = **(longlong **)(unaff_GS_OFFSET + 0x58);
            *(undefined1 *)(lVar4 + 0x1440) = 1;
            lVar9 = FUN_1400063f0();
            *(longlong *)(lVar4 + 0x1438) = lVar9;
          }
          if (lVar9 != lVar8) {
            FUN_1402c59f0(lVar3 + 8);
          }
          if (*(char *)(*(longlong *)
                         (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8)
              == '\0') {
            func_0x0001455db994();
          }
          psVar11 = (short *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x12ea);
          *psVar11 = *psVar11 + -1;
        }
      }
      if (*(char *)(*(longlong *)
                     (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8) ==
          '\0') {
        func_0x0001455db994();
        lVar3 = **(longlong **)(unaff_GS_OFFSET + 0x58);
        sVar7 = *(short *)(lVar3 + 0x1370) + -1;
        cVar6 = *(char *)((*(longlong **)(unaff_GS_OFFSET + 0x58))[__tls_index] + 8);
        *(short *)(lVar3 + 0x1370) = sVar7;
        if (cVar6 == '\0') {
          func_0x0001455db994();
          sVar7 = *(short *)(lVar3 + 0x1370);
        }
      }
      else {
        sVar7 = *(short *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1370) + -1;
        *(short *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1370) = sVar7;
      }
      lVar3 = _DAT_14a95ded0;
      if (sVar7 == 0) {
        if (*(char *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1440) == '\x01') {
          lVar8 = *(longlong *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1438);
        }
        else {
          lVar9 = **(longlong **)(unaff_GS_OFFSET + 0x58);
          *(undefined1 *)(lVar9 + 0x1440) = 1;
          lVar8 = FUN_1400063f0();
          *(longlong *)(lVar9 + 0x1438) = lVar8;
        }
        if (lVar8 != lVar3) {
          FUN_1402c59f0(0x14a95deb8);
        }
      }
    }
    if (!bVar5) {
      return param_1;
    }
  }
  return 0;
}

