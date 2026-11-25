// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140033cc0  size: 1952 bytes
// Name:    FUN_140033cc0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144f80240, FUN_1443a4ab0, FUN_14555ee70
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_140033cc0(longlong param_1,uint *param_2)

{
  undefined8 uVar1;
  int *piVar2;
  longlong lVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  longlong *plVar12;
  int iVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  uint uVar17;
  ulonglong uVar18;
  longlong unaff_GS_OFFSET;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [32];
  
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    func_0x0001455db994();
    plVar12 = (longlong *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x12a8);
    lVar7 = *plVar12;
    lVar8 = *(longlong *)(lVar7 + 0x12328);
    if (*(char *)((*(longlong **)(unaff_GS_OFFSET + 0x58))[__tls_index] + 8) == '\0') {
      func_0x0001455db994();
      lVar7 = *plVar12;
    }
  }
  else {
    plVar12 = (longlong *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x12a8);
    lVar7 = *plVar12;
    lVar8 = *(longlong *)(lVar7 + 0x12328);
  }
  cVar4 = *(char *)(lVar8 + 0x79);
  if (*(char *)(lVar7 + 0x1237d) != cVar4) {
    *(char *)(lVar7 + 0x1237d) = cVar4;
    *(ulonglong *)(lVar7 + 0x12520) =
         (ulonglong)(*(char *)(lVar7 + 0x123fd) != cVar4) << 0x12 |
         *(ulonglong *)(lVar7 + 0x12520) & 0xfffffffffffbffff;
  }
  if ((*(longlong *)(lVar8 + 8) != 0) &&
     ((~*(ulonglong *)(*(longlong *)(lVar8 + 8) + 0x50) & 0x300000000000000) == 0)) {
    cVar4 = func_0x000144d9db40(*(undefined8 *)(param_1 + 0x40));
    if (cVar4 != '\0') {
      if (*(char *)(*(longlong *)
                     (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8) ==
          '\0') {
        func_0x0001455db994();
        lVar7 = *plVar12;
      }
      if (*(longlong *)(lVar7 + 0x12320) != 0) {
        *(undefined8 *)(lVar7 + 0x12320) = 0;
        *(byte *)(lVar7 + 0x12522) = *(byte *)(lVar7 + 0x12522) | 0x80;
      }
      if (*(char *)(*(longlong *)
                     (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8) ==
          '\0') {
        func_0x0001455db994();
        lVar7 = *plVar12;
      }
      if (*(int *)(lVar7 + 0x12530) != 0) {
        auVar19._0_12_ = ZEXT812(0);
        auVar19._12_4_ = 0;
        *(undefined1 (*) [32])(lVar7 + 0x12500) = ZEXT1632(auVar19);
        *(undefined1 (*) [32])(lVar7 + 0x124e0) = ZEXT1632(auVar19);
        auVar21 = ZEXT1632(auVar19);
        *(undefined1 (*) [32])(lVar7 + 0x124c0) = auVar21;
        *(undefined1 (*) [32])(lVar7 + 0x124a0) = auVar21;
        *(undefined1 (*) [32])(lVar7 + 0x12480) = auVar21;
        *(undefined1 (*) [32])(lVar7 + 0x12460) = auVar21;
        auVar21 = ZEXT1632(auVar19);
        *(undefined1 (*) [32])(lVar7 + 0x12440) = auVar21;
        *(undefined1 (*) [32])(lVar7 + 0x12420) = auVar21;
        *(undefined1 (*) [32])(lVar7 + 0x12538) = auVar21;
        *(undefined1 (*) [32])(lVar7 + 0x12558) = auVar21;
        *(undefined1 (*) [32])(lVar7 + 0x12578) = auVar21;
        *(undefined1 (*) [32])(lVar7 + 0x12598) = auVar21;
        *(undefined1 (*) [32])(lVar7 + 0x125b8) = auVar21;
        *(undefined1 (*) [32])(lVar7 + 0x125d8) = auVar21;
        *(undefined1 (*) [32])(lVar7 + 0x125f8) = ZEXT1632(auVar19);
        *(undefined1 (*) [32])(lVar7 + 0x12618) = ZEXT1632(auVar19);
        *(byte *)(lVar7 + 0x12523) = *(byte *)(lVar7 + 0x12523) | 0x20;
      }
      *(undefined4 *)(lVar7 + 0x12530) = 0;
      if (*(char *)(*(longlong *)
                     (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8) ==
          '\0') {
        func_0x0001455db994();
        lVar7 = *plVar12;
      }
      lVar8 = *(longlong *)(param_1 + 8);
      if (*(longlong *)(lVar7 + 0xda40) != *(longlong *)(lVar8 + 0x18)) {
        FUN_144f80240(lVar7,*(longlong *)(lVar8 + 0x18),
                      (*(ushort *)(lVar8 + 0xc) & 0xfff) * *(int *)(lVar8 + 8));
      }
      uVar1 = *(undefined8 *)(**(longlong **)(param_1 + 0x40) + 0x28);
      if (*(char *)(*(longlong *)
                     (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8) ==
          '\0') {
        func_0x0001455db994(*(longlong *)(unaff_GS_OFFSET + 0x58),uVar1);
      }
      FUN_14555ee70(*plVar12,uVar1);
      return 2;
    }
    return 0;
  }
  func_0x000144f22150();
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    func_0x0001455db994();
  }
  lVar7 = *plVar12;
  if (*(longlong *)(lVar7 + 0x12638) != *(longlong *)(param_1 + 0x10)) {
    *(longlong *)(lVar7 + 0x12638) = *(longlong *)(param_1 + 0x10);
    *(byte *)(lVar7 + 0x12523) = *(byte *)(lVar7 + 0x12523) | 1;
  }
  lVar8 = *(longlong *)(lVar8 + 8);
  if (lVar8 == 0) {
    return 0;
  }
  piVar2 = *(int **)(*(longlong *)(param_1 + 8) + 0x40);
  if ((*(byte *)(lVar8 + 0x56) & 0x10) != 0) {
    if (*piVar2 == 0) {
      return 0;
    }
    if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8)
                 + 8) == '\0') {
      func_0x0001455db994();
      lVar7 = *plVar12;
    }
    if (*(longlong *)(lVar7 + 0x12320) != 0) {
      *(undefined8 *)(lVar7 + 0x12320) = 0;
      *(byte *)(lVar7 + 0x12522) = *(byte *)(lVar7 + 0x12522) | 0x80;
    }
    if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8)
                 + 8) == '\0') {
      func_0x0001455db994();
      lVar7 = *plVar12;
    }
    if (*(int *)(lVar7 + 0x12530) != 0) {
      auVar20._0_12_ = ZEXT812(0);
      auVar20._12_4_ = 0;
      *(undefined1 (*) [32])(lVar7 + 0x12500) = ZEXT1632(auVar20);
      *(undefined1 (*) [32])(lVar7 + 0x124e0) = ZEXT1632(auVar20);
      auVar21 = ZEXT1632(auVar20);
      *(undefined1 (*) [32])(lVar7 + 0x124c0) = auVar21;
      *(undefined1 (*) [32])(lVar7 + 0x124a0) = auVar21;
      *(undefined1 (*) [32])(lVar7 + 0x12480) = auVar21;
      *(undefined1 (*) [32])(lVar7 + 0x12460) = auVar21;
      auVar21 = ZEXT1632(auVar20);
      *(undefined1 (*) [32])(lVar7 + 0x12440) = auVar21;
      *(undefined1 (*) [32])(lVar7 + 0x12420) = auVar21;
      *(undefined1 (*) [32])(lVar7 + 0x12538) = auVar21;
      *(undefined1 (*) [32])(lVar7 + 0x12558) = auVar21;
      *(undefined1 (*) [32])(lVar7 + 0x12578) = auVar21;
      *(undefined1 (*) [32])(lVar7 + 0x12598) = auVar21;
      *(undefined1 (*) [32])(lVar7 + 0x125b8) = auVar21;
      *(undefined1 (*) [32])(lVar7 + 0x125d8) = auVar21;
      *(undefined1 (*) [32])(lVar7 + 0x125f8) = ZEXT1632(auVar20);
      *(undefined1 (*) [32])(lVar7 + 0x12618) = ZEXT1632(auVar20);
      *(byte *)(lVar7 + 0x12523) = *(byte *)(lVar7 + 0x12523) | 0x20;
    }
    *(undefined4 *)(lVar7 + 0x12530) = 0;
    if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8)
                 + 8) == '\0') {
      func_0x0001455db994();
      lVar7 = *plVar12;
    }
    lVar8 = *(longlong *)(param_1 + 8);
    if (*(longlong *)(lVar7 + 0xda40) != *(longlong *)(lVar8 + 0x18)) {
      FUN_144f80240(lVar7,*(longlong *)(lVar8 + 0x18),
                    (*(ushort *)(lVar8 + 0xc) & 0xfff) * *(int *)(lVar8 + 8));
      return 1;
    }
    return 1;
  }
  uVar14 = *(ulonglong *)(lVar8 + 0x48);
  lVar8 = *(longlong *)(param_1 + 0x20);
  lVar3 = *(longlong *)(lVar8 + 0x118);
  uVar18 = *(ulonglong *)(lVar8 + 8);
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    func_0x0001455db994();
    lVar7 = *plVar12;
    lVar8 = *(longlong *)(param_1 + 0x20);
  }
  if (*(longlong *)(lVar7 + 0x12320) != lVar8) {
    *(longlong *)(lVar7 + 0x12320) = lVar8;
    *(byte *)(lVar7 + 0x12522) = *(byte *)(lVar7 + 0x12522) | 0x80;
  }
  if (uVar18 == 0 || uVar14 == 0) {
    if (-1 < *(char *)(lVar8 + 0x55)) {
      return 1;
    }
  }
  else {
    uVar15 = 0xffffffff;
    uVar16 = 0;
    uVar11 = 0;
    do {
      iVar13 = (int)uVar11;
      uVar17 = *(uint *)(lVar3 + uVar11 * 4) >> 0x1a;
      uVar9 = (ulonglong)uVar17;
      if (*(char *)(*(longlong *)(param_1 + 0x20) + 0x55) < '\0') {
        uVar5 = func_0x00014078b960(uVar9);
        uVar11 = (ulonglong)uVar5;
      }
      iVar10 = (int)uVar11;
      if (-1 < iVar10) {
        if ((*param_2 >> (uVar17 & 0x1f) & 1) == 0) {
          cVar4 = *(char *)(*(longlong *)
                             (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
                           8);
          if (*(char *)((longlong)piVar2 + uVar9 + 0x104) != '\0') {
            if (cVar4 == '\0') {
              func_0x0001455db994();
            }
            lVar8 = *plVar12;
            uVar9 = (ulonglong)(uint)piVar2[uVar9] << 0x20 |
                    (ulonglong)*(byte *)((longlong)piVar2 + uVar9 + 0xd0);
            if ((*(longlong *)(lVar8 + 0x12420 + uVar11 * 8) != *(longlong *)(param_1 + 8)) ||
               (*(ulonglong *)(lVar8 + 0x12538 + uVar11 * 8) != uVar9)) {
              *(longlong *)(lVar8 + 0x12420 + uVar11 * 8) = *(longlong *)(param_1 + 8);
              *(ulonglong *)(lVar8 + 0x12538 + uVar11 * 8) = uVar9;
              goto LAB_14003417b;
            }
            goto LAB_140034182;
          }
          if (cVar4 == '\0') {
            func_0x0001455db994();
          }
          lVar8 = *plVar12;
          iVar6 = iVar10;
          if (*(longlong *)(lVar8 + 0x12420 + uVar11 * 8) != 0) {
            *(undefined8 *)(lVar8 + 0x12420 + uVar11 * 8) = 0;
            *(undefined8 *)(lVar8 + 0x12538 + uVar11 * 8) = 0;
            *(byte *)(lVar8 + 0x12523) = *(byte *)(lVar8 + 0x12523) | 0x20;
          }
        }
        else {
          if (*(char *)(*(longlong *)
                         (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8)
              == '\0') {
            func_0x0001455db994();
          }
          lVar8 = *plVar12;
          lVar7 = FUN_1443a4ab0();
          if ((*(longlong *)(lVar8 + 0x12420 + uVar11 * 8) != lVar7) ||
             (*(longlong *)(lVar8 + 0x12538 + uVar11 * 8) != 4)) {
            *(longlong *)(lVar8 + 0x12420 + uVar11 * 8) = lVar7;
            *(undefined8 *)(lVar8 + 0x12538 + uVar11 * 8) = 4;
LAB_14003417b:
            *(byte *)(lVar8 + 0x12523) = *(byte *)(lVar8 + 0x12523) | 0x20;
          }
LAB_140034182:
          iVar6 = iVar10 + 1;
        }
        *(int *)(lVar8 + 0x12530) = iVar6;
        uVar16 = uVar16 | 1L << (uVar11 & 0x3f);
      }
      cVar4 = '\0';
      for (uVar9 = uVar18; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x8000000000000000) {
        cVar4 = cVar4 + '\x01';
      }
      uVar14 = uVar14 >> ((ulonglong)(byte)(cVar4 + 1) & 0x3f);
      if ((int)uVar15 <= iVar10) {
        uVar15 = uVar11;
      }
      if (uVar14 == 0) break;
      uVar18 = uVar18 >> ((ulonglong)(byte)(cVar4 + 1) & 0x3f);
      uVar11 = (ulonglong)(iVar13 + 1);
    } while (uVar18 != 0);
    if (-1 < *(char *)(*(longlong *)(param_1 + 0x20) + 0x55)) {
      return 1;
    }
    if (-1 < (int)uVar15) {
      uVar17 = (int)uVar15 + 1;
      uVar14 = 0;
      do {
        if ((uVar16 >> (uVar14 & 0x3f) & 1) == 0) {
          if (*(char *)(*(longlong *)
                         (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8)
              == '\0') {
            func_0x0001455db994();
          }
          lVar8 = *plVar12;
          lVar7 = FUN_1443a4ab0();
          if ((*(longlong *)(lVar8 + 0x12420 + uVar14 * 8) != lVar7) ||
             (*(longlong *)(lVar8 + 0x12538 + uVar14 * 8) != 4)) {
            *(longlong *)(lVar8 + 0x12420 + uVar14 * 8) = lVar7;
            *(undefined8 *)(lVar8 + 0x12538 + uVar14 * 8) = 4;
            *(byte *)(lVar8 + 0x12523) = *(byte *)(lVar8 + 0x12523) | 0x20;
          }
          *(int *)(lVar8 + 0x12530) = (int)uVar14 + 1;
        }
        uVar14 = uVar14 + 1;
      } while (uVar14 != uVar17);
      goto LAB_14003441b;
    }
  }
  uVar17 = 0;
LAB_14003441b:
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    func_0x0001455db994();
  }
  *(uint *)(*plVar12 + 0x12530) = uVar17;
  return 1;
}

