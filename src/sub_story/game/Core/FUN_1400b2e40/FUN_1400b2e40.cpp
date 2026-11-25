// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400b2e40  size: 213 bytes
// Name:    FUN_1400b2e40
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140b26b50, FUN_140fe0260, FUN_1450e1d80, FUN_140b26bc0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_1400b2e40(longlong param_1,uint param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 auStack_68 [7];
  int iStack_30;
  
  if (-1 < (int)param_2) {
    uVar2 = *(undefined4 *)(param_1 + 0x9c);
    cVar1 = func_0x000144e72530(uVar2);
    if (((cVar1 == '\0') && (lVar4 = func_0x000144dd7540(uVar2), lVar4 != 0)) &&
       (*(longlong *)(lVar4 + 0x898) != 0 && (*(byte *)(lVar4 + 0x10) & 0x20) != 0)) {
      uVar2 = *(undefined4 *)(*(longlong *)(lVar4 + 0x898) + 0x9c);
      lVar4 = func_0x00014518cf10(uVar2);
      if ((lVar4 != 0) || (lVar4 = FUN_140fe0260(uVar2,param_1), lVar4 != 0)) {
        lVar5 = func_0x000144eb3780(uVar2);
        uVar2 = FUN_1450e1d80(lVar5 + 0x40,param_1);
        iVar3 = FUN_140b26bc0(lVar4 + 0x18,uVar2);
        if ((int)param_2 < iVar3) {
          iStack_30 = 0;
          FUN_140b26b50(lVar4 + 0x18,uVar2,auStack_68);
          if ((int)param_2 < iStack_30) {
            return auStack_68[param_2];
          }
        }
      }
    }
  }
  return 0;
}

