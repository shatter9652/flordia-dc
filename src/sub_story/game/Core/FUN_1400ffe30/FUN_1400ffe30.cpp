// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400ffe30  size: 510 bytes
// Name:    FUN_1400ffe30
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144fa4520, FUN_140100030, FUN_1400ff690
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400ffe30(longlong *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auVar6 [16];
  byte bVar7;
  longlong lVar8;
  ushort uVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  undefined1 auVar14 [16];
  undefined1 extraout_var [56];
  undefined1 auVar15 [16];
  undefined1 auVar17 [64];
  undefined1 auVar18 [64];
  undefined1 auStack_128 [16];
  undefined1 auStack_118 [64];
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined1 uStack_c8;
  undefined1 auStack_b8 [120];
  undefined1 auVar16 [64];
  
  lVar8 = FUN_140100030();
  if (((lVar8 != 0) && (*(short *)(lVar8 + 0x98) != 0)) &&
     (*(int *)((longlong)param_1 + 0x464) == 0)) {
    bVar7 = (**(code **)(*param_1 + 0x158))(param_1);
    auVar17._0_8_ =
         FUN_144fa4520(param_1,*param_2,(byte)(*(uint *)(param_1 + 0x1b) >> 0xd) & 1 & bVar7);
    auVar17._8_56_ = extraout_var;
    uVar9 = *(ushort *)(lVar8 + 0x98);
    if (uVar9 != 0) {
      auVar15._0_12_ = ZEXT812(0);
      auVar15._12_4_ = 0;
      auVar16 = ZEXT1664(auVar15);
      lVar12 = 0;
      uVar13 = 0;
      auVar15 = vblendps_avx(auVar15,auVar17._0_16_,1);
      auVar17 = ZEXT1664(auVar15);
      do {
        lVar4 = *(longlong *)(lVar8 + 0x90);
        if (*(int *)(lVar4 + lVar12) != 0) {
          auStack_128 = auVar16._0_16_;
          uVar2 = *(uint *)(param_1 + 0xb);
          uVar10 = (ulonglong)uVar2 & 0x1ffff;
          if (((uVar10 == 0x1ffff) ||
              (plVar5 = *(longlong **)((ulonglong)(uVar2 >> 0x11 & 0x1f) * 8 + 0x14abbe7c0),
              plVar5 == (longlong *)0x0)) ||
             (uVar3 = *(uint *)(plVar5[5] + uVar10 * 4),
             uVar2 >> 0x16 != (uVar3 >> 0x11 & 0x3ff) ||
             (uVar3 & *(uint *)(plVar5 + 6)) != *(uint *)(plVar5 + 6))) {
            lVar11 = 0;
          }
          else {
            lVar11 = (ulonglong)(uint)((int)uVar10 * (int)plVar5[1]) + *plVar5;
          }
          FUN_1400ff690(auStack_b8,lVar11,*(int *)(lVar4 + lVar12),auStack_128);
          auVar14._8_8_ = 0;
          auVar14._0_8_ = *(ulonglong *)(lVar4 + 4 + lVar12);
          uVar1 = *(undefined1 *)(lVar4 + 0xc + lVar12);
          auVar15 = vcmpps_avx(auVar16._0_16_,auVar14,1);
          auVar15 = vblendvps_avx(auVar17._0_16_,auVar14,auVar15);
          auVar18 = ZEXT1664(auVar15);
          func_0x000145072400(auStack_118,auStack_b8);
          uStack_d8 = auVar18._0_8_;
          uStack_d0 = 0;
          uVar10 = (ulonglong)*(uint *)((longlong)param_1 + 0x464);
          *(uint *)((longlong)param_1 + 0x464) = *(uint *)((longlong)param_1 + 0x464) + 1;
          uStack_c8 = uVar1;
          func_0x000145072400(param_1 + uVar10 * 0xc + 0x8e,auStack_118);
          auVar6._8_8_ = uStack_d0;
          auVar6._0_8_ = uStack_d8;
          *(undefined1 (*) [16])(param_1 + uVar10 * 0xc + 0x96) = auVar6;
          *(undefined1 *)(param_1 + uVar10 * 0xc + 0x98) = uStack_c8;
          uVar9 = *(ushort *)(lVar8 + 0x98);
        }
        uVar13 = uVar13 + 1;
        lVar12 = lVar12 + 0x10;
      } while (uVar13 < uVar9);
    }
  }
  return;
}

