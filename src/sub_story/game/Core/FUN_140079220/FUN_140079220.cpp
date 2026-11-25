// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140079220  size: 66 bytes
// Name:    FUN_140079220
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_140079220(longlong param_1,char param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  float fVar3;
  float extraout_XMM0_Da;
  
  if (param_2 == '\0') {
    param_2 = '\0';
    lVar1 = func_0x000144edcaf0();
  }
  else {
    lVar1 = param_1 + 0x1490;
  }
  if (*(uint *)(lVar1 + 0xc) != 5) {
    return 2 < *(uint *)(lVar1 + 0xc);
  }
  if (param_2 == '\0') {
    uVar2 = func_0x000144edcaf0();
    FUN_144e2d5a0(uVar2,*(ulonglong *)(param_1 + 8) & 0xfffffffffffffff0,&stack0xfffffffffffffff4,0,
                  0);
    fVar3 = extraout_XMM0_Da;
  }
  else {
    fVar3 = *(float *)(param_1 + 0x14a0);
  }
  return _UNK_1461618b4 <= fVar3;
}

