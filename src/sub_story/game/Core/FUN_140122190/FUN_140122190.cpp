// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140122190  size: 312 bytes
// Name:    FUN_140122190
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140123110, FUN_1401222d0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140122190(longlong param_1,byte param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  byte *pbVar3;
  uint *puVar4;
  char cVar5;
  byte bVar6;
  uint uVar7;
  undefined8 uVar8;
  byte *pbVar9;
  longlong lVar10;
  undefined8 unaff_RBX;
  byte bVar11;
  longlong unaff_GS_OFFSET;
  
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    func_0x0001455db994();
  }
  plVar1 = (longlong *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x12a8);
  lVar10 = *plVar1;
  param_2 = lVar10 != 0 & param_2;
  if (param_2 == 1) {
    if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8)
                 + 8) == '\0') {
      func_0x0001455db994();
      lVar10 = *plVar1;
    }
    func_0x0001452d22e0(lVar10,0x10);
  }
  FUN_1401222d0(param_1 + 0x9d28);
  FUN_1401222d0(param_1 + 0x9b88);
  FUN_1401222d0(param_1 + 0x99e8);
  if (*(char *)(param_1 + 0x99e0) == '\0') {
    if (*(char *)(param_1 + 0x9b70) == '\x01') {
      uVar8 = func_0x0001406fe130(*(undefined8 *)(param_1 + 0x9b08));
    }
    else {
      uVar8 = 0;
    }
    func_0x0001456a6d00(uVar8);
    *(undefined1 *)(param_1 + 0x99e0) = 1;
  }
  FUN_140123110(param_1,param_1 + 0x40);
  *(undefined1 *)(param_1 + 0x99e1) = 1;
  if (param_2 == 0) {
    return;
  }
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    func_0x0001455db994();
  }
  func_0x000144fa8620(*plVar1,0,0,param_4,unaff_RBX);
  cVar5 = *(char *)(*(longlong *)
                     (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8);
  if (cVar5 == '\0') {
    func_0x0001455db994();
    cVar5 = *(char *)(*(longlong *)
                       (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8);
  }
  plVar1 = (longlong *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x12a8);
  lVar10 = *(longlong *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x12a8);
  if (lVar10 != 0) {
    if (cVar5 == '\0') {
      func_0x0001455db994();
      lVar10 = *plVar1;
      cVar5 = *(char *)(*(longlong *)
                         (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8);
    }
    *(ulonglong *)(lVar10 + 0x20) = *(ulonglong *)(lVar10 + 0x20) | 0x10000000000;
  }
  if (cVar5 == '\0') {
    func_0x0001455db994();
    cVar5 = *(char *)(*(longlong *)
                       (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8);
  }
  plVar2 = (longlong *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1108);
  lVar10 = *(longlong *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1108);
  if (lVar10 != 0) {
    if (cVar5 == '\0') {
      func_0x0001455db994();
      lVar10 = *plVar2;
      cVar5 = *(char *)(*(longlong *)
                         (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8);
    }
    *(ulonglong *)(lVar10 + 0x20) = *(ulonglong *)(lVar10 + 0x20) | 0x10000000000;
  }
  if (cVar5 == '\0') {
    func_0x0001455db994();
  }
  pbVar3 = (byte *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1110);
  if (*(char *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1110) == '\x01') {
    pbVar9 = (byte *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1294);
    if (*(char *)((*(longlong **)(unaff_GS_OFFSET + 0x58))[__tls_index] + 8) == '\0') {
      func_0x0001455db994();
      bVar11 = *pbVar9;
      cVar5 = *(char *)(*(longlong *)
                         (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8);
      if (cVar5 == '\0') {
        func_0x0001455db994();
        cVar5 = *(char *)(*(longlong *)
                           (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8)
        ;
      }
    }
    else {
      bVar11 = *pbVar9;
      cVar5 = '\x01';
    }
    puVar4 = (uint *)((ulonglong)((uint)bVar11 + (uint)*pbVar3) * 4 + 0x148fcf880);
    *puVar4 = *puVar4 | 8;
    if (cVar5 == '\0') {
      func_0x0001455db994();
      bVar11 = *pbVar9;
      cVar5 = *(char *)(*(longlong *)
                         (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8);
      if (cVar5 == '\0') {
        func_0x0001455db994();
        cVar5 = *(char *)(*(longlong *)
                           (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8)
        ;
      }
    }
    else {
      bVar11 = *pbVar9;
      cVar5 = '\x01';
    }
    puVar4 = (uint *)((ulonglong)((uint)bVar11 + (uint)*pbVar3) * 4 + 0x148fcf898);
    *puVar4 = *puVar4 | 8;
    if (cVar5 == '\0') {
      func_0x0001455db994();
      bVar11 = *pbVar9;
      if (*(char *)(*(longlong *)
                     (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8) ==
          '\0') {
        func_0x0001455db994();
      }
    }
    else {
      bVar11 = *pbVar9;
    }
    pbVar9 = (byte *)((ulonglong)((uint)bVar11 + (uint)*pbVar3) * 4 + 0x148fcf8b0);
  }
  else {
    pbVar9 = (byte *)0x148fcf8c4;
    uRam0000000148fcf880 = _DAT_145f43840 | uRam0000000148fcf880;
    uRam0000000148fcf884 = _DAT_145f43840 | uRam0000000148fcf884;
    uRam0000000148fcf888 = _DAT_145f43840 | uRam0000000148fcf888;
    uRam0000000148fcf88c = _DAT_145f43840 | uRam0000000148fcf88c;
    uRam0000000148fcf890 = _DAT_145f43840 | uRam0000000148fcf890;
    uRam0000000148fcf894 = _DAT_145f43840 | uRam0000000148fcf894;
    uRam0000000148fcf898 = _DAT_145f43840 | uRam0000000148fcf898;
    uRam0000000148fcf89c = _DAT_145f43840 | uRam0000000148fcf89c;
    uRam0000000148fcf8a0 = _DAT_145f43840 | uRam0000000148fcf8a0;
    uRam0000000148fcf8a4 = _DAT_145f43840 | uRam0000000148fcf8a4;
    uRam0000000148fcf8a8 = _DAT_145f43840 | uRam0000000148fcf8a8;
    uRam0000000148fcf8ac = _DAT_145f43840 | uRam0000000148fcf8ac;
    uRam0000000148fcf8b0 = _DAT_145f43840 | uRam0000000148fcf8b0;
    uRam0000000148fcf8b4 = _DAT_145f43840 | uRam0000000148fcf8b4;
    uRam0000000148fcf8b8 = _DAT_145f43840 | uRam0000000148fcf8b8;
    uRam0000000148fcf8bc = _DAT_145f43840 | uRam0000000148fcf8bc;
    bRam0000000148fcf8c0 = bRam0000000148fcf8c0 | 8;
  }
  *pbVar9 = *pbVar9 | 8;
  cVar5 = *(char *)(*(longlong *)
                     (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8);
  if (cVar5 == '\0') {
    func_0x0001455db994();
    cVar5 = *(char *)(*(longlong *)
                       (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8);
  }
  lVar10 = *plVar1;
  if (lVar10 != 0) {
    if (cVar5 == '\0') {
      func_0x0001455db994();
      lVar10 = *plVar1;
      cVar5 = *(char *)(*(longlong *)
                         (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8);
    }
    *(ulonglong *)(lVar10 + 0x20) = *(ulonglong *)(lVar10 + 0x20) | 0x10000000000;
  }
  if (cVar5 == '\0') {
    func_0x0001455db994();
    cVar5 = *(char *)(*(longlong *)
                       (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8);
  }
  lVar10 = *plVar2;
  if (lVar10 != 0) {
    if (cVar5 == '\0') {
      func_0x0001455db994();
      lVar10 = *plVar2;
      cVar5 = *(char *)(*(longlong *)
                         (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8);
    }
    *(ulonglong *)(lVar10 + 0x20) = *(ulonglong *)(lVar10 + 0x20) | 0x10000000000;
  }
  if (cVar5 == '\0') {
    func_0x0001455db994();
  }
  if (*pbVar3 == 1) {
    pbVar9 = (byte *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1294);
    if (*(char *)((*(longlong **)(unaff_GS_OFFSET + 0x58))[__tls_index] + 8) == '\0') {
      func_0x0001455db994();
      bVar11 = *pbVar9;
      cVar5 = *(char *)(*(longlong *)
                         (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8);
      if (cVar5 == '\0') {
        func_0x0001455db994();
        cVar5 = *(char *)(*(longlong *)
                           (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8)
        ;
      }
    }
    else {
      bVar11 = *pbVar9;
      cVar5 = '\x01';
    }
    puVar4 = (uint *)((ulonglong)((uint)bVar11 + (uint)*pbVar3) * 4 + 0x148fcf880);
    *puVar4 = *puVar4 | 0x10;
    if (cVar5 == '\0') {
      func_0x0001455db994();
      bVar11 = *pbVar9;
      cVar5 = *(char *)(*(longlong *)
                         (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8);
      if (cVar5 == '\0') {
        func_0x0001455db994();
        cVar5 = *(char *)(*(longlong *)
                           (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8)
        ;
      }
    }
    else {
      bVar11 = *pbVar9;
      cVar5 = '\x01';
    }
    puVar4 = (uint *)((ulonglong)((uint)bVar11 + (uint)*pbVar3) * 4 + 0x148fcf898);
    *puVar4 = *puVar4 | 0x10;
    if (cVar5 == '\0') {
      func_0x0001455db994();
      bVar11 = *pbVar9;
      if (*(char *)(*(longlong *)
                     (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8) ==
          '\0') {
        func_0x0001455db994();
      }
    }
    else {
      bVar11 = *pbVar9;
    }
    pbVar9 = (byte *)((ulonglong)((uint)bVar11 + (uint)*pbVar3) * 4 + 0x148fcf8b0);
  }
  else {
    pbVar9 = (byte *)0x148fcf8c4;
    uRam0000000148fcf880 = _UNK_14615f7c8 | uRam0000000148fcf880;
    uRam0000000148fcf884 = _UNK_14615f7c8 | uRam0000000148fcf884;
    uRam0000000148fcf888 = _UNK_14615f7c8 | uRam0000000148fcf888;
    uRam0000000148fcf88c = _UNK_14615f7c8 | uRam0000000148fcf88c;
    uRam0000000148fcf890 = _UNK_14615f7c8 | uRam0000000148fcf890;
    uRam0000000148fcf894 = _UNK_14615f7c8 | uRam0000000148fcf894;
    uRam0000000148fcf898 = _UNK_14615f7c8 | uRam0000000148fcf898;
    uRam0000000148fcf89c = _UNK_14615f7c8 | uRam0000000148fcf89c;
    uRam0000000148fcf8a0 = _UNK_14615f7c8 | uRam0000000148fcf8a0;
    uRam0000000148fcf8a4 = _UNK_14615f7c8 | uRam0000000148fcf8a4;
    uRam0000000148fcf8a8 = _UNK_14615f7c8 | uRam0000000148fcf8a8;
    uRam0000000148fcf8ac = _UNK_14615f7c8 | uRam0000000148fcf8ac;
    uRam0000000148fcf8b0 = _UNK_14615f7c8 | uRam0000000148fcf8b0;
    uRam0000000148fcf8b4 = _UNK_14615f7c8 | uRam0000000148fcf8b4;
    uRam0000000148fcf8b8 = _UNK_14615f7c8 | uRam0000000148fcf8b8;
    uRam0000000148fcf8bc = _UNK_14615f7c8 | uRam0000000148fcf8bc;
    bRam0000000148fcf8c0 = bRam0000000148fcf8c0 | 0x10;
  }
  *pbVar9 = *pbVar9 | 0x10;
  cVar5 = *(char *)(*(longlong *)
                     (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8);
  if (cVar5 == '\0') {
    func_0x0001455db994();
    cVar5 = *(char *)(*(longlong *)
                       (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8);
  }
  lVar10 = *plVar1;
  if (lVar10 != 0) {
    if (cVar5 == '\0') {
      func_0x0001455db994();
      lVar10 = *plVar1;
      cVar5 = *(char *)(*(longlong *)
                         (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8);
    }
    *(ulonglong *)(lVar10 + 0x20) = *(ulonglong *)(lVar10 + 0x20) | 0x10000000000;
  }
  if (cVar5 == '\0') {
    func_0x0001455db994();
    cVar5 = *(char *)(*(longlong *)
                       (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8);
  }
  lVar10 = *plVar2;
  if (lVar10 != 0) {
    if (cVar5 == '\0') {
      func_0x0001455db994();
      lVar10 = *plVar2;
      cVar5 = *(char *)(*(longlong *)
                         (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8);
    }
    *(ulonglong *)(lVar10 + 0x20) = *(ulonglong *)(lVar10 + 0x20) | 0x10000000000;
  }
  if (cVar5 == '\0') {
    func_0x0001455db994();
  }
  if (*pbVar3 == 1) {
    pbVar9 = (byte *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1294);
    if (*(char *)((*(longlong **)(unaff_GS_OFFSET + 0x58))[__tls_index] + 8) == '\0') {
      func_0x0001455db994();
      bVar11 = *pbVar9;
      cVar5 = *(char *)(*(longlong *)
                         (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8);
      if (cVar5 == '\0') {
        func_0x0001455db994();
        cVar5 = *(char *)(*(longlong *)
                           (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8)
        ;
      }
    }
    else {
      bVar11 = *pbVar9;
      cVar5 = '\x01';
    }
    puVar4 = (uint *)((ulonglong)((uint)bVar11 + (uint)*pbVar3) * 4 + 0x148fcf880);
    *puVar4 = *puVar4 | 0x200;
    if (cVar5 == '\0') {
      func_0x0001455db994();
      bVar11 = *pbVar9;
      cVar5 = *(char *)(*(longlong *)
                         (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8);
      if (cVar5 == '\0') {
        func_0x0001455db994();
        cVar5 = *(char *)(*(longlong *)
                           (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8)
        ;
      }
    }
    else {
      bVar11 = *pbVar9;
      cVar5 = '\x01';
    }
    puVar4 = (uint *)((ulonglong)((uint)bVar11 + (uint)*pbVar3) * 4 + 0x148fcf898);
    *puVar4 = *puVar4 | 0x200;
    if (cVar5 == '\0') {
      func_0x0001455db994();
      bVar11 = *pbVar9;
      if (*(char *)(*(longlong *)
                     (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8) ==
          '\0') {
        func_0x0001455db994();
      }
    }
    else {
      bVar11 = *pbVar9;
    }
    lVar10 = (ulonglong)((uint)bVar11 + (uint)*pbVar3) * 4 + 0x148fcf8b0;
  }
  else {
    lVar10 = 0x148fcf8c4;
    uRam0000000148fcf880 = _DAT_14615b480 | uRam0000000148fcf880;
    uRam0000000148fcf884 = _DAT_14615b480 | uRam0000000148fcf884;
    uRam0000000148fcf888 = _DAT_14615b480 | uRam0000000148fcf888;
    uRam0000000148fcf88c = _DAT_14615b480 | uRam0000000148fcf88c;
    uRam0000000148fcf890 = _DAT_14615b480 | uRam0000000148fcf890;
    uRam0000000148fcf894 = _DAT_14615b480 | uRam0000000148fcf894;
    uRam0000000148fcf898 = _DAT_14615b480 | uRam0000000148fcf898;
    uRam0000000148fcf89c = _DAT_14615b480 | uRam0000000148fcf89c;
    uRam0000000148fcf8a0 = _DAT_14615b480 | uRam0000000148fcf8a0;
    uRam0000000148fcf8a4 = _DAT_14615b480 | uRam0000000148fcf8a4;
    uRam0000000148fcf8a8 = _DAT_14615b480 | uRam0000000148fcf8a8;
    uRam0000000148fcf8ac = _DAT_14615b480 | uRam0000000148fcf8ac;
    uRam0000000148fcf8b0 = _DAT_14615b480 | uRam0000000148fcf8b0;
    uRam0000000148fcf8b4 = _DAT_14615b480 | uRam0000000148fcf8b4;
    uRam0000000148fcf8b8 = _DAT_14615b480 | uRam0000000148fcf8b8;
    uRam0000000148fcf8bc = _DAT_14615b480 | uRam0000000148fcf8bc;
    bRam0000000148fcf8c1 = bRam0000000148fcf8c1 | 2;
  }
  *(byte *)(lVar10 + 1) = *(byte *)(lVar10 + 1) | 2;
  cVar5 = *(char *)(*(longlong *)
                     (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8);
  if (cVar5 == '\0') {
    func_0x0001455db994();
    cVar5 = *(char *)(*(longlong *)
                       (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8);
  }
  lVar10 = *plVar1;
  if (lVar10 != 0) {
    if (cVar5 == '\0') {
      func_0x0001455db994();
      lVar10 = *plVar1;
      cVar5 = *(char *)(*(longlong *)
                         (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8);
    }
    *(ulonglong *)(lVar10 + 0x20) = *(ulonglong *)(lVar10 + 0x20) | 0x10000000000;
  }
  if (cVar5 == '\0') {
    func_0x0001455db994();
    cVar5 = *(char *)(*(longlong *)
                       (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8);
  }
  lVar10 = *plVar2;
  if (lVar10 != 0) {
    if (cVar5 == '\0') {
      func_0x0001455db994();
      lVar10 = *plVar2;
      cVar5 = *(char *)(*(longlong *)
                         (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8);
    }
    *(ulonglong *)(lVar10 + 0x20) = *(ulonglong *)(lVar10 + 0x20) | 0x10000000000;
  }
  if (cVar5 == '\0') {
    func_0x0001455db994();
  }
  if (*pbVar3 != 1) {
    lVar10 = 0x148fcf8c4;
    uRam0000000148fcf880 = _UNK_14615c524 | uRam0000000148fcf880;
    uRam0000000148fcf884 = _UNK_14615c524 | uRam0000000148fcf884;
    uRam0000000148fcf888 = _UNK_14615c524 | uRam0000000148fcf888;
    uRam0000000148fcf88c = _UNK_14615c524 | uRam0000000148fcf88c;
    uRam0000000148fcf890 = _UNK_14615c524 | uRam0000000148fcf890;
    uRam0000000148fcf894 = _UNK_14615c524 | uRam0000000148fcf894;
    uRam0000000148fcf898 = _UNK_14615c524 | uRam0000000148fcf898;
    uRam0000000148fcf89c = _UNK_14615c524 | uRam0000000148fcf89c;
    uRam0000000148fcf8a0 = _UNK_14615c524 | uRam0000000148fcf8a0;
    uRam0000000148fcf8a4 = _UNK_14615c524 | uRam0000000148fcf8a4;
    uRam0000000148fcf8a8 = _UNK_14615c524 | uRam0000000148fcf8a8;
    uRam0000000148fcf8ac = _UNK_14615c524 | uRam0000000148fcf8ac;
    uRam0000000148fcf8b0 = _UNK_14615c524 | uRam0000000148fcf8b0;
    uRam0000000148fcf8b4 = _UNK_14615c524 | uRam0000000148fcf8b4;
    uRam0000000148fcf8b8 = _UNK_14615c524 | uRam0000000148fcf8b8;
    uRam0000000148fcf8bc = _UNK_14615c524 | uRam0000000148fcf8bc;
    bRam0000000148fcf8c1 = bRam0000000148fcf8c1 | 4;
    goto code_r0x000144fa7eaf;
  }
  pbVar9 = (byte *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1294);
  if (*(char *)((*(longlong **)(unaff_GS_OFFSET + 0x58))[__tls_index] + 8) == '\0') {
    func_0x0001455db994();
    bVar11 = *pbVar9;
    if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8)
                 + 8) != '\0') {
      bVar6 = *pbVar3;
      goto code_r0x000144fa7e76;
    }
    func_0x0001455db994();
    lVar10 = *(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8);
    uVar7 = (uint)*pbVar3;
    puVar4 = (uint *)((ulonglong)(bVar11 + uVar7) * 4 + 0x148fcf880);
    *puVar4 = *puVar4 | 0x400;
    if (*(char *)(lVar10 + 8) != '\0') {
      bVar11 = *pbVar9;
      goto code_r0x000144fa7e8a;
    }
    func_0x0001455db994();
    bVar11 = *pbVar9;
    if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8)
                 + 8) != '\0') {
      uVar7 = (uint)*pbVar3;
      goto code_r0x000144fa7e8a;
    }
    func_0x0001455db994();
    lVar10 = *(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8);
    puVar4 = (uint *)((ulonglong)((uint)bVar11 + (uint)*pbVar3) * 4 + 0x148fcf898);
    *puVar4 = *puVar4 | 0x400;
    if (*(char *)(lVar10 + 8) == '\0') {
      func_0x0001455db994();
      bVar11 = *pbVar9;
      if (*(char *)(*(longlong *)
                     (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8) ==
          '\0') {
        func_0x0001455db994();
      }
    }
    else {
      bVar11 = *pbVar9;
    }
  }
  else {
    bVar11 = *pbVar9;
    bVar6 = 1;
code_r0x000144fa7e76:
    uVar7 = (uint)bVar6;
    pbVar9 = (byte *)((ulonglong)((uint)bVar11 + (uint)bVar6) * 4 + 0x148fcf881);
    *pbVar9 = *pbVar9 | 4;
code_r0x000144fa7e8a:
    pbVar9 = (byte *)((ulonglong)(uVar7 + bVar11) * 4 + 0x148fcf899);
    *pbVar9 = *pbVar9 | 4;
  }
  lVar10 = (ulonglong)((uint)bVar11 + (uint)*pbVar3) * 4 + 0x148fcf8b0;
code_r0x000144fa7eaf:
  *(byte *)(lVar10 + 1) = *(byte *)(lVar10 + 1) | 4;
  FUN_144fa8650(0xffffffff);
  *(undefined1 *)
   ((ulonglong)*(byte *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1110) +
    (ulonglong)*(byte *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1294) + 0x1477aebe8) = 1;
  return;
}

