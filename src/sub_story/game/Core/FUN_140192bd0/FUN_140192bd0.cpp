// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140192bd0  size: 171 bytes
// Name:    FUN_140192bd0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1450577d0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


ulonglong FUN_140192bd0(longlong param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 auVar8 [64];
  
  uVar6 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffff0;
  lVar4 = func_0x000145148c90(*(undefined4 *)(uVar6 + 0x9c));
  auVar8 = ZEXT1264(ZEXT812(0));
  uVar7 = 0;
  if (((lVar4 != 0) && ((byte)(*(char *)(uVar6 + 0xfa) - 5U) < 2)) &&
     (uVar1 = *(uint *)(lVar4 + 0x204), uVar7 = 0, 0 < (int)uVar1)) {
    iVar2 = *(int *)(param_1 + 0x2c4);
    uVar6 = 0;
    do {
      iVar3 = FUN_1450577d0(param_1,uVar6);
      uVar7 = auVar8._0_8_;
      if (iVar3 < 0 && 0 < iVar2 || iVar3 == 0) {
        return (ulonglong)*(uint *)(*(longlong *)(lVar4 + 0x208) + 0x18 + uVar6 * 0x90);
      }
      uVar5 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar5;
    } while (uVar1 != uVar5);
  }
  return uVar7;
}

