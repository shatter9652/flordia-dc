// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400b1180  size: 326 bytes
// Name:    FUN_1400b1180
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14013dc10
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1400b1180(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  uint uVar4;
  undefined4 uStack_34;
  longlong lStack_30;
  uint uStack_24;
  
  lVar2 = *(longlong *)(param_1 + 0x28);
  uStack_34 = 0xdb555fdf;
  if (_DAT_149fefaf8 != 0) {
    uVar4 = _DAT_149fefaf8 - 1U & 0xdb555fdf;
    while( true ) {
      iVar1 = *(int *)(_DAT_149fefb00 + (ulonglong)uVar4 * 8);
      if (iVar1 == -0x24aaa021) break;
      if (iVar1 == 0) goto LAB_1400b120f;
      uVar4 = (uint)((ulonglong)uVar4 * 8 + 8 >> 3) & _DAT_149fefaf8 - 1U;
    }
    FUN_14013dc10(&DAT_149fefaf8,&lStack_30,&uStack_34);
    uVar4 = *(uint *)(lStack_30 + 4 + (ulonglong)uStack_24 * 8);
    if ((-1 < (int)uVar4) &&
       ((*(uint *)(lVar2 + 0x18 + (ulonglong)(uVar4 >> 5) * 4) >> (uVar4 & 0x1f) & 1) != 0)) {
      return 1;
    }
  }
LAB_1400b120f:
  lVar2 = *(longlong *)(param_1 + 0x10);
  if ((lVar2 != 0) && (uStack_34 = 0xdb555fdf, _DAT_149fefaf8 != 0)) {
    uVar4 = _DAT_149fefaf8 - 1U & 0xdb555fdf;
    while( true ) {
      iVar1 = *(int *)(_DAT_149fefb00 + (ulonglong)uVar4 * 8);
      if (iVar1 == -0x24aaa021) break;
      if (iVar1 == 0) {
        return 0;
      }
      uVar4 = (uint)((ulonglong)uVar4 * 8 + 8 >> 3) & _DAT_149fefaf8 - 1U;
    }
    FUN_14013dc10(&DAT_149fefaf8,&lStack_30,&uStack_34);
    uVar4 = *(uint *)(lStack_30 + 4 + (ulonglong)uStack_24 * 8);
    if (((-1 < (int)uVar4) &&
        ((*(uint *)(lVar2 + 0x18 + (ulonglong)(uVar4 >> 5) * 4) >> (uVar4 & 0x1f) & 1) != 0)) &&
       (cVar3 = func_0x0001450aae20(*(undefined4 *)(param_1 + 0xc4)), cVar3 != '\0')) {
      return 1;
    }
  }
  return 0;
}

