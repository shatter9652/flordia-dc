// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14006f500  size: 165 bytes
// Name:    FUN_14006f500
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144eca860
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14006f500(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  
  if ((ulonglong)*(ushort *)(param_1 + 0x20) != 0) {
    uVar4 = (ulonglong)*(ushort *)(param_1 + 0x20) + 1;
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x18) + -0x10 + uVar4 * 8);
      if (lVar1 != 0) {
        func_0x000144eca850(lVar1);
        cVar2 = func_0x000144eca830(0x147c17ca8,lVar1);
        if (cVar2 == '\0') {
          uVar3 = func_0x000144fc99c0(0,0);
          func_0x000140093420(uVar3,lVar1);
        }
        else {
          FUN_144eca860(0x147c17ca8,lVar1);
        }
      }
      uVar4 = uVar4 - 1;
    } while (1 < uVar4);
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    func_0x000144d9c130(*(longlong *)(param_1 + 0x18));
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  return;
}

