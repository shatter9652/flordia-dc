// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401bd110  size: 221 bytes
// Name:    FUN_1401bd110
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1401bd1f0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1401bd110(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong unaff_GS_OFFSET;
  undefined1 auVar2 [16];
  
  auVar2._4_4_ = _DAT_145fc6f48;
  auVar2._0_4_ = _DAT_145fc6f48;
  auVar2._8_4_ = _DAT_145fc6f48;
  auVar2._12_4_ = _DAT_145fc6f48;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0xc) = 0;
  uVar1 = vmovlps_avx(auVar2);
  param_1[2] = uVar1;
  *(undefined4 *)(param_1 + 3) = 0xbf800000;
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    func_0x0001455db994();
  }
  if (*(longlong *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1448) == 0) {
    *(undefined2 *)((longlong)param_1 + 0x1c) = 0;
  }
  uVar1 = _UNK_146159d68;
  param_1[4] = _DAT_146159d60;
  param_1[5] = uVar1;
  *(byte *)(param_1 + 6) = *(byte *)(param_1 + 6) & 0xc0 | 2;
  FUN_1401bd1f0(param_1 + 7,0,0);
  FUN_1401bd1f0(param_1 + 9,0,0);
  FUN_1401bd1f0(param_1 + 0xb,0,0);
  *(undefined1 (*) [32])(param_1 + 0xd) = ZEXT1232(ZEXT812(0));
  param_1[0x11] = 0xffffffffffffffff;
  *(byte *)(param_1 + 0x12) = *(byte *)(param_1 + 0x12) & 0xfe;
  return param_1;
}

