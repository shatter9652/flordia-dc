// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401b4bc0  size: 509 bytes
// Name:    FUN_1401b4bc0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


ulonglong FUN_1401b4bc0(longlong param_1,ulonglong param_2)

{
  int *piVar1;
  char cVar2;
  undefined1 auVar3 [16];
  uint uVar4;
  int *piVar5;
  float *pfVar6;
  int *piVar7;
  undefined8 extraout_XMM0_Qa;
  ulonglong uVar8;
  undefined1 extraout_var [56];
  float fVar10;
  float fVar11;
  undefined1 auVar9 [64];
  
  piVar1 = (int *)(*(longlong *)(param_1 + 0x20) + 0x20 + param_1);
  piVar5 = (int *)0x0;
  if (*(longlong *)(param_1 + 0x20) != 1) {
    piVar5 = piVar1;
  }
  cVar2 = *(char *)((longlong)piVar5 + 7);
  if (cVar2 == '\x03') {
    if (*(char *)((longlong)piVar5 + 5) == '\0') {
      piVar7 = (int *)(ulonglong)
                      (uint)(-*(int *)(&UNK_1465a2880 + (ulonglong)*(byte *)(piVar5 + 1) * 8) &
                            *(int *)(&UNK_1465a2880 + (ulonglong)*(byte *)(piVar5 + 1) * 8) + 7 +
                            *piVar1 * 4);
    }
    else {
      piVar7 = piVar5 + 2;
      if (*(char *)((longlong)piVar5 + 6) == '\x01') {
        uVar4 = (*piVar1 * piVar5[3] + 0x1fU >> 5) * 4 + 0xc;
      }
      else if (*(char *)((longlong)piVar5 + 6) == '\0') {
        uVar4 = *piVar1 << 2;
      }
      else {
        uVar4 = 0;
      }
      piVar5 = (int *)(ulonglong)uVar4;
    }
    pfVar6 = (float *)((longlong)piVar7 + (longlong)piVar5);
    fVar10 = *pfVar6;
    fVar11 = pfVar6[1];
    uVar4 = func_0x000145076750(pfVar6 + 3,param_2,pfVar6[2]);
    auVar9._8_56_ = extraout_var;
    auVar9._0_8_ = extraout_XMM0_Qa;
    auVar3._4_12_ = auVar9._4_12_;
    auVar3._0_4_ = fVar10 * (float)uVar4 + fVar11;
    uVar8 = auVar3._0_8_;
  }
  else if (cVar2 == '\0') {
    if (*(char *)((longlong)piVar5 + 5) == '\0') {
      piVar7 = (int *)(ulonglong)
                      (uint)(-*(int *)(&UNK_1465a2880 + (ulonglong)*(byte *)(piVar5 + 1) * 8) &
                            *(int *)(&UNK_1465a2880 + (ulonglong)*(byte *)(piVar5 + 1) * 8) + 7 +
                            *piVar1 * 4);
    }
    else {
      piVar7 = piVar5 + 2;
      if (*(char *)((longlong)piVar5 + 6) == '\0') {
        uVar4 = *piVar1 << 2;
      }
      else {
        uVar4 = 0;
        if (*(char *)((longlong)piVar5 + 6) == '\x01') {
          uVar4 = (*piVar1 * piVar5[3] + 0x1fU >> 5) * 4 + 0xc;
        }
      }
      piVar5 = (int *)(ulonglong)uVar4;
    }
    uVar8 = (ulonglong)*(uint *)((longlong)piVar7 + (longlong)piVar5 + (param_2 & 0xffffffff) * 4);
  }
  else if (cVar2 == '\x02') {
    if (*(char *)((longlong)piVar5 + 5) == '\0') {
      piVar7 = (int *)(ulonglong)
                      (uint)(-*(int *)(&UNK_1465a2880 + (ulonglong)*(byte *)(piVar5 + 1) * 8) &
                            *(int *)(&UNK_1465a2880 + (ulonglong)*(byte *)(piVar5 + 1) * 8) + 7 +
                            *piVar1 * 4);
    }
    else {
      piVar7 = piVar5 + 2;
      if (*(char *)((longlong)piVar5 + 6) == '\0') {
        uVar4 = *piVar1 << 2;
      }
      else {
        uVar4 = 0;
        if (*(char *)((longlong)piVar5 + 6) == '\x01') {
          uVar4 = (*piVar1 * piVar5[3] + 0x1fU >> 5) * 4 + 0xc;
        }
      }
      piVar5 = (int *)(ulonglong)uVar4;
    }
    uVar8 = (ulonglong)*(uint *)((longlong)piVar7 + (longlong)piVar5);
  }
  else {
    uVar8 = 0;
  }
  return uVar8;
}

