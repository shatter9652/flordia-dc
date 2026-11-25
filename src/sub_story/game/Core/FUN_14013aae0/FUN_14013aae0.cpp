// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14013aae0  size: 781 bytes
// Name:    FUN_14013aae0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14013aae0(void)

{
  longlong *plVar1;
  uint *puVar2;
  byte *pbVar3;
  float fVar4;
  byte bVar5;
  longlong *plVar6;
  undefined1 auVar7 [16];
  short sVar8;
  char cVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  byte *pbVar13;
  ulonglong uVar14;
  byte bVar15;
  byte *pbVar16;
  longlong lVar17;
  longlong unaff_GS_OFFSET;
  bool bVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [32];
  
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    func_0x0001455db994();
  }
  sVar8 = _DAT_148769c5a;
  lVar17 = **(longlong **)(unaff_GS_OFFSET + 0x58);
  lVar12 = *(longlong *)(lVar17 + 0x12a8);
  if (*(short *)(lVar12 + 0x1236e) != _DAT_148769c5a) {
    *(short *)(lVar12 + 0x1236e) = _DAT_148769c5a;
    *(ulonglong *)(lVar12 + 0x12520) =
         (ulonglong)(*(short *)(lVar12 + 0x123ee) != sVar8) << 0x14 |
         *(ulonglong *)(lVar12 + 0x12520) & 0xffffffffffefffff;
  }
  cVar9 = DAT_148769c5c;
  if (*(char *)(lVar12 + 0x1236c) != DAT_148769c5c) {
    *(char *)(lVar12 + 0x1236c) = DAT_148769c5c;
    if (*(char *)(lVar12 + 0x123ec) == cVar9) {
      uVar14 = *(ulonglong *)(lVar12 + 0x12520) & 0xfffffffffff7ffff;
    }
    else {
      uVar14 = *(ulonglong *)(lVar12 + 0x12520) | 0x80000;
    }
    *(ulonglong *)(lVar12 + 0x12520) = uVar14;
  }
  if (*(short *)(lVar12 + 0x12378) != _DAT_148769c58) {
    *(short *)(lVar12 + 0x12378) = _DAT_148769c58;
    *(byte *)(lVar12 + 0x12522) = *(byte *)(lVar12 + 0x12522) | 0x20;
  }
  plVar1 = (longlong *)(lVar17 + 0x12a8);
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    func_0x0001455db994();
    lVar12 = *plVar1;
  }
  auVar19._4_4_ = _DAT_145fc6ed8;
  auVar19._0_4_ = _DAT_145fc6ed8;
  auVar19._8_4_ = _DAT_145fc6ed8;
  auVar19._12_4_ = _DAT_145fc6ed8;
  auVar7 = vcmpps_avx(auVar19,*(undefined1 (*) [16])(lVar12 + 0x12310),4);
  if ((((SUB161(auVar7 >> 0x1f,0) & 1) != 0 || (SUB161(auVar7 >> 0x3f,0) & 1) != 0) ||
      (SUB161(auVar7 >> 0x5f,0) & 1) != 0) || auVar7[0xf] < '\0') {
    *(undefined1 (*) [16])(lVar12 + 0x12310) = auVar19;
    auVar7 = vcmpps_avx(auVar19,*(undefined1 (*) [16])(lVar12 + 0x12390),4);
    *(ulonglong *)(lVar12 + 0x12520) =
         (ulonglong)
         ((uint)((((SUB161(auVar7 >> 0x1f,0) & 1) != 0 || (SUB161(auVar7 >> 0x3f,0) & 1) != 0) ||
                 (SUB161(auVar7 >> 0x5f,0) & 1) != 0) || auVar7[0xf] < '\0') << 0x1a) |
         *(ulonglong *)(lVar12 + 0x12520) & 0xfffffffffbffffff;
  }
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    func_0x0001455db994();
    lVar12 = *plVar1;
  }
  if (*(longlong *)(lVar12 + 0x12360) != -1) {
    *(undefined8 *)(lVar12 + 0x12360) = 0xffffffffffffffff;
    *(byte *)(lVar12 + 0x12522) = *(byte *)(lVar12 + 0x12522) | 0x20;
  }
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    func_0x0001455db994();
    lVar12 = *plVar1;
  }
  if (*(int *)(lVar12 + 0x12368) != 0xff) {
    *(undefined4 *)(lVar12 + 0x12368) = 0xff;
    *(ulonglong *)(lVar12 + 0x12520) =
         (ulonglong)((uint)(*(int *)(lVar12 + 0x123e8) != 0xff) << 0x19) |
         *(ulonglong *)(lVar12 + 0x12520) & 0xfffffffffdffffff;
  }
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    func_0x0001455db994();
    lVar12 = *plVar1;
  }
  cVar9 = DAT_149c3d7e4;
  if (*(char *)(lVar12 + 0x1236c) != DAT_149c3d7e4) {
    *(char *)(lVar12 + 0x1236c) = DAT_149c3d7e4;
    *(ulonglong *)(lVar12 + 0x12520) =
         (ulonglong)(*(char *)(lVar12 + 0x123ec) != cVar9) << 0x13 |
         *(ulonglong *)(lVar12 + 0x12520) & 0xfffffffffff7ffff;
  }
  plVar6 = *(longlong **)(unaff_GS_OFFSET + 0x58);
  puVar2 = (uint *)(*plVar6 + 0x998);
  *puVar2 = 0xfffffffe;
  if (*(char *)(plVar6[__tls_index] + 8) == '\0') {
    func_0x0001455db994();
    lVar12 = *plVar1;
    bVar18 = *(char *)(*(longlong *)
                        (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8) ==
             '\0';
  }
  else {
    bVar18 = false;
  }
  *puVar2 = (uint)*(byte *)(lVar12 + 0x12742);
  iVar10 = func_0x000145523f60();
  if (iVar10 < 0) {
    if (bVar18) {
      func_0x0001455db994();
    }
    iVar10 = 2;
  }
  else if (bVar18) {
    func_0x0001455db994();
  }
  lVar17 = *plVar1;
  *(undefined1 *)(lVar17 + 0x12741) = 0;
  *(char *)(lVar17 + 0x12742) = (char)iVar10;
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    func_0x0001455db994();
    pbVar16 = (byte *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1294);
    bVar15 = *pbVar16;
    if (*(char *)((*(longlong **)(unaff_GS_OFFSET + 0x58))[__tls_index] + 8) == '\0') {
      func_0x0001455db994();
    }
  }
  else {
    pbVar16 = (byte *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1294);
    bVar15 = *pbVar16;
  }
  bVar5 = *(byte *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1110);
  fVar4 = *(float *)((ulonglong)(((uint)bVar15 + (uint)bVar5) * 0x80) + 0x148fca26c);
  if ((fVar4 == _UNK_146173410) && (!NAN(fVar4) && !NAN(_UNK_146173410))) {
    return;
  }
  pbVar3 = (byte *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1110);
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    func_0x0001455db994();
    bVar5 = *pbVar3;
  }
  if ((bVar5 & 1) == 0) {
    auVar20._4_4_ = _DAT_145f43778;
    auVar20._0_4_ = _DAT_145f43778;
    auVar20._8_4_ = _DAT_145f43778;
    auVar20._12_4_ = _DAT_145f43778;
    auVar20._16_4_ = _DAT_145f43778;
    auVar20._20_4_ = _DAT_145f43778;
    auVar20._24_4_ = _DAT_145f43778;
    auVar20._28_4_ = _DAT_145f43778;
    lVar17 = 0x4c;
    plVar1 = (longlong *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x12a8);
    plVar6 = (longlong *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1108);
    do {
      cVar9 = *(char *)(*(longlong *)
                         (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8);
      if (cVar9 == '\0') {
        func_0x0001455db994();
        cVar9 = *(char *)(*(longlong *)
                           (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8)
        ;
      }
      lVar12 = *plVar1;
      if (lVar12 != 0) {
        if (cVar9 == '\0') {
          func_0x0001455db994();
          lVar12 = *plVar1;
          cVar9 = *(char *)(*(longlong *)
                             (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
                           8);
        }
        *(byte *)(lVar12 + 0x25) = *(byte *)(lVar12 + 0x25) | 1;
      }
      if (cVar9 == '\0') {
        func_0x0001455db994();
        cVar9 = *(char *)(*(longlong *)
                           (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8)
        ;
      }
      lVar12 = *plVar6;
      if (lVar12 != 0) {
        if (cVar9 == '\0') {
          func_0x0001455db994();
          lVar12 = *plVar6;
          cVar9 = *(char *)(*(longlong *)
                             (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
                           8);
        }
        *(byte *)(lVar12 + 0x25) = *(byte *)(lVar12 + 0x25) | 1;
      }
      if (cVar9 == '\0') {
        func_0x0001455db994();
      }
      if (*pbVar3 == 1) {
        if (*(char *)(*(longlong *)
                       (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8) ==
            '\0') {
          func_0x0001455db994();
          bVar15 = *pbVar16;
          cVar9 = *(char *)(*(longlong *)
                             (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
                           8);
          if (cVar9 == '\0') {
            func_0x0001455db994();
            cVar9 = *(char *)(*(longlong *)
                               (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8)
                             + 8);
          }
        }
        else {
          bVar15 = *pbVar16;
          cVar9 = '\x01';
        }
        puVar2 = (uint *)((ulonglong)((uint)bVar15 + (uint)*pbVar3) * 4 + 0x148fcf880);
        *puVar2 = *puVar2 | 1;
        if (cVar9 == '\0') {
          func_0x0001455db994();
          bVar15 = *pbVar16;
          cVar9 = *(char *)(*(longlong *)
                             (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
                           8);
          if (cVar9 == '\0') {
            func_0x0001455db994();
            cVar9 = *(char *)(*(longlong *)
                               (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8)
                             + 8);
          }
        }
        else {
          bVar15 = *pbVar16;
          cVar9 = '\x01';
        }
        puVar2 = (uint *)((ulonglong)((uint)bVar15 + (uint)*pbVar3) * 4 + 0x148fcf898);
        *puVar2 = *puVar2 | 1;
        if (cVar9 == '\0') {
          func_0x0001455db994();
          bVar15 = *pbVar16;
          if (*(char *)(*(longlong *)
                         (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8)
              == '\0') {
            func_0x0001455db994();
          }
        }
        else {
          bVar15 = *pbVar16;
        }
        pbVar13 = (byte *)((ulonglong)((uint)bVar15 + (uint)*pbVar3) * 4 + 0x148fcf8b0);
      }
      else {
        pbVar13 = (byte *)0x148fcf8c4;
        _uRam0000000148fcf880 = auVar20 | _uRam0000000148fcf880;
        _uRam0000000148fcf8a0 = auVar20 | _uRam0000000148fcf8a0;
        bRam0000000148fcf8c0 = bRam0000000148fcf8c0 | 1;
      }
      *pbVar13 = *pbVar13 | 1;
      *(undefined4 *)(lVar17 + 0x148fca220) = 0x3eb4b4b5;
      lVar17 = lVar17 + 0x80;
    } while (lVar17 != 0x34c);
    return;
  }
  cVar9 = *(char *)(*(longlong *)
                     (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8);
  if (cVar9 == '\0') {
    func_0x0001455db994();
    cVar9 = *(char *)(*(longlong *)
                       (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8);
  }
  lVar17 = **(longlong **)(unaff_GS_OFFSET + 0x58);
  lVar12 = *(longlong *)(lVar17 + 0x12a8);
  if (lVar12 != 0) {
    if (cVar9 == '\0') {
      func_0x0001455db994();
      lVar12 = *(longlong *)(lVar17 + 0x12a8);
      cVar9 = *(char *)(*(longlong *)
                         (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8);
    }
    *(ulonglong *)(lVar12 + 0x20) = *(ulonglong *)(lVar12 + 0x20) | 0x10000000000;
  }
  if (cVar9 == '\0') {
    func_0x0001455db994();
    cVar9 = *(char *)(*(longlong *)
                       (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8);
  }
  lVar17 = **(longlong **)(unaff_GS_OFFSET + 0x58);
  lVar12 = *(longlong *)(lVar17 + 0x1108);
  if (lVar12 != 0) {
    if (cVar9 == '\0') {
      func_0x0001455db994();
      lVar12 = *(longlong *)(lVar17 + 0x1108);
      cVar9 = *(char *)(*(longlong *)
                         (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8);
    }
    *(ulonglong *)(lVar12 + 0x20) = *(ulonglong *)(lVar12 + 0x20) | 0x10000000000;
  }
  if (cVar9 == '\0') {
    func_0x0001455db994();
  }
  if (*pbVar3 != 1) {
    pbVar13 = (byte *)0x148fcf8c4;
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
    goto code_r0x0001450d7b59;
  }
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    func_0x0001455db994();
    bVar15 = *pbVar16;
    if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8)
                 + 8) != '\0') {
      bVar5 = *pbVar3;
      goto code_r0x0001450d7ae1;
    }
    func_0x0001455db994();
    lVar17 = *(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8);
    uVar11 = (uint)*pbVar3;
    puVar2 = (uint *)((ulonglong)((uint)bVar15 + (uint)*pbVar3) * 4 + 0x148fcf880);
    *puVar2 = *puVar2 | 1;
    if (*(char *)(lVar17 + 8) != '\0') {
      bVar15 = *pbVar16;
      goto code_r0x0001450d7af6;
    }
    func_0x0001455db994();
    bVar15 = *pbVar16;
    if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8)
                 + 8) != '\0') {
      uVar11 = (uint)*pbVar3;
      goto code_r0x0001450d7af6;
    }
    func_0x0001455db994();
    lVar17 = *(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8);
    puVar2 = (uint *)((ulonglong)((uint)bVar15 + (uint)*pbVar3) * 4 + 0x148fcf898);
    *puVar2 = *puVar2 | 1;
    if (*(char *)(lVar17 + 8) == '\0') {
      func_0x0001455db994();
      bVar15 = *pbVar16;
      if (*(char *)(*(longlong *)
                     (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8) ==
          '\0') {
        func_0x0001455db994();
      }
    }
    else {
      bVar15 = *pbVar16;
    }
  }
  else {
    bVar15 = *pbVar16;
    bVar5 = 1;
code_r0x0001450d7ae1:
    uVar11 = (uint)bVar5;
    pbVar13 = (byte *)((ulonglong)((uint)bVar5 + (uint)bVar15) * 4 + 0x148fcf880);
    *pbVar13 = *pbVar13 | 1;
code_r0x0001450d7af6:
    pbVar13 = (byte *)((ulonglong)(uVar11 + bVar15) * 4 + 0x148fcf898);
    *pbVar13 = *pbVar13 | 1;
  }
  pbVar13 = (byte *)((ulonglong)((uint)bVar15 + (uint)*pbVar3) * 4 + 0x148fcf8b0);
code_r0x0001450d7b59:
  *pbVar13 = *pbVar13 | 1;
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    func_0x0001455db994();
    bVar15 = *pbVar16;
    if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8)
                 + 8) == '\0') {
      func_0x0001455db994();
    }
  }
  else {
    bVar15 = *pbVar16;
  }
  *(undefined4 *)((ulonglong)(((uint)bVar15 + (uint)*pbVar3) * 0x80) + 0x148fca26c) = 0x3eb4b4b5;
  return;
}

