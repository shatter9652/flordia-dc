// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400bf270  size: 373 bytes
// Name:    FUN_1400bf270
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1400bf3f0, FUN_144f51b90, FUN_144f51bd0, FUN_1400bf480, FUN_144f51d50, FUN_1452578f0, FUN_144f51c30
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400bf270(void)

{
  int iVar1;
  int iVar2;
  char cVar3;
  ulonglong uVar4;
  char cVar5;
  ulonglong uVar6;
  
  iVar2 = _DAT_14a1e8a14;
  iVar1 = _DAT_14a1e8a10;
  _DAT_14a1e8a14 = 0;
  _DAT_14a1e8a10 = _DAT_14ab5cdd0 / 2;
  DAT_14a1e8ac1 = FUN_1400bf480();
  _DAT_14a1e9dac = 0;
  _DAT_14a1e8acc = 0;
  _DAT_14a1e943c = 0;
  _DAT_14a1ea71c = 0;
  _DAT_14a1eb08c = 0;
  FUN_144f51d50(0x14a1e8a18,0x14a1e8ac8);
  FUN_144f51c30();
  cVar3 = DAT_14a1e8ac0;
  DAT_14a1e8ac0 = FUN_1400bf3f0();
  cVar5 = '\0';
  if (DAT_14a1e8ac0 != '\0') {
    FUN_144f51d50(0x14a1e8a68,0x14a1ea718);
    FUN_144f51bd0(0x14a1e8ac8,0x14a1ea718);
    cVar5 = DAT_14a1e8ac0;
  }
  DAT_14a1e8ac1 =
       cVar5 != cVar3 | (iVar2 != _DAT_14a1e8a14 || iVar1 != _DAT_14a1e8a10) | DAT_14a1e8ac1;
  func_0x00014040ccf0(0,0x14a1e8ac8);
  func_0x00014040ccf0(1,0x14a1e9438);
  FUN_1452578f0(0x14a1eb088,0x14a1e8ac8);
  FUN_144f51bd0(0x14a1eb088,0x14a1e9438);
  if (DAT_14a1e8ac0 == '\x01') {
    FUN_144f51bd0(0x14a1e8ac8,0x14a1ea718);
  }
  func_0x00014040ccf0(2,0x14a1ea718);
  FUN_144f51b90(0x14a1e9da8,0x14a1e8ac8);
  uVar4 = (ulonglong)_DAT_14a1e943c;
  if (uVar4 != 0) {
    uVar6 = 0;
    do {
      FUN_140058f30(0x14a1e9da8,*(undefined4 *)(lRam000000014a1e9440 + uVar6 * 8));
      uVar6 = uVar6 + 1;
    } while (uVar4 != uVar6);
  }
  return;
}

