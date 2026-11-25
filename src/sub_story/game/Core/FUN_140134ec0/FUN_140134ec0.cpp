// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140134ec0  size: 102 bytes
// Name:    FUN_140134ec0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140134ec0(longlong param_1,longlong param_2,code *param_3)

{
  undefined4 uStack_10;
  undefined2 uStack_c;
  undefined4 uStack_8;
  undefined2 uStack_4;
  
  if (param_2 == 0) {
    uStack_c = *(undefined2 *)(param_1 + 0x16);
    uStack_10 = *(undefined4 *)(param_1 + 0x12);
    (*param_3)(*(undefined8 *)(param_1 + 8),&uStack_10,
               CONCAT62((int6)((ulonglong)&uStack_10 >> 0x10),1),
               CONCAT71((uint7)(byte)((ushort)uStack_c >> 8),1));
  }
  else {
    uStack_4 = *(undefined2 *)(param_1 + 0x16);
    uStack_8 = *(undefined4 *)(param_1 + 0x12);
    (*param_3)(param_2,*(undefined8 *)(param_1 + 8),&uStack_8,1,1);
  }
  return;
}

