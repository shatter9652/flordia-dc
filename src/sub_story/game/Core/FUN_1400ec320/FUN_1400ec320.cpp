// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400ec320  size: 305 bytes
// Name:    FUN_1400ec320
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400ec320(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  longlong *plVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined8 unaff_R15;
  uint uVar7;
  uint uStack_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  uint uStack_58;
  uint uStack_54;
  
  iVar3 = (**(code **)(*param_2 + 0x20))(param_2);
  if (0 < iVar3) {
    uVar5 = CONCAT62((int6)((ulonglong)unaff_R15 >> 0x10),1);
    uVar7 = _DAT_145fc6f4c;
    do {
      uVar2 = (uint)uVar5;
      (**(code **)(*param_2 + 0x70))(param_2,uVar2 - 1,&uStack_68);
      plVar4 = param_2 + 2;
      if (((short)param_2[3] == 0) &&
         (plVar4 = (longlong *)param_2[1], (longlong *)param_2[1] == (longlong *)0x0)) {
        plVar4 = param_2 + 2;
      }
      lVar1 = *plVar4;
      uVar5 = (ulonglong)(uVar2 - 1 & 0xffff);
      uVar6 = (ulonglong)*(ushort *)(lVar1 + uVar5 * 0x28);
      *(float *)(param_1 + uVar6 * 4) = (float)(uStack_68 & uVar7) + *(float *)(param_1 + uVar6 * 4)
      ;
      uVar6 = (ulonglong)*(ushort *)(lVar1 + 2 + uVar5 * 0x28);
      *(float *)(param_1 + uVar6 * 4) = (float)(uStack_64 & uVar7) + *(float *)(param_1 + uVar6 * 4)
      ;
      uVar6 = (ulonglong)*(ushort *)(lVar1 + 4 + uVar5 * 0x28);
      *(float *)(param_1 + uVar6 * 4) = (float)(uStack_60 & uVar7) + *(float *)(param_1 + uVar6 * 4)
      ;
      uVar6 = (ulonglong)*(ushort *)(lVar1 + 6 + uVar5 * 0x28);
      *(float *)(param_1 + uVar6 * 4) = (float)(uStack_5c & uVar7) + *(float *)(param_1 + uVar6 * 4)
      ;
      uVar6 = (ulonglong)*(ushort *)(lVar1 + 8 + uVar5 * 0x28);
      *(float *)(param_1 + uVar6 * 4) = (float)(uStack_58 & uVar7) + *(float *)(param_1 + uVar6 * 4)
      ;
      uVar5 = (ulonglong)*(ushort *)(lVar1 + 10 + uVar5 * 0x28);
      *(float *)(param_1 + uVar5 * 4) = (float)(uStack_54 & uVar7) + *(float *)(param_1 + uVar5 * 4)
      ;
      iVar3 = (**(code **)(*param_2 + 0x20))(param_2);
      uVar5 = (ulonglong)(uVar2 + 1);
    } while ((int)(uVar2 & 0xffff) < iVar3);
  }
  return;
}

