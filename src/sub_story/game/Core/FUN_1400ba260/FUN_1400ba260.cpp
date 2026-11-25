// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400ba260  size: 980 bytes
// Name:    FUN_1400ba260
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1410946d0, FUN_1450dfa40, FUN_1400b7600, FUN_142031db0, FUN_1401d7580, FUN_1452ec500, FUN_1400b6b80
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1400ba260(undefined8 *param_1,longlong param_2,longlong param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  char cVar9;
  int iVar10;
  undefined8 *puVar11;
  longlong lVar12;
  undefined4 *puVar13;
  uint uVar14;
  int iVar15;
  byte bVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [64];
  
  FUN_1400b7600(param_1,param_2,param_3,0x19);
  uVar8 = _UNK_14615e608;
  uVar7 = _DAT_14615e600;
  uVar6 = _UNK_146159d68;
  uVar5 = _DAT_146159d60;
  uVar4 = _DAT_146159bc0;
  uVar3 = _UNK_14614f7f8;
  uVar2 = _DAT_14614f7f0;
  uVar14 = _DAT_145fc6ed8;
  auVar18._0_12_ = ZEXT812(0);
  auVar18._12_4_ = 0;
  *param_1 = &UNK_14646f810;
  param_1[0x28] = 0;
  auVar17 = ZEXT416(uVar14);
  *(undefined1 (*) [16])(param_1 + 0x2a) = auVar17;
  param_1[0x2c] = uVar4;
  param_1[0x2d] = 0;
  param_1[0x2e] = uVar2;
  param_1[0x2f] = uVar3;
  *(undefined1 (*) [16])(param_1 + 0x30) = auVar18;
  *(undefined1 (*) [16])((longlong)param_1 + 0x18c) = auVar18;
  *(undefined4 *)((longlong)param_1 + 0x19c) = 0xffffffff;
  param_1[0x34] = uVar5;
  param_1[0x35] = uVar6;
  param_1[0x36] = uVar5;
  param_1[0x37] = uVar6;
  param_1[0x38] = uVar5;
  param_1[0x39] = uVar6;
  param_1[0x3a] = uVar5;
  param_1[0x3b] = uVar6;
  param_1[0x3c] = uVar5;
  param_1[0x3d] = uVar6;
  param_1[0x3e] = uVar5;
  param_1[0x3f] = uVar6;
  param_1[0x40] = uVar5;
  param_1[0x41] = uVar6;
  param_1[0x42] = uVar5;
  param_1[0x43] = uVar6;
  param_1[0x44] = uVar5;
  param_1[0x45] = uVar6;
  param_1[0x46] = uVar5;
  param_1[0x47] = uVar6;
  param_1[0x48] = uVar5;
  param_1[0x49] = uVar6;
  param_1[0x4a] = uVar5;
  param_1[0x4b] = uVar6;
  param_1[0x4c] = uVar5;
  param_1[0x4d] = uVar6;
  param_1[0x4e] = uVar5;
  param_1[0x4f] = uVar6;
  param_1[0x50] = uVar5;
  param_1[0x51] = uVar6;
  param_1[0x52] = uVar5;
  param_1[0x53] = uVar6;
  param_1[0x54] = uVar5;
  param_1[0x55] = uVar6;
  param_1[0x56] = uVar5;
  param_1[0x57] = uVar6;
  param_1[0x58] = uVar5;
  param_1[0x59] = uVar6;
  param_1[0x5a] = uVar5;
  param_1[0x5b] = uVar6;
  param_1[0x5c] = uVar5;
  param_1[0x5d] = uVar6;
  param_1[0x5e] = uVar5;
  param_1[0x5f] = uVar6;
  param_1[0x60] = uVar5;
  param_1[0x61] = uVar6;
  param_1[0x62] = uVar5;
  param_1[99] = uVar6;
  param_1[100] = uVar5;
  param_1[0x65] = uVar6;
  param_1[0x66] = uVar5;
  param_1[0x67] = uVar6;
  param_1[0x68] = uVar5;
  param_1[0x69] = uVar6;
  param_1[0x6a] = uVar5;
  param_1[0x6b] = uVar6;
  param_1[0x6c] = 0;
  param_1[0x6d] = 0xffffffff00000000;
  *(undefined1 (*) [16])(param_1 + 0x6e) = auVar17;
  param_1[0x70] = uVar4;
  param_1[0x71] = 0;
  param_1[0x72] = uVar2;
  param_1[0x73] = uVar3;
  *(undefined1 (*) [16])((longlong)param_1 + 0x3ac) = auVar18;
  *(undefined1 (*) [16])(param_1 + 0x74) = auVar18;
  *(undefined4 *)((longlong)param_1 + 0x3bc) = 0xffffffff;
  param_1[0x78] = 0;
  param_1[0x79] = uVar7;
  param_1[0x7a] = uVar8;
  param_1[0x7b] = uVar7;
  param_1[0x7c] = uVar8;
  param_1[0x7d] = uVar7;
  param_1[0x7e] = uVar8;
  param_1[0x7f] = uVar7;
  param_1[0x80] = uVar8;
  param_1[0x81] = uVar7;
  param_1[0x82] = uVar8;
  param_1[0x83] = uVar7;
  param_1[0x84] = uVar8;
  param_1[0x85] = uVar7;
  param_1[0x86] = uVar8;
  param_1[0x87] = uVar7;
  param_1[0x88] = uVar8;
  param_1[0x89] = uVar7;
  param_1[0x8a] = uVar8;
  param_1[0x8b] = uVar7;
  param_1[0x8c] = uVar8;
  param_1[0x8d] = uVar7;
  param_1[0x8e] = uVar8;
  param_1[0x8f] = uVar7;
  param_1[0x90] = uVar8;
  param_1[0x91] = uVar7;
  param_1[0x92] = uVar8;
  param_1[0x93] = uVar7;
  param_1[0x94] = uVar8;
  param_1[0x95] = uVar7;
  param_1[0x96] = uVar8;
  param_1[0x97] = uVar7;
  param_1[0x98] = uVar8;
  param_1[0x99] = uVar7;
  param_1[0x9a] = uVar8;
  param_1[0x9b] = uVar7;
  param_1[0x9c] = uVar8;
  param_1[0x9d] = uVar7;
  param_1[0x9e] = uVar8;
  param_1[0x9f] = uVar7;
  param_1[0xa0] = uVar8;
  param_1[0xa1] = uVar7;
  param_1[0xa2] = uVar8;
  param_1[0xa3] = uVar7;
  param_1[0xa4] = uVar8;
  param_1[0xa5] = uVar7;
  param_1[0xa6] = uVar8;
  param_1[0xa7] = uVar7;
  param_1[0xa8] = uVar8;
  param_1[0xa9] = uVar7;
  param_1[0xaa] = uVar8;
  param_1[0xab] = uVar7;
  param_1[0xac] = uVar8;
  param_1[0xad] = uVar7;
  param_1[0xae] = uVar8;
  param_1[0xaf] = uVar7;
  param_1[0xb0] = uVar8;
  *(undefined4 *)(param_1 + 0xb1) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58c) = 0xffffffff;
  *(undefined1 (*) [16])(param_1 + 0xb4) = auVar17;
  param_1[0xb6] = uVar4;
  param_1[0xb7] = 0;
  param_1[0xb8] = uVar2;
  param_1[0xb9] = uVar3;
  *(undefined1 (*) [16])(param_1 + 0xba) = auVar18;
  auVar19 = ZEXT1664(auVar18);
  puVar11 = (undefined8 *)func_0x000144f97130(0x28);
  auVar17 = auVar19._0_16_;
  if (puVar11 != (undefined8 *)0x0) {
    FUN_142031db0(puVar11 + 1);
    auVar17 = auVar19._0_16_;
    *puVar11 = &UNK_1464711c8;
  }
  param_1[0xd4] = puVar11;
  *(undefined1 (*) [16])(param_1 + 0xd5) = auVar17;
  *(undefined8 *)((longlong)param_1 + 0x6bc) = 0xbf800000;
  *(byte *)((longlong)param_1 + 0x6c4) = *(byte *)((longlong)param_1 + 0x6c4) & 0x3f;
  bVar16 = *(byte *)((longlong)param_1 + 0x6c5) & 0xe4;
  *(byte *)((longlong)param_1 + 0x6c5) = bVar16 + 1;
  *(byte *)((longlong)param_1 + 0x123) = *(byte *)((longlong)param_1 + 0x123) | 0x40;
  uVar2 = _DAT_14a958670;
  param_1[0xc3] = _DAT_14a958670;
  param_1[0xc4] = uVar2;
  param_1[0xc5] = uVar2;
  param_1[0xc6] = uVar2;
  param_1[199] = uVar2;
  param_1[200] = uVar2;
  param_1[0xc9] = uVar2;
  param_1[0xca] = uVar2;
  param_1[0xcb] = uVar2;
  param_1[0xcc] = uVar2;
  param_1[0xcd] = uVar2;
  param_1[0xce] = uVar2;
  param_1[0xcf] = uVar2;
  param_1[0xd0] = uVar2;
  param_1[0xd1] = uVar2;
  param_1[0xd2] = uVar2;
  param_1[0xd3] = uVar2;
  if (((param_3 != 0) && (lVar12 = *(longlong *)(param_3 + 0x10), lVar12 != 0)) &&
     (cVar9 = FUN_1401d7580(*(undefined8 *)(lVar12 + 0x10),*(undefined2 *)(lVar12 + 0x18),0x99177ad3
                           ), cVar9 != '\0')) {
    *(byte *)((longlong)param_1 + 0x6c5) = bVar16 | 3;
    FUN_1410946d0(puVar11 + 1,1);
  }
  lVar12 = FUN_1450dfa40(*(undefined4 *)(param_2 + 0x9c));
  if ((lVar12 != 0) && (iVar10 = *(int *)(lVar12 + 0x14), 0 < iVar10)) {
    uVar2 = *(undefined8 *)(lVar12 + 0x18);
    iVar15 = 0;
    do {
      lVar12 = func_0x000145160cb0(iVar10,uVar2,iVar15);
      if ((lVar12 != 0) && (cVar9 = FUN_1452ec500(lVar12), cVar9 != '\0')) {
        *(byte *)((longlong)param_1 + 0x125) = *(byte *)((longlong)param_1 + 0x125) | 0x20;
        pbVar1 = (byte *)(*(longlong *)(param_2 + 0x20) + 0x84);
        *pbVar1 = *pbVar1 | 0x80;
        break;
      }
      iVar15 = iVar15 + 1;
    } while (iVar10 != iVar15);
  }
  cVar9 = FUN_1400b6b80(*(undefined8 *)(param_2 + 0x20));
  *(byte *)((longlong)param_1 + 0x6c5) = *(byte *)((longlong)param_1 + 0x6c5) & 0xfb | cVar9 << 2;
  iVar10 = func_0x0001452ed310();
  if (param_1[0xd5] != 0) {
    func_0x000144d9c130();
  }
  param_1[0xd5] = 0;
  *(int *)((longlong)param_1 + 0x6b4) = iVar10;
  uVar14 = iVar10 + 0x1f >> 5;
  *(uint *)(param_1 + 0xd6) = uVar14;
  if (iVar10 != 0) {
    puVar13 = (undefined4 *)func_0x000144f97130((ulonglong)uVar14 << 2);
    param_1[0xd5] = puVar13;
    if (uVar14 == 1) {
      *puVar13 = 0;
    }
    else {
      func_0x000145f40580(puVar13,0,(ulonglong)uVar14 << 2);
    }
  }
  return param_1;
}

