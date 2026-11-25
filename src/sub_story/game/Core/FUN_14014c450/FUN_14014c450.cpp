// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14014c450  size: 364 bytes
// Name:    FUN_14014c450
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1407fbdd0, FUN_1450a0ab0, FUN_14014c5c0, FUN_14014bbe0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14014c450(longlong param_1)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  char cVar5;
  byte bVar6;
  undefined8 uVar7;
  
  lVar3 = *(longlong *)(param_1 + 0x48);
  iVar2 = *(int *)(lVar3 + 0xc);
  if ((iVar2 == 1) || (iVar2 == 5)) {
    uVar7 = func_0x0001450a0aa0();
    cVar4 = FUN_1450a0ab0(uVar7,*(undefined4 *)(lVar3 + 0x28),param_1 + 0xf0,param_1 + 0x100);
    if (cVar4 != '\0') {
      cVar4 = FUN_14014c5c0(param_1,*(undefined8 *)(*(longlong *)(param_1 + 0x48) + 0x18),
                            param_1 + 0x68,0x19);
      cVar5 = FUN_14014c5c0(param_1,*(undefined8 *)(*(longlong *)(param_1 + 0x48) + 0x20),
                            param_1 + 0x88,0x15);
      if ((cVar4 != '\0') || (cVar5 != '\0')) {
        lVar3 = *(longlong *)(param_1 + 0x48);
        iVar2 = *(int *)(param_1 + 0x30);
        cVar4 = func_0x00014014bbc0(lVar3);
        if (cVar4 == '\0') {
          *(undefined2 *)(param_1 + 0x110) = 0;
        }
        else {
          func_0x0001442376b0(param_1 + 0xa8,*(undefined4 *)(*(longlong *)(lVar3 + 0x38) + 0xc));
          func_0x0001442376c0(param_1 + 0xa8,
                              *(undefined4 *)
                               (*(longlong *)(*(longlong *)(param_1 + 0x48) + 0x38) + 0x10));
          func_0x0001442376b0(param_1 + 200,
                              *(undefined4 *)
                               (*(longlong *)(*(longlong *)(param_1 + 0x48) + 0x38) + 0xc));
          func_0x0001442376c0(param_1 + 200,
                              *(undefined4 *)
                               (*(longlong *)(*(longlong *)(param_1 + 0x48) + 0x38) + 0x10));
          bVar1 = *(byte *)(param_1 + 0x110);
          bVar6 = FUN_1407fbdd0(*(undefined4 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
                                *(undefined4 *)
                                 (*(longlong *)(*(longlong *)(param_1 + 0x48) + 0x38) + 8));
          *(byte *)(param_1 + 0x110) = bVar6;
          *(byte *)(param_1 + 0x111) =
               (bVar6 ^ 1) & ~*(byte *)(param_1 + 0x111) & bVar1 & iVar2 != 2;
        }
        FUN_14014bbe0(param_1,iVar2 == 2);
        *(undefined4 *)(param_1 + 0x30) = 0;
      }
    }
  }
  return;
}

