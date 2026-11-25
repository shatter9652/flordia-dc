// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1440ec200  size: 189 bytes
// Name:    rlScMembership::GetSubscriptionId
// Subsystem: script
// Class:   rlScMembership
//
// Evidence:
//   GTAVSRC: rlScMembership::GetSubscriptionId  (rage/base/src/rline/scmembership/rlscmembership.cpp)
//   literal: CFQ7TTC0HX8W
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145be9b20, FUN_140004b40
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"
#include "gta6decomp/rlScMembership.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 rlScMembership__GetSubscriptionId(void)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 auStack_170 [48];
  undefined1 auStack_140 [96];
  code *pcStack_e0;
  undefined1 auStack_d0 [88];
  code *pcStack_78;
  undefined1 auStack_70 [96];
  code *pcStack_10;
  
  FUN_145be9b20(auStack_170);
  cVar1 = func_0x00014220ed00(3,auStack_170);
  if (cVar1 == '\0') {
    FUN_140004b40(0x1498f84e0);
    if (_DAT_14aad5e10 == (longlong *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = (**(code **)(*_DAT_14aad5e10 + 0xa8))(_DAT_14aad5e10,&UNK_146786681);
    }
    func_0x000144d9dab0(0x1498f84e0);
  }
  else {
    uVar2 = 0;
  }
  if (pcStack_10 != (code *)0x0) {
    (*pcStack_10)(auStack_70);
  }
  if (pcStack_78 != (code *)0x0) {
    (*pcStack_78)(auStack_d0);
  }
  if (pcStack_e0 != (code *)0x0) {
    (*pcStack_e0)(auStack_140);
  }
  return uVar2;
}

