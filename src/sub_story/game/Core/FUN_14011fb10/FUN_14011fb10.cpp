// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14011fb10  size: 55 bytes
// Name:    FUN_14011fb10
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_14011fb10(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  LOCK();
  bVar3 = param_1 != _DAT_14745563c;
  iVar1 = param_2;
  iVar2 = param_1;
  if (bVar3) {
    iVar1 = _DAT_14745563c;
    iVar2 = _DAT_14745563c;
  }
  _DAT_14745563c = iVar1;
  UNLOCK();
  while (bVar3) {
    func_0x00014092eca0(1);
    LOCK();
    bVar3 = param_1 != _DAT_14745563c;
    iVar1 = param_2;
    iVar2 = param_1;
    if (bVar3) {
      iVar1 = _DAT_14745563c;
      iVar2 = _DAT_14745563c;
    }
    _DAT_14745563c = iVar1;
    UNLOCK();
  }
  return iVar2;
}

