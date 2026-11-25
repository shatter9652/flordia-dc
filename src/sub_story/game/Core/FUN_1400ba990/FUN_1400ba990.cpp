// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400ba990  size: 747 bytes
// Name:    FUN_1400ba990
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_141b0f0f0, FUN_1456a4ca0, FUN_144f43e00, FUN_141922710, FUN_140004b40, FUN_1458580a0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1400ba990(undefined1 (*param_1) [16],uint param_2,longlong param_3,ulonglong param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined1 auVar5 [16];
  int iVar6;
  uint uVar7;
  undefined1 (*pauVar8) [16];
  ulonglong uVar9;
  ulonglong *puVar10;
  undefined1 *puVar11;
  undefined8 uVar12;
  undefined4 uVar13;
  ulonglong uVar14;
  longlong lVar15;
  uint *puVar16;
  ulonglong uStack_48;
  
  uStack_48 = param_4;
  FUN_140004b40(0x148f05de8);
  lVar3 = *(longlong *)(param_3 + 8);
  if ((ulonglong)_DAT_148f05dd8 != 0) {
    pauVar8 = *(undefined1 (**) [16])
               (_DAT_148f05dd0 +
               (((longlong)*(int *)(*param_1 + 4) | (ulonglong)*(uint *)*param_1 << 0x20) %
               (ulonglong)_DAT_148f05dd8) * 8);
    if (pauVar8 != (undefined1 (*) [16])0x0) {
      do {
        auVar5 = vcmpps_avx(*param_1,*pauVar8,0);
        uVar13 = vmovmskps_avx(auVar5);
        if ((~(byte)uVar13 & 3) == 0) goto LAB_1400baa0f;
        pauVar8 = *(undefined1 (**) [16])(pauVar8[5] + 8);
      } while (pauVar8 != (undefined1 (*) [16])0x0);
    }
  }
  puVar11 = (undefined1 *)FUN_144f43e00(param_1);
  *puVar11 = 0;
  *(undefined8 *)(puVar11 + 8) = 0;
  puVar16 = (uint *)(puVar11 + 0x18);
  uVar7 = *(uint *)(puVar11 + 0x18);
  if (uVar7 != 0) {
    uVar9 = 0;
    do {
      lVar15 = *(longlong *)(*(longlong *)(puVar11 + 0x10) + uVar9 * 8);
      if (lVar15 != 0) {
        do {
          lVar15 = *(longlong *)(lVar15 + 0x10);
          func_0x000144d9c130();
        } while (lVar15 != 0);
        uVar7 = *puVar16;
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < uVar7);
  }
  if (*(longlong *)(puVar11 + 0x10) != 0) {
    func_0x000144d9c130();
  }
  *(undefined4 *)(puVar11 + 0x20) = 0;
  puVar16[0] = 0;
  puVar16[1] = 0;
  uVar12 = func_0x000144f97130(0);
  *(undefined8 *)(puVar11 + 0x10) = uVar12;
  puVar11[0x27] = 0;
  *(undefined8 *)(puVar11 + 0x28) = 0;
  uVar7 = *(uint *)(puVar11 + 0x38);
  puVar16 = (uint *)(puVar11 + 0x38);
  if (uVar7 != 0) {
    uVar9 = 0;
    do {
      lVar15 = *(longlong *)(*(longlong *)(puVar11 + 0x30) + uVar9 * 8);
      if (lVar15 != 0) {
        do {
          lVar15 = *(longlong *)(lVar15 + 0x10);
          func_0x000144d9c130();
        } while (lVar15 != 0);
        uVar7 = *puVar16;
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < uVar7);
  }
  if (*(longlong *)(puVar11 + 0x30) != 0) {
    func_0x000144d9c130();
  }
  *(undefined4 *)(puVar11 + 0x40) = 0;
  puVar16[0] = 0;
  puVar16[1] = 0;
  uVar12 = func_0x000144f97130(0);
  *(undefined8 *)(puVar11 + 0x30) = uVar12;
  puVar11[0x47] = 0;
LAB_1400baa0f:
  uVar9 = FUN_144f43e00(param_1);
  plVar2 = (longlong *)(uVar9 + 8 + (ulonglong)((param_2 & 0xff) << 5));
  lVar15 = *plVar2;
  if (lVar15 == param_3) {
    uVar14 = (ulonglong)*(uint *)(plVar2 + 2);
    plVar1 = plVar2 + 1;
    uVar9 = param_4;
    if (*(uint *)(plVar2 + 2) == 0) {
      FUN_141922710(plVar1);
      uVar14 = (ulonglong)*(uint *)(plVar2 + 2);
    }
    else {
      for (puVar10 = *(ulonglong **)(*plVar1 + ((param_4 & 0xffffffff) % uVar14) * 8);
          puVar10 != (ulonglong *)0x0; puVar10 = (ulonglong *)puVar10[2]) {
        if (*puVar10 == param_4) goto LAB_1400baae4;
      }
    }
    iVar6 = (int)plVar2[3] + 1;
    *(int *)(plVar2 + 3) = iVar6;
    if ((iVar6 == (int)uVar14) && (*(char *)((longlong)plVar2 + 0x1f) != '\0')) {
      func_0x0001400f6200();
      FUN_141b0f0f0(plVar1);
      uVar14 = (ulonglong)*(uint *)(plVar2 + 2);
    }
    uVar14 = (param_4 & 0xffffffff) % uVar14;
    lVar3 = *plVar1;
    uVar4 = *(ulonglong *)(lVar3 + uVar14 * 8);
    puVar10 = (ulonglong *)func_0x000144f97130(0x18);
    if (puVar10 != (ulonglong *)0x0) {
      *puVar10 = param_4;
      *(undefined1 *)(puVar10 + 1) = 0;
      puVar10[2] = uVar4;
    }
    *(ulonglong **)(lVar3 + uVar14 * 8) = puVar10;
    *(undefined1 *)(*(longlong *)(*plVar1 + uVar14 * 8) + 8) = 1;
  }
  else {
    if ((lVar15 != 0) &&
       ((uint)*(ushort *)(lVar3 + 0x3a) * (uint)*(ushort *)(lVar3 + 0x38) <=
        (uint)*(ushort *)(*(longlong *)(lVar15 + 8) + 0x3a) *
        (uint)*(ushort *)(*(longlong *)(lVar15 + 8) + 0x38))) {
      uVar9 = 0;
      goto LAB_1400baae7;
    }
    *plVar2 = param_3;
    FUN_1458580a0(plVar2 + 1);
    FUN_1456a4ca0(plVar2 + 1,&uStack_48);
    func_0x0001456a4c90(uVar9,param_2);
  }
LAB_1400baae4:
  uVar9 = CONCAT71((int7)(uVar9 >> 8),1);
LAB_1400baae7:
  func_0x000144d9dab0(0x148f05de8);
  return uVar9 & 0xffffffff;
}

