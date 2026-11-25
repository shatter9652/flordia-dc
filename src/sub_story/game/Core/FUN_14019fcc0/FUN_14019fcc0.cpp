// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14019fcc0  size: 1223 bytes
// Name:    FUN_14019fcc0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1448df820, FUN_145077900, FUN_1401b84f0, FUN_1401b82d0, FUN_144384600, FUN_145077ac0, FUN_1401b8430, FUN_140092ca0, FUN_144e469e0, FUN_1420cb960
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14019fcc0(longlong *param_1,longlong param_2,undefined8 *param_3,longlong param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined1 auVar3 [16];
  bool bVar4;
  char cVar5;
  undefined4 uVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 uVar12;
  longlong lVar13;
  longlong lVar14;
  uint *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  longlong *plVar20;
  bool bVar21;
  uint uVar22;
  undefined1 auVar23 [64];
  undefined1 auVar24 [16];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auVar25 [64];
  
  lVar13 = *param_1;
  lVar8 = (**(code **)(**(longlong **)(param_4 + 0x18) + 0x40))
                    (*(longlong **)(param_4 + 0x18),*(undefined4 *)(param_4 + 100));
  if (lVar8 != 0) {
    lVar14 = *(longlong *)(lVar8 + 8);
    lVar9 = FUN_145077900(lVar13 + 0x18,*(undefined8 *)(param_4 + 0x10));
    lVar10 = (**(code **)(**(longlong **)(*(longlong *)(lVar14 + 0x20) + 0x18) + 200))();
    lVar10 = *(longlong *)(lVar10 + 0x20);
    lVar11 = (**(code **)(**(longlong **)(lVar14 + 0x18) + 200))();
    bVar21 = (lVar9 == *(longlong *)(lVar11 + 0x20) && *(longlong *)(lVar11 + 0x20) != 0) &&
             (lVar9 == lVar10 && lVar10 != 0);
    cVar5 = func_0x0001403e33e0(*(undefined4 *)(param_4 + 0x48));
    bVar4 = bVar21;
    if (cVar5 != '\0') {
      uVar12 = FUN_140092ca0(*(undefined8 *)(lVar13 + 0x2b8),0x275822c4,0);
      lVar10 = FUN_145077ac0(*(undefined4 *)(lVar13 + 0x1c),*(undefined8 *)(lVar13 + 0x20),uVar12);
      lVar13 = (**(code **)(**(longlong **)(lVar14 + 0x20) + 0x58))();
      lVar13 = *(longlong *)(lVar13 + 0x20);
      lVar14 = (**(code **)(**(longlong **)(lVar14 + 0x20) + 0x40))();
      bVar4 = lVar10 == *(longlong *)(lVar14 + 0x20) && (lVar9 == lVar13 || lVar10 == lVar13);
    }
    if (((bool)(bVar21 & bVar4)) &&
       (cVar5 = func_0x000144da4370(*(undefined1 *)(_DAT_14ab7ef10 + 0x232)), cVar5 != '\0')) {
      puVar15 = (uint *)func_0x000144edcb00(param_4);
      auVar23 = ZEXT464(_DAT_145fc6ed8);
      auVar24._0_12_ = ZEXT812(0);
      auVar24._12_4_ = 0;
      auVar25 = ZEXT1664(auVar24);
      auVar3 = vminss_avx(ZEXT416(_DAT_145fc6ed8),ZEXT416(*puVar15));
      auVar24 = vcmpss_avx(ZEXT416(*puVar15),auVar24,1);
      *(uint *)(lVar8 + 0x10) = ~auVar24._0_4_ & auVar3._0_4_;
      func_0x000144df3700(lVar8,puVar15[2]);
      auVar3 = vminss_avx(auVar23._0_16_,ZEXT416(puVar15[1]));
      auVar24 = vcmpss_avx(ZEXT416(puVar15[1]),auVar25._0_16_,1);
      *(uint *)(lVar8 + 0x14) = ~auVar24._0_4_ & auVar3._0_4_;
      lVar13 = *(longlong *)(lVar8 + 8);
      *(undefined4 *)(lVar13 + 0x10) = 0;
      if (*(int *)((longlong)param_3 + 0x24) == 0) {
        uStack_98 = param_3[2];
        uStack_90 = param_3[3];
        uVar12 = (**(code **)(**(longlong **)(*(longlong *)(lVar13 + 0x20) + 0x18) + 0x90))();
        uVar12 = func_0x000144f01ca0(uVar12);
        FUN_144384600(uVar12,&uStack_98);
        uStack_78 = param_3[2];
        uStack_70 = param_3[3];
        uVar12 = (**(code **)(**(longlong **)(lVar13 + 0x18) + 0x90))();
        uVar12 = func_0x000144f01ca0(uVar12);
        FUN_144384600(uVar12,&uStack_78);
      }
      else {
        uStack_98 = *param_3;
        uStack_90 = param_3[1];
        uVar12 = (**(code **)(**(longlong **)(*(longlong *)(lVar13 + 0x20) + 0x18) + 0x90))();
        uVar12 = func_0x000144f01ca0(uVar12);
        FUN_144e469e0(uVar12,&uStack_98);
        uStack_78 = *param_3;
        uStack_70 = param_3[1];
        uVar12 = (**(code **)(**(longlong **)(lVar13 + 0x18) + 0x90))();
        uVar12 = func_0x000144f01ca0(uVar12);
        FUN_144e469e0(uVar12,&uStack_78);
      }
      goto LAB_1401a0057;
    }
  }
  plVar1 = (longlong *)param_1[1];
  lVar13 = *plVar1;
  uVar12 = FUN_145077900(lVar13 + 0x18,*(undefined8 *)(param_4 + 0x10));
  uVar16 = func_0x000145079380(uVar12,param_3);
  uVar17 = func_0x000145079380(uVar12,param_3);
  uVar18 = (**(code **)(**(longlong **)(*(longlong *)(lVar13 + 0x2b0) + 0x18) + 0x40))();
  uVar6 = *(undefined4 *)(param_4 + 0x48);
  cVar5 = func_0x0001403e33e0(uVar6);
  if (cVar5 == '\0') {
    plVar20 = (longlong *)FUN_1401b82d0(uVar12,uVar16,0,0);
  }
  else {
    lVar8 = func_0x000144da1090(uVar18,uVar6,&uStack_98);
    uVar6 = *(undefined4 *)
             ((~((longlong)*(short *)(lVar8 + 0x46) >> 0x3f) &
              ((longlong)*(short *)(lVar8 + 0x46) - (ulonglong)*(ushort *)(lVar8 + 0x48)) * 0x50 +
              lVar8) + 0x1c);
    uVar12 = FUN_140092ca0(*(undefined8 *)(lVar13 + 0x2b8),0x275822c4,0);
    uVar12 = FUN_145077900(lVar13 + 0x18,uVar12);
    uVar19 = FUN_1401b8430(uVar12,uVar6);
    plVar20 = (longlong *)FUN_1401b84f0(uVar12,uVar19,uVar16,uVar19,0,0);
  }
  plVar2 = *(longlong **)(param_4 + 0x18);
  lVar8 = (**(code **)(*plVar2 + 0x38))(plVar2,*(undefined4 *)(param_4 + 100));
  lVar13 = func_0x000144edcb00(param_4);
  func_0x00014212a560(lVar8,lVar13,plVar20,uVar17);
  if (*(int *)(lVar13 + 0xc) == 0) {
    uVar6 = (**(code **)(*plVar20 + 0x28))(plVar20);
    uVar6 = FUN_1420cb960(plVar1[1],uVar18,uVar6);
    lVar13 = func_0x000144da1090(uVar18,uVar6,&uStack_98);
    func_0x0001418363a0(lVar8,*(undefined4 *)(lVar13 + 0x1c));
  }
  func_0x000142d12fc0(lVar8);
  func_0x0001450778b0(lVar8,plVar2,*(undefined4 *)(param_4 + 100));
LAB_1401a0057:
  func_0x000144ed2fd0(lVar8,0xffffffff);
  uVar7 = *(uint *)(param_2 + 0xc);
  if (uVar7 == *(uint *)(param_2 + 8)) {
    uVar22 = 1;
    if (1 < uVar7) {
      uVar22 = uVar7 >> 1;
    }
    lVar13 = func_0x000144d9c140(8,(ulonglong)(uVar22 + uVar7) * 8);
    if ((ulonglong)*(uint *)(param_2 + 0xc) != 0) {
      func_0x000145f40560(lVar13,*(undefined8 *)(param_2 + 0x10),
                          (ulonglong)*(uint *)(param_2 + 0xc) << 3);
    }
    if (*(longlong *)(param_2 + 0x10) != 0) {
      func_0x000144d9c130();
    }
    *(longlong *)(param_2 + 0x10) = lVar13;
    *(uint *)(param_2 + 8) = uVar22 + uVar7;
    uVar7 = *(uint *)(param_2 + 0xc);
  }
  else {
    lVar13 = *(longlong *)(param_2 + 0x10);
  }
  *(uint *)(param_2 + 0xc) = uVar7 + 1;
  *(longlong *)(lVar13 + (ulonglong)uVar7 * 8) = lVar8;
  lVar13 = func_0x000144edcb00(param_4);
  FUN_1448df820(param_2 + 0x418,&uStack_98,lVar13 + 0x1c);
  return;
}

