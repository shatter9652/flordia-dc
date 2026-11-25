// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140102830  size: 1116 bytes
// Name:    FUN_140102830
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144fd2cf0, FUN_144e310f0, FUN_144e31500, FUN_144fd29e0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140102830(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  byte *pbVar2;
  uint *puVar3;
  longlong *plVar4;
  ushort uVar5;
  char cVar6;
  byte bVar7;
  longlong lVar8;
  longlong lVar9;
  byte bVar10;
  ulonglong uVar11;
  byte *pbVar12;
  uint uVar13;
  ulonglong uVar14;
  byte *pbVar15;
  longlong unaff_GS_OFFSET;
  
  uVar11 = param_2 & 0xffffffff;
  if ((*(byte *)(uVar11 + 0x147651190) & 1) == 0) {
    lVar8 = func_0x000144fd29c0(param_2 & 0xffffffff);
    if (lVar8 != 0) {
      if (*(char *)(*(longlong *)
                     (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8) ==
          '\0') {
        func_0x0001455db994();
      }
      plVar4 = *(longlong **)(unaff_GS_OFFSET + 0x58);
      plVar1 = (longlong *)(*plVar4 + 0x12a8);
      *(undefined1 *)(*plVar1 + 0x1220c) = 0;
      cVar6 = (**(code **)(&UNK_146202af0 + uVar11 * 8))();
      if (*(char *)(plVar4[__tls_index] + 8) == '\0') {
        func_0x0001455db994();
      }
      lVar9 = *plVar1;
      *(undefined1 *)(lVar9 + 0x1220c) = 1;
      if (cVar6 != '\0') {
        uVar13 = 1 << ((uint)param_2 & 0x1f) &
                 *(uint *)(_DAT_147651178 + (param_2 >> 5 & 0x7ffffff) * 4);
        if (uVar13 != 0) {
          if (*(char *)(*(longlong *)
                         (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8)
              == '\0') {
            func_0x0001455db994();
            lVar9 = *plVar1;
          }
          uVar5 = _DAT_147651170;
          if ((_DAT_147651170 != 0) &&
             (uVar14 = (ulonglong)(_DAT_147651170 >> 2),
             *(longlong *)(lVar9 + 0x40 + uVar14 * 8) != 0)) {
            *(undefined8 *)(lVar9 + 0x40 + uVar14 * 8) = 0;
            *(ulonglong *)(lVar9 + 0x20) = *(ulonglong *)(lVar9 + 0x20) | 1L << ((byte)uVar5 & 3);
            func_0x000144d9dcb0(lVar9,uVar5,0);
            *(undefined2 *)(lVar9 + 0x6200 + uVar14 * 2) = 0;
          }
        }
        if (*(char *)(*(longlong *)
                       (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8) ==
            '\0') {
          func_0x0001455db994();
        }
        FUN_144e31500(*plVar1);
        if (*(char *)(*(longlong *)
                       (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8) ==
            '\0') {
          func_0x0001455db994();
        }
        FUN_144fd29e0(*plVar1,lVar8);
        if (uVar13 != 0) {
          if (*(char *)(*(longlong *)
                         (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8)
              == '\0') {
            func_0x0001455db994();
          }
          FUN_144e310f0(*plVar1,lVar8,0);
          if (*(char *)(*(longlong *)
                         (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8)
              == '\0') {
            func_0x0001455db994();
          }
          FUN_144fd2cf0();
        }
      }
    }
    *(undefined1 *)(uVar11 + 0x147651190) = 1;
  }
  func_0x000145299260(0xffffffff);
  func_0x000144f65d50();
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    func_0x0001455db994();
    pbVar12 = (byte *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1294);
    bVar10 = *pbVar12;
    if (*(char *)((*(longlong **)(unaff_GS_OFFSET + 0x58))[__tls_index] + 8) != '\0')
    goto LAB_140102a7a;
    func_0x0001455db994();
    lVar8 = (*(longlong **)(unaff_GS_OFFSET + 0x58))[__tls_index];
    pbVar15 = (byte *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1110);
    bVar7 = *pbVar15;
    pbVar2 = (byte *)((ulonglong)((uint)bVar10 + (uint)bVar7) * 4 + 0x148fcf898);
    *pbVar2 = *pbVar2 & 0xf7;
    if (*(char *)(lVar8 + 8) != '\0') {
      bVar10 = *pbVar12;
      goto LAB_140102aa3;
    }
    func_0x0001455db994();
    bVar10 = *pbVar12;
    if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8)
                 + 8) != '\0') {
      bVar7 = *pbVar15;
      goto LAB_140102aa3;
    }
    func_0x0001455db994();
    lVar8 = *(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8);
    bVar7 = *pbVar15;
    puVar3 = (uint *)((ulonglong)((uint)bVar10 + (uint)bVar7) * 4 + 0x148fcf898);
    *puVar3 = *puVar3 & 0xffffffef;
    if (*(char *)(lVar8 + 8) != '\0') goto LAB_140102ab8;
    func_0x0001455db994();
    bVar10 = *pbVar12;
    if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8)
                 + 8) != '\0') {
      bVar7 = *pbVar15;
      goto LAB_140102aba;
    }
    func_0x0001455db994();
    lVar8 = *(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8);
    puVar3 = (uint *)((ulonglong)((uint)bVar10 + (uint)*pbVar15) * 4 + 0x148fcf898);
    *puVar3 = *puVar3 & 0xfffffdff;
    if (*(char *)(lVar8 + 8) == '\0') {
      func_0x0001455db994();
      bVar10 = *pbVar12;
      if (*(char *)(*(longlong *)
                     (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8) ==
          '\0') {
        func_0x0001455db994();
      }
      goto LAB_140102ad0;
    }
  }
  else {
    pbVar12 = (byte *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1294);
    bVar10 = *pbVar12;
LAB_140102a7a:
    pbVar15 = (byte *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1110);
    bVar7 = *pbVar15;
    pbVar2 = (byte *)((ulonglong)((uint)bVar10 + (uint)bVar7) * 4 + 0x148fcf898);
    *pbVar2 = *pbVar2 & 0xf7;
LAB_140102aa3:
    pbVar2 = (byte *)((ulonglong)((uint)bVar7 + (uint)bVar10) * 4 + 0x148fcf898);
    *pbVar2 = *pbVar2 & 0xef;
LAB_140102ab8:
    bVar10 = *pbVar12;
LAB_140102aba:
    pbVar2 = (byte *)((ulonglong)((uint)bVar7 + (uint)bVar10) * 4 + 0x148fcf899);
    *pbVar2 = *pbVar2 & 0xfd;
  }
  bVar10 = *pbVar12;
LAB_140102ad0:
  puVar3 = (uint *)((ulonglong)((uint)bVar10 + (uint)*pbVar15) * 4 + 0x148fcf898);
  *puVar3 = *puVar3 & 0xfffffbff;
  lVar8 = func_0x000144fd29c0(param_2 & 0xffffffff);
  if (lVar8 == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = _DAT_1475e73b0 + *(longlong *)(lVar8 + 0x10);
  }
  uVar11 = (ulonglong)(*(byte *)(lVar8 + 8) & 3);
  *(longlong *)(param_1 + 0x31ce0 + uVar11 * 8) = lVar9;
  *(ulonglong *)(param_1 + 0x20) = *(ulonglong *)(param_1 + 0x20) | 0x1011L << uVar11;
  return;
}

