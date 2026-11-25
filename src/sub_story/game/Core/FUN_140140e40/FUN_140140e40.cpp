// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140140e40  size: 312 bytes
// Name:    FUN_140140e40
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_142ba2590, FUN_14556d870
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140140e40(longlong param_1,undefined4 param_2,uint param_3)

{
  undefined8 *puVar1;
  char cVar2;
  longlong lStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [16];
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [16];
  longlong lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  uint uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 uStack_20;
  
  auStack_68._4_4_ = _DAT_14615af04;
  auStack_68._0_4_ = _DAT_14615af04;
  auStack_68._8_4_ = _DAT_14615af04;
  auStack_68._12_4_ = _DAT_14615af04;
  auStack_88._0_12_ = ZEXT812(0);
  auStack_88._12_4_ = 0;
  lStack_58 = _DAT_145fc6ee0;
  uStack_50 = _UNK_145fc6ee8;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_2c = 0x11;
  uStack_28 = 0;
  lStack_98 = _DAT_145fc6ee0;
  uStack_90 = _UNK_145fc6ee8;
  auStack_78._0_8_ = CONCAT44(_DAT_145fc6ed8,_DAT_145fc6ed8);
  auStack_78._8_4_ = _DAT_145fc6ed8;
  auStack_78._12_4_ = _DAT_145fc6ed8;
  uStack_34 = param_2;
  cVar2 = FUN_142ba2590(**(undefined8 **)(*(longlong *)(param_1 + 0xc0) + 8),auStack_78._0_8_,
                        auStack_68,1,&lStack_98,0,0,0);
  if (cVar2 != '\0') {
    if ((int)param_3 < 4) {
      param_1 = param_1 + 0x1a8;
    }
    else if (param_3 < 6) {
      param_1 = param_1 + 600;
    }
    else {
      if (8 < param_3) {
        return;
      }
      param_1 = param_1 + 0x248;
    }
    uStack_2c = param_3;
    FUN_14556d870(param_1,&lStack_98);
    puVar1 = (undefined8 *)
             ((ulonglong)((uStack_90._4_4_ & 0xf) * 0x60) + 0x20 +
             (ulonglong)(uStack_90._4_4_ >> 4) * 0x610 + lStack_98);
    puVar1[6] = CONCAT44(uStack_34,uStack_38);
    puVar1[7] = CONCAT44(uStack_2c,uStack_30);
    puVar1[8] = CONCAT44(uStack_24,uStack_28);
    puVar1[9] = uStack_20;
    puVar1[4] = uStack_48;
    puVar1[5] = CONCAT44(uStack_3c,uStack_40);
    puVar1[6] = CONCAT44(uStack_34,uStack_38);
    puVar1[7] = CONCAT44(uStack_2c,uStack_30);
    *puVar1 = auStack_68._0_8_;
    puVar1[1] = auStack_68._8_8_;
    puVar1[2] = lStack_58;
    puVar1[3] = uStack_50;
  }
  return;
}

