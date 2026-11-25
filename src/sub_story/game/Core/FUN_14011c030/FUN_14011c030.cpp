// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14011c030  size: 201 bytes
// Name:    FUN_14011c030
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144fcc8f0, FUN_144fcc8c0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14011c030(longlong param_1,longlong param_2,longlong param_3,longlong param_4,char param_5)

{
  uint uVar1;
  longlong lVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong in_stack_ffffffffffffffb8;
  
  if (param_5 == '\0') {
    FUN_144fcc8c0(param_1,param_2,param_3,param_4,in_stack_ffffffffffffffb8 & 0xffffffffffffff00);
  }
  else if (param_2 != 0) {
    uVar3 = func_0x000144e51b80(param_3);
    uVar4 = func_0x000144e51980(*(undefined4 *)(param_4 + 0x18),uVar3);
    uVar1 = *(uint *)(param_3 + 900);
    if ((ulonglong)uVar1 != 0) {
      lVar2 = *(longlong *)(param_3 + 0x388);
      lVar6 = 0;
      do {
        if ((*(longlong *)(lVar2 + 0x10 + lVar6) == param_1) &&
           (uVar5 = *(uint *)(lVar2 + 8 + lVar6) & uVar4, (char)uVar5 != '\0' && 0xff < uVar5)) {
          FUN_144fcc8f0(param_2,*(undefined8 *)(lVar2 + lVar6),param_3,param_1,param_4);
        }
        lVar6 = lVar6 + 0x18;
      } while ((ulonglong)uVar1 * 0x18 != lVar6);
    }
  }
  return;
}

