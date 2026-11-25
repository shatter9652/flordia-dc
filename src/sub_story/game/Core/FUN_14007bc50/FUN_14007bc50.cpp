// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14007bc50  size: 601 bytes
// Name:    FUN_14007bc50
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144ef2f80, FUN_14007cd90, FUN_14007cb40, FUN_1400c6350
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14007bc50(longlong *param_1)

{
  undefined8 *puVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  
  if (((*(int *)((longlong)param_1 + 0x19c) != -1) &&
      ((*(byte *)((longlong)param_1 + 0x1a7) & 0x40) == 0)) && (lVar5 = FUN_14007cd90(), lVar5 != 0)
     ) {
    plVar7 = param_1 + 5;
    FUN_1400c6350(lVar5,plVar7,0xffffffff);
    uVar8 = CONCAT71((int7)((ulonglong)plVar7 >> 8),(char)param_1[0x35]) & 0xffffffffffffff04;
    func_0x00014007cd70(lVar5,CONCAT71((int7)(uVar8 >> 8),(byte)uVar8 >> 2),
                        *(undefined1 *)((longlong)param_1 + 0x1e));
    uVar4 = *(uint *)((longlong)param_1 + 0xc4);
    if (uVar4 == *(uint *)(param_1 + 0x18)) {
      uVar10 = 1;
      if (1 < uVar4) {
        uVar10 = uVar4 >> 1;
      }
      puVar6 = (undefined8 *)func_0x000144d9c140(8,(ulonglong)(uVar10 + uVar4) * 8);
      uVar8 = (ulonglong)*(uint *)((longlong)param_1 + 0xc4);
      if (uVar8 != 0) {
        puVar1 = (undefined8 *)param_1[0x19];
        if (uVar8 == 2) {
          uVar3 = puVar1[1];
          *puVar6 = *puVar1;
          puVar6[1] = uVar3;
        }
        else if (*(uint *)((longlong)param_1 + 0xc4) == 1) {
          *puVar6 = *puVar1;
        }
        else {
          func_0x000145f40560(puVar6,puVar1,uVar8 << 3);
        }
      }
      if (param_1[0x19] != 0) {
        func_0x000144d9c130();
      }
      param_1[0x19] = (longlong)puVar6;
      *(uint *)(param_1 + 0x18) = uVar10 + uVar4;
      uVar4 = *(uint *)((longlong)param_1 + 0xc4);
    }
    else {
      puVar6 = (undefined8 *)param_1[0x19];
    }
    *(uint *)((longlong)param_1 + 0xc4) = uVar4 + 1;
    puVar6[uVar4] = lVar5;
    func_0x00014007beb0(param_1,*(undefined4 *)((longlong)param_1 + 0x1a),
                        *(undefined4 *)((longlong)param_1 + 0x16));
    *(undefined8 *)((longlong)param_1 + 0x18c) = _DAT_146159bc0;
    if (((*(char *)((longlong)param_1 + 0xb) == '\x01') ||
        (*(char *)((longlong)param_1 + 0xc) == '\x01')) && (*(int *)((longlong)param_1 + 0x2c) != 0)
       ) {
      fVar11 = 0.0;
      auVar14 = ZEXT416(*(uint *)(param_1[6] + 4 +
                                 (ulonglong)(*(int *)((longlong)param_1 + 0x2c) - 1) * 0x14));
      auVar15 = ZEXT416(*(uint *)(param_1[6] + 4));
      auVar2 = vminss_avx(auVar15,auVar14);
      fVar12 = auVar2._0_4_;
      if (*(char *)((longlong)param_1 + 0xb) == '\x01') {
        fVar11 = fVar12 - *(float *)(*param_1 + 0x1c);
        *(float *)((longlong)param_1 + 0x18c) = fVar11;
      }
      fVar13 = _DAT_145fc6ed8;
      if (*(char *)((longlong)param_1 + 0xc) == '\x01') {
        auVar2 = vmaxss_avx(auVar15,auVar14);
        fVar13 = (*(float *)(*param_1 + 0x20) - fVar12) / (auVar2._0_4_ - fVar12);
        *(float *)(param_1 + 0x32) = fVar13;
      }
      uVar4 = *(uint *)((longlong)param_1 + 0xc4);
      if ((ulonglong)uVar4 != 0) {
        lVar5 = param_1[0x19];
        uVar8 = 0;
        do {
          lVar9 = *(longlong *)(lVar5 + uVar8 * 8);
          uVar8 = uVar8 + 1;
          *(float *)(lVar9 + 0xe4) = fVar11;
          *(float *)(lVar9 + 0xe8) = fVar13;
        } while (uVar4 != uVar8);
      }
    }
    if ((ulonglong)*(uint *)((longlong)param_1 + 0xb4) != 0) {
      lVar5 = param_1[0x17];
      lVar9 = (ulonglong)*(uint *)((longlong)param_1 + 0xb4) * 0x90;
      do {
        FUN_144ef2f80(lVar5,*(undefined4 *)((longlong)param_1 + 0x18c),(int)param_1[0x32]);
        lVar5 = lVar5 + 0x90;
        lVar9 = lVar9 + -0x90;
      } while (lVar9 != 0);
    }
    func_0x00014007c230(param_1);
    FUN_14007cb40(param_1);
    *(byte *)((longlong)param_1 + 0x1a7) = *(byte *)((longlong)param_1 + 0x1a7) | 0x40;
  }
  return;
}

