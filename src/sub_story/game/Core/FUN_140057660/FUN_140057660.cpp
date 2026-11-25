// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140057660  size: 183 bytes
// Name:    FUN_140057660
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1418ac660, FUN_144e9a620
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_140057660(undefined8 param_1,byte *param_2,float param_3,longlong param_4)

{
  float fVar1;
  undefined8 in_RAX;
  ulonglong uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined7 uVar5;
  undefined1 auVar6 [64];
  undefined1 aauStack_48 [3] [16];
  
  uVar2 = CONCAT71((int7)((ulonglong)in_RAX >> 8),*param_2);
  if (*param_2 == 0) {
    lVar3 = FUN_1418ac660();
    if (lVar3 != 0) {
      fVar1 = *(float *)(lVar3 + 0xa8);
      *(float *)(param_2 + 4) = fVar1;
      uVar2 = CONCAT71((int7)((ulonglong)lVar3 >> 8),*(byte *)(lVar3 + 0x8c));
      param_2[1] = *(byte *)(lVar3 + 0x8c);
      *param_2 = 1;
      goto LAB_1400576b2;
    }
    uVar2 = (ulonglong)*param_2;
  }
  if ((uVar2 & 1) == 0) {
    return 0;
  }
  fVar1 = *(float *)(param_2 + 4);
LAB_1400576b2:
  auVar6 = ZEXT464((uint)fVar1);
  if (param_4 == 0) {
    uVar5 = (undefined7)(uVar2 >> 8);
    uVar4 = CONCAT71(uVar5,1);
    if ((param_2[1] != 0) && ((fVar1 != 0.0 || (NAN(fVar1))))) {
      uVar4 = CONCAT71(uVar5,param_3 <= fVar1 * fVar1);
    }
  }
  else {
    func_0x000144f2b0e0(aauStack_48);
    vinsertps_avx(aauStack_48[0],auVar6._0_16_,0x30);
    uVar4 = FUN_144e9a620(param_4);
  }
  return uVar4;
}

