// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140117ab0  size: 255 bytes
// Name:    FUN_140117ab0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_140117ab0(int param_1,float param_2,uint param_3,byte param_4)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  undefined8 unaff_R14;
  undefined7 uVar6;
  
  uVar6 = (undefined7)((ulonglong)unaff_R14 >> 8);
  uVar5 = CONCAT71(uVar6,3);
  iVar3 = func_0x000144fc4fe0(3);
  if (((iVar3 < (int)(uint)_DAT_1484a59fe) && ((param_3 >> 0x15 & 1) == 0)) &&
     (_DAT_146159cc4 < param_2 || param_4 != 0)) goto LAB_140117b7d;
  iVar3 = func_0x000144fc4fe0(CONCAT71((uint7)(byte)(_DAT_1484a59fe >> 8),2));
  cVar1 = func_0x000144fc5000();
  if (cVar1 == '\0') {
    iVar4 = func_0x000144fc4fe0(1);
    bVar2 = (bool)((param_3 >> 0x15 & 1) == 0 &
                  ((int)(uint)_DAT_1484a59fa <= iVar4 | param_4 | _DAT_146159ca4 < param_2));
LAB_140117b22:
    if ((bVar2 != false) && (uVar5 = CONCAT71(uVar6,2), iVar3 + param_1 < (int)(uint)_DAT_1484a59fc)
       ) goto LAB_140117b7d;
  }
  else if ((param_2 <= _DAT_145fc6edc & (param_4 ^ 1)) == 0) {
    bVar2 = (param_3 >> 0x15 & 1) == 0;
    goto LAB_140117b22;
  }
  uVar5 = CONCAT71((int7)(uVar5 >> 8),1);
  iVar3 = func_0x000144fc4fe0(1);
  if ((int)(uint)_DAT_1484a59fa <= iVar3) {
    uVar5 = func_0x000144fc5000();
    return uVar5 ^ 1;
  }
LAB_140117b7d:
  return uVar5 & 0xffffffff;
}

