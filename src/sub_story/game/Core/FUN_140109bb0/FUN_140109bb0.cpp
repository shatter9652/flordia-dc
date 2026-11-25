// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140109bb0  size: 129 bytes
// Name:    FUN_140109bb0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 * FUN_140109bb0(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  *param_1 = &UNK_1461fe2f0;
  uVar1 = *(uint *)(param_1 + 4);
  if (uVar1 != 0) {
    lVar2 = 0;
    uVar3 = 0;
    do {
      if (*(longlong *)(param_1[2] + lVar2) != 0) {
        func_0x000144d9c130();
        uVar1 = *(uint *)(param_1 + 4);
      }
      uVar3 = uVar3 + 1;
      lVar2 = lVar2 + 0x10;
    } while (uVar3 < uVar1);
  }
  if (param_1[2] != 0) {
    func_0x000144d9c130();
  }
  if (param_1[3] != 0) {
    func_0x000144d9c130();
  }
  if (param_2 != 0) {
    func_0x000144d9c130(param_1,0x28);
  }
  return param_1;
}

