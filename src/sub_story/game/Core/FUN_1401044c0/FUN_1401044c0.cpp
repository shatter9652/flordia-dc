// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401044c0  size: 1332 bytes
// Name:    FUN_1401044c0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144dc3fc0, FUN_1400063f0, FUN_1400716e0, FUN_1402c59f0, FUN_144de6230, FUN_14540c440
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1401044c0(longlong param_1,undefined4 param_2,undefined8 *param_3)

{
  short *psVar1;
  ushort *puVar2;
  longlong lVar3;
  char cVar4;
  short sVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 unaff_RSI;
  undefined7 uVar11;
  ulonglong uVar10;
  short *psVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong unaff_GS_OFFSET;
  undefined8 uStack_48;
  
  lVar6 = FUN_144de6230(param_2);
  uVar11 = (undefined7)((ulonglong)unaff_RSI >> 8);
  if (lVar6 != 0) {
    cVar4 = FUN_144dc3fc0(param_2);
    if (cVar4 != '\0') {
      uVar10 = CONCAT71(uVar11,1);
      if ((param_3 == (undefined8 *)0x0) ||
         (plVar9 = *(longlong **)(lVar6 + 0x38), plVar9 == (longlong *)0x0)) goto LAB_1401048f2;
      lVar7 = func_0x0001450ed6c0(param_2);
      sVar5 = *(short *)(lVar7 + 0x148);
      if (sVar5 == -1) {
LAB_14010484b:
        func_0x0001451986d0(plVar9,&uStack_48);
      }
      else {
        cVar4 = (**(code **)(*plVar9 + 0xb0))(plVar9);
        if (cVar4 == '\0') {
          plVar9 = *(longlong **)(lVar6 + 0x38);
          goto LAB_14010484b;
        }
        FUN_14540c440(&uStack_48,lVar6,(int)sVar5);
      }
      *param_3 = uStack_48;
      goto LAB_1401048f2;
    }
  }
  if ((param_1 == 0) || ((*(byte *)(param_1 + 0x1a) & 0x40) == 0)) {
    uVar10 = 0;
  }
  else {
    uVar10 = CONCAT71(uVar11,1);
    if (param_3 != (undefined8 *)0x0) {
      if (*(char *)(*(longlong *)
                     (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8) ==
          '\0') {
        func_0x0001455db994();
        psVar12 = (short *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x12e8);
        if (*(char *)((*(longlong **)(unaff_GS_OFFSET + 0x58))[__tls_index] + 8) == '\0') {
          func_0x0001455db994();
        }
      }
      else {
        psVar12 = (short *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x12e8);
      }
      uVar13 = 0xffffffff;
      if (*psVar12 == 0) {
        if (*(char *)(*(longlong *)
                       (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8) ==
            '\0') {
          func_0x0001455db994();
        }
        lVar6 = **(longlong **)(unaff_GS_OFFSET + 0x58);
        if (*(short *)(lVar6 + 0x1370) == 0) {
          FUN_1400716e0(0x14a95deb8);
        }
        psVar1 = (short *)(lVar6 + 0x1370);
        if (*(char *)(*(longlong *)
                       (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8) ==
            '\0') {
          func_0x0001455db994();
        }
        *psVar1 = *psVar1 + 1;
        lVar6 = *(longlong *)(param_1 + 0x38);
        if (lVar6 != 0) {
          lVar7 = *(longlong *)(lVar6 + 0xa8);
          uVar14 = 0;
          lVar8 = **(longlong **)(unaff_GS_OFFSET + 0x58);
          puVar2 = (ushort *)(lVar8 + 0x12ea);
          plVar9 = (longlong *)(lVar8 + 0x12f0);
          cVar4 = *(char *)((*(longlong **)(unaff_GS_OFFSET + 0x58))[__tls_index] + 8);
          while( true ) {
            if (cVar4 == '\0') {
              func_0x0001455db994();
              cVar4 = *(char *)(*(longlong *)
                                 (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8
                                 ) + 8);
            }
            uVar13 = (ulonglong)*puVar2;
            if (uVar13 <= uVar14) {
              if (cVar4 == '\0') {
                func_0x0001455db994();
                uVar13 = (ulonglong)*puVar2;
                lVar7 = *(longlong *)
                         (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8);
                *puVar2 = *puVar2 + 1;
                if (*(char *)(lVar7 + 8) == '\0') {
                  func_0x0001455db994();
                }
              }
              else {
                *puVar2 = *puVar2 + 1;
              }
              uVar14 = (ulonglong)(uint)((int)uVar13 << 4);
              lVar7 = **(longlong **)(unaff_GS_OFFSET + 0x58);
              lVar6 = *(longlong *)(lVar6 + 0xa8);
              *(longlong *)(lVar7 + 0x12f0 + uVar14) = lVar6;
              *(undefined2 *)(lVar7 + 0x12f8 + uVar14) = 1;
              FUN_1400716e0(lVar6 + 8);
              goto LAB_1401045e2;
            }
            if (cVar4 == '\0') {
              func_0x0001455db994();
              cVar4 = *(char *)(*(longlong *)
                                 (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8
                                 ) + 8);
            }
            if (*plVar9 == lVar7) break;
            uVar14 = uVar14 + 1;
            plVar9 = plVar9 + 2;
          }
          *(short *)(plVar9 + 1) = (short)plVar9[1] + 1;
          uVar13 = uVar14;
        }
      }
LAB_1401045e2:
      if (*(longlong *)(param_1 + 0x38) != 0) {
        *param_3 = *(undefined8 *)(*(longlong *)(param_1 + 0x38) + 0xb0);
      }
      if (*(char *)(*(longlong *)
                     (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8) ==
          '\0') {
        func_0x0001455db994();
      }
      if (*psVar12 == 0) {
        if (-1 < (int)uVar13) {
          if (*(char *)(*(longlong *)
                         (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8)
              == '\0') {
            func_0x0001455db994();
          }
          lVar7 = (uVar13 & 0xffffffff) * 0x10;
          lVar6 = **(longlong **)(unaff_GS_OFFSET + 0x58);
          psVar12 = (short *)(lVar6 + 0x12f8 + lVar7);
          *psVar12 = *psVar12 + -1;
          if (*psVar12 == 0) {
            lVar6 = *(longlong *)(lVar6 + 0x12f0 + lVar7);
            lVar7 = *(longlong *)(lVar6 + 0x20);
            if (*(char *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1440) == '\x01') {
              lVar8 = *(longlong *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1438);
            }
            else {
              lVar3 = **(longlong **)(unaff_GS_OFFSET + 0x58);
              *(undefined1 *)(lVar3 + 0x1440) = 1;
              lVar8 = FUN_1400063f0();
              *(longlong *)(lVar3 + 0x1438) = lVar8;
            }
            if (lVar8 != lVar7) {
              FUN_1402c59f0(lVar6 + 8);
            }
            if (*(char *)(*(longlong *)
                           (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8)
                == '\0') {
              func_0x0001455db994();
            }
            psVar12 = (short *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x12ea);
            *psVar12 = *psVar12 + -1;
          }
        }
        if (*(char *)(*(longlong *)
                       (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8) ==
            '\0') {
          func_0x0001455db994();
          lVar6 = **(longlong **)(unaff_GS_OFFSET + 0x58);
          sVar5 = *(short *)(lVar6 + 0x1370) + -1;
          cVar4 = *(char *)((*(longlong **)(unaff_GS_OFFSET + 0x58))[__tls_index] + 8);
          *(short *)(lVar6 + 0x1370) = sVar5;
          if (cVar4 == '\0') {
            func_0x0001455db994();
            sVar5 = *(short *)(lVar6 + 0x1370);
          }
        }
        else {
          sVar5 = *(short *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1370) + -1;
          *(short *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1370) = sVar5;
        }
        lVar6 = _DAT_14a95ded0;
        if (sVar5 == 0) {
          if (*(char *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1440) == '\x01') {
            lVar7 = *(longlong *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1438);
          }
          else {
            lVar8 = **(longlong **)(unaff_GS_OFFSET + 0x58);
            *(undefined1 *)(lVar8 + 0x1440) = 1;
            lVar7 = FUN_1400063f0();
            *(longlong *)(lVar8 + 0x1438) = lVar7;
          }
          if (lVar7 != lVar6) {
            FUN_1402c59f0(0x14a95deb8);
          }
        }
      }
    }
  }
LAB_1401048f2:
  return uVar10 & 0xffffffff;
}

