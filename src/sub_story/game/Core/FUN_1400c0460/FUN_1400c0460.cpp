// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400c0460  size: 740 bytes
// Name:    FUN_1400c0460
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1400c07d0, FUN_14108b410, FUN_144e75ec0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400c0460(longlong *param_1)

{
  byte bVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  bool bVar7;
  bool bVar8;
  undefined1 auVar9 [16];
  char cVar10;
  uint uVar11;
  longlong lVar12;
  undefined4 *puVar13;
  int *piVar14;
  int *piVar15;
  float fVar16;
  undefined1 auVar17 [16];
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined1 auStack_c8 [16];
  uint auStack_b8 [8];
  longlong lStack_98;
  undefined4 uStack_90;
  longlong lStack_88;
  longlong lStack_80;
  longlong lStack_78;
  longlong lStack_70;
  longlong lStack_68;
  longlong lStack_60;
  longlong lStack_58;
  longlong lStack_50;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  
  lVar5 = *param_1;
  uVar3 = *(undefined4 *)(lVar5 + 0x9c);
  lVar12 = func_0x000144dd7540(uVar3);
  if ((((((lVar12 == 0) || ((*(byte *)(lVar12 + 0x10) & 0x20) == 0)) ||
        (*(longlong *)(lVar12 + 0x898) == 0)) &&
       ((lVar12 = func_0x000144dd1230(uVar3), lVar12 == 0 || (*(float *)(lVar12 + 0x44) <= 0.0))))
      && ((puVar13 = (undefined4 *)
                     func_0x000144f54fa0(*(undefined4 *)(*(longlong *)(lVar5 + 0x20) + 0x288)),
          puVar13 != (undefined4 *)0x0 &&
          ((lVar12 = func_0x000144f205d0(*puVar13), lVar12 != 0 &&
           (lVar12 = FUN_14108b410(*(undefined4 *)(lVar12 + 0x88)), lVar12 != 0)))))) &&
     (piVar14 = (int *)func_0x0001400c0750(*(undefined4 *)(lVar12 + 4)), piVar14 != (int *)0x0)) {
    bVar1 = *(byte *)(piVar14 + 6);
    bVar2 = *(byte *)((longlong)piVar14 + 0x19);
    if (((bVar1 | bVar2) & 1) != 0) {
      if (*(int *)((longlong)param_1 + 0x14) == 5) {
        piVar15 = piVar14 + 5;
      }
      else {
        piVar15 = piVar14;
        switch(*(int *)((longlong)param_1 + 0x14)) {
        case 0:
          break;
        case 1:
          piVar15 = piVar14 + 1;
          break;
        case 2:
          piVar15 = piVar14 + 2;
          break;
        case 3:
          piVar15 = piVar14 + 3;
          break;
        case 4:
          piVar15 = piVar14 + 4;
          break;
        default:
          goto code_r0x0001400c06d4;
        }
      }
      iVar4 = *piVar15;
      if (iVar4 != 0) {
        cVar10 = func_0x00014068ac00();
        if (cVar10 == '\0') {
          uStack_d8 = *(undefined8 *)(lVar5 + 0x70);
          uStack_d0 = *(undefined8 *)(lVar5 + 0x78);
          func_0x000144dc3790(&uStack_d8,auStack_c8);
          fVar16 = (float)FUN_144e75ec0(auStack_c8,0);
        }
        else {
          fVar16 = 0.0;
        }
        if (bVar1 == 0) {
          bVar7 = false;
        }
        else {
          bVar7 = fVar16 <= (float)piVar14[7] * (float)piVar14[7];
        }
        if ((bVar2 & 1) == 0) {
          bVar8 = false;
        }
        else {
          bVar8 = fVar16 <= (float)piVar14[8] * (float)piVar14[8];
        }
        fStack_40 = *(float *)(param_1 + 2);
        fStack_44 = 0.0;
        fStack_48 = 0.0;
        if (bVar7) {
          auVar17 = ZEXT416((uint)((fStack_40 - (float)piVar14[9]) /
                                  ((float)piVar14[10] - (float)piVar14[9])));
          auVar9 = vmaxss_avx(ZEXT816(0),auVar17);
          auVar17 = vcmpss_avx(ZEXT416(_DAT_145fc6ed8),auVar17,1);
          fStack_48 = (float)(~auVar17._0_4_ & auVar9._0_4_);
        }
        if (bVar8) {
          auVar17 = ZEXT416((uint)((fStack_40 - (float)piVar14[0xb]) /
                                  ((float)piVar14[0xc] - (float)piVar14[0xb])));
          auVar9 = vminss_avx(ZEXT416(_DAT_145fc6ed8),auVar17);
          auVar17 = vcmpss_avx(auVar17,ZEXT816(0),1);
          fStack_44 = (float)(~auVar17._0_4_ & auVar9._0_4_);
        }
        if (((bool)(bVar7 & 0.0 < fStack_48)) || ((bool)(bVar8 & 0.0 < fStack_44))) {
          plVar6 = *(longlong **)((ulonglong)*(byte *)(lVar5 + 0x30) * 8 + 0x14abbe7c0);
          uVar11 = (uint)((ulonglong)(lVar5 - *plVar6) / (ulonglong)*(uint *)(plVar6 + 1)) & 0x1ffff
          ;
          auStack_b8[0] =
               (*(byte *)(lVar5 + 0x30) & 0x1f) << 0x11 | uVar11 |
               (*(uint *)(plVar6[5] + (ulonglong)uVar11 * 4) & 0x7fe0000) << 5;
          auStack_b8[1] = 0;
          auStack_b8[2] = 0;
          auStack_b8[3] = 0;
          auStack_b8[4] = 0x55;
          auStack_b8[5] = 0;
          uStack_90 = (undefined4)param_1[3];
          lStack_88 = param_1[4];
          lStack_80 = param_1[5];
          lStack_78 = param_1[6];
          lStack_70 = param_1[7];
          lStack_68 = param_1[8];
          lStack_60 = param_1[9];
          lStack_58 = param_1[10];
          lStack_50 = param_1[0xb];
          auStack_b8[6] = iVar4;
          lStack_98 = lVar5;
          FUN_1400c07d0(auStack_b8,(ulonglong)(lVar5 - *plVar6) % (ulonglong)*(uint *)(plVar6 + 1));
        }
      }
    }
  }
code_r0x0001400c06d4:
  return;
}

