// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140049190  size: 45 bytes
// Name:    FUN_140049190
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


ulonglong FUN_140049190(longlong *param_1,longlong param_2)

{
  uint *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined4 uStack_14;
  
  func_0x0001404610e0(&uStack_14,*(undefined8 *)(param_2 + 0x10008));
  puVar1 = (uint *)(**(code **)(*param_1 + 0x3f8))(param_1,0xba180afb232d1b4b,uStack_14);
  if (puVar1 == (uint *)0x0) {
    lVar3 = (**(code **)(*param_1 + 0x3f8))(param_1,0x33f70dfaf2c50989,uStack_14);
    if (lVar3 == 0) {
      lVar3 = (**(code **)(*param_1 + 0x3f8))(param_1,0x4eaa16dd829995bc,uStack_14);
      uVar2 = *(ulonglong *)(lVar3 + 8) & 0xffffffffffff;
    }
    else {
      uVar2 = *(ulonglong *)(lVar3 + 0x10) & 0xfffffffffff;
    }
  }
  else {
    uVar2 = (ulonglong)(puVar1[1] & 0xfffffff0) + (ulonglong)(*puVar1 & 0x7ffffff0);
  }
  return uVar2;
}

