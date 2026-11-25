// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400c8f20  size: 281 bytes
// Name:    FUN_1400c8f20
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144de6230, FUN_1451e8a50
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400c8f20(longlong param_1,longlong param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  *(undefined8 *)(param_2 + 0x38) = 0;
  lVar4 = *(longlong *)(param_2 + 8);
  if (lVar4 == 0) {
    return;
  }
  if ((*(byte *)(lVar4 + 0xb79) & 8) != 0) {
    lVar5 = func_0x0001450021b0(*(undefined8 *)(lVar4 + 0x688));
    *(longlong *)(param_2 + 0x38) = lVar5;
    if (lVar5 != 0) {
      return;
    }
  }
  lVar4 = FUN_1451e8a50(*(undefined8 *)(lVar4 + 8),0);
  *(longlong *)(param_2 + 0x38) = lVar4;
  if (lVar4 != 0) {
    return;
  }
  lVar4 = *(longlong *)(param_2 + 8);
  uVar1 = *(uint *)(lVar4 + 0x984);
  if (uVar1 != 0x1ffff) {
    uVar2 = *(uint *)(_DAT_14abbe8c8[5] + (ulonglong)(uVar1 & 0x1ffff) * 4);
    if ((((~uVar2 & *(uint *)(_DAT_14abbe8c8 + 6)) == 0) &&
        ((uVar2 & 0x7fe0000) == (uVar1 & 0xfffe0000))) && (lVar5 = *_DAT_14abbe8c8, lVar5 != 0)) {
      lVar3 = _DAT_14abbe8c8[1];
      lVar4 = func_0x0001451ee110(*(undefined8 *)(lVar4 + 0x9a0));
      if (lVar5 + (ulonglong)((uVar1 & 0x1ffff) * (int)lVar3) != lVar4) {
        return;
      }
      goto LAB_1400c902c;
    }
  }
  auVar7._8_8_ = _DAT_14615ba50;
  auVar7._0_8_ = _DAT_14615ba50;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = *(ulonglong *)(lVar4 + 0x234);
  auVar6 = vpand_avx(auVar6,auVar7);
  auVar6 = vpcmpeqd_avx(auVar6,auVar7);
  auVar6 = vpmovsxdq_avx(auVar6);
  if ((SUB161(auVar6 >> 0x3f,0) & 1) == 0 && -1 < auVar6[0xf]) {
    return;
  }
  lVar5 = FUN_144de6230(*(undefined4 *)(*(longlong *)(param_1 + 0x2f8) + 0x9c));
  if (lVar5 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = 0;
    if (*(char *)(lVar5 + 0x30) == '\x02') {
      lVar4 = lVar5;
    }
  }
LAB_1400c902c:
  *(longlong *)(param_2 + 0x38) = lVar4;
  return;
}

