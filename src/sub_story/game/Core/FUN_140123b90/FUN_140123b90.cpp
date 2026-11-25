// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140123b90  size: 325 bytes
// Name:    FUN_140123b90
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140123ce0, FUN_1450cca80, FUN_140205940, FUN_14041d920, FUN_1450983d0, FUN_1450cca30, FUN_1450d0d10, FUN_1450ccb70, FUN_1450cde90
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Removing unreachable block (ram,0x0001450d058a) */
/* WARNING: Removing unreachable block (ram,0x0001450d05a0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140123b90(char param_1)

{
  undefined8 *puVar1;
  byte *pbVar2;
  longlong *plVar3;
  uint *puVar4;
  longlong *plVar5;
  ushort uVar6;
  char cVar7;
  uint uVar8;
  longlong lVar9;
  byte *pbVar10;
  longlong lVar11;
  byte bVar12;
  ulonglong uVar13;
  longlong unaff_GS_OFFSET;
  undefined1 auVar14 [32];
  
  if ((*(longlong *)((longlong)_DAT_148767724 * 8 + 0x148767528) != 0) &&
     (*(longlong *)((1 - (longlong)_DAT_148767724) * 8 + 0x148767528) != 0)) {
    FUN_1450cca80(0);
  }
  FUN_1450cca30();
  if (_DAT_148fcfc48 != 0) {
    FUN_1450ccb70();
  }
  if (param_1 != '\0') {
    return;
  }
  if (_DAT_149188b40 != 0) {
    FUN_1450983d0(0,_DAT_149188b40,0);
  }
  if (_DAT_149188b48 != 0) {
    FUN_1450983d0(1,_DAT_149188b48,0);
  }
  if (_DAT_149188b50 != 0) {
    FUN_1450983d0(2,_DAT_149188b50,0);
  }
  lVar9 = func_0x000144e6b070();
  if (lVar9 != 0) {
    func_0x0001450983b0(lVar9,0);
  }
  if (_DAT_1491aca08 != 0) {
    func_0x000145098380();
  }
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    func_0x0001455db994();
  }
  plVar5 = *(longlong **)(unaff_GS_OFFSET + 0x58);
  puVar1 = (undefined8 *)(*plVar5 + 0x12a8);
  FUN_1450d0d10(*puVar1);
  FUN_140205940();
  if (*(char *)(plVar5[__tls_index] + 8) == '\0') {
    func_0x0001455db994();
  }
  FUN_1450cde90(*puVar1);
  FUN_140123ce0();
  FUN_14041d920(0);
  if (lRam0000000148406338 != 0) {
    if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8)
                 + 8) == '\0') {
      func_0x0001455db994();
    }
    uVar6 = uRam0000000148406250;
    lVar9 = **(longlong **)(unaff_GS_OFFSET + 0x58);
    if (uRam0000000148406250 != 0) {
      lVar11 = *(longlong *)(lVar9 + 0x12a8);
      uVar13 = (ulonglong)(uRam0000000148406250 >> 2);
      if (*(longlong *)(lVar11 + 0x40 + uVar13 * 8) != *(longlong *)(lRam0000000148406338 + 0x28)) {
        *(longlong *)(lVar11 + 0x40 + uVar13 * 8) = *(longlong *)(lRam0000000148406338 + 0x28);
        *(ulonglong *)(lVar11 + 0x20) = *(ulonglong *)(lVar11 + 0x20) | 1L << ((byte)uVar6 & 3);
        func_0x000144d9dcb0(lVar11,uVar6,0);
        *(undefined2 *)(lVar11 + 0x6200 + uVar13 * 2) = 0;
      }
    }
    if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8)
                 + 8) == '\0') {
      func_0x0001455db994();
    }
    uVar6 = uRam000000014840626a;
    plVar5 = (longlong *)(lVar9 + 0x12a8);
    if (uRam000000014840626a != 0) {
      lVar9 = *plVar5;
      if (*(longlong *)(lVar9 + 0x39c0 + (ulonglong)(uRam000000014840626a >> 2) * 8) !=
          _DAT_148406260) {
        *(longlong *)(lVar9 + 0x39c0 + (ulonglong)(uRam000000014840626a >> 2) * 8) = _DAT_148406260;
        *(ulonglong *)(lVar9 + 0x20) = *(ulonglong *)(lVar9 + 0x20) | 0x10L << ((byte)uVar6 & 3);
      }
    }
    if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8)
                 + 8) == '\0') {
      func_0x0001455db994();
    }
    uVar6 = uRam0000000148406282;
    if (uRam0000000148406282 != 0) {
      lVar9 = *plVar5;
      uVar13 = (ulonglong)(uRam0000000148406282 >> 2);
      if (*(longlong *)(lVar9 + 0x40 + uVar13 * 8) != *(longlong *)(lRam0000000148406270 + 0x28)) {
        *(longlong *)(lVar9 + 0x40 + uVar13 * 8) = *(longlong *)(lRam0000000148406270 + 0x28);
        *(ulonglong *)(lVar9 + 0x20) = *(ulonglong *)(lVar9 + 0x20) | 1L << ((byte)uVar6 & 3);
        func_0x000144d9dcb0(lVar9,uVar6,0);
        *(undefined2 *)(lVar9 + 0x6200 + uVar13 * 2) = 0;
      }
    }
    if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8)
                 + 8) == '\0') {
      func_0x0001455db994();
    }
    uVar6 = uRam0000000148406298;
    if (uRam0000000148406298 != 0) {
      lVar9 = *plVar5;
      if (*(longlong *)(lVar9 + 0x39c0 + (ulonglong)(uRam0000000148406298 >> 2) * 8) !=
          _DAT_148406290) {
        *(longlong *)(lVar9 + 0x39c0 + (ulonglong)(uRam0000000148406298 >> 2) * 8) = _DAT_148406290;
        *(ulonglong *)(lVar9 + 0x20) = *(ulonglong *)(lVar9 + 0x20) | 0x10L << ((byte)uVar6 & 3);
      }
    }
  }
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    func_0x0001455db994();
  }
  pbVar2 = (byte *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1110);
  if (*pbVar2 == 0) {
    auVar14._4_4_ = _DAT_145f43840;
    auVar14._0_4_ = _DAT_145f43840;
    auVar14._8_4_ = _DAT_145f43840;
    auVar14._12_4_ = _DAT_145f43840;
    auVar14._16_4_ = _DAT_145f43840;
    auVar14._20_4_ = _DAT_145f43840;
    auVar14._24_4_ = _DAT_145f43840;
    auVar14._28_4_ = _DAT_145f43840;
    lVar9 = 0x7f8;
    plVar5 = (longlong *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x12a8);
    plVar3 = (longlong *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1108);
    do {
      cVar7 = *(char *)(*(longlong *)
                         (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8);
      if (cVar7 == '\0') {
        func_0x0001455db994();
        cVar7 = *(char *)(*(longlong *)
                           (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8)
        ;
      }
      lVar11 = *plVar5;
      if (lVar11 != 0) {
        if (cVar7 == '\0') {
          func_0x0001455db994();
          lVar11 = *plVar5;
          cVar7 = *(char *)(*(longlong *)
                             (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
                           8);
        }
        *(ulonglong *)(lVar11 + 0x20) = *(ulonglong *)(lVar11 + 0x20) | 0x10000000000;
      }
      if (cVar7 == '\0') {
        func_0x0001455db994();
        cVar7 = *(char *)(*(longlong *)
                           (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8)
        ;
      }
      lVar11 = *plVar3;
      if (lVar11 != 0) {
        if (cVar7 == '\0') {
          func_0x0001455db994();
          lVar11 = *plVar3;
          cVar7 = *(char *)(*(longlong *)
                             (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
                           8);
        }
        *(ulonglong *)(lVar11 + 0x20) = *(ulonglong *)(lVar11 + 0x20) | 0x10000000000;
      }
      if (cVar7 == '\0') {
        func_0x0001455db994();
      }
      if (*pbVar2 == 1) {
        pbVar10 = (byte *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1294);
        if (*(char *)((*(longlong **)(unaff_GS_OFFSET + 0x58))[__tls_index] + 8) == '\0') {
          func_0x0001455db994();
          bVar12 = *pbVar10;
          cVar7 = *(char *)(*(longlong *)
                             (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
                           8);
          if (cVar7 == '\0') {
            func_0x0001455db994();
            cVar7 = *(char *)(*(longlong *)
                               (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8)
                             + 8);
          }
          puVar4 = (uint *)((ulonglong)((uint)bVar12 + (uint)*pbVar2) * 4 + 0x148fcf880);
          *puVar4 = *puVar4 | 8;
          if (cVar7 == '\0') {
            func_0x0001455db994();
            uVar8 = (uint)*pbVar10;
            cVar7 = *(char *)(*(longlong *)
                               (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8)
                             + 8);
            if (cVar7 == '\0') {
              func_0x0001455db994();
              cVar7 = *(char *)(*(longlong *)
                                 (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8
                                 ) + 8);
            }
          }
          else {
            uVar8 = (uint)*pbVar10;
            cVar7 = '\x01';
          }
          puVar4 = (uint *)((ulonglong)(uVar8 + *pbVar2) * 4 + 0x148fcf898);
          *puVar4 = *puVar4 | 8;
          if (cVar7 == '\0') {
            func_0x0001455db994();
            uVar8 = (uint)*pbVar10;
            if (*(char *)(*(longlong *)
                           (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8)
                == '\0') {
              func_0x0001455db994();
            }
          }
          else {
            uVar8 = (uint)*pbVar10;
          }
          pbVar10 = (byte *)((ulonglong)(uVar8 + *pbVar2) * 4 + 0x148fcf8b0);
        }
        else {
          lVar11 = (ulonglong)(*pbVar10 + 1) * 4;
          pbVar10 = (byte *)(lVar11 + 0x148fcf8b0);
          *(uint *)(lVar11 + 0x148fcf880) = *(uint *)(lVar11 + 0x148fcf880) | 8;
          *(byte *)(lVar11 + 0x148fcf898) = *(byte *)(lVar11 + 0x148fcf898) | 8;
        }
      }
      else {
        pbVar10 = (byte *)0x148fcf8c4;
        _uRam0000000148fcf880 = auVar14 | _uRam0000000148fcf880;
        _uRam0000000148fcf8a0 = auVar14 | _uRam0000000148fcf8a0;
        bRam0000000148fcf8c0 = bRam0000000148fcf8c0 | 8;
      }
      *pbVar10 = *pbVar10 | 8;
      *(undefined4 *)(lVar9 + 0x148fcaec0) = 0;
      lVar9 = lVar9 + 0x7fc;
    } while (lVar9 != 0x37e0);
    return;
  }
  cVar7 = *(char *)(*(longlong *)
                     (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8);
  if (cVar7 == '\0') {
    func_0x0001455db994();
    cVar7 = *(char *)(*(longlong *)
                       (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8);
  }
  lVar9 = **(longlong **)(unaff_GS_OFFSET + 0x58);
  lVar11 = *(longlong *)(lVar9 + 0x12a8);
  if (lVar11 != 0) {
    if (cVar7 == '\0') {
      func_0x0001455db994();
      lVar11 = *(longlong *)(lVar9 + 0x12a8);
      cVar7 = *(char *)(*(longlong *)
                         (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8);
    }
    *(ulonglong *)(lVar11 + 0x20) = *(ulonglong *)(lVar11 + 0x20) | 0x10000000000;
  }
  if (cVar7 == '\0') {
    func_0x0001455db994();
    cVar7 = *(char *)(*(longlong *)
                       (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8);
  }
  lVar9 = **(longlong **)(unaff_GS_OFFSET + 0x58);
  lVar11 = *(longlong *)(lVar9 + 0x1108);
  if (lVar11 != 0) {
    if (cVar7 == '\0') {
      func_0x0001455db994();
      lVar11 = *(longlong *)(lVar9 + 0x1108);
      cVar7 = *(char *)(*(longlong *)
                         (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8);
    }
    *(ulonglong *)(lVar11 + 0x20) = *(ulonglong *)(lVar11 + 0x20) | 0x10000000000;
  }
  if (cVar7 == '\0') {
    func_0x0001455db994();
  }
  if (*pbVar2 != 1) {
    pbVar10 = (byte *)0x148fcf8c4;
    uRam0000000148fcf880._4_4_ = _DAT_145f43840 | uRam0000000148fcf880._4_4_;
    uRam0000000148fcf880._0_4_ = _DAT_145f43840 | (uint)uRam0000000148fcf880;
    uRam0000000148fcf888 = _DAT_145f43840 | uRam0000000148fcf888;
    uRam0000000148fcf88c = _DAT_145f43840 | uRam0000000148fcf88c;
    uRam0000000148fcf890 = _DAT_145f43840 | uRam0000000148fcf890;
    uRam0000000148fcf894 = _DAT_145f43840 | uRam0000000148fcf894;
    uRam0000000148fcf898 = _DAT_145f43840 | uRam0000000148fcf898;
    uRam0000000148fcf89c = _DAT_145f43840 | uRam0000000148fcf89c;
    uRam0000000148fcf8a0._4_4_ = _DAT_145f43840 | uRam0000000148fcf8a0._4_4_;
    uRam0000000148fcf8a0._0_4_ = _DAT_145f43840 | (uint)uRam0000000148fcf8a0;
    uRam0000000148fcf8a8 = _DAT_145f43840 | uRam0000000148fcf8a8;
    uRam0000000148fcf8ac = _DAT_145f43840 | uRam0000000148fcf8ac;
    uRam0000000148fcf8b0 = _DAT_145f43840 | uRam0000000148fcf8b0;
    uRam0000000148fcf8b4 = _DAT_145f43840 | uRam0000000148fcf8b4;
    uRam0000000148fcf8b8 = _DAT_145f43840 | uRam0000000148fcf8b8;
    uRam0000000148fcf8bc = _DAT_145f43840 | uRam0000000148fcf8bc;
    bRam0000000148fcf8c0 = bRam0000000148fcf8c0 | 8;
    goto code_r0x0001450d4821;
  }
  pbVar10 = (byte *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1294);
  if (*(char *)((*(longlong **)(unaff_GS_OFFSET + 0x58))[__tls_index] + 8) != '\0') {
    lVar9 = (ulonglong)(*pbVar10 + 1) * 4;
    pbVar10 = (byte *)(lVar9 + 0x148fcf8b0);
    *(uint *)(lVar9 + 0x148fcf880) = *(uint *)(lVar9 + 0x148fcf880) | 8;
    *(byte *)(lVar9 + 0x148fcf898) = *(byte *)(lVar9 + 0x148fcf898) | 8;
    goto code_r0x0001450d4821;
  }
  func_0x0001455db994();
  bVar12 = *pbVar10;
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    func_0x0001455db994();
    lVar9 = *(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8);
    uVar8 = (uint)*pbVar2;
    puVar4 = (uint *)((ulonglong)((uint)bVar12 + (uint)*pbVar2) * 4 + 0x148fcf880);
    *puVar4 = *puVar4 | 8;
    if (*(char *)(lVar9 + 8) != '\0') {
      bVar12 = *pbVar10;
      goto code_r0x0001450d48fe;
    }
    func_0x0001455db994();
    bVar12 = *pbVar10;
    if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8)
                 + 8) != '\0') {
      uVar8 = (uint)*pbVar2;
      goto code_r0x0001450d48fe;
    }
    func_0x0001455db994();
    lVar9 = *(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8);
    puVar4 = (uint *)((ulonglong)((uint)bVar12 + (uint)*pbVar2) * 4 + 0x148fcf898);
    *puVar4 = *puVar4 | 8;
    if (*(char *)(lVar9 + 8) == '\0') {
      func_0x0001455db994();
      bVar12 = *pbVar10;
      if (*(char *)(*(longlong *)
                     (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8) ==
          '\0') {
        func_0x0001455db994();
      }
    }
    else {
      bVar12 = *pbVar10;
    }
  }
  else {
    uVar8 = (uint)*pbVar2;
    puVar4 = (uint *)((ulonglong)((uint)bVar12 + (uint)*pbVar2) * 4 + 0x148fcf880);
    *puVar4 = *puVar4 | 8;
code_r0x0001450d48fe:
    pbVar10 = (byte *)((ulonglong)(uVar8 + bVar12) * 4 + 0x148fcf898);
    *pbVar10 = *pbVar10 | 8;
  }
  pbVar10 = (byte *)((ulonglong)((uint)bVar12 + (uint)*pbVar2) * 4 + 0x148fcf8b0);
code_r0x0001450d4821:
  *pbVar10 = *pbVar10 | 8;
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    func_0x0001455db994();
    bVar12 = *(byte *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1294);
    if (*(char *)((*(longlong **)(unaff_GS_OFFSET + 0x58))[__tls_index] + 8) == '\0') {
      func_0x0001455db994();
    }
  }
  else {
    bVar12 = *(byte *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1294);
  }
  *(undefined4 *)(((ulonglong)*pbVar2 + (ulonglong)bVar12) * 0x7fc + 0x148fcb6b8) = 0;
  return;
}

