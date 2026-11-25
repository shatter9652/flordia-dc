// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 141b0bdc0  size: 239 bytes
// Name:    netIpV4Address::FromString
// Subsystem: core
// Class:   netIpV4Address
//
// Evidence:
//   GTAVSRC: netIpV4Address::FromString  (rage/base/src/net/netaddress.cpp)
//   literal: %u.%u.%u.%u%n
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_141b0beb0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"
#include "gta6decomp/netIpV4Address.h"


bool netIpV4Address__FromString(uint *param_1,char *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined *puVar2;
  bool bVar3;
  byte abStack_28 [4];
  uint uStack_24;
  uint uStack_20;
  int iStack_1c;
  
  func_0x000144f1fc60();
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 0;
  }
  if ((param_2 == (char *)0x0) || (*param_2 == '\0')) {
    bVar3 = false;
  }
  else {
    if (param_3 == (undefined4 *)0x0) {
      puVar2 = &UNK_146779861;
    }
    else {
      puVar2 = &UNK_14677f8f8;
    }
    iVar1 = FUN_141b0beb0(param_2,puVar2,&iStack_1c,&uStack_20,&uStack_24,abStack_28);
    bVar3 = iVar1 == 4;
    if (bVar3) {
      *param_1 = (uint)abStack_28[0] |
                 (uStack_24 & 0xff) << 8 | (uStack_20 & 0xff) << 0x10 | iStack_1c << 0x18;
    }
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = 0;
    }
  }
  return bVar3;
}

