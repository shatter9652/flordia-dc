// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140075480  size: 1416 bytes
// Name:    FUN_140075480
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_142477fe0, FUN_144e6cf90
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140075480(longlong *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  byte bVar5;
  uint uVar6;
  undefined4 uVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  uint *puVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined8 *puVar15;
  undefined1 auVar16 [16];
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  uint uStack_94;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  int iStack_80;
  int iStack_7c;
  ulonglong uStack_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined5 uStack_68;
  undefined7 uStack_63;
  undefined4 uStack_5c;
  undefined1 auStack_58 [12];
  undefined1 uStack_4c;
  
  uVar6 = *(uint *)(param_1 + 2);
  if ((uVar6 >> 0x1c & 1) == 0) {
    lVar8 = (ulonglong)((uVar6 & 0x3ffffff) * 0x30) +
            ((ulonglong)(uVar6 & 0x3ffffff) * 0x38 + 0xf & 0xfffffffffffffff0);
  }
  else {
    lVar8 = 0;
  }
  if (SBORROW4(0,uVar6 & 0x90000000)) {
    uVar11 = (ulonglong)_DAT_1475a4824;
    uVar6 = 0;
    puVar10 = (undefined8 *)param_1[4];
    lVar2 = *(longlong *)(uVar11 * 8 + 0x1475a4810);
    uVar9 = lVar8 + 0x40 + lVar2;
    uVar13 = 0x1a8000;
    if (DAT_1475a4820 == '\0') {
      uVar13 = 0;
    }
    if (puVar10 == (undefined8 *)0x0) {
      if (uVar13 < uVar9) goto LAB_14007551e;
      puVar10 = (undefined8 *)(lVar2 + *(longlong *)(uVar11 * 8 + 0x1475a4800));
    }
    else if (uVar13 < uVar9) goto LAB_14007554f;
    uVar6 = 0x80000000;
    *(ulonglong *)(uVar11 * 8 + 0x1475a4810) = uVar9;
  }
  else {
    puVar10 = (undefined8 *)param_1[4];
    uVar6 = 0;
    if (puVar10 == (undefined8 *)0x0) {
LAB_14007551e:
      puVar10 = (undefined8 *)func_0x000144d9c140(0x10,lVar8 + 0x40);
      uVar6 = 0;
    }
  }
LAB_14007554f:
  func_0x000145f40580(puVar10,0);
  param_1[5] = 0;
  puVar10[4] = 0;
  puVar18 = puVar10 + 5;
  *(uint *)(puVar10 + 5) = (uint)((*(uint *)(param_1 + 2) >> 0x1c & 1) == 0);
  *(undefined4 *)((longlong)puVar10 + 0x2c) = 0;
  *(undefined4 *)((longlong)puVar10 + 0x34) = 0;
  *(uint *)(puVar10 + 3) = *(uint *)(puVar10 + 3) & 0x7fffffff | uVar6;
  puVar17 = puVar10;
  if ((*(uint *)(param_1 + 2) >> 0x1c & 1) == 0) {
    *(uint *)(puVar10 + 6) = *(uint *)(param_1 + 2) & 0x3ffffff;
    uVar6 = *(uint *)(param_1 + 2) >> 0x1d & 1 |
            *(uint *)(&UNK_1461e0748 + (ulonglong)(*(uint *)(param_1 + 2) >> 0x1a & 3) * 4);
    *(uint *)((longlong)puVar10 + 0x2c) = uVar6;
    if ((*(byte *)((longlong)param_1 + 0x13) & 0x40) != 0) {
      puStack_88 = &uStack_c8;
      *(uint *)((longlong)puVar10 + 0x2c) = uVar6 | 2;
      iStack_80 = 8;
      iStack_7c = 0;
      uStack_78 = 0;
      uStack_70 = 0;
      uStack_c8 = 0;
      uStack_6c = 0;
      uStack_68 = 0;
      lVar8 = FUN_142477fe0(_DAT_1475e7630,&UNK_1461e0702);
      param_1[5] = lVar8;
      puVar10[4] = lVar8;
    }
    puVar15 = puVar10 + 8;
    puVar10[7] = puVar15;
    if ((*(uint *)(param_1 + 2) & 0x3ffffff) != 0) {
      lVar8 = 0;
      uVar13 = 0;
      uVar9 = (longlong)puVar10 + ((ulonglong)*(uint *)(param_1 + 2) & 0x3ffffff) * 0x38 + 0x4f &
              0xfffffffffffffff0;
      do {
        *(uint *)((longlong)puVar15 + 4) = *(uint *)(*param_1 + lVar8) >> 1 & 1;
        if ((*(byte *)(*param_1 + lVar8) & 1) == 0) {
          *(undefined4 *)puVar15 = 1;
          lVar2 = *param_1;
          puVar15[1] = (ulonglong)*(uint *)(lVar2 + 0x10 + lVar8);
          puVar15[2] = *(undefined8 *)(lVar2 + 8 + lVar8);
          puVar15[3] = (ulonglong)*(uint *)(lVar2 + 0x14 + lVar8);
        }
        else {
          *(undefined4 *)puVar15 = 0;
          lVar2 = *param_1;
          if (*(longlong *)(lVar2 + 0x28 + lVar8) == 0) {
            puVar15[1] = 0;
          }
          else {
            puVar15[1] = uVar9;
            func_0x0001455ace30(uVar9);
            uVar9 = uVar9 + 0x30;
          }
          bVar5 = *(byte *)(lVar2 + 0x19 + lVar8);
          if (bVar5 == 0x35) {
            bVar5 = 0x39;
          }
          *(uint *)(puVar15 + 2) = (uint)bVar5;
          puVar15[6] = (ulonglong)
                       ((*(byte *)(*param_1 + lVar8) >> 2 & 1) << 0xf |
                       *(ushort *)(lVar2 + 0x1a + lVar8) & 0x7fff);
          *(uint *)((longlong)puVar15 + 0x14) = (uint)*(byte *)(lVar2 + 0x18 + lVar8);
          auVar16._8_8_ = 0;
          auVar16._0_8_ = *(ulonglong *)(lVar2 + 0x1c + lVar8);
          auVar16 = vshufps_avx(auVar16,auVar16,0xe1);
          uVar1 = vmovlps_avx(auVar16);
          puVar15[3] = uVar1;
          uVar11 = *(ulonglong *)(lVar2 + 0x10 + lVar8);
          if ((_DAT_149e1dac0 <= uVar11) && (uVar11 < _DAT_149e1dac0 + _DAT_149e1dac8)) {
            uVar11 = (uVar11 - _DAT_149e1dac0) + _DAT_149e1dad0;
          }
          puVar15[4] = uVar11;
          uVar11 = (ulonglong)*(uint *)(lVar2 + 0x24 + lVar8) + *(longlong *)(lVar2 + 8 + lVar8);
          if ((_DAT_149e1dac0 <= uVar11) && (uVar11 < _DAT_149e1dac0 + _DAT_149e1dac8)) {
            uVar11 = (uVar11 - _DAT_149e1dac0) + _DAT_149e1dad0;
          }
          puVar15[5] = uVar11;
        }
        uVar13 = uVar13 + 1;
        lVar8 = lVar8 + 0x30;
        puVar15 = puVar15 + 7;
      } while (uVar13 < (*(uint *)(param_1 + 2) & 0x3ffffff));
    }
    goto LAB_140075936;
  }
  _Set64BitMortonCodes_XboxBvhBuilder__QEAAX_N_Z(_DAT_1475df0a8,1);
  uStack_78 = SUB128(ZEXT812(0),4);
  uStack_70 = 0;
  puStack_88 = (undefined8 *)0x0;
  iStack_80 = 0;
  iStack_7c = 0;
  uStack_68 = 0;
  uStack_63 = SUB127(ZEXT812(0),5);
  uStack_5c = 0;
  auStack_58._8_4_ = 0;
  auStack_58._0_8_ = uStack_78;
  uStack_4c = 1;
  plVar3 = (longlong *)param_1[1];
  cVar4 = func_0x000144db7900(plVar3);
  puVar15 = puStack_88;
  if (cVar4 == '\0') {
    *(undefined4 *)(puVar10 + 6) = 0;
    uVar7 = 8;
    switch(*(uint *)(param_1 + 2) >> 0x1a & 3) {
    case 1:
      goto code_r0x00014007592a;
    case 2:
      goto code_r0x00014007592e;
    case 3:
      goto LAB_140075936;
    }
  }
  else {
    lVar8 = *plVar3;
    iStack_80 = (*(ushort *)(lVar8 + 0xc) & 0xfff) * *(int *)(lVar8 + 8);
    uVar6 = *(uint *)(param_1 + 2);
    iStack_7c = iStack_80;
    if ((uVar6 & 0x3ffffff) == 0) {
      uVar7 = 0;
      puVar10 = puVar17;
    }
    else {
      lVar8 = 0;
      uVar9 = 0;
      uVar13 = 0;
      do {
        uStack_a8 = 0;
        uStack_a0 = 0;
        uStack_c8 = 0;
        uStack_c0 = 0;
        uStack_b8 = 0;
        uStack_b0 = 0;
        lVar2 = *param_1;
        uVar11 = *(ulonglong *)(lVar2 + 0x48 + lVar8);
        uVar14 = uVar13;
        if ((uVar11 >> 0x18 & param_1[3] & 0x7ffffffff) != 0) {
          func_0x0001455ace30(&uStack_c8,lVar2 + lVar8);
          uStack_98 = *(undefined4 *)(lVar2 + 0x40 + lVar8);
          bVar5 = func_0x0001455aceb0(uVar11 >> 0x3b);
          uStack_94 = (uint)bVar5 << 0x18 | (uint)uVar11 & 0xffffff;
          uStack_90 = *(undefined8 *)(lVar2 + 0x50 + lVar8);
          uVar14 = (ulonglong)((int)uVar13 + 1);
          puVar10 = puVar15 + uVar13 * 8;
          *puVar10 = uStack_c8;
          puVar10[1] = uStack_c0;
          puVar10[2] = uStack_b8;
          puVar10[3] = uStack_b0;
          puVar10 = puVar15 + uVar13 * 8 + 4;
          *puVar10 = uStack_a8;
          puVar10[1] = uStack_a0;
          puVar10[2] = CONCAT44(uStack_94,uStack_98);
          puVar10[3] = uStack_90;
          uVar6 = *(uint *)(param_1 + 2);
        }
        uVar7 = (undefined4)uVar14;
        uVar9 = uVar9 + 1;
        lVar8 = lVar8 + 0x60;
        uVar13 = uVar14;
        puVar10 = puVar17;
      } while (uVar9 < (uVar6 & 0x3ffffff));
    }
    func_0x000144e8abd0(&puStack_88);
    lVar8 = param_1[1];
    uVar6 = FUN_144e6cf90(lVar8);
    puVar10[7] = *(undefined8 *)(*(longlong *)(lVar8 + (ulonglong)uVar6 * 8) + 0x38);
    *(undefined4 *)(puVar10 + 6) = uVar7;
    uVar7 = 8;
    puVar17 = puVar10;
    switch(*(uint *)(param_1 + 2) >> 0x1a & 3) {
    case 1:
code_r0x00014007592a:
      uVar7 = 0;
      break;
    case 2:
code_r0x00014007592e:
      uVar7 = 4;
      break;
    case 3:
      goto LAB_140075936;
    }
  }
  *(undefined4 *)((longlong)puVar10 + 0x2c) = uVar7;
LAB_140075936:
  puStack_88 = (undefined8 *)0x0;
  iStack_80 = 0;
  iStack_7c = 0;
  uStack_78 = 0;
  _GetRaytracingAccelerationStructurePrebuildInfo_XboxBvhBuilder__QEAAXPEBUD3D12_BUILD_RAYTRACING_ACCELERATION_STRUCTURE_INPUTS__PEBUD3D12XBOX_XDXR_STREAM_DESC__PEAUD3D12_RAYTRACING_ACCELERATION_STRUCTURE_PREBUILD_INFO___Z
            (_DAT_1475df0a8,puVar18,0,&puStack_88,puVar17,puVar18);
  *puVar17 = puStack_88;
  puVar17[1] = CONCAT44(iStack_7c,iStack_80);
  *(uint *)(puVar17 + 3) = *(uint *)(puVar17 + 3) & 0x80000000 | *(uint *)(puVar17 + 6) & 0x7fffffff
  ;
  uVar13 = 0;
  if ((*(uint *)(param_1 + 2) >> 0x1d & 1) != 0) {
    uVar13 = uStack_78;
  }
  puVar17[2] = uVar13;
  uVar6 = *(uint *)(param_1 + 2);
  if ((uVar6 >> 0x1c & 1) == 0) {
    if ((uVar6 & 0x3ffffff) != 0) {
      puVar12 = (uint *)(puVar17 + 10);
      lVar8 = 0;
      uVar13 = 0;
      do {
        if ((*(byte *)(*param_1 + lVar8) & 1) != 0) {
          *puVar12 = (uint)*(byte *)(*param_1 + 0x19 + lVar8);
          uVar6 = *(uint *)(param_1 + 2);
        }
        uVar13 = uVar13 + 1;
        puVar12 = puVar12 + 0xe;
        lVar8 = lVar8 + 0x30;
      } while (uVar13 < (uVar6 & 0x3ffffff));
    }
  }
  else {
    _Set64BitMortonCodes_XboxBvhBuilder__QEAAX_N_Z(_DAT_1475df0a8,0);
  }
  return puVar17;
}

