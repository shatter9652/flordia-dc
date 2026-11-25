// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140126950  size: 425 bytes
// Name:    FUN_140126950
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144f3d9c0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140126950(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  float param_5,longlong *param_6,ushort param_7,char param_8)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 auVar3 [16];
  ulonglong uVar4;
  sbyte sVar5;
  longlong lVar6;
  ushort uVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  undefined1 auStack_f8 [16];
  undefined1 auStack_e8 [16];
  undefined1 auStack_d8 [160];
  
  if ((*(int *)(param_3 + 0x380) != 1) && (0 < (int)param_6[1])) {
    auStack_e8._4_4_ = _DAT_145fc6ed8;
    auStack_e8._0_4_ = _DAT_145fc6ed8;
    auStack_e8._8_4_ = _DAT_145fc6ed8;
    auStack_e8._12_4_ = _DAT_145fc6ed8;
    auStack_f8._4_4_ = param_5;
    auStack_f8._0_4_ = param_5;
    auStack_f8._8_4_ = param_5;
    auStack_f8._12_4_ = param_5;
    FUN_144f3d9c0(param_1,auStack_d8,param_2,param_3,param_4,auStack_f8,auStack_e8);
    lVar6 = param_6[1];
    if ((longlong)(int)lVar6 != 0) {
      lVar1 = *param_6;
      lVar9 = 0;
      do {
        auVar3 = vblendps_avx(*(undefined1 (*) [16])(lVar1 + 0x10 + lVar9),
                              *(undefined1 (*) [16])(lVar1 + lVar9),8);
        *(undefined1 (*) [16])(lVar1 + lVar9) = auVar3;
        lVar9 = lVar9 + 0xb0;
      } while ((longlong)(int)lVar6 * 0xb0 - lVar9 != 0);
    }
    uVar13 = 0x7ffffff;
    if ((char)param_7 < '\0') {
      uVar13 = *(uint *)(param_1 + 0x1a0);
    }
    uVar10 = 0x7ffffff;
    if ((param_7 & 1) != 0) {
      uVar10 = *(uint *)(param_1 + 0x198);
    }
    uVar11 = 0x7ffffff;
    if (param_8 != '\0') {
      uVar11 = *(uint *)(param_1 + 0x1a8);
    }
    uVar8 = 0x7ffffff;
    if (param_5 <= 0.0) {
      uVar8 = uVar11;
    }
    uVar13 = ~*(uint *)(param_1 + 0x1b0) & uVar13 & uVar10 & uVar8 & *(uint *)(param_1 + 0x180) &
             0x7ffffff;
    uVar14 = (ulonglong)uVar13;
    if (uVar13 != 0) {
      uVar12 = 0;
      for (uVar4 = uVar14; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x8000000000000000) {
        uVar12 = uVar12 + 1;
      }
      do {
        sVar5 = ((byte)uVar12 < 0x41) * ('@' - (byte)uVar12);
        plVar2 = *(longlong **)
                  (*(longlong *)(param_1 + 0x188) +
                  POPCOUNT((ulonglong)(*(longlong *)(param_1 + 0x180) << sVar5) >> sVar5) * 8);
        if ((param_7 == 0) || (uVar7 = (**(code **)(*plVar2 + 0x50))(), (param_7 & ~uVar7) == 0)) {
          (**(code **)(*plVar2 + 0x68))(plVar2,auStack_d8,param_6);
        }
        uVar4 = uVar12 & 0x3f;
        uVar12 = 0;
        uVar14 = uVar14 & ~(1L << uVar4);
        for (uVar4 = uVar14; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x8000000000000000) {
          uVar12 = uVar12 + 1;
        }
      } while (uVar14 != 0);
    }
  }
  return;
}

