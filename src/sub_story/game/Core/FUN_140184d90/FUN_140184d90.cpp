// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140184d90  size: 208 bytes
// Name:    FUN_140184d90
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140184d90(undefined8 *param_1,undefined1 (*param_2) [32],uint param_3)

{
  longlong lVar1;
  longlong lVar2;
  byte bVar3;
  
  lVar1 = *(longlong *)*param_1;
  bVar3 = *(byte *)(lVar1 + 0xf);
  if ((bVar3 >> (param_3 & 0x1f) & 2) == 0) {
    if (*param_2 == _DAT_14abcc2f0) {
      return;
    }
    func_0x0001402b8410((longlong *)*param_1,(ulonglong)param_3 + 1 & 0xffffffff);
    lVar1 = *(longlong *)*param_1;
    bVar3 = *(byte *)(lVar1 + 0xf);
  }
  lVar2 = (ulonglong)(byte)(&UNK_146631d30)[(ulonglong)param_3 + 1 + (ulonglong)(bVar3 & 0xf) * 5] *
          0x10;
  *(undefined4 *)(lVar1 + 0x10 + lVar2) = *(undefined4 *)*param_2;
  *(undefined4 *)(lVar1 + 0x14 + lVar2) = *(undefined4 *)(*param_2 + 4);
  *(undefined4 *)(lVar1 + 0x18 + lVar2) = *(undefined4 *)(*param_2 + 8);
  *(undefined4 *)(lVar1 + 0x1c + lVar2) = *(undefined4 *)(*param_2 + 0xc);
  *(undefined4 *)(lVar1 + 0x20 + lVar2) = *(undefined4 *)(*param_2 + 0x10);
  *(undefined4 *)(lVar1 + 0x24 + lVar2) = *(undefined4 *)(*param_2 + 0x14);
  *(undefined4 *)(lVar1 + 0x28 + lVar2) = *(undefined4 *)(*param_2 + 0x18);
  *(undefined4 *)(lVar1 + 0x2c + lVar2) = *(undefined4 *)(*param_2 + 0x1c);
  return;
}

