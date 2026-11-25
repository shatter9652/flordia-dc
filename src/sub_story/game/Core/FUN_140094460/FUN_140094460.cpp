// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140094460  size: 561 bytes
// Name:    FUN_140094460
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14010e0b0, FUN_14010e250, FUN_144fb3be0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Removing unreachable block (ram,0x000140094625) */
/* WARNING: Removing unreachable block (ram,0x000140094631) */
/* WARNING: Removing unreachable block (ram,0x000140094638) */
/* WARNING: Removing unreachable block (ram,0x000140094647) */
/* WARNING: Removing unreachable block (ram,0x00014009464b) */
/* WARNING: Removing unreachable block (ram,0x000140094660) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140094460(longlong param_1,undefined8 param_2,longlong param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  bool bVar10;
  undefined1 auVar11 [16];
  
  *(int *)(param_1 + -0x160) = *(int *)(param_1 + -0x160) + 1;
  func_0x000144e89d70(param_1 + -0x12300);
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_14010e0b0(param_1);
    uVar3 = *(uint *)(param_1 + 0x98);
    uVar7 = (ulonglong)((uint)*(longlong *)(param_1 + 0x90) & 0x7f);
    uVar9 = (ulonglong)uVar3;
    if (uVar7 < uVar3) {
      uVar9 = uVar7;
    }
    *(ulonglong *)(param_1 + 0x90) = *(longlong *)(param_1 + 0x90) - uVar9;
    *(uint *)(param_1 + 0x98) = uVar3 - (int)uVar9;
    if (*(longlong *)(param_1 + 0x10) == *(longlong *)(param_1 + 0x88)) goto LAB_1400944df;
  }
  *(undefined8 *)(param_1 + 8) = 0;
LAB_1400944df:
  FUN_144fb3be0(param_1);
  iVar6 = *(int *)(param_1 + -0xf8);
  *(undefined8 *)(param_1 + -0x100) = 0;
  *(undefined4 *)(param_1 + -0xf8) = 0;
  lVar5 = *(longlong *)(param_1 + -0x110);
  *(undefined1 *)(lVar5 + 0x10) = 1;
  uVar4 = func_0x0001455ac2f0(param_1 + -0x150);
  *(undefined8 *)(lVar5 + 8) = uVar4;
  FUN_14010e250(_DAT_1475e7088,param_2,*(undefined4 *)(*(longlong *)(param_3 + 0x12198) + 4),
                (ulonglong)*(byte *)(param_3 + 0x12300),lVar5,
                (ulonglong)*(byte *)(param_3 + 0x12300) * 8 + 0x1475df050,
                *(undefined8 *)(param_3 + 0x47160),*(undefined8 *)(param_3 + 0x47168));
  auVar11._0_12_ = ZEXT812(0);
  auVar11._12_4_ = 0;
  *(undefined1 (*) [16])(param_3 + 0x47160) = auVar11;
  lVar5 = func_0x000144e89cf0(param_1 + -0x12300);
  *(longlong *)(param_1 + -0x110) = lVar5;
  *(longlong *)(param_1 + 0x58) = lVar5 + 0x58;
  puVar1 = *(uint **)(param_1 + -0x168);
  if (puVar1 == (uint *)&DAT_1475a4828) {
    uVar3 = _DAT_1475a4828 >> 0x10 & 0xff;
    if (uVar3 == 0) {
      LOCK();
      _DAT_1475a4828 = _DAT_1475a4828 & 0xffff00ff;
      UNLOCK();
    }
    else {
      uVar8 = _DAT_1475a4828 & 0xff;
      if (uVar3 < (_DAT_1475a4828 & 0xff)) {
        uVar8 = uVar3;
      }
      _DAT_1475a4828 = (_DAT_1475a4828 & 0xffff00ff) - (uVar8 << 0x10 | uVar8);
      LOCK();
      UNLOCK();
      LOCK();
      _DAT_149c3d7ec = _DAT_149c3d7ec + uVar8;
      UNLOCK();
    }
  }
  else {
    iVar6 = (*puVar1 >> 8 & 0xff) - iVar6;
    uVar3 = *puVar1;
    do {
      uVar2 = uVar3 >> 0x10 & 0xff;
      uVar8 = (uVar3 & 0xff) - iVar6;
      if (uVar2 < uVar8) {
        uVar8 = uVar2;
      }
      LOCK();
      uVar2 = *puVar1;
      if (uVar3 == uVar2) {
        *puVar1 = ((uVar3 & 0xffff00ff) + iVar6 * 0x100) - (uVar8 << 0x10 | uVar8);
        uVar2 = uVar3;
      }
      UNLOCK();
      bVar10 = uVar3 != uVar2;
      uVar3 = uVar2;
    } while (bVar10);
    LOCK();
    _DAT_149c3d7ec = _DAT_149c3d7ec + uVar8;
    UNLOCK();
  }
  return;
}

