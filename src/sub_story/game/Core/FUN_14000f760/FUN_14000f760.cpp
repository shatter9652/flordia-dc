// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14000f760  size: 73 bytes
// Name:    FUN_14000f760
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14000f760(undefined8 param_1,undefined1 (*param_2) [16])

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  auVar3._4_4_ = _DAT_145fc6f70;
  auVar3._0_4_ = _DAT_145fc6f70;
  auVar3._8_4_ = _DAT_145fc6f70;
  auVar3._12_4_ = _DAT_145fc6f70;
  auVar1._0_4_ = _DAT_145fc6f4c & *(uint *)*param_2;
  auVar1._4_4_ = _DAT_145fc6f4c & *(uint *)(*param_2 + 4);
  auVar1._8_4_ = _DAT_145fc6f4c & *(uint *)(*param_2 + 8);
  auVar1._12_4_ = _DAT_145fc6f4c & *(uint *)(*param_2 + 0xc);
  auVar1 = vcmpps_avx(auVar1,auVar3,0x11);
  auVar3 = vpcmpeqd_avx(auVar3,auVar3);
  auVar3 = auVar3 & ~auVar1;
  if ((((SUB161(auVar3 >> 0x1f,0) & 1) != 0 || (SUB161(auVar3 >> 0x3f,0) & 1) != 0) ||
      (SUB161(auVar3 >> 0x5f,0) & 1) != 0) || auVar3[0xf] < '\0') {
    func_0x000145f40580(auVar1._0_8_,0,0x400);
    auVar2._0_12_ = ZEXT812(0);
    auVar2._12_4_ = 0;
    *param_2 = auVar2;
  }
  return;
}

