// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140075fa0  size: 403 bytes
// Name:    FUN_140075fa0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145647140, FUN_144fc9dd0, FUN_14011b580
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_140075fa0(longlong param_1,byte param_2,longlong param_3,longlong param_4)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined1 *puVar10;
  undefined1 auVar11 [64];
  undefined8 auStack_e0 [5];
  longlong alStack_b8 [2];
  undefined1 auStack_a8 [12];
  undefined4 uStack_9c;
  undefined1 auStack_98 [12];
  undefined1 uStack_88;
  undefined1 *puStack_78;
  uint uStack_70;
  undefined1 *puStack_68;
  uint uStack_60;
  
  if (((((0x8120UL >> ((ulonglong)param_2 & 0x3f) & 1) == 0) &&
       (uVar8 = (ulonglong)*(byte *)(param_1 + 0xc0 + (ulonglong)DAT_14a95df30), uVar8 != 0xff)) &&
      (lVar2 = *(longlong *)(param_1 + 0x10 + uVar8 * 8), lVar2 != 0)) &&
     (lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0xe0) + (ulonglong)param_2 * 8), lVar2 != 0)) {
    uVar1 = *(uint *)(lVar2 + 4);
    if (((ulonglong)uVar1 != 0) && (lVar3 = *(longlong *)(param_4 + 0x10), lVar3 != 0)) {
      auStack_a8 = ZEXT812(0);
      auVar11 = ZEXT1264(auStack_a8);
      uStack_88 = 0;
      uStack_9c = 0;
      auStack_98._8_4_ = 0;
      auStack_98._0_8_ = auStack_a8._4_8_;
      auStack_e0[2] = 0x140076048;
      func_0x000144f50b70();
      lVar9 = (ulonglong)uVar1 * 0x18;
      alStack_b8[1] = 0x140076065;
      lVar6 = FUN_145647140();
      lVar6 = -lVar6;
      puVar10 = auStack_a8 + lVar6;
      puStack_78 = auStack_a8 + lVar6;
      lVar7 = 0;
      do {
        *(undefined1 (*) [16])(auStack_a8 + lVar7 + lVar6) = auVar11._0_16_;
        *(undefined8 *)(auStack_98 + lVar7 + lVar6) = 0;
        lVar7 = lVar7 + 0x18;
      } while (lVar9 != lVar7);
      uVar4 = *(undefined8 *)(param_4 + 8);
      uVar5 = *(undefined8 *)(param_3 + 8);
      uStack_70 = uVar1;
      *(undefined1 ***)((longlong)alStack_b8 + lVar6) = &puStack_78;
      *(undefined8 *)((longlong)auStack_e0 + lVar6) = 0x1400760ac;
      FUN_144fc9dd0(lVar2,lVar3,uVar5,uVar4);
      puStack_68 = auStack_a8 + lVar6;
      uStack_60 = uVar1;
      *(undefined8 *)(auStack_a8 + lVar6 + -8) = 0;
      *(undefined4 *)((longlong)alStack_b8 + lVar6) = 0x25327820;
      *(undefined8 *)((longlong)auStack_e0 + lVar6) = 0x1400760df;
      FUN_14011b580(lVar2,param_3,auStack_a8);
      do {
        *(undefined8 *)((longlong)auStack_e0 + lVar6 + 0x10) = 0x1400760f0;
        func_0x000144e2aa90(puVar10 + 0x10);
        *(undefined8 *)((longlong)auStack_e0 + lVar6 + 0x10) = 0x140076101;
        func_0x000144e2aa90(puVar10 + 8);
        *(undefined8 *)((longlong)auStack_e0 + lVar6 + 0x10) = 0x140076109;
        func_0x000144e2aa90(puVar10);
        puVar10 = puVar10 + 0x18;
        lVar9 = lVar9 + -0x18;
      } while (lVar9 != 0);
      return 1;
    }
  }
  return 0;
}

