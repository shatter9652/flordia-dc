// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400dddc0  size: 3302 bytes
// Name:    FUN_1400dddc0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1400d0240, FUN_1451ae520
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400dddc0(undefined8 param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  undefined4 in_stack_00000060;
  undefined8 *puStack_e48;
  undefined8 uStack_e40;
  undefined8 uStack_e38;
  undefined8 uStack_e30;
  uint uStack_e24;
  undefined1 auStack_e20 [1024];
  undefined8 uStack_a20;
  undefined8 uStack_a18;
  undefined8 uStack_a10;
  undefined8 uStack_a08;
  undefined8 uStack_a00;
  undefined8 uStack_9f8;
  undefined8 uStack_9f0;
  undefined8 uStack_9e8;
  undefined8 uStack_9e0;
  undefined8 uStack_9bb;
  undefined8 uStack_9a8;
  undefined8 uStack_9a0;
  undefined8 uStack_998;
  undefined8 uStack_990;
  undefined8 uStack_988;
  undefined8 uStack_980;
  undefined8 uStack_978;
  undefined8 uStack_970;
  undefined8 uStack_968;
  undefined8 uStack_960;
  undefined8 *puStack_958;
  undefined8 uStack_950;
  undefined8 uStack_948;
  undefined8 uStack_940;
  undefined8 uStack_938;
  undefined1 auStack_930 [1024];
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4cb;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined4 uStack_348;
  undefined1 auStack_340 [16];
  undefined1 *puStack_330;
  undefined1 auStack_328 [48];
  undefined8 uStack_2f8;
  undefined4 uStack_f0;
  
  puStack_330 = auStack_328;
  uStack_348 = 0;
  auStack_340._0_12_ = ZEXT412(6) << 0x40;
  auStack_340._12_4_ = 0;
  uStack_2f8 = 0x80;
  uStack_f0 = 0;
  FUN_1451ae520(&puStack_e48);
  if (*(char *)((longlong)puStack_e48 + 0x1e) == '\x03') {
    puStack_958 = puStack_e48;
    uStack_950 = uStack_e40;
    uStack_948 = uStack_e38;
    uStack_940 = uStack_e30;
    uStack_938 = 0x100;
    if ((ulonglong)uStack_e24 != 0) {
      if (0x100 < uStack_e24) {
        uStack_938 = (ulonglong)uStack_e24;
      }
      func_0x000145f40560(auStack_930,auStack_e20,(ulonglong)uStack_e24 << 2);
      uStack_938 = CONCAT44(uStack_e24,(undefined4)uStack_938);
    }
    uStack_510 = uStack_a00;
    uStack_508 = uStack_9f8;
    uStack_500 = uStack_9f0;
    uStack_4f8 = uStack_9e8;
    uStack_4cb = uStack_9bb;
    uStack_4f0 = uStack_9e0;
    uStack_530 = uStack_a20;
    uStack_528 = uStack_a18;
    uStack_520 = uStack_a10;
    uStack_518 = uStack_a08;
    uStack_4b8 = uStack_9a8;
    uStack_4b0 = uStack_9a0;
    uStack_4a8 = uStack_998;
    uStack_4a0 = uStack_990;
    uStack_498 = uStack_988;
    uStack_490 = uStack_980;
    uStack_488 = uStack_978;
    uStack_480 = uStack_970;
    uStack_478 = uStack_968;
    uStack_470 = uStack_960;
  }
  else {
    func_0x000145f40560(&puStack_958,&puStack_e48,0x4f0);
  }
  puStack_958 = &uStack_4b8;
  FUN_1400d0240(param_1,&puStack_958,param_2);
  auVar1._4_4_ = _DAT_14615a290;
  auVar1._0_4_ = _DAT_14615a290;
  auVar1._8_4_ = _DAT_14615a290;
  auVar1._12_4_ = _DAT_14615a290;
  vrcpps_avx(auVar1);
  func_0x000144f653e0(CONCAT44(_DAT_145fc6ed8,_DAT_145fc6ed8),in_stack_00000060,0);
                    /* WARNING: Could not recover jumptable at 0x0001400de02d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_14675792c + _UNK_14675792c))();
  return;
}

