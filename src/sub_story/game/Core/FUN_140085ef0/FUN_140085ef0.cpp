// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140085ef0  size: 293 bytes
// Name:    FUN_140085ef0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1451ad320, FUN_142aeef70, FUN_140004b40
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_140085ef0(longlong param_1,undefined4 param_2)

{
  ushort uVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined4 *puVar6;
  longlong lVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auVar10 [64];
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [16];
  
  lVar5 = func_0x000144fc04a0(*(undefined4 *)(param_1 + 0x9c));
  if (lVar5 == 0) {
    uVar4 = 0;
  }
  else {
    FUN_140004b40(0x1492c73e8);
    puVar6 = (undefined4 *)func_0x000144e28f80(lVar5);
    uVar4 = 0;
    uVar3 = (uint)((ulonglong)(param_1 - *_DAT_14abb6918) / (ulonglong)*(uint *)(_DAT_14abb6918 + 1)
                  ) & 0x1ffff;
    lVar5 = FUN_1451ad320(*puVar6,*(undefined8 *)(puVar6 + 2),
                          *(uint *)(_DAT_14abb6918[5] + (ulonglong)uVar3 * 4) & 0xfffe0000 | uVar3);
    if (lVar5 != 0) {
      auStack_58._0_12_ = ZEXT812(0);
      auStack_58._12_4_ = 0;
      cVar2 = FUN_142aeef70(lVar5,param_2);
      uVar4 = 1;
      if (cVar2 == '\0') {
        lVar7 = func_0x000140c5f790(param_2);
        if ((lVar7 == 0) || (uVar1 = *(ushort *)(lVar7 + 0x48), (ulonglong)uVar1 == 0)) {
          uVar4 = 0;
        }
        else {
          lVar7 = *(longlong *)(lVar7 + 0x40);
          auVar10 = ZEXT1264(ZEXT812(0));
          lVar8 = 0;
          do {
            auStack_68 = auVar10._0_16_;
            uVar4 = FUN_142aeef70(lVar5,*(undefined4 *)(lVar7 + lVar8),auStack_68);
            if ((char)uVar4 != '\0') break;
            bVar9 = (ulonglong)uVar1 * 4 + -4 != lVar8;
            lVar8 = lVar8 + 4;
          } while (bVar9);
        }
      }
    }
    func_0x000144d9dab0(0x1492c73e8);
  }
  return uVar4;
}

