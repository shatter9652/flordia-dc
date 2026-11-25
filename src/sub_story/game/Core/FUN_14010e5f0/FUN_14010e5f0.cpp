// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14010e5f0  size: 301 bytes
// Name:    FUN_14010e5f0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14406f6f0, FUN_144fb5b70, FUN_144ed3810
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14010e5f0(longlong param_1,longlong param_2,byte param_3)

{
  ushort uVar1;
  longlong unaff_GS_OFFSET;
  undefined1 auStack_48 [16];
  undefined4 uStack_38;
  undefined2 uStack_30;
  ushort uStack_2e;
  undefined4 uStack_28;
  
  auStack_48._0_12_ = ZEXT812(0);
  auStack_48._12_4_ = 0;
  uStack_30 = 0;
  uStack_38 = 0;
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    func_0x0001455db994();
  }
  if (*(longlong *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1448) == 0) {
    uStack_2e = 0;
  }
  uStack_28 = 0;
  if (param_2 == 0) {
    uStack_2e = 0;
  }
  else {
    FUN_144fb5b70(auStack_48,param_2,1);
  }
  uStack_2e = uStack_2e | (ushort)param_3 << 4 | 8;
  if (*(longlong *)(param_1 + 0x28) == 0) {
    (**(code **)(param_1 + 0x30))(auStack_48,1);
  }
  else {
    (**(code **)(param_1 + 0x30))(*(longlong *)(param_1 + 0x28),auStack_48,1);
  }
  uVar1 = *(ushort *)(param_1 + 0x4a0);
  if (uVar1 == *(ushort *)(param_1 + 0x4a2)) {
    FUN_14406f6f0(param_1 + 0x498,uVar1 + 0x10);
    uVar1 = *(ushort *)(param_1 + 0x4a0);
  }
  *(ushort *)(param_1 + 0x4a0) = uVar1 + 1;
  *(byte *)(*(longlong *)(param_1 + 0x498) + (ulonglong)uVar1) = (param_3 ^ 1) << 5 | 0x5d;
  FUN_144ed3810(auStack_48);
  return;
}

