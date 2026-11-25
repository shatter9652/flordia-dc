// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14010bb10  size: 267 bytes
// Name:    FUN_14010bb10
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144eab380, FUN_144d9d7a0, FUN_144e695f0, FUN_1451a1110
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14010bb10(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  char cVar4;
  char cVar5;
  undefined1 auVar6 [64];
  undefined4 uStack_2c;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined1 extraout_var [56];
  
  uVar1 = *(uint *)(param_1 + 0x7c);
  if ((uVar1 & 8) == 0) {
    uVar2 = *(uint *)(param_1 + 0x80);
    cVar4 = func_0x000140309980(uVar1,uVar2);
    if ((((~uVar1 & 0x180) == 0) && (cVar4 == '\0')) &&
       ((uVar1 & 0x200000) == 0 && (uVar2 & 0x400) == 0)) {
      auVar6._0_8_ = FUN_144eab380(param_1);
      auVar6._8_56_ = extraout_var;
      if (*(int *)(param_1 + 0x84) == 2) {
        auVar3 = vminss_avx(ZEXT416(*(uint *)(param_1 + 0x60)),auVar6._0_16_);
        auVar6._0_8_ = auVar3._0_8_;
      }
      if (((*(byte *)(param_1 + 0x3c2) & 0x10) != 0) || (_DAT_14849c014 <= (float)auVar6._0_8_)) {
        if ((*(char *)(param_1 + 0x366) != '\x01') || (*(longlong *)(param_1 + 0x288) == 0)) {
          FUN_1451a1110(&uStack_2c);
          cVar4 = FUN_144d9d7a0((undefined2)uStack_2c,uStack_2c._2_2_);
          cVar5 = FUN_144d9d7a0(*(uint *)(param_1 + 0x348),*(uint *)(param_1 + 0x348) >> 0x10);
          if (cVar4 != cVar5) {
            return 0;
          }
          if ((cVar4 != '\0') && (FUN_1451a1110(&uStack_2c), uStack_2c != *(int *)(param_1 + 0x348))
             ) {
            return 0;
          }
        }
        uStack_20 = CONCAT44(_DAT_14849bfdc,uRam000000014849bfd8);
        uStack_28 = _DAT_14849bfd0;
        auVar6._0_8_ = FUN_144e695f0(param_1,&uStack_28,_DAT_14849bfdc,_DAT_145fc6f48);
        return auVar6._0_8_;
      }
    }
  }
  return 0;
}

