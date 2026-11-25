// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401aedd0  size: 213 bytes
// Name:    FUN_1401aedd0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145071380
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401aedd0(longlong param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [64];
  undefined8 extraout_XMM0_Qb;
  
  uVar3 = *(uint *)(param_1 + 0xfc);
  if (uVar3 == 0) {
    auVar7 = ZEXT864(0);
  }
  else {
    auVar7 = ZEXT864(0);
    uVar5 = 0;
    do {
      uVar1 = *(uint *)(*(longlong *)(param_1 + 0x100) + uVar5 * 4);
      if (uVar1 != 0x1ffff) {
        uVar2 = *(uint *)(_DAT_14a9b3f48[5] + (ulonglong)(uVar1 & 0x1ffff) * 4);
        if ((((uVar1 ^ uVar2) < 0x20000) &&
            ((uVar2 & *(uint *)(_DAT_14a9b3f48 + 6)) == *(uint *)(_DAT_14a9b3f48 + 6))) &&
           (*_DAT_14a9b3f48 != 0)) {
          auVar6._0_8_ = func_0x000144fa4340(*_DAT_14a9b3f48 +
                                             (ulonglong)((uVar1 & 0x1ffff) * (int)_DAT_14a9b3f48[1])
                                             ,*param_2);
          auVar6._8_8_ = extraout_XMM0_Qb;
          uVar3 = *(uint *)(param_1 + 0xfc);
          auVar6 = vmaxss_avx(auVar6,auVar7._0_16_);
          auVar7 = ZEXT1664(auVar6);
        }
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar3);
  }
  if (-1 < *(int *)(param_1 + 0x154)) {
    lVar4 = FUN_145071380();
    if (lVar4 != 0) {
      *(int *)(lVar4 + 0x60) = auVar7._0_4_;
      return;
    }
  }
  return;
}

