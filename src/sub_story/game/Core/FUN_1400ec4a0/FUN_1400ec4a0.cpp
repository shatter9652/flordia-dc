// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400ec4a0  size: 278 bytes
// Name:    FUN_1400ec4a0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400ec4a0(longlong param_1,longlong *param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  ushort uVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_6c [2];
  ushort uStack_6a;
  
  iVar4 = (**(code **)(*param_2 + 8))(param_2);
  if (iVar4 == 5) {
    uVar5 = (**(code **)(*param_2 + 0x10))(param_2);
    if (0 < (int)uVar5) {
      lVar9 = 4;
      uVar8 = 0;
      fVar11 = _DAT_146159f8c;
      do {
        lVar10 = uVar8 * 0x80;
        lVar3 = param_2[0xc];
        lVar6 = (**(code **)(*param_2 + 0x88))(param_2);
        uVar2 = *(ushort *)(lVar6 + uVar8 * 0x130);
        if ((uVar2 & 0xf) == 0) {
          fVar12 = 0.0;
        }
        else {
          fVar12 = 0.0;
          uVar7 = 0;
          do {
            lVar1 = uVar7 * 2;
            uVar7 = uVar7 + 1;
            fVar12 = fVar12 + *(float *)(param_3 + (ulonglong)*(ushort *)(lVar6 + lVar9 + lVar1) * 4
                                        );
          } while (((ulonglong)uVar2 & 0xf) != uVar7);
        }
        func_0x0001404610e0(auStack_6c);
        uVar8 = uVar8 + 1;
        lVar9 = lVar9 + 0x130;
        *(float *)(lVar10 + lVar3 + 0x6c) =
             fVar11 * *(float *)(param_4 +
                                (ulonglong)
                                *(ushort *)
                                 (*(longlong *)(*(longlong *)(param_1 + 0x2f8) + 8) + 2 +
                                 (ulonglong)uStack_6a * 8) * 4) + fVar12;
      } while (uVar8 != uVar5);
    }
  }
  return;
}

