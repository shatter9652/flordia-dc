// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140006660  size: 1194 bytes
// Name:    FUN_140006660
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140006660(longlong *param_1,byte param_2)

{
  longlong *plVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  short sVar5;
  ushort uVar6;
  longlong lVar7;
  longlong lVar8;
  ushort uVar9;
  char cVar10;
  longlong lVar11;
  undefined8 *puVar12;
  longlong lVar13;
  undefined8 uVar14;
  ulonglong uVar15;
  uint uVar16;
  ulonglong uVar17;
  byte *pbVar18;
  int iVar19;
  byte *pbVar20;
  ulonglong uVar21;
  short sVar22;
  longlong lVar23;
  longlong unaff_GS_OFFSET;
  undefined4 auStack_44 [3];
  
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    func_0x0001455db994();
  }
  lVar11 = *param_1;
  lVar13 = *(longlong *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x12a8);
  bVar2 = *(byte *)((ulonglong)param_2 + 8 + lVar11 + (ulonglong)*(byte *)(lVar13 + 0x12742) * 0x14)
  ;
  if (bVar2 == 0xff) {
    return;
  }
  plVar1 = (longlong *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x12a8);
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    func_0x0001455db994();
    cVar10 = *(char *)(*(longlong *)
                        (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8);
    lVar13 = *(longlong *)(*plVar1 + 0x12748);
    if (cVar10 == '\0') {
      func_0x0001455db994();
      cVar10 = *(char *)(*(longlong *)
                          (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8);
    }
  }
  else {
    lVar13 = *(longlong *)(lVar13 + 0x12748);
    cVar10 = '\x01';
  }
  lVar23 = *(longlong *)(lVar11 + 0xc70);
  lVar7 = **(longlong **)(unaff_GS_OFFSET + 0x58);
  uVar16 = *(uint *)(*(longlong *)(lVar11 + 0xc68) + (ulonglong)*(byte *)(lVar7 + 0x12c0) * 4);
  if (cVar10 == '\0') {
    func_0x0001455db994();
  }
  lVar11 = *plVar1;
  if ((*(longlong *)(lVar11 + 0x12748) != 0) &&
     (bVar3 = *(byte *)(*(longlong *)(lVar11 + 0x12748) + 10), (bVar3 & 0xf) != 0)) {
    if (((bVar3 & 1) != 0) &&
       (cVar10 = *(char *)(lVar11 + 0x12750), *(char *)(lVar11 + 0x1236c) != cVar10)) {
      *(char *)(lVar11 + 0x1236c) = cVar10;
      if (*(char *)(lVar11 + 0x123ec) == cVar10) {
        uVar21 = *(ulonglong *)(lVar11 + 0x12520) & 0xfffffffffff7ffff;
      }
      else {
        uVar21 = *(ulonglong *)(lVar11 + 0x12520) | 0x80000;
      }
      *(ulonglong *)(lVar11 + 0x12520) = uVar21;
    }
    if (((bVar3 & 2) != 0) &&
       (sVar5 = *(short *)(lVar11 + 0x12752), *(short *)(lVar11 + 0x1236e) != sVar5)) {
      *(short *)(lVar11 + 0x1236e) = sVar5;
      if (*(short *)(lVar11 + 0x123ee) == sVar5) {
        uVar21 = *(ulonglong *)(lVar11 + 0x12520) & 0xffffffffffefffff;
      }
      else {
        uVar21 = *(ulonglong *)(lVar11 + 0x12520) | 0x100000;
      }
      *(ulonglong *)(lVar11 + 0x12520) = uVar21;
    }
    if (((bVar3 & 8) != 0) &&
       (iVar19 = *(int *)(lVar11 + 0x12758), *(int *)(lVar11 + 0x12368) != iVar19)) {
      *(int *)(lVar11 + 0x12368) = iVar19;
      if (*(int *)(lVar11 + 0x123e8) == iVar19) {
        uVar21 = *(ulonglong *)(lVar11 + 0x12520) & 0xfffffffffdffffff;
      }
      else {
        uVar21 = *(ulonglong *)(lVar11 + 0x12520) | 0x2000000;
      }
      *(ulonglong *)(lVar11 + 0x12520) = uVar21;
    }
    if (((bVar3 & 4) != 0) && (*(short *)(lVar11 + 0x12378) != *(short *)(lVar11 + 0x12754))) {
      *(short *)(lVar11 + 0x12378) = *(short *)(lVar11 + 0x12754);
      *(byte *)(lVar11 + 0x12522) = *(byte *)(lVar11 + 0x12522) | 0x20;
    }
  }
  *(undefined8 *)(lVar11 + 0x12748) = 0;
  pbVar20 = (byte *)(lVar7 + 0x12c0);
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    func_0x0001455db994();
    lVar11 = *(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8);
    *pbVar20 = bVar2;
    if (*(char *)(lVar11 + 8) != '\0') goto LAB_140006781;
    func_0x0001455db994();
    lVar7 = (*(longlong **)(unaff_GS_OFFSET + 0x58))[__tls_index];
    *(undefined1 *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x12c1) = 0;
    lVar11 = *param_1;
    if (*(char *)(lVar7 + 8) == '\0') {
      func_0x0001455db994();
    }
  }
  else {
    *pbVar20 = bVar2;
LAB_140006781:
    *(undefined1 *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x12c1) = 0;
    lVar11 = *param_1;
  }
  if (((ulonglong)*pbVar20 == 0xff) ||
     (*(uint *)(*(longlong *)(lVar11 + 0xc68) + (ulonglong)*pbVar20 * 4) < 0x1000000)) {
    return;
  }
  iVar19 = (int)((ulonglong)(lVar13 - lVar23) >> 3) * -0x55555555 - (uVar16 >> 0xf & 0x1ff);
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    func_0x0001455db994();
    cVar10 = *(char *)((*(longlong **)(unaff_GS_OFFSET + 0x58))[__tls_index] + 8);
    *(longlong **)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1220) = param_1;
    if ((cVar10 != '\0') ||
       (func_0x0001455db994(),
       *(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
                8) != '\0')) goto LAB_1400067fd;
    func_0x0001455db994();
    cVar10 = *(char *)(*(longlong *)
                        (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8);
    lVar11 = *plVar1;
    *(byte *)(lVar11 + 0x12743) = param_2;
    if (cVar10 == '\0') {
      func_0x0001455db994();
      lVar11 = *plVar1;
    }
  }
  else {
    *(longlong **)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1220) = param_1;
LAB_1400067fd:
    lVar11 = *plVar1;
    *(byte *)(lVar11 + 0x12743) = param_2;
  }
  lVar13 = *param_1;
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    func_0x0001455db994();
  }
  lVar23 = **(longlong **)(unaff_GS_OFFSET + 0x58);
  uVar21 = (ulonglong)*(byte *)(lVar23 + 0x12c0);
  uVar17 = (ulonglong)
           ((*(uint *)(*(longlong *)(lVar13 + 0xc68) + uVar21 * 4) >> 0xf & 0x1ff) + iVar19);
  lVar7 = *(longlong *)(*(longlong *)(lVar13 + 0xc78) + uVar17 * 8);
  lVar8 = *(longlong *)(lVar11 + 0x12328);
  if (lVar8 != lVar7) {
    if (lVar8 == 0) {
      uVar15 = 0x700001f0ff;
    }
    else {
      if ((((*(longlong **)(lVar8 + 0x30) == (longlong *)0x0) ||
           (*(longlong **)(lVar7 + 0x30) == (longlong *)0x0)) ||
          (**(longlong **)(lVar8 + 0x30) != **(longlong **)(lVar7 + 0x30))) ||
         (*(char *)(lVar7 + 0x50) != *(char *)(lVar8 + 0x50))) {
        uVar15 = 0x1011;
      }
      else {
        uVar15 = 0;
      }
      if (((*(longlong **)(lVar8 + 0x38) == (longlong *)0x0) ||
          (*(longlong **)(lVar7 + 0x38) == (longlong *)0x0)) ||
         ((**(longlong **)(lVar8 + 0x38) != **(longlong **)(lVar7 + 0x38) ||
          (*(char *)(lVar7 + 0x51) != *(char *)(lVar8 + 0x51))))) {
        uVar15 = uVar15 | 0x2022;
      }
      if (((*(longlong **)(lVar8 + 0x40) == (longlong *)0x0) ||
          (*(longlong **)(lVar7 + 0x40) == (longlong *)0x0)) ||
         ((**(longlong **)(lVar8 + 0x40) != **(longlong **)(lVar7 + 0x40) ||
          (*(char *)(lVar7 + 0x52) != *(char *)(lVar8 + 0x52))))) {
        uVar15 = uVar15 | 0x4044;
      }
      if ((((*(longlong **)(lVar8 + 0x48) == (longlong *)0x0) ||
           (*(longlong **)(lVar7 + 0x48) == (longlong *)0x0)) ||
          (**(longlong **)(lVar8 + 0x48) != **(longlong **)(lVar7 + 0x48))) ||
         (*(char *)(lVar7 + 0x53) != *(char *)(lVar8 + 0x53))) {
        uVar15 = uVar15 | 0x8088;
      }
      uVar15 = uVar15 | 0x10000;
    }
    *(longlong *)(lVar11 + 0x12328) = lVar7;
    *(ulonglong *)(lVar11 + 0x12520) = *(ulonglong *)(lVar11 + 0x12520) | uVar15;
  }
  lVar7 = *(longlong *)(lVar13 + 0xc70);
  lVar13 = lVar7 + uVar17 * 0x18;
  *(longlong *)(lVar11 + 0x12748) = lVar13;
  bVar2 = *(byte *)(lVar7 + 10 + uVar17 * 0x18);
  if ((bVar2 & 0xf) != 0) {
    if ((bVar2 & 1) != 0) {
      cVar10 = *(char *)(lVar13 + 6);
      cVar4 = *(char *)(lVar11 + 0x1236c);
      if (cVar4 != cVar10) {
        *(char *)(lVar11 + 0x1236c) = cVar10;
        if (*(char *)(lVar11 + 0x123ec) == cVar10) {
          uVar17 = *(ulonglong *)(lVar11 + 0x12520) & 0xfffffffffff7ffff;
        }
        else {
          uVar17 = *(ulonglong *)(lVar11 + 0x12520) | 0x80000;
        }
        *(ulonglong *)(lVar11 + 0x12520) = uVar17;
      }
      *(char *)(lVar11 + 0x12750) = cVar4;
    }
    if ((bVar2 & 2) != 0) {
      sVar5 = (ushort)*(byte *)(lVar13 + 7) + (bVar2 & 0x40) * 4;
      sVar22 = *(short *)(lVar11 + 0x1236e);
      if (sVar22 != sVar5) {
        *(short *)(lVar11 + 0x1236e) = sVar5;
        *(ulonglong *)(lVar11 + 0x12520) =
             (ulonglong)(*(short *)(lVar11 + 0x123ee) != sVar5) << 0x14 |
             *(ulonglong *)(lVar11 + 0x12520) & 0xffffffffffefffff;
      }
      *(short *)(lVar11 + 0x12752) = sVar22;
    }
    if ((bVar2 & 8) != 0) {
      bVar3 = *(byte *)(lVar13 + 9);
      uVar16 = *(uint *)(lVar11 + 0x12368);
      if (uVar16 != bVar3) {
        *(uint *)(lVar11 + 0x12368) = (uint)bVar3;
        *(ulonglong *)(lVar11 + 0x12520) =
             (ulonglong)((uint)(*(uint *)(lVar11 + 0x123e8) != (uint)bVar3) << 0x19) |
             *(ulonglong *)(lVar11 + 0x12520) & 0xfffffffffdffffff;
      }
      *(uint *)(lVar11 + 0x12758) = uVar16;
    }
    if ((bVar2 & 4) != 0) {
      sVar22 = (ushort)*(byte *)(lVar13 + 8) + (bVar2 & 0xff80) * 2;
      sVar5 = *(short *)(lVar11 + 0x12378);
      if (sVar5 != sVar22) {
        *(short *)(lVar11 + 0x12378) = sVar22;
        *(byte *)(lVar11 + 0x12522) = *(byte *)(lVar11 + 0x12522) | 0x20;
      }
      *(short *)(lVar11 + 0x12754) = sVar5;
    }
  }
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    func_0x0001455db994();
    uVar21 = (ulonglong)*(byte *)(lVar23 + 0x12c0);
  }
  uVar6 = uRam000000014760e1e2;
  lVar13 = *(longlong *)*param_1;
  pbVar20 = (byte *)((ulonglong)
                     *(ushort *)
                      (*(longlong *)(lVar13 + 0x58) +
                      (ulonglong)
                      ((*(uint *)(((longlong *)*param_1)[0x18d] + uVar21 * 4) >> 0xf & 0x1ff) +
                      iVar19) * 2) + *(longlong *)(lVar13 + 0x60));
  if (param_1[6] == 0) {
    pbVar20 = (byte *)FUN_144da90a0(*param_1,param_1[2],lVar11,pbVar20 + 1);
    uVar16 = (uint)*pbVar20;
    pbVar18 = pbVar20 + 1;
    if (*pbVar20 != 0) {
      do {
        bVar2 = *pbVar18;
        lVar13 = func_0x000144ee12a0(param_1[2],(ulonglong)bVar2);
        uVar6 = *(ushort *)(*(longlong *)(*(longlong *)*param_1 + 0x30) + (ulonglong)bVar2 * 2);
        if ((uVar6 != 0) &&
           (uVar21 = (ulonglong)(uVar6 >> 2), *(longlong *)(lVar11 + 0x40 + uVar21 * 8) != lVar13))
        {
          *(longlong *)(lVar11 + 0x40 + uVar21 * 8) = lVar13;
          *(ulonglong *)(lVar11 + 0x20) = *(ulonglong *)(lVar11 + 0x20) | 1L << ((byte)uVar6 & 3);
          func_0x000144d9dcb0(lVar11,uVar6,0);
          *(undefined2 *)(lVar11 + 0x6200 + uVar21 * 2) = 0;
        }
        pbVar18 = pbVar18 + 1;
        uVar16 = uVar16 - 1;
      } while (uVar16 != 0);
    }
    bVar2 = *pbVar18;
    if (bVar2 != 0) {
      lVar13 = 0;
      do {
        bVar3 = pbVar18[lVar13 + 1];
        if ((*(short *)(*(longlong *)(*(longlong *)*param_1 + 0x18) +
                       (ulonglong)((uint)bVar3 + (uint)bVar3)) != 0) &&
           (uVar6 = *(ushort *)
                     (*(longlong *)(*(longlong *)*param_1 + 0x28) +
                     (ulonglong)((uint)bVar3 + (uint)bVar3)), uVar6 != 0)) {
          uVar14 = func_0x000144e3d460(lVar11,uVar6,
                                       *(undefined8 *)(param_1[1] + (ulonglong)bVar3 * 8));
          func_0x000144da8e20(lVar11,uVar6,uVar14);
          *(undefined2 *)(lVar11 + 0x70c0 + (ulonglong)(uVar6 >> 2) * 2) = 0;
        }
        lVar13 = lVar13 + 1;
      } while ((uint)bVar2 != (uint)lVar13);
    }
    return;
  }
  bVar2 = *pbVar20;
  if (bVar2 == 0xff) {
    if (pbVar20[1] == 0) goto code_r0x000144da8c59;
    puVar12 = (undefined8 *)*param_1;
    if ((*(byte *)((longlong)puVar12 + 0xcfd) != 0) && (uRam000000014760e1e2 != 0)) {
      uVar9 = uRam000000014760e1e2 >> 2;
      func_0x000144da8e30(lVar11,uRam000000014760e1e2,
                          *(undefined8 *)(param_1[6] + (ulonglong)*(byte *)*puVar12 * 0x10),
                          (ulonglong)*(byte *)((longlong)puVar12 + 0xcfd) << 2);
      func_0x000144da8e20(lVar11,uVar6,0);
      *(undefined2 *)(lVar11 + 0x70c0 + (ulonglong)uVar9 * 2) = 0;
      goto code_r0x000144da8c3f;
    }
  }
  else {
    auStack_44[0] =
         func_0x000144da8e10(*(undefined8 *)(param_1[6] + (ulonglong)**(byte **)*param_1 * 0x10));
    if ((char)bVar2 < '\0') {
      func_0x000144e89080(lVar11,auStack_44,1,bVar2 & 0x7f);
    }
    else {
      FUN_144da1210();
    }
code_r0x000144da8c3f:
    puVar12 = (undefined8 *)*param_1;
  }
  *(ulonglong *)(param_1[6] + 8 + (ulonglong)*(byte *)*puVar12 * 0x10) = (ulonglong)_DAT_14a9437ac;
code_r0x000144da8c59:
  uVar16 = (uint)pbVar20[2];
  pbVar18 = pbVar20 + 3;
  if (pbVar20[2] != 0) {
    do {
      bVar2 = *pbVar18;
      lVar13 = func_0x000144ee12a0(param_1[2],(ulonglong)bVar2);
      uVar6 = *(ushort *)(*(longlong *)(*(longlong *)*param_1 + 0x30) + (ulonglong)bVar2 * 2);
      if ((uVar6 != 0) &&
         (uVar21 = (ulonglong)(uVar6 >> 2), *(longlong *)(lVar11 + 0x40 + uVar21 * 8) != lVar13)) {
        *(longlong *)(lVar11 + 0x40 + uVar21 * 8) = lVar13;
        *(ulonglong *)(lVar11 + 0x20) = *(ulonglong *)(lVar11 + 0x20) | 1L << ((byte)uVar6 & 3);
        func_0x000144d9dcb0(lVar11,uVar6,0);
        *(undefined2 *)(lVar11 + 0x6200 + uVar21 * 2) = 0;
      }
      pbVar18 = pbVar18 + 1;
      uVar16 = uVar16 - 1;
    } while (uVar16 != 0);
  }
  bVar2 = *pbVar18;
  if (bVar2 != 0) {
    lVar13 = param_1[6];
    lVar23 = 0;
    do {
      bVar3 = pbVar18[lVar23 + 1];
      uVar16 = (uint)bVar3;
      if ((*(short *)(*(longlong *)(*(longlong *)*param_1 + 0x18) + (ulonglong)((uint)bVar3 * 2)) !=
           0) && (uVar6 = *(ushort *)
                           (*(longlong *)(*(longlong *)*param_1 + 0x28) +
                           (ulonglong)((uint)bVar3 * 2)), uVar16 = (uint)bVar3, uVar6 != 0)) {
        func_0x000144da8e30(lVar11,uVar6,*(undefined8 *)(lVar13 + (ulonglong)bVar3 * 0x10));
        func_0x000144da8e20(lVar11,uVar6,0);
        *(undefined2 *)(lVar11 + 0x70c0 + (ulonglong)(uVar6 >> 2) * 2) = 0;
        lVar13 = param_1[6];
        uVar16 = (uint)pbVar18[lVar23 + 1];
      }
      lVar23 = lVar23 + 1;
      *(ulonglong *)(lVar13 + 8 + (ulonglong)(uVar16 << 4)) = (ulonglong)_DAT_14a9437ac;
    } while ((uint)bVar2 != (uint)lVar23);
  }
  return;
}

