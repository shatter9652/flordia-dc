// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140071140  size: 133 bytes
// Name:    FUN_140071140
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144e40400, FUN_145230430
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140071140(uint *param_1,longlong param_2)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 auStack_28 [20];
  uint uStack_14;
  
  *param_1 = 0xfffcffff;
  uStack_40 = (undefined *)0x14007115d;
  lVar3 = FUN_144e40400(*(undefined4 *)(param_2 + 0x3c4));
  if (lVar3 == 0) {
    uStack_40 = (undefined *)0x14007116a;
    lVar3 = FUN_145230430(param_2);
    if ((lVar3 != 0) && (*(char *)(lVar3 + 0x30) != '\x01')) {
      *param_1 = 0xfffcffff;
      if (lVar3 != 0) {
        uVar2 = *(uint *)(lVar3 + 0xa0);
        *param_1 = uVar2;
        cVar1 = FUN_144d9d7a0(uVar2,uVar2 >> 0x10);
        if ((cVar1 == '\0') && (*(char *)(lVar3 + 0x30) != '\x01')) {
          uStack_38 = *(undefined8 *)(lVar3 + 0x70);
          uStack_30 = *(undefined8 *)(lVar3 + 0x78);
          func_0x000144dc3790(&uStack_38,auStack_28);
          FUN_144dece80((longlong)&uStack_40 + 4,auStack_28,1);
          *param_1 = uStack_40._4_4_;
        }
      }
      return;
    }
    if (*(char *)(param_2 + 0x38c) == '\x01') {
      if (*(char *)(param_2 + 0x400) == '\0') {
        *param_1 = 0xfffcffff;
        uStack_40 = &UNK_1451a1124;
        func_0x000144e3af40();
        if (lRam0000000149f148d8 != 0) {
          uStack_40 = &UNK_1451a114b;
          func_0x000145051b80(&uStack_14,lRam0000000149f148d8,uRam0000000149e5813c);
          *param_1 = uStack_14;
        }
        return;
      }
      uVar2 = *(uint *)(param_2 + 0x3fc);
    }
    else {
      uVar2 = *(uint *)(param_2 + 0x424);
    }
  }
  else {
    uVar2 = *(uint *)(lVar3 + 0x424);
  }
  *param_1 = uVar2;
  return;
}

