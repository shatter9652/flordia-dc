// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140047dc0  size: 161 bytes
// Name:    FUN_140047dc0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_140047dc0(longlong param_1,uint param_2,uint *param_3)

{
  ushort uVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  uint uVar6;
  bool bVar7;
  
  if (*(int *)(param_1 + 0x1c) == 0) {
    uVar1 = *(ushort *)(param_1 + 0x6c);
    uVar3 = (ulonglong)uVar1;
    if (uVar1 == 1) {
      if (param_2 == 0) {
        param_2 = 0;
      }
      else {
        uVar3 = 0;
        bVar7 = *(uint *)(*(longlong *)(param_1 + 0x28) + 0x1c) != param_2;
        param_2 = 0;
        if (bVar7) {
          return 0;
        }
      }
    }
    else if (uVar1 <= param_2) goto LAB_140047e54;
LAB_140047e5a:
    uVar4 = CONCAT71((int7)(uVar3 >> 8),1);
    *param_3 = param_2;
  }
  else {
    if ((param_2 != 0xffffffff) && (*(int *)(param_1 + 0x18) != 0)) {
      uVar3 = *(ulonglong *)(param_1 + 0x20);
      uVar6 = *(int *)(param_1 + 0x18) - 1;
      uVar5 = (ulonglong)(uVar6 & param_2);
      uVar2 = *(uint *)(uVar3 + uVar5 * 8);
      bVar7 = uVar2 != 0xffffffff;
      if (uVar2 != param_2 && bVar7) {
        do {
          uVar5 = (ulonglong)((uint)(uVar5 * 8 + 8 >> 3) & uVar6);
          uVar2 = *(uint *)(uVar3 + uVar5 * 8);
          bVar7 = uVar2 != 0xffffffff;
          if (uVar2 == 0xffffffff) break;
        } while (uVar2 != param_2);
      }
      if (bVar7) {
        param_2 = *(uint *)(uVar3 + 4 + uVar5 * 8);
        goto LAB_140047e5a;
      }
    }
LAB_140047e54:
    uVar4 = 0;
  }
  return uVar4;
}

