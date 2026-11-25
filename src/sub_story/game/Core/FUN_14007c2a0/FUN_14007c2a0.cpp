// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14007c2a0  size: 263 bytes
// Name:    FUN_14007c2a0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1443aaa60, FUN_14007c400, FUN_14007c4d0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14007c2a0(longlong param_1,int *param_2)

{
  short sVar1;
  uint uVar2;
  char cVar3;
  undefined4 uVar4;
  longlong lVar5;
  int iVar6;
  
  if ((param_2 != (int *)0x0) && (iVar6 = *param_2, iVar6 != 0)) {
    param_2 = param_2 + 1;
    do {
      uVar2 = *(uint *)(param_1 + 0xb4);
      *(uint *)(param_1 + 0xb4) = uVar2 + 1;
      lVar5 = (ulonglong)uVar2 * 0x90 + *(longlong *)(param_1 + 0xb8);
      if (*(longlong *)(param_1 + 0xb8) != 0) {
        func_0x00014007c3b0(lVar5);
        *(undefined8 *)(lVar5 + 0x80) = 0x3f800000;
        *(undefined1 *)(lVar5 + 0x88) = 1;
      }
      *(int *)(lVar5 + 0x54) = *param_2;
      uVar2 = param_2[1];
      *(int *)(lVar5 + 0x84) = param_2[2];
      sVar1 = *(short *)(param_1 + 0x78);
      uVar4 = func_0x000144ee85e0(sVar1,*(undefined2 *)(param_1 + 0x7a));
      cVar3 = FUN_14007c4d0(lVar5,(int)sVar1,uVar4);
      if (cVar3 == '\0') {
        FUN_1443aaa60(param_1 + 0xb0,
                      (ulonglong)(*(int *)(param_1 + 0xb4) - 1) * 0x90 +
                      *(longlong *)(param_1 + 0xb8));
      }
      else {
        FUN_14007c400(lVar5,param_2 + 3,uVar2,*(undefined4 *)(param_1 + 0x18c),
                      *(undefined4 *)(param_1 + 400));
      }
      param_2 = param_2 + 3 + uVar2;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  return;
}

