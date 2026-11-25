// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400bc280  size: 798 bytes
// Name:    FUN_1400bc280
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_143f0b3a0, FUN_143f0b440
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400bc280(longlong param_1,uint param_2)

{
  longlong *plVar1;
  short *psVar2;
  short sVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  ushort uVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 *puVar12;
  ulonglong uVar13;
  longlong unaff_GS_OFFSET;
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [8];
  undefined2 uStack_60;
  byte bStack_5e;
  undefined8 *puStack_58;
  longlong lStack_48;
  
  lVar11 = *(longlong *)(param_1 + 0x3828);
  uVar9 = param_2 & 0xffff;
  FUN_143f0b3a0();
  puVar12 = (undefined1 *)
            ((ulonglong)*(ushort *)(lVar11 + (ulonglong)uVar9 * 0x14) * 2000 +
            *(longlong *)(param_1 + 0x428));
  auStack_78._0_12_ = ZEXT412(1) << 0x40;
  auStack_78._12_4_ = 0;
  uStack_60 = 0;
  bStack_5e = 1;
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    func_0x0001455db994();
  }
  lVar5 = **(longlong **)(unaff_GS_OFFSET + 0x58);
  puVar6 = *(undefined8 **)(lVar5 + 0xfe0);
  if (puVar6 != (undefined8 *)0x0) {
    auStack_78._0_8_ = *puVar6;
    if (puVar6 != (undefined8 *)auStack_78) {
      auStack_78._12_4_ = 0;
      uVar4 = *(uint *)((longlong)puVar6 + 0xc);
      if ((ulonglong)uVar4 != 0) {
        if (uVar4 != 1) {
          auStack_78._8_4_ = uVar4;
          auStack_78._12_4_ = 0;
        }
        func_0x000145f40560(auStack_68,puVar6 + 2,(ulonglong)uVar4 << 3);
        auStack_78._12_4_ = uVar4;
      }
    }
    bStack_5e = *(undefined1 *)((longlong)puVar6 + 0x1a);
    param_2 = param_2 & 0xffff;
    uStack_60 = 0;
  }
  psVar2 = (short *)(lVar11 + (ulonglong)uVar9 * 0x14);
  plVar1 = (longlong *)(lVar5 + 0xfe0);
  puStack_58 = puVar6;
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    func_0x0001455db994();
  }
  *plVar1 = (longlong)auStack_78;
  bStack_5e = (byte)puVar12[0x7ca] >> 4 & 1;
  uVar13 = (ulonglong)((uint)(ushort)psVar2[1] * 0x30);
  uVar9 = *(uint *)(*(longlong *)(param_1 + 0x3868) + uVar13);
  plVar7 = *(longlong **)((ulonglong)(uVar9 >> 0x11 & 0x1f) * 8 + 0x14abbe7c0);
  if (plVar7 == (longlong *)0x0) {
    lVar11 = 0;
  }
  else {
    uVar4 = *(uint *)(plVar7[5] + (ulonglong)(uVar9 & 0x1ffff) * 4);
    lVar11 = 0;
    if (uVar9 >> 0x16 == (uVar4 >> 0x11 & 0x3ff) &&
        (uVar4 & *(uint *)(plVar7 + 6)) == *(uint *)(plVar7 + 6)) {
      lVar11 = (ulonglong)((uVar9 & 0x1ffff) * (int)plVar7[1]) + *plVar7;
    }
  }
  lVar5 = *(longlong *)(param_1 + 0x18);
  if (*(short *)(puVar12 + 2) < 0) {
    lVar10 = 0;
  }
  else {
    lVar10 = (ulonglong)(uint)(int)(short)*(undefined4 *)(puVar12 + 2) * 0x150 +
             *(longlong *)
              (*(longlong *)(lVar5 + 0x40) + 0x10 +
              (ulonglong)(uint)(int)(char)((uint)*(undefined4 *)(puVar12 + 2) >> 0x10) * 0x48);
  }
  switch(*puVar12) {
  case 0:
    (**(code **)(lVar10 + 0x30))(lVar11);
    break;
  case 1:
    (**(code **)(lVar10 + 0x18))(lVar11);
    break;
  case 2:
    (**(code **)(lVar10 + 0x38))(lVar11);
    break;
  case 3:
    (**(code **)(lVar10 + 0x40))(lVar11);
    break;
  case 4:
    (**(code **)(lVar10 + 0x20))(lVar11);
    break;
  case 5:
    (**(code **)(lVar10 + 0x48))(lVar11);
    break;
  case 6:
    lVar10 = *(longlong *)(param_1 + 0x3868) + uVar13;
    uVar8 = *(ushort *)(lVar10 + 10);
    uVar13 = (ulonglong)*(ushort *)(lVar10 + 8);
    if (*(ushort *)(lVar10 + 8) < uVar8) {
      sVar3 = *psVar2;
      do {
        if (*(short *)(*(longlong *)(param_1 + 0x3838) + uVar13 * 4) == sVar3) {
          (**(code **)(*(longlong *)(lVar5 + 0x20) + 8 +
                      (ulonglong)*(ushort *)(*(longlong *)(param_1 + 0x3838) + 2 + uVar13 * 4) *
                      0x20))(lVar11);
          uVar8 = *(ushort *)(lVar10 + 10);
        }
        uVar13 = uVar13 + 1;
      } while (uVar13 < uVar8);
    }
    break;
  case 7:
    if (*(ushort *)(puVar12 + 6) != 0xffff) {
      lStack_48 = lVar11;
      (**(code **)(*(longlong *)(lVar5 + 0x10) + 8 + (ulonglong)*(ushort *)(puVar12 + 6) * 0x20))();
    }
  }
  bStack_5e = 1;
  FUN_143f0b440(param_1,param_2);
  puVar6 = puStack_58;
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    func_0x0001455db994();
  }
  *plVar1 = (longlong)puVar6;
  return;
}

