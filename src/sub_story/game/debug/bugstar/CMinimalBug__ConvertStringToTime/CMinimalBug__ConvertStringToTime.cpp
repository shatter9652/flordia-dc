// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1441f59c0  size: 404 bytes
// Name:    CMinimalBug::ConvertStringToTime
// Subsystem: core
// Class:   CMinimalBug
//
// Evidence:
//   GTAVSRC: CMinimalBug::ConvertStringToTime  (game/debug/bugstar/MinimalBug.cpp)
//   literal: %d-%d-%dT%d:%d:%dZ
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1412da520
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"
#include "gta6decomp/CMinimalBug.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool CMinimalBug__ConvertStringToTime
               (longlong param_1,undefined4 *param_2,int *param_3,int *param_4,uint *param_5,
               uint *param_6,uint *param_7,uint *param_8)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  float fVar4;
  float fStack_44;
  
  *param_4 = 0;
  *param_3 = 0;
  *param_2 = 0;
  *param_8 = 0;
  *param_7 = 0;
  *param_6 = 0;
  *param_5 = 0;
  fStack_44 = 0.0;
  if (param_1 == 0) {
    return false;
  }
  lVar2 = func_0x000145f407f0();
  if ((lVar2 != 0) && (*(char *)(param_1 + -1 + lVar2) == 'Z')) {
    lVar2 = func_0x000145f40590(param_1,0x2e);
    if ((lVar2 == 0) && (lVar2 = func_0x000145f40590(param_1,0x2c), lVar2 == 0)) {
      iVar1 = FUN_1412da520(param_1,&UNK_14678626d,param_2,param_3,param_4,param_5,param_6,param_7);
      if (iVar1 != 6) {
        return false;
      }
    }
    else {
      iVar1 = FUN_1412da520(param_1,&UNK_146786253,param_2,param_3,param_4,param_5,param_6,
                            &fStack_44);
      if (iVar1 != 6) {
        return false;
      }
      fVar4 = fStack_44 * _DAT_146159c28 + _DAT_146161654;
      *param_7 = (uint)(longlong)(fStack_44 + _DAT_145fc6f78);
      uVar3 = (ulonglong)fVar4;
      *param_8 = (int)uVar3 + (int)((uVar3 & 0xffffffff) / 1000) * -1000;
    }
    if (*param_3 - 1U < 0xc) {
      if (0x1e < *param_4 - 1U) {
        return false;
      }
      if (0x17 < *param_5) {
        return false;
      }
      if (0x3b < *param_6) {
        return false;
      }
      if (*param_7 < 0x3c) {
        return *param_8 < 1000;
      }
      return false;
    }
  }
  return false;
}

