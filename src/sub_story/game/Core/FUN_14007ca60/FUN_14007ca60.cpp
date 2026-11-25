// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14007ca60  size: 161 bytes
// Name:    FUN_14007ca60
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144eef480
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14007ca60(undefined8 *param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong unaff_GS_OFFSET;
  undefined1 in_ZMM6 [64];
  undefined1 auVar3 [64];
  
  FUN_144eef480(param_1,3);
  uVar1 = _DAT_145fc6ed8;
  lVar2 = 0x4a;
  *param_1 = &UNK_1465f4d30;
  auVar3._16_48_ = in_ZMM6._16_48_;
  auVar3._0_16_ = vcvtps2ph_f16c(ZEXT416(uVar1),3);
  do {
    if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8)
                 + 8) == '\0') {
      func_0x0001455db994();
    }
    *(short *)((longlong)param_1 + lVar2 + -2) = auVar3._0_2_;
    *(undefined2 *)((longlong)param_1 + lVar2) = 0;
    *(undefined8 *)((longlong)param_1 + lVar2 + -10) = 0;
    lVar2 = lVar2 + 0x10;
  } while (lVar2 != 0x24a);
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x49) = 0xffffffff;
  return param_1;
}

