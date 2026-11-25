// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14013ca70  size: 1234 bytes
// Name:    FUN_14013ca70
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144ff7100, FUN_144ff6990, FUN_144eae690, FUN_144ff6bf0, FUN_14013cf50, FUN_144ff69c0, FUN_144eae420, FUN_144ff6a30, FUN_144ff6c40
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14013ca70(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 uVar6;
  char cVar7;
  uint uVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong lVar14;
  int iVar15;
  undefined4 uVar16;
  undefined1 auVar17 [64];
  undefined1 auVar18 [64];
  undefined8 uStack_1f0;
  longlong lStack_1e8;
  longlong lStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  longlong alStack_1b8 [3];
  undefined8 uStack_1a0;
  undefined1 auStack_198 [16];
  undefined *puStack_188;
  undefined4 uStack_180;
  undefined1 uStack_17c;
  undefined1 auStack_178 [48];
  undefined8 uStack_148;
  undefined4 uStack_138;
  undefined *puStack_b8;
  undefined4 uStack_b0;
  undefined1 uStack_ac;
  undefined1 auStack_a8 [40];
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  
  func_0x00014013d170(param_1 + 0x174a0,*(longlong *)(param_1 + 0x174e0) + 0x2b0,
                      *(undefined8 *)(param_1 + 0x17510));
  if ((int)*(uint *)(param_1 + 0x17520) <
      (int)(uint)*(ushort *)(*(longlong *)(param_1 + 0x174e0) + 0x30)) {
    lStack_1e8 = *(longlong *)(*(longlong *)(param_1 + 0x174e0) + 0x28);
    uStack_1f0 = *(undefined8 *)(param_1 + 0x17510);
    lVar9 = (ulonglong)*(uint *)(param_1 + 0x17520) * 0x40;
    plVar5 = *(longlong **)(lStack_1e8 + lVar9);
    lStack_1e8 = lStack_1e8 + lVar9;
    lStack_1e0 = param_1 + 0x17430;
    if (*(char *)(param_1 + 0x1752e) == '\x01') {
      (**(code **)(*plVar5 + 0x48))(plVar5,&uStack_1f0);
      *(undefined1 *)(param_1 + 0x1752e) = 0;
    }
    uVar8 = *(uint *)(param_1 + 0x1751c);
    if (0 < _DAT_147c32450) {
      auVar18 = ZEXT464(_DAT_14615b36c);
      auVar17 = ZEXT1264(ZEXT812(0));
      plVar1 = (longlong *)(param_1 + 0x16e20);
      iVar15 = _DAT_147c32450;
      do {
        if (*(int *)(param_1 + 0x15000) <= (int)uVar8) break;
        lVar13 = (ulonglong)uVar8 * 0x70;
        lVar9 = param_1 + lVar13;
        FUN_144eae690(lVar9);
        if (*(longlong *)(param_1 + 0x38 + lVar13) == 0 &&
            *(longlong *)(param_1 + 0x40 + lVar13) == 0) {
          lVar9 = *(longlong *)(lVar9 + 0x48);
          lVar13 = (longlong)*(int *)(param_1 + 0x17220);
          if (0 < lVar13) {
            lVar14 = lVar13 * 8;
            plVar10 = plVar1;
            do {
              plVar11 = plVar10;
              if (*plVar10 == lVar9) break;
              plVar10 = plVar10 + 1;
              lVar14 = lVar14 + -8;
              plVar11 = (longlong *)(param_1 + 0x16e20 + lVar13 * 8);
            } while (lVar14 != 0);
            if ((plVar11 != plVar1 + lVar13) &&
               ((int)((ulonglong)~((longlong)plVar11 - (longlong)plVar1) >> 3) != 0)) {
              uVar8 = *(int *)(param_1 + 0x17220) - 1;
              *(uint *)(param_1 + 0x17220) = uVar8;
              lVar13 = (longlong)(int)((ulonglong)((longlong)plVar11 - (longlong)plVar1) >> 3);
              *(undefined8 *)(param_1 + 0x16e20 + lVar13 * 8) =
                   *(undefined8 *)(param_1 + 0x16e20 + (ulonglong)uVar8 * 8);
              iVar4 = *(int *)(param_1 + 0x17428);
              *(int *)(param_1 + 0x17428) = iVar4 + -1;
              *(undefined4 *)(param_1 + 0x17228 + lVar13 * 4) =
                   *(undefined4 *)(param_1 + 0x17224 + (longlong)iVar4 * 4);
            }
          }
          lVar13 = (longlong)*(int *)(param_1 + 0x16808);
          if (0 < lVar13) {
            plVar10 = (longlong *)(param_1 + 0x15008);
            lVar14 = lVar13 * 8;
            plVar11 = plVar10;
            do {
              plVar12 = plVar11;
              if (*plVar11 == lVar9) break;
              plVar11 = plVar11 + 1;
              lVar14 = lVar14 + -8;
              plVar12 = (longlong *)(param_1 + 0x15008 + lVar13 * 8);
            } while (lVar14 != 0);
            if ((plVar12 != plVar10 + lVar13) &&
               ((int)((ulonglong)~((longlong)plVar12 - (longlong)plVar10) >> 3) != 0)) {
              uVar8 = *(int *)(param_1 + 0x16808) - 1;
              *(uint *)(param_1 + 0x16808) = uVar8;
              *(undefined8 *)
               (param_1 + 0x15008 +
               (longlong)(int)((ulonglong)((longlong)plVar12 - (longlong)plVar10) >> 3) * 8) =
                   *(undefined8 *)(param_1 + 0x15008 + (ulonglong)uVar8 * 8);
            }
          }
          lVar13 = (longlong)*(int *)(param_1 + 0x1751c) * 0x70;
          *(int *)(param_1 + 0x1751c) = *(int *)(param_1 + 0x1751c) + -1;
          lVar9 = (longlong)*(int *)(param_1 + 0x15000) + -1;
          lVar14 = lVar9 * 0x70;
          *(int *)(param_1 + 0x15000) = (int)lVar9;
          puStack_188 = &UNK_1466c8688;
          uStack_180 = 0;
          uStack_17c = 0;
          FUN_144ff6bf0(auStack_178);
          FUN_144ff6c40(&puStack_188,param_1 + lVar14);
          func_0x000144ff6b90(param_1 + lVar13);
          FUN_144ff6c40(param_1 + lVar13,&puStack_188);
          puVar2 = (undefined8 *)(param_1 + 0x48 + lVar14);
          uVar6 = puVar2[1];
          puVar3 = (undefined8 *)(param_1 + 0x48 + lVar13);
          *puVar3 = *puVar2;
          puVar3[1] = uVar6;
          *(undefined4 *)(param_1 + 0x58 + lVar13) = *(undefined4 *)(param_1 + 0x58 + lVar14);
          uVar6 = *(undefined8 *)(param_1 + 0x61 + lVar14);
          *(undefined8 *)(param_1 + 0x5c + lVar13) = *(undefined8 *)(param_1 + 0x5c + lVar14);
          *(undefined8 *)(param_1 + 0x61 + lVar13) = uVar6;
        }
        else {
          *(undefined4 *)(lVar9 + 0x5c) = 0xccbebc20;
          FUN_144ff7100(&puStack_188);
          uStack_b0 = 0;
          uStack_ac = 0;
          FUN_144ff6bf0(auStack_a8);
          auStack_80 = auVar17._0_16_;
          puStack_188 = &UNK_146661740;
          puStack_b8 = &UNK_1466617f0;
          uStack_70 = vmovlps_avx(auVar18._0_16_);
          func_0x000144ff6b90(&puStack_b8);
          FUN_144ff6990(&puStack_b8,0);
          FUN_144ff6a30(lVar9,&puStack_188);
          uStack_1c8 = *(undefined8 *)(lVar9 + 0x50);
          uStack_138 = *(undefined4 *)(lVar9 + 0x58);
          uStack_70 = CONCAT44(*(undefined4 *)(lVar9 + 100),(undefined4)uStack_70);
          alStack_1b8[0] = plVar5[1];
          uStack_1c0 = 0;
          alStack_1b8[1] = 0;
          uStack_148 = uStack_1c8;
          cVar7 = FUN_144eae420(alStack_1b8);
          if (cVar7 != '\0') {
            iVar15 = iVar15 + -1;
            uVar16 = (**(code **)(*plVar5 + 0x50))(plVar5,&uStack_1f0,&puStack_188);
            *(undefined4 *)(lVar9 + 0x5c) = uVar16;
            func_0x000144edb290(*(undefined8 *)(lVar9 + 0x38),*(undefined8 *)(lVar9 + 0x40),
                                alStack_1b8 + 2);
            uStack_1d8 = alStack_1b8[2];
            uStack_1d0 = uStack_1a0;
            func_0x00014013cf80(param_1 + 0x17450,&uStack_1d8);
            func_0x000144edb290(*(undefined8 *)(lVar9 + 0x38),*(undefined8 *)(lVar9 + 0x40),
                                auStack_198);
            FUN_14013cf50(*(undefined8 *)(param_1 + 0x174a8));
            *(float *)(lVar9 + 0x5c) = *(float *)(lVar9 + 0x5c) * *(float *)(lVar9 + 0x60);
          }
          puStack_b8 = &UNK_1466c8688;
          func_0x000144ff6b90(&puStack_b8);
          FUN_144ff69c0(&puStack_188);
        }
        uVar8 = *(int *)(param_1 + 0x1751c) + 1;
        *(uint *)(param_1 + 0x1751c) = uVar8;
      } while (0 < iVar15);
    }
    if (*(int *)(param_1 + 0x15000) <= (int)uVar8) {
      *(undefined4 *)(param_1 + 0x17518) = 5;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x15000) = *(undefined4 *)(param_1 + 0x17500);
    *(undefined4 *)(param_1 + 0x17518) = 6;
  }
  return;
}

