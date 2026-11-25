// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14011fa50  size: 165 bytes
// Name:    FUN_14011fa50
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140126880, FUN_14011fb10, FUN_1456a6e00
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14011fa50(void)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  
  cVar4 = func_0x00014011fb00(1,2);
  plVar3 = _DAT_147455658;
  plVar2 = _DAT_147455650;
  plVar1 = _DAT_147455640;
  if (cVar4 == '\0') {
    return;
  }
  LOCK();
  _DAT_147455640 = (longlong *)0x0;
  UNLOCK();
  LOCK();
  _DAT_147455658 = (longlong *)0x0;
  UNLOCK();
  LOCK();
  _DAT_147455650 = (longlong *)0x0;
  UNLOCK();
  FUN_140126880();
  if (plVar1 != (longlong *)0x0) {
    *(undefined4 *)(plVar1 + 4) = 0x80000000;
    (**(code **)(*plVar1 + 8))(plVar1);
  }
  if (plVar3 != (longlong *)0x0) {
    *(undefined4 *)(plVar3 + 4) = 0x80000000;
    (**(code **)(*plVar3 + 8))(plVar3);
  }
  if (plVar2 != (longlong *)0x0) {
    *(undefined4 *)(plVar2 + 4) = 0x80000000;
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  FUN_1456a6e00();
  FUN_14011fb10(2,3);
  while (_DAT_14745563c != 0) {
    func_0x00014092eca0(1);
    func_0x000140126850();
  }
  return;
}

