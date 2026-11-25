// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140128130  size: 534 bytes
// Name:    FUN_140128130
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144f86e10, FUN_1401272f0, FUN_144e66270, FUN_144dd3330
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140128130(longlong param_1,double *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  double dVar6;
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined1 uStack_54;
  undefined4 auStack_4c [13];
  
  if (param_2 != (double *)0x0) {
    dVar9 = *(double *)(param_1 + 0x580);
    if (((dVar9 == 0.0) && (!NAN(dVar9))) ||
       (dVar6 = (double)func_0x0001409d2080(*(undefined8 *)(param_1 + 0x5b8)),
       dVar6 < (double)*(uint *)(param_1 + 0x590) * _DAT_14615bcc0 + dVar9)) {
      uVar1 = *(undefined4 *)((longlong)param_2 + 0x1c);
      dVar6 = *param_2;
      dVar8 = param_2[1];
      uVar4 = *(uint *)(param_2 + 2);
      uVar2 = *(undefined8 *)((longlong)param_2 + 0x14);
      if (uVar4 == 0xffffffff) {
        uVar4 = 0;
      }
      if (((dVar9 == 0.0) && (!NAN(dVar9))) ||
         (_DAT_14615bcc0 * (double)uVar4 + dVar6 <
          _DAT_14615bcc0 * (double)*(uint *)(param_1 + 0x590) + dVar9)) {
        if (*(float *)(param_1 + 0x61c) < _DAT_145fc6ed8) {
          dVar9 = (double)uVar4 * _DAT_14615bcc0 + dVar6;
          dVar6 = (double)func_0x0001409d2080(*(undefined8 *)(param_1 + 0x5b8));
          auVar7._8_8_ = 0;
          auVar7._0_8_ = (dVar9 - dVar6) * _DAT_145fc6ed0;
          auVar7 = vmaxsd_avx(ZEXT816(0),auVar7);
          uVar4 = (uint)(longlong)auVar7._0_8_;
        }
        *(double *)(param_1 + 0x580) = dVar6;
        *(double *)(param_1 + 0x588) = dVar8;
        *(uint *)(param_1 + 0x590) = uVar4;
        *(undefined8 *)(param_1 + 0x594) = uVar2;
        *(undefined4 *)(param_1 + 0x59c) = uVar1;
        iVar3 = FUN_144e66270();
        if (iVar3 != 0) {
          FUN_144dd3330(*(undefined4 *)(param_1 + 0x594),auStack_4c);
          FUN_144f86e10(param_1 + 0x508,auStack_4c[0]);
        }
        *(undefined4 *)(param_1 + 0x618) = *(undefined4 *)(param_1 + 0x61c);
        uStack_54 = 0;
        uStack_60 = *(undefined8 *)(param_1 + 0x580);
        uStack_58 = *(undefined4 *)(param_1 + 0x590);
        if (*(int *)(param_1 + 0x554) != 0) {
          uVar5 = 0;
          do {
            FUN_1401272f0(*(undefined8 *)(*(longlong *)(param_1 + 0x558) + uVar5 * 8),&uStack_60);
            uVar5 = uVar5 + 1;
          } while (uVar5 < *(uint *)(param_1 + 0x554));
        }
      }
    }
  }
  return;
}

