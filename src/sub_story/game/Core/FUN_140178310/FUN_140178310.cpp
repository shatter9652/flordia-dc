// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140178310  size: 250 bytes
// Name:    FUN_140178310
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1443c62e0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140178310(longlong param_1,uint param_2,int param_3,int param_4,undefined8 param_5,
                  uint param_6,undefined8 param_7)

{
  int iVar1;
  longlong unaff_GS_OFFSET;
  undefined1 uStack_69;
  undefined4 uStack_68;
  uint uStack_64;
  longlong lStack_60;
  longlong lStack_58;
  longlong *plStack_50;
  undefined8 uStack_48;
  undefined4 *puStack_40;
  undefined4 *puStack_38;
  undefined1 *puStack_30;
  uint *puStack_28;
  undefined8 uStack_20;
  
  if ((param_6 >> 8 & (uint)*(byte *)(param_1 + 0x34)) != 0) {
    uStack_68 = 0xffffffff;
    lStack_60 = *(longlong *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1298);
    if ((lStack_60 != 0) && ((*(byte *)(lStack_60 + 0x38) & 1) == 0)) {
      uStack_68 = *(undefined4 *)(lStack_60 + 0x3c);
    }
    plStack_50 = &lStack_60;
    puStack_40 = &uStack_68;
    uStack_69 = (param_2 & 3) == 1;
    puStack_30 = &uStack_69;
    uStack_48 = param_5;
    puStack_38 = &param_6;
    puStack_28 = &uStack_64;
    uStack_20 = param_7;
    uStack_64 = param_2;
    lStack_58 = param_1;
    iVar1 = func_0x0001455cc240();
    if (iVar1 == -1) {
      if (param_3 < param_4) {
        do {
          FUN_1443c62e0(&lStack_58,param_3);
          param_3 = param_3 + 1;
        } while (param_4 != param_3);
      }
    }
    else {
      FUN_1443c62e0(&lStack_58,iVar1);
    }
  }
  return;
}

