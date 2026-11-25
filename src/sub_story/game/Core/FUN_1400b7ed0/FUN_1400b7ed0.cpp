// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400b7ed0  size: 290 bytes
// Name:    FUN_1400b7ed0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1400b8000
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


bool FUN_1400b7ed0(float *param_1,char param_2,ulonglong *param_3)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  undefined *puVar5;
  int iVar6;
  ulonglong *puVar7;
  undefined4 uVar8;
  undefined1 auStack_28 [16];
  
  puVar7 = param_3;
  if (param_3 != (ulonglong *)0x0) {
    do {
      if (((uint)*puVar7 & 7) == 5) {
        uVar3 = puVar7[1];
        goto LAB_1400b7efb;
      }
      puVar7 = (ulonglong *)(*puVar7 & 0xfffffffffffffff8);
    } while (puVar7 != (ulonglong *)0x0);
    uVar3 = 0;
LAB_1400b7fb1:
    if ((*param_3 & 7) != 0) goto LAB_1400b7fdf;
    uVar3 = func_0x000144f66800(2,param_3 + 1);
LAB_1400b7efb:
    if (uVar3 == 0xed5265351bdffc59) {
      return false;
    }
    goto LAB_1400b7f0e;
  }
  uVar3 = 0;
LAB_1400b7f0e:
  iVar6 = (int)*param_1;
  iVar4 = (int)param_1[1];
  iVar1 = -iVar6;
  if (-1 < iVar6) {
    iVar1 = iVar6 + 1;
  }
  uVar8 = 0x77;
  if (-1 < iVar6) {
    uVar8 = 0x65;
  }
  iVar6 = -iVar4;
  if (-1 < iVar4) {
    iVar6 = iVar4 + 1;
  }
  if (param_2 == '\0') {
    puVar5 = &UNK_14677fb1b;
  }
  else {
    if (param_2 != '\x01') goto LAB_1400b7f6d;
    puVar5 = &UNK_14677fb06;
  }
  FUN_1400b8000(auStack_28,puVar5,(iVar4 >> 0x1f) * -5 + 0x6e,iVar6,uVar8,iVar1);
LAB_1400b7f6d:
  uVar2 = func_0x000144f66800(2,auStack_28);
  return uVar3 == uVar2;
LAB_1400b7fdf:
  param_3 = (ulonglong *)(*param_3 & 0xfffffffffffffff8);
  if (param_3 == (ulonglong *)0x0) goto LAB_1400b7f0e;
  goto LAB_1400b7fb1;
}

