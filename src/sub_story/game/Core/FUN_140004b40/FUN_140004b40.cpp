// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140004b40  size: 201 bytes
// Name:    FUN_140004b40
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


ulonglong FUN_140004b40(ulonglong *param_1)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  longlong unaff_GS_OFFSET;
  bool bVar7;
  
  iVar5 = *(int *)((longlong)param_1 + 0x1c);
  uVar4 = *param_1;
  lVar1 = **(longlong **)(unaff_GS_OFFSET + 0x58);
  uVar2 = *(uint *)(lVar1 + 0x1454);
  if (uVar2 == 0xffffffff) {
    uVar2 = func_0x0001410d65a0();
    *(uint *)(lVar1 + 0x1454) = uVar2;
  }
  uVar3 = uVar4 >> 0x20;
  if (uVar2 == (uint)(uVar4 >> 0x20)) {
    *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  }
  else {
    uVar6 = ((ulonglong)uVar2 << 0x20) + 1;
    for (; uVar3 = uVar4, iVar5 != 0; iVar5 = iVar5 + -1) {
      LOCK();
      uVar3 = *param_1;
      bVar7 = uVar3 == 0xffffffff00000000;
      if (bVar7) {
        *param_1 = uVar6;
        uVar3 = 0xffffffff00000000;
      }
      UNLOCK();
      if (bVar7) goto LAB_140004bdf;
      func_0x000144f4b620();
    }
    do {
      while (uVar3 != 0xffffffff00000000) {
        uVar4 = func_0x000140a7c330(param_1,uVar2,uVar3);
        if ((char)uVar4 != '\0') {
          return uVar4;
        }
        uVar3 = *param_1;
      }
      LOCK();
      uVar3 = *param_1;
      bVar7 = uVar3 == 0xffffffff00000000;
      if (bVar7) {
        *param_1 = uVar6;
        uVar3 = 0xffffffff00000000;
      }
      UNLOCK();
    } while (!bVar7);
LAB_140004bdf:
    *(undefined4 *)(param_1 + 2) = 1;
  }
  return uVar3;
}

