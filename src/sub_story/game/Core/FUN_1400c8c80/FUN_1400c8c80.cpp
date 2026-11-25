// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400c8c80  size: 124 bytes
// Name:    FUN_1400c8c80
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144e40a00
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


ulonglong FUN_1400c8c80(longlong param_1,int param_2)

{
  undefined8 unaff_RSI;
  ulonglong uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  
  if ((*(byte *)(param_1 + 0xf0) & 8) == 0) {
    uVar1 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
    if (((param_2 != 2) && (*(char *)(param_1 + 0xe0) == '\x01')) ||
       (*(longlong *)(param_1 + 0x38) == 0)) goto LAB_1400c8ca1;
    if (((*(byte *)(param_1 + 0xf0) & 4) == 0) && ((*(byte *)(param_1 + 0x140) & 0x20) == 0)) {
      if (*(longlong *)(param_1 + 8) == 0) goto LAB_1400c8ca1;
      FUN_144e40a00(*(longlong *)(param_1 + 8),&fStack_28);
      auVar3._0_12_ = ZEXT812(0);
      auVar3._12_4_ = 0;
      auVar2._0_4_ = fStack_28 * fStack_28;
      auVar2._4_4_ = fStack_24 * fStack_24;
      auVar2._8_4_ = fStack_20 * fStack_20;
      auVar2._12_4_ = fStack_1c * fStack_1c;
      auVar2 = vblendps_avx(auVar2,auVar3,8);
      auVar2 = vhaddps_avx(auVar2,auVar2);
      auVar2 = vhaddps_avx(auVar2,auVar2);
      if (auVar2._0_4_ <= 0.0) goto LAB_1400c8ca1;
    }
  }
  uVar1 = 0;
LAB_1400c8ca1:
  return uVar1 & 0xffffffff;
}

