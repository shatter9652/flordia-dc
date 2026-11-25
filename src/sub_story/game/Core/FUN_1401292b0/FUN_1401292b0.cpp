// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401292b0  size: 479 bytes
// Name:    FUN_1401292b0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144fd5fd0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_1401292b0(undefined4 param_1)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  cVar2 = func_0x000144e70150();
  bVar4 = 1;
  if (cVar2 == '\0') {
    bVar3 = FUN_144fd5fd0(param_1);
    if (_DAT_14ab5d128 == bVar3) {
      plVar1 = *(longlong **)(_DAT_14abcd210 + (ulonglong)bVar3 * 8);
      func_0x000144da2470((int)plVar1[1],*(undefined4 *)((longlong)plVar1 + 0xc),&uStack_1c,param_1)
      ;
      cVar2 = (**(code **)(*plVar1 + 0x100))(plVar1,uStack_1c);
      bVar4 = 2;
      if (cVar2 != '\0') {
        bVar4 = 5;
      }
    }
    else if (_DAT_14a02423c == bVar3) {
      func_0x000144da2470(_DAT_14a024238,(ulonglong)bVar3,&uStack_20,param_1);
      lVar6 = func_0x000144da24a0(&DAT_14a024230,uStack_20);
      bVar4 = ((*(uint *)(lVar6 + 0x24) >> 0x1b & 1) != 0) + 7;
    }
    else {
      bVar4 = 6;
      uVar7 = (uint)bVar3;
      if (((_DAT_147c21ad4 != uVar7) && (bVar4 = 0xb, _DAT_14abcc4c4 != uVar7)) &&
         (bVar4 = 9, _DAT_147bba9a4 != uVar7)) {
        uVar5 = (**(code **)(*_DAT_146c32280 + 0x28))();
        bVar4 = 0xc;
        if ((((((uVar5 != uVar7) && (bVar4 = 0x10, _DAT_14764a92c != uVar7)) &&
              ((_DAT_14a9e8898 == 0 || (bVar4 = 0xd, *(uint *)(_DAT_14a9e8898 + 0xc) != uVar7)))) &&
             ((_DAT_14a9e88a0 == 0 || (bVar4 = 0xd, *(uint *)(_DAT_14a9e88a0 + 0xc) != uVar7)))) &&
            ((_DAT_1491f9190 == 0 || (bVar4 = 0xd, *(uint *)(_DAT_1491f9190 + 0xc) != uVar7)))) &&
           ((((bVar4 = 10, _DAT_1493f3674 != uVar7 && (_DAT_14a955184 != uVar7)) &&
             (_DAT_14ab3ce04 != uVar7)) &&
            ((_DAT_14800481c != uVar7 && (bVar4 = 0, _DAT_14aad3dac == uVar7)))))) {
          bVar4 = func_0x000144e685d0(param_1);
          bVar4 = bVar4 | 0xe;
        }
      }
    }
  }
  return bVar4;
}

