// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140109cd0  size: 81 bytes
// Name:    FUN_140109cd0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140109cd0(undefined8 *param_1)

{
  longlong lVar1;
  longlong unaff_GS_OFFSET;
  undefined8 auStack_80 [8];
  undefined8 uStack_40;
  
  *param_1 = &UNK_1461cec50;
  lVar1 = param_1[2];
  if (lVar1 != 0) {
    uStack_40 = 0x140109cf4;
    func_0x000140109d30(lVar1);
    uStack_40 = 0x140109d01;
    func_0x000144d9c130(lVar1,0x28);
  }
  param_1[2] = 0;
  *param_1 = &UNK_146209118;
  if (param_1[1] != 0) {
    auStack_80[0] = 0;
    FUN_140108550(param_1[1],auStack_80);
    FUN_144faf900(auStack_80);
    *(undefined8 **)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x880) = param_1;
  }
  return;
}

