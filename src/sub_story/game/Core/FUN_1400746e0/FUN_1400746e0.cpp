// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400746e0  size: 158 bytes
// Name:    FUN_1400746e0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140047dc0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


bool FUN_1400746e0(longlong param_1,ulonglong param_2,int *param_3)

{
  ushort *puVar1;
  char cVar2;
  ulonglong uVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  bool bVar7;
  int iStack_4c;
  int *piStack_48;
  
  uVar5 = (ulonglong)*(int *)(param_1 + 0x14);
  iVar4 = 0;
  if ((longlong)uVar5 < 1) {
LAB_14007476b:
    bVar7 = false;
  }
  else {
    lVar6 = *(longlong *)(param_1 + 0x18);
    cVar2 = FUN_140047dc0(lVar6,param_2,&iStack_4c);
    bVar7 = true;
    if (cVar2 == '\0') {
      iVar4 = 0;
      uVar3 = 0;
      piStack_48 = param_3;
      do {
        if (uVar5 - 1 == uVar3) goto LAB_14007476b;
        puVar1 = (ushort *)(lVar6 + 0x6c);
        lVar6 = *(longlong *)(param_1 + 0x20 + uVar3 * 8);
        iVar4 = iVar4 + (uint)*puVar1;
        cVar2 = FUN_140047dc0(lVar6,param_2 & 0xffffffff,&iStack_4c);
        uVar3 = uVar3 + 1;
      } while (cVar2 == '\0');
      bVar7 = uVar3 < uVar5;
      param_3 = piStack_48;
    }
    *param_3 = iVar4 + iStack_4c;
  }
  return bVar7;
}

