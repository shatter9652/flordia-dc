// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400ba810  size: 211 bytes
// Name:    FUN_1400ba810
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1400b7600, FUN_1450e62f0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 * FUN_1400ba810(undefined8 *param_1,longlong param_2)

{
  uint uVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  byte bVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  FUN_1400b7600();
  *param_1 = &UNK_14646f1b0;
  param_1[0x28] = param_2;
  *(byte *)((longlong)param_1 + 0x123) = *(byte *)((longlong)param_1 + 0x123) | 0x40;
  if (*(longlong *)(param_2 + 0xe0) != 0) {
    uVar1 = *(uint *)(*(longlong *)(param_2 + 0xe0) + 0xc0);
    plVar3 = *(longlong **)((ulonglong)(uVar1 >> 0x11 & 0x1f) * 8 + 0x14abbe7c0);
    uVar2 = *(uint *)(plVar3[5] + (ulonglong)(uVar1 & 0x1ffff) * 4);
    uVar6 = 0;
    uVar7 = (ulonglong)((uVar1 & 0x1ffff) * (int)plVar3[1]) + *plVar3;
    if (uVar1 >> 0x16 != (uVar2 >> 0x11 & 0x3ff) ||
        (uVar2 & *(uint *)(plVar3 + 6)) != *(uint *)(plVar3 + 6)) {
      uVar7 = uVar6;
    }
    lVar4 = *(longlong *)(uVar7 + 0x20);
    if (lVar4 == 0) goto LAB_1400ba8c4;
    if ((*(byte *)(lVar4 + 0x98) & 0x10) != 0) {
      bVar5 = FUN_1450e62f0(*(undefined4 *)(lVar4 + 0x58),
                            CONCAT71((int7)((ulonglong)lVar4 >> 8),*(undefined1 *)(lVar4 + 0x84)));
      uVar6 = (ulonglong)(bVar5 ^ 1);
      goto LAB_1400ba8c4;
    }
  }
  uVar6 = 0;
LAB_1400ba8c4:
  *(byte *)((longlong)param_1 + 0x12a) = *(byte *)((longlong)param_1 + 0x12a) & 0xfe | (byte)uVar6;
  return param_1;
}

