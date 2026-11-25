// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400882c0  size: 1525 bytes
// Name:    FUN_1400882c0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1400716e0, FUN_1400063f0, FUN_144dd11b0, FUN_144f51620, FUN_144f011a0, FUN_1402c59f0, FUN_144f515e0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1400882c0(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  short *psVar1;
  ushort *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  byte bVar6;
  char cVar7;
  char cVar8;
  short sVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  short *psVar13;
  longlong *plVar14;
  ulonglong uVar15;
  undefined8 unaff_R13;
  ulonglong uVar16;
  undefined7 uVar17;
  uint uVar18;
  ulonglong uVar19;
  longlong unaff_GS_OFFSET;
  bool bVar20;
  
  uVar3 = *(undefined4 *)(param_1 + 0x9c);
  lVar10 = func_0x0001450ed6c0(uVar3);
  uVar16 = CONCAT71((int7)((ulonglong)unaff_R13 >> 8),1);
  if (lVar10 == 0) goto LAB_140088354;
  cVar8 = *(char *)(lVar10 + 0x14c);
  if ((cVar8 == '\x01') && ((*(byte *)(lVar10 + 0x150) & 1) == 0)) goto LAB_140088307;
  if (param_2 == 0) goto LAB_140088354;
  uVar4 = *(undefined4 *)(param_2 + 0x9c);
  bVar6 = FUN_144dd11b0(uVar4);
  if ((cVar8 == '\0' & (bVar6 ^ 1)) != 0) goto LAB_140088354;
  lVar11 = FUN_144f51620(*(undefined8 *)(lVar10 + 8),*(undefined8 *)(lVar10 + 0x10));
  lVar12 = FUN_144f515e0(param_2);
  if (lVar11 != lVar12) {
    uVar16 = CONCAT71((int7)((ulonglong)lVar11 >> 8),1);
    goto LAB_140088354;
  }
  lVar11 = func_0x0001450ed6c0(uVar4);
  uVar17 = (undefined7)((ulonglong)lVar11 >> 8);
  if ((((*(byte *)(lVar10 + 0x150) & 4) == 0) ||
      (cVar7 = FUN_144f011a0(uVar3,param_2), cVar7 == '\0')) &&
     ((lVar11 == 0 ||
      (((*(byte *)(lVar11 + 0x150) & 4) == 0 ||
       (cVar7 = FUN_144f011a0(uVar4,param_1), cVar7 == '\0')))))) {
    lVar10 = *(longlong *)(param_1 + 0x38);
    if (lVar10 != param_3) {
      uVar16 = CONCAT71(uVar17,1);
      if (*(longlong *)(param_3 + 0x38) == 0) goto LAB_140088354;
      if (*(char *)(*(longlong *)
                     (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8) ==
          '\0') {
        func_0x0001455db994();
        psVar13 = (short *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x12e8);
        if (*(char *)((*(longlong **)(unaff_GS_OFFSET + 0x58))[__tls_index] + 8) == '\0') {
          func_0x0001455db994();
        }
      }
      else {
        psVar13 = (short *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x12e8);
      }
      uVar15 = 0xffffffff;
      if (*psVar13 == 0) {
        if (*(char *)(*(longlong *)
                       (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8) ==
            '\0') {
          func_0x0001455db994();
        }
        lVar11 = **(longlong **)(unaff_GS_OFFSET + 0x58);
        if (*(short *)(lVar11 + 0x1370) == 0) {
          FUN_1400716e0(0x14a95deb8);
        }
        psVar1 = (short *)(lVar11 + 0x1370);
        if (*(char *)(*(longlong *)
                       (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8) ==
            '\0') {
          func_0x0001455db994();
        }
        *psVar1 = *psVar1 + 1;
        lVar11 = *(longlong *)(param_3 + 0x38);
        if (lVar11 != 0) {
          lVar12 = *(longlong *)(lVar11 + 0xa8);
          uVar19 = 0;
          lVar5 = **(longlong **)(unaff_GS_OFFSET + 0x58);
          puVar2 = (ushort *)(lVar5 + 0x12ea);
          plVar14 = (longlong *)(lVar5 + 0x12f0);
          cVar8 = *(char *)((*(longlong **)(unaff_GS_OFFSET + 0x58))[__tls_index] + 8);
          while( true ) {
            if (cVar8 == '\0') {
              func_0x0001455db994();
              cVar8 = *(char *)(*(longlong *)
                                 (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8
                                 ) + 8);
            }
            uVar15 = (ulonglong)*puVar2;
            uVar17 = (undefined7)((ulonglong)puVar2 >> 8);
            if (uVar15 <= uVar19) {
              if (cVar8 == '\0') {
                func_0x0001455db994();
                uVar15 = (ulonglong)*puVar2;
                lVar12 = *(longlong *)
                          (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8);
                *puVar2 = *puVar2 + 1;
                if (*(char *)(lVar12 + 8) == '\0') {
                  func_0x0001455db994();
                }
              }
              else {
                *puVar2 = *puVar2 + 1;
              }
              uVar16 = CONCAT71(uVar17,1);
              lVar11 = *(longlong *)(lVar11 + 0xa8);
              uVar19 = (ulonglong)(uint)((int)uVar15 << 4);
              lVar12 = **(longlong **)(unaff_GS_OFFSET + 0x58);
              *(longlong *)(lVar12 + 0x12f0 + uVar19) = lVar11;
              *(undefined2 *)(lVar12 + 0x12f8 + uVar19) = 1;
              FUN_1400716e0(lVar11 + 8);
              goto LAB_1400884a0;
            }
            if (cVar8 == '\0') {
              func_0x0001455db994();
              cVar8 = *(char *)(*(longlong *)
                                 (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8
                                 ) + 8);
            }
            if (*plVar14 == lVar12) break;
            uVar19 = uVar19 + 1;
            plVar14 = plVar14 + 2;
          }
          *(short *)(plVar14 + 1) = (short)plVar14[1] + 1;
          uVar16 = CONCAT71(uVar17,1);
          uVar15 = uVar19;
          goto LAB_1400884a0;
        }
        uVar18 = 0xffffffff;
        bVar20 = false;
        uVar16 = CONCAT71(uVar17,1);
      }
      else {
LAB_1400884a0:
        uVar18 = (uint)uVar15;
        if ((*(longlong *)(param_3 + 0x38) == 0) ||
           (lVar10 = *(longlong *)(lVar10 + 0x38), lVar10 == 0)) {
          bVar20 = false;
        }
        else {
          bVar20 = *(longlong *)(*(longlong *)(param_3 + 0x38) + 0xa8) ==
                   *(longlong *)(lVar10 + 0xa8);
        }
      }
      if (*(char *)(*(longlong *)
                     (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8) ==
          '\0') {
        func_0x0001455db994();
      }
      if (*psVar13 == 0) {
        if (-1 < (int)uVar18) {
          if (*(char *)(*(longlong *)
                         (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8)
              == '\0') {
            func_0x0001455db994();
          }
          lVar10 = **(longlong **)(unaff_GS_OFFSET + 0x58);
          psVar13 = (short *)(lVar10 + 0x12f8 + (ulonglong)uVar18 * 0x10);
          *psVar13 = *psVar13 + -1;
          if (*psVar13 == 0) {
            lVar10 = *(longlong *)(lVar10 + 0x12f0 + (ulonglong)uVar18 * 0x10);
            lVar11 = *(longlong *)(lVar10 + 0x20);
            if (*(char *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1440) == '\x01') {
              lVar12 = *(longlong *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1438);
            }
            else {
              lVar5 = **(longlong **)(unaff_GS_OFFSET + 0x58);
              *(undefined1 *)(lVar5 + 0x1440) = 1;
              lVar12 = FUN_1400063f0();
              *(longlong *)(lVar5 + 0x1438) = lVar12;
            }
            if (lVar12 != lVar11) {
              FUN_1402c59f0(lVar10 + 8);
            }
            if (*(char *)(*(longlong *)
                           (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8)
                == '\0') {
              func_0x0001455db994();
            }
            psVar13 = (short *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x12ea);
            *psVar13 = *psVar13 + -1;
          }
        }
        if (*(char *)(*(longlong *)
                       (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8) ==
            '\0') {
          func_0x0001455db994();
          lVar10 = **(longlong **)(unaff_GS_OFFSET + 0x58);
          sVar9 = *(short *)(lVar10 + 0x1370) + -1;
          cVar8 = *(char *)((*(longlong **)(unaff_GS_OFFSET + 0x58))[__tls_index] + 8);
          *(short *)(lVar10 + 0x1370) = sVar9;
          if (cVar8 == '\0') {
            func_0x0001455db994();
            sVar9 = *(short *)(lVar10 + 0x1370);
          }
        }
        else {
          sVar9 = *(short *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1370) + -1;
          *(short *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1370) = sVar9;
        }
        lVar10 = _DAT_14a95ded0;
        if (sVar9 == 0) {
          if (*(char *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1440) == '\x01') {
            lVar11 = *(longlong *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1438);
          }
          else {
            lVar12 = **(longlong **)(unaff_GS_OFFSET + 0x58);
            *(undefined1 *)(lVar12 + 0x1440) = 1;
            lVar11 = FUN_1400063f0();
            *(longlong *)(lVar12 + 0x1438) = lVar11;
          }
          if (lVar11 != lVar10) {
            FUN_1402c59f0(0x14a95deb8);
          }
        }
      }
      if (!bVar20) goto LAB_140088354;
    }
  }
  else if (*(char *)(param_1 + 0x30) == '\x03') {
    uVar16 = CONCAT71(uVar17,1);
    if (*(char *)(param_3 + 0x155) == '\r') {
      if (*(char *)(param_3 + 0x156) == '\x01') goto LAB_140088354;
      bVar6 = *(byte *)(param_3 + 0x18);
joined_r0x000140088459:
      uVar16 = CONCAT71(uVar17,1);
      if ((bVar6 & 1) != 0) goto LAB_140088354;
    }
  }
  else {
    uVar16 = CONCAT71(uVar17,1);
    if (*(char *)(param_2 + 0x30) == '\x03') {
      if (*(char *)(param_4 + 0x155) == '\r') {
        if (*(char *)(param_4 + 0x156) == '\x01') goto LAB_140088354;
        bVar6 = *(byte *)(param_4 + 0x18);
        goto joined_r0x000140088459;
      }
    }
    else if (cVar8 == '\x02') goto LAB_140088354;
  }
LAB_140088307:
  uVar16 = 0;
LAB_140088354:
  return uVar16 & 0xffffffff;
}

