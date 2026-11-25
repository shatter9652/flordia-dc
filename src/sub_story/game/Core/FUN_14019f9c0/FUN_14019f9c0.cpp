// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14019f9c0  size: 144 bytes
// Name:    FUN_14019f9c0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14019fa50
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14019f9c0(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  longlong *plStack_30;
  int iStack_28;
  
  *(byte *)(param_1 + 0x58) = *(byte *)(param_1 + 0x58) & 0xfe;
  cVar2 = func_0x000144d9db40(*(undefined8 *)(param_1 + 0x20));
  if (cVar2 != '\0') {
    FUN_14019fa50(param_1,&plStack_30);
    if (plStack_30 != (longlong *)0x0) {
      iVar3 = func_0x000144e05fa0(plStack_30[1]);
      uVar1 = _UNK_145fc6ee8;
      if (iStack_28 == iVar3) {
        *(undefined8 *)(param_1 + 0x30) = _DAT_145fc6ee0;
        *(undefined8 *)(param_1 + 0x38) = uVar1;
        *(undefined1 (*) [16])(param_1 + 0x40) = ZEXT816(0) << 0x20;
      }
      else {
        uVar4 = (**(code **)(*plStack_30 + 0xf0))(plStack_30,iStack_28);
        (**(code **)(*plStack_30 + 0x108))(plStack_30,uVar4,param_1 + 0x30);
      }
      *(byte *)(param_1 + 0x58) = *(byte *)(param_1 + 0x58) | 1;
    }
  }
  return;
}

