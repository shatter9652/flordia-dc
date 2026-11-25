// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140035f60  size: 101 bytes
// Name:    FUN_140035f60
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140035f60(longlong param_1,code *param_2,longlong param_3)

{
  undefined4 *puVar1;
  undefined4 uStack_10;
  undefined2 uStack_c;
  undefined4 uStack_8;
  undefined2 uStack_4;
  
  puVar1 = (undefined4 *)(param_3 + 0x12);
  if (param_1 == 0) {
    uStack_c = *(undefined2 *)(param_3 + 0x16);
    uStack_10 = *puVar1;
    (*param_2)(*(undefined8 *)(param_3 + 8),&uStack_10,CONCAT62((int6)((ulonglong)puVar1 >> 0x10),1)
               ,0);
  }
  else {
    uStack_4 = *(undefined2 *)(param_3 + 0x16);
    uStack_8 = *puVar1;
    (*param_2)(param_1,*(undefined8 *)(param_3 + 8),&uStack_8,
               CONCAT62((int6)((ulonglong)&uStack_8 >> 0x10),1),0);
  }
  return;
}

