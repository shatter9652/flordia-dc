// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401299f0  size: 56 bytes
// Name:    FUN_1401299f0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1404722c0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401299f0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  byte *pbVar1;
  uint *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  char cVar8;
  byte bVar9;
  uint uVar10;
  byte *pbVar11;
  uint uVar12;
  longlong lVar13;
  byte *pbVar14;
  ulonglong uVar15;
  byte bVar16;
  byte bVar17;
  longlong lVar18;
  longlong unaff_GS_OFFSET;
  undefined1 auVar19 [32];
  byte bStack_80;
  
  FUN_1404722c0();
  func_0x000144e35360(*param_2,*(undefined4 *)(param_2 + 1),*param_3);
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *(undefined4 *)((longlong)param_3 + 0xc);
  uVar5 = *(undefined4 *)(param_2 + 1);
  uVar6 = *(undefined4 *)((longlong)param_2 + 0xc);
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    func_0x0001455db994();
  }
  pbVar1 = (byte *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1110);
  if (*(char *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1110) == '\0') {
    auVar19._4_4_ = _DAT_145f43778;
    auVar19._0_4_ = _DAT_145f43778;
    auVar19._8_4_ = _DAT_145f43778;
    auVar19._12_4_ = _DAT_145f43778;
    auVar19._16_4_ = _DAT_145f43778;
    auVar19._20_4_ = _DAT_145f43778;
    auVar19._24_4_ = _DAT_145f43778;
    auVar19._28_4_ = _DAT_145f43778;
    lVar18 = 0x3c;
    lVar7 = **(longlong **)(unaff_GS_OFFSET + 0x58);
    pbVar14 = (byte *)(lVar7 + 0x1294);
    do {
      cVar8 = *(char *)(*(longlong *)
                         (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8);
      if (cVar8 == '\0') {
        func_0x0001455db994();
        cVar8 = *(char *)(*(longlong *)
                           (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8)
        ;
      }
      lVar13 = *(longlong *)(lVar7 + 0x12a8);
      if (lVar13 != 0) {
        if (cVar8 == '\0') {
          func_0x0001455db994();
          lVar13 = *(longlong *)(lVar7 + 0x12a8);
          cVar8 = *(char *)(*(longlong *)
                             (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
                           8);
        }
        *(ulonglong *)(lVar13 + 0x20) = *(ulonglong *)(lVar13 + 0x20) | 0x10000000000;
      }
      if (cVar8 == '\0') {
        func_0x0001455db994();
        cVar8 = *(char *)(*(longlong *)
                           (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8)
        ;
      }
      lVar13 = *(longlong *)(lVar7 + 0x1108);
      if (lVar13 != 0) {
        if (cVar8 == '\0') {
          func_0x0001455db994();
          lVar13 = *(longlong *)(lVar7 + 0x1108);
          cVar8 = *(char *)(*(longlong *)
                             (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
                           8);
        }
        *(ulonglong *)(lVar13 + 0x20) = *(ulonglong *)(lVar13 + 0x20) | 0x10000000000;
      }
      if (cVar8 == '\0') {
        func_0x0001455db994();
      }
      if (*pbVar1 == 1) {
        if (*(char *)(*(longlong *)
                       (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8) ==
            '\0') {
          func_0x0001455db994();
          bVar17 = *pbVar14;
          cVar8 = *(char *)(*(longlong *)
                             (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
                           8);
          if (cVar8 == '\0') {
            func_0x0001455db994();
            cVar8 = *(char *)(*(longlong *)
                               (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8)
                             + 8);
          }
          puVar2 = (uint *)((ulonglong)((uint)bVar17 + (uint)*pbVar1) * 4 + 0x148fcf880);
          *puVar2 = *puVar2 | 1;
          if (cVar8 == '\0') {
            func_0x0001455db994();
            bStack_80 = *pbVar14;
            cVar8 = *(char *)(*(longlong *)
                               (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8)
                             + 8);
            if (cVar8 == '\0') {
              func_0x0001455db994();
              cVar8 = *(char *)(*(longlong *)
                                 (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8
                                 ) + 8);
            }
          }
          else {
            bStack_80 = *pbVar14;
            cVar8 = '\x01';
          }
          puVar2 = (uint *)((ulonglong)((uint)bStack_80 + (uint)*pbVar1) * 4 + 0x148fcf898);
          *puVar2 = *puVar2 | 1;
          if (cVar8 == '\0') {
            func_0x0001455db994();
            bVar17 = *pbVar14;
            if (*(char *)(*(longlong *)
                           (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8)
                == '\0') {
              func_0x0001455db994();
            }
          }
          else {
            bVar17 = *pbVar14;
          }
          lVar13 = (ulonglong)((uint)bVar17 + (uint)*pbVar1) * 4;
        }
        else {
          lVar13 = (ulonglong)(*pbVar14 + 1) * 4;
          *(uint *)(lVar13 + 0x148fcf880) = *(uint *)(lVar13 + 0x148fcf880) | 1;
          *(byte *)(lVar13 + 0x148fcf898) = *(byte *)(lVar13 + 0x148fcf898) | 1;
        }
        pbVar11 = (byte *)(lVar13 + 0x148fcf8b0);
      }
      else {
        _uRam0000000148fcf880 = auVar19 | _uRam0000000148fcf880;
        pbVar11 = (byte *)0x148fcf8c4;
        _uRam0000000148fcf8a0 = auVar19 | _uRam0000000148fcf8a0;
        bRam0000000148fcf8c0 = bRam0000000148fcf8c0 | 1;
      }
      *pbVar11 = *pbVar11 | 1;
      *(undefined4 *)(lVar18 + 0x148fca214) = uVar6;
      *(undefined4 *)(lVar18 + 0x148fca218) = uVar4;
      *(undefined4 *)(lVar18 + 0x148fca21c) = uVar5;
      *(undefined4 *)(lVar18 + 0x148fca220) = uVar3;
      lVar18 = lVar18 + 0x80;
    } while (lVar18 != 0x33c);
    return;
  }
  cVar8 = *(char *)(*(longlong *)
                     (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8);
  if (cVar8 == '\0') {
    func_0x0001455db994();
    cVar8 = *(char *)(*(longlong *)
                       (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8);
  }
  lVar7 = **(longlong **)(unaff_GS_OFFSET + 0x58);
  lVar18 = *(longlong *)(lVar7 + 0x12a8);
  if (lVar18 != 0) {
    if (cVar8 == '\0') {
      func_0x0001455db994();
      lVar18 = *(longlong *)(lVar7 + 0x12a8);
      cVar8 = *(char *)(*(longlong *)
                         (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8);
    }
    *(ulonglong *)(lVar18 + 0x20) = *(ulonglong *)(lVar18 + 0x20) | 0x10000000000;
  }
  if (cVar8 == '\0') {
    func_0x0001455db994();
    cVar8 = *(char *)(*(longlong *)
                       (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8);
  }
  lVar7 = **(longlong **)(unaff_GS_OFFSET + 0x58);
  lVar18 = *(longlong *)(lVar7 + 0x1108);
  if (lVar18 != 0) {
    if (cVar8 == '\0') {
      func_0x0001455db994();
      lVar18 = *(longlong *)(lVar7 + 0x1108);
      cVar8 = *(char *)(*(longlong *)
                         (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8);
    }
    *(ulonglong *)(lVar18 + 0x20) = *(ulonglong *)(lVar18 + 0x20) | 0x10000000000;
  }
  if (cVar8 == '\0') {
    func_0x0001455db994();
  }
  uVar10 = (uint)*pbVar1;
  if (uVar10 == 1) {
    pbVar14 = (byte *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1294);
    if (*(char *)((*(longlong **)(unaff_GS_OFFSET + 0x58))[__tls_index] + 8) == '\0') {
      func_0x0001455db994();
      bVar17 = *pbVar14;
      if (*(char *)(*(longlong *)
                     (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8) ==
          '\0') {
        func_0x0001455db994();
        lVar7 = *(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8);
        uVar10 = (uint)*pbVar1;
        puVar2 = (uint *)((ulonglong)((uint)bVar17 + (uint)*pbVar1) * 4 + 0x148fcf880);
        *puVar2 = *puVar2 | 1;
        if (*(char *)(lVar7 + 8) != '\0') {
          bVar17 = *pbVar14;
          goto code_r0x000144e35785;
        }
        func_0x0001455db994();
        bVar17 = *pbVar14;
        if (*(char *)(*(longlong *)
                       (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8) !=
            '\0') {
          uVar10 = (uint)*pbVar1;
          goto code_r0x000144e35785;
        }
        func_0x0001455db994();
        lVar7 = *(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8);
        puVar2 = (uint *)((ulonglong)((uint)bVar17 + (uint)*pbVar1) * 4 + 0x148fcf898);
        *puVar2 = *puVar2 | 1;
        if (*(char *)(lVar7 + 8) == '\0') {
          func_0x0001455db994();
          bVar17 = *pbVar14;
          if (*(char *)(*(longlong *)
                         (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8)
              == '\0') {
            func_0x0001455db994();
          }
        }
        else {
          bVar17 = *pbVar14;
        }
      }
      else {
        uVar10 = (uint)*pbVar1;
        puVar2 = (uint *)((ulonglong)((uint)bVar17 + (uint)*pbVar1) * 4 + 0x148fcf880);
        *puVar2 = *puVar2 | 1;
code_r0x000144e35785:
        pbVar14 = (byte *)((ulonglong)(uVar10 + bVar17) * 4 + 0x148fcf898);
        *pbVar14 = *pbVar14 | 1;
      }
      uVar10 = (uint)*pbVar1;
      pbVar14 = (byte *)((ulonglong)((uint)bVar17 + (uint)*pbVar1) * 4 + 0x148fcf8b0);
    }
    else {
      uVar15 = (ulonglong)((uint)*pbVar1 + (uint)*pbVar14);
      puVar2 = (uint *)(uVar15 * 4 + 0x148fcf880);
      *puVar2 = *puVar2 | 1;
      pbVar14 = (byte *)(uVar15 * 4 + 0x148fcf898);
      *pbVar14 = *pbVar14 | 1;
      pbVar14 = (byte *)(uVar15 * 4 + 0x148fcf8b0);
    }
  }
  else {
    pbVar14 = (byte *)0x148fcf8c4;
    uRam0000000148fcf880._4_4_ = _DAT_145f43778 | uRam0000000148fcf880._4_4_;
    uRam0000000148fcf880._0_4_ = _DAT_145f43778 | (uint)uRam0000000148fcf880;
    uRam0000000148fcf888 = _DAT_145f43778 | uRam0000000148fcf888;
    uRam0000000148fcf88c = _DAT_145f43778 | uRam0000000148fcf88c;
    uRam0000000148fcf890 = _DAT_145f43778 | uRam0000000148fcf890;
    uRam0000000148fcf894 = _DAT_145f43778 | uRam0000000148fcf894;
    uRam0000000148fcf898 = _DAT_145f43778 | uRam0000000148fcf898;
    uRam0000000148fcf89c = _DAT_145f43778 | uRam0000000148fcf89c;
    uRam0000000148fcf8a0._4_4_ = _DAT_145f43778 | uRam0000000148fcf8a0._4_4_;
    uRam0000000148fcf8a0._0_4_ = _DAT_145f43778 | (uint)uRam0000000148fcf8a0;
    uRam0000000148fcf8a8 = _DAT_145f43778 | uRam0000000148fcf8a8;
    uRam0000000148fcf8ac = _DAT_145f43778 | uRam0000000148fcf8ac;
    uRam0000000148fcf8b0 = _DAT_145f43778 | uRam0000000148fcf8b0;
    uRam0000000148fcf8b4 = _DAT_145f43778 | uRam0000000148fcf8b4;
    uRam0000000148fcf8b8 = _DAT_145f43778 | uRam0000000148fcf8b8;
    uRam0000000148fcf8bc = _DAT_145f43778 | uRam0000000148fcf8bc;
    bRam0000000148fcf8c0 = bRam0000000148fcf8c0 | 1;
  }
  *pbVar14 = *pbVar14 | 1;
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    func_0x0001455db994();
    pbVar14 = (byte *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1294);
    bVar17 = *pbVar14;
    if (*(char *)((*(longlong **)(unaff_GS_OFFSET + 0x58))[__tls_index] + 8) != '\0') {
      uVar10 = (uint)*pbVar1;
      goto code_r0x000144e35692;
    }
    func_0x0001455db994();
    uVar10 = (uint)*pbVar1;
    cVar8 = *(char *)(*(longlong *)
                       (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8);
    *(undefined4 *)((ulonglong)(((uint)bVar17 + (uint)*pbVar1) * 0x80) + 0x148fca250) = uVar6;
    if (cVar8 != '\0') {
      uVar12 = (uint)*pbVar14;
      goto code_r0x000144e356ac;
    }
    func_0x0001455db994();
    bVar17 = *pbVar14;
    uVar12 = (uint)bVar17;
    if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8)
                 + 8) != '\0') {
      uVar10 = (uint)*pbVar1;
      goto code_r0x000144e356ac;
    }
    func_0x0001455db994();
    bVar9 = *pbVar1;
    cVar8 = *(char *)(*(longlong *)
                       (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8);
    *(undefined4 *)((ulonglong)(((uint)bVar17 + (uint)bVar9) * 0x80) + 0x148fca254) = uVar4;
    if (cVar8 != '\0') goto code_r0x000144e356c2;
    func_0x0001455db994();
    bVar17 = *pbVar14;
    if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8)
                 + 8) == '\0') {
      func_0x0001455db994();
      lVar7 = *(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8);
      *(undefined4 *)((ulonglong)(((uint)bVar17 + (uint)*pbVar1) * 0x80) + 0x148fca258) = uVar5;
      if (*(char *)(lVar7 + 8) == '\0') {
        func_0x0001455db994();
        bVar16 = *pbVar14;
        if (*(char *)(*(longlong *)
                       (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8) ==
            '\0') {
          func_0x0001455db994();
        }
      }
      else {
        bVar16 = *pbVar14;
      }
      goto code_r0x000144e356e0;
    }
    bVar9 = *pbVar1;
  }
  else {
    pbVar14 = (byte *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1294);
    bVar17 = *(byte *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1294);
code_r0x000144e35692:
    uVar12 = (uint)bVar17;
    *(undefined4 *)((ulonglong)((uVar10 + uVar12) * 0x80) + 0x148fca250) = uVar6;
code_r0x000144e356ac:
    bVar9 = (byte)uVar10;
    *(undefined4 *)((ulonglong)((uVar10 + uVar12) * 0x80) + 0x148fca254) = uVar4;
code_r0x000144e356c2:
    bVar17 = *pbVar14;
  }
  bVar16 = *pbVar14;
  *(undefined4 *)((ulonglong)(((uint)bVar9 + (uint)bVar17) * 0x80) + 0x148fca258) = uVar5;
code_r0x000144e356e0:
  *(undefined4 *)((ulonglong)(((uint)bVar16 + (uint)*pbVar1) * 0x80) + 0x148fca25c) = uVar3;
  return;
}

