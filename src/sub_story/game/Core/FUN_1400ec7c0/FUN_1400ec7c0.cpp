// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400ec7c0  size: 185 bytes
// Name:    FUN_1400ec7c0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400ec7c0(float param_1,longlong param_2,uint param_3,longlong param_4,longlong param_5)

{
  float *pfVar1;
  float fVar2;
  ushort uVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  ushort *puVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined1 auVar12 [16];
  
  if (param_2 != 0) {
    uVar6 = *(uint *)(param_2 + 0x1c);
    if ((int)param_3 < 1) {
      iVar9 = 0;
    }
    else {
      uVar4 = *(uint *)(param_2 + 0x18);
      puVar8 = (ushort *)(param_4 + 0x74);
      lVar7 = 0;
      iVar9 = 0;
      param_1 = _DAT_145fc6ed8 / param_1;
      do {
        fVar2 = *(float *)(param_5 + 0x1c + lVar7);
        if (((fVar2 != 0.0) || (NAN(fVar2))) && (uVar3 = *puVar8, uVar3 != 0xffff)) {
          if (uVar6 < uVar4) {
            fVar2 = fVar2 * param_1;
            lVar5 = *(longlong *)(param_2 + 0x28);
            uVar10 = (ulonglong)uVar6;
            uVar6 = uVar6 + 1;
            lVar11 = uVar10 * 0x10;
            pfVar1 = (float *)(param_5 + lVar7);
            auVar12._0_4_ = fVar2 * *pfVar1;
            auVar12._4_4_ = fVar2 * pfVar1[1];
            auVar12._8_4_ = fVar2 * pfVar1[2];
            auVar12._12_4_ = fVar2 * pfVar1[3];
            auVar12 = vblendps_avx(auVar12,*(undefined1 (*) [16])(lVar5 + lVar11),8);
            *(undefined1 (*) [16])(lVar5 + lVar11) = auVar12;
            *(uint *)(lVar5 + 0xc + lVar11) = (uint)uVar3;
          }
          else {
            iVar9 = iVar9 + 1;
          }
        }
        lVar7 = lVar7 + 0x30;
        puVar8 = puVar8 + 0x40;
      } while ((ulonglong)param_3 * 0x30 != lVar7);
    }
    *(uint *)(param_2 + 0x1c) = uVar6;
    *(int *)(param_2 + 0x20) = *(int *)(param_2 + 0x20) + iVar9;
  }
  return;
}

