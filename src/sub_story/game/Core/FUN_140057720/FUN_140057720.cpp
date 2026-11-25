// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140057720  size: 168 bytes
// Name:    FUN_140057720
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140038190
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140057720(longlong param_1,undefined8 param_2,undefined4 *param_3,undefined4 *param_4)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  short sVar3;
  
  *param_3 = 0x447a0000;
  *param_4 = 0x447a0000;
  if (param_1 != 0) {
    sVar3 = FUN_140038190();
    if (sVar3 != -1) {
      if (*(longlong *)(param_1 + 0x1a8) != 0) {
        auVar2 = vcvtph2ps_f16c(ZEXT216(*(ushort *)
                                         (*(longlong *)(*(longlong *)(param_1 + 0x1a8) + 0x20) +
                                          0x32 + (longlong)sVar3 * 0x70)));
        *param_4 = auVar2._0_4_;
        *param_3 = auVar2._0_4_;
      }
      lVar1 = *(longlong *)(param_1 + 0x170);
      if (lVar1 != 0) {
        sVar3 = *(short *)(*(longlong *)(lVar1 + 0x180) + (ulonglong)(uint)(int)sVar3 * 2);
        if (*(longlong *)(lVar1 + 0x158) != 0 && sVar3 != -1) {
          *param_3 = *(undefined4 *)
                      (*(longlong *)(lVar1 + 0x158) + (ulonglong)(uint)(int)sVar3 * 0x18);
        }
      }
    }
  }
  return;
}

