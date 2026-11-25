// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14007ab50  size: 124 bytes
// Name:    FUN_14007ab50
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1450267e0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14007ab50(longlong *param_1,ulonglong param_2)

{
  longlong *plVar1;
  char cVar2;
  short sVar3;
  undefined2 uVar4;
  ushort uVar5;
  uint uVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 uVar9;
  byte bVar10;
  uint uVar11;
  ushort uVar12;
  uint *puVar13;
  uint *puVar14;
  undefined1 auVar15 [16];
  uint uStack_34;
  undefined *puStack_30;
  
  *(undefined4 *)(param_1 + 0x1a) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x104) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10c) = 0;
  *(byte *)((longlong)param_1 + 0x117) = *(byte *)((longlong)param_1 + 0x117) & 0xcf;
  if (((short)param_1[0xd] != -1) && (*(short *)((longlong)param_1 + 0x6a) != -1)) {
    param_2 = param_2 & 0xffffffff;
    FUN_1450267e0(param_1 + 0xd);
  }
  func_0x000144deca10(param_1 + 0xd,param_2);
  if (((short)param_1[0xd] == -1) || (*(short *)((longlong)param_1 + 0x6a) == -1)) {
    return;
  }
  plVar1 = param_1 + 0xd;
  cVar2 = FUN_144f13010((short)param_1[0xd],*(undefined2 *)((longlong)param_1 + 0x6a));
  if (cVar2 != '\0') {
code_r0x000144f12eff:
    if ((short)*plVar1 != -1) {
      puStack_30 = &UNK_1450267f5;
      func_0x000145026810();
      *(short *)plVar1 = -1;
    }
    *(undefined2 *)((longlong)param_1 + 0x6a) = 0xffff;
    return;
  }
  lVar7 = FUN_144f13090(plVar1);
  param_1[0xe] = lVar7;
  if (lVar7 == 0) goto code_r0x000144f12eff;
  *(undefined2 *)(param_1 + 0x15) = *(undefined2 *)(lVar7 + 0x1a);
  *(float *)((longlong)param_1 + 0xec) = (float)(int)*(short *)(lVar7 + 10) * _DAT_146159ef4;
  uVar12 = (ushort)(byte)(*(char *)(lVar7 + 0x1d) + (*(char *)(lVar7 + 0x1d) == '\0'));
  *(ushort *)(param_1 + 0xf) = uVar12;
  uVar5 = *(ushort *)(lVar7 + 8);
  bVar10 = *(byte *)(lVar7 + 0x1c);
  if (bVar10 == 8) {
    uVar5 = uVar5 / uVar12;
  }
  auVar15._4_4_ = _DAT_145fc6ed8;
  auVar15._0_4_ = _DAT_145fc6ed8;
  auVar15._8_4_ = _DAT_145fc6ed8;
  auVar15._12_4_ = _DAT_145fc6ed8;
  *(ushort *)((longlong)param_1 + 0xbc) = uVar5;
  uVar11 = bVar10 & 0xf;
  uVar9 = vmovlps_avx(auVar15);
  *(undefined8 *)((longlong)param_1 + 0xb4) = uVar9;
  uVar6 = *(uint *)((longlong)param_1 + 0x114) & 0xffe1ffff | uVar11 << 0x11;
  *(uint *)((longlong)param_1 + 0x114) = uVar6;
  bVar10 = (byte)uVar11;
  if (0xb < bVar10) {
    *(uint *)((longlong)param_1 + 0x114) = uVar6 | 0x1000000;
    return;
  }
  if (bVar10 != 0) {
    *(uint *)((longlong)param_1 + 0x114) = uVar6 | 0x2000000;
  }
  sVar3 = FUN_144f12fd0(param_1);
  puVar13 = (uint *)0x0;
  if (sVar3 != -1) {
    puVar13 = (uint *)((longlong)sVar3 * 0x10 + 0x149aed9d8);
  }
  puVar13[1] = 0;
  uVar6 = CONCAT22(*(undefined2 *)((longlong)puVar13 + 0xe),uVar5);
  puVar13[3] = uVar6;
  puVar13[3] = uVar6 & 0xfffcffff | (*(ushort *)(param_1 + 0xf) & 3) << 0x10;
  *(undefined2 *)((longlong)puVar13 + 10) = 0;
  plVar8 = (longlong *)func_0x000144f131b0((short)param_1[0xd]);
  if (*(code **)(*plVar8 + 0x10) == (code *)&UNK_14503f490) {
    uVar6 = *(uint *)((longlong)param_1 + 0x114);
code_r0x000144f12d55:
    *(uint *)((longlong)param_1 + 0x114) = uVar6 & 0xf7ffffff;
    uVar6 = (uint)(*(int *)(param_1[0xe] + 4) != -1);
    puVar13[3] = puVar13[3] & 0xfffbffff | uVar6 << 0x12;
    *(uint *)((longlong)param_1 + 0x114) =
         *(uint *)((longlong)param_1 + 0x114) & 0xfbffffff | uVar6 << 0x1a;
    *(uint *)((longlong)param_1 + 0xe4) =
         (uint)*(ushort *)(param_1 + 0xf) * *(int *)(param_1[0xe] + 4);
    lVar7 = func_0x000144f12fc0(plVar1,param_1 + 0x1c);
    param_1[0x10] = lVar7;
  }
  else {
    cVar2 = (**(code **)(*plVar8 + 0x10))(plVar8);
    uVar6 = *(uint *)((longlong)param_1 + 0x114);
    if (cVar2 == '\0') goto code_r0x000144f12d55;
    *(uint *)((longlong)param_1 + 0x114) = uVar6 | 0x8000000;
    uVar9 = func_0x000144f131b0((short)param_1[0xd]);
    uVar4 = FUN_14008ea70(uVar9,(int)*(short *)((longlong)param_1 + 0x6a));
    *(undefined2 *)((longlong)param_1 + 0xbe) = uVar4;
    *(undefined4 *)((longlong)param_1 + 0xe4) = 0;
  }
  puVar14 = (uint *)param_1[0xe];
  uVar6 = *(uint *)((longlong)param_1 + 0x114);
  uVar11 = *puVar14;
  if ((uVar6 >> 0x1b & 1) != 0) goto code_r0x000144f12e0f;
  if (*(code **)(*param_1 + 0x80) == FUN_144f13050) {
    cVar2 = FUN_144f13050(param_1);
    if (cVar2 != '\0') {
code_r0x000144f12f8d:
      if ((uVar6 & 0x1e0000) == 0xa0000) {
        uVar5 = *(ushort *)(param_1[0xe] + 0x12);
        uVar11 = (uint)uVar5 * 0x80 - 1;
        if (uVar5 == 0) {
          uVar11 = (uint)uVar5;
        }
      }
      goto code_r0x000144f12e0f;
    }
  }
  else {
    cVar2 = (**(code **)(*param_1 + 0x80))(param_1);
    if (cVar2 != '\0') {
      uVar6 = *(uint *)((longlong)param_1 + 0x114);
      goto code_r0x000144f12f8d;
    }
    puVar14 = (uint *)param_1[0xe];
  }
  uVar11 = (uint)*(ushort *)(param_1 + 0xf) * (puVar14[3] - (uint)(ushort)puVar14[4]);
code_r0x000144f12e0f:
  *puVar13 = uVar11;
  *(uint *)((longlong)param_1 + 0xdc) = uVar11;
  *(uint *)(param_1 + 0x1b) = uVar11;
  if (((*(int *)((longlong)param_1 + 0xe4) < 1) ||
      (cVar2 = (**(code **)(*param_1 + 0x80))(param_1), cVar2 == '\0')) ||
     (*(uint *)((longlong)param_1 + 0xe4) <= *(uint *)((longlong)param_1 + 0xdc))) {
    uStack_34 = 0;
    lVar7 = FUN_144f13100(plVar1,0x8b946236,&uStack_34);
    param_1[0x13] = lVar7;
    *(uint *)(param_1 + 0x14) = uStack_34 >> 1;
    if ((*(uint *)((longlong)param_1 + 0x114) & 0x1e0000) == 0x100000) {
      *(undefined4 *)(param_1 + 0x12) = 0;
      lVar7 = func_0x0001443aa590(plVar1,param_1 + 0x12);
      param_1[0x11] = lVar7;
      if (lVar7 == 0) {
        lVar7 = FUN_1443aa5a0(plVar1,param_1 + 0x12);
        param_1[0x11] = lVar7;
      }
    }
    func_0x000144e38a20(param_1);
  }
  else {
    *(byte *)((longlong)param_1 + 0x117) = *(byte *)((longlong)param_1 + 0x117) | 1;
  }
  return;
}

