// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401139d0  size: 141 bytes
// Name:    FUN_1401139d0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14285ba40
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1401139d0(int *param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  lVar3 = func_0x000144e59150(*(undefined4 *)(param_2 + 0x9c));
  if (lVar3 != 0) {
    lVar1 = *(longlong *)(lVar3 + 0x58);
    if ((lVar1 != 0) &&
       (FUN_14285ba40(*(undefined8 *)(lVar1 + 0xe0),*(undefined2 *)(lVar1 + 0xe8),param_1),
       *param_1 != 0)) {
      return;
    }
    if ((*(longlong *)(lVar3 + 0x88) != 0) &&
       (iVar2 = *(int *)(*(longlong *)(lVar3 + 0x88) + 0xd4), iVar2 != 0)) goto LAB_140113a4c;
    lVar3 = func_0x000144ef6450(*(undefined2 *)(lVar3 + 0x15c));
    iVar2 = *(int *)(lVar3 + 0x3c);
    if (iVar2 != 0) goto LAB_140113a4c;
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    iVar2 = -0x177b0647;
  }
  else {
    iVar2 = *(int *)(*(longlong *)(param_2 + 0x20) + 0x244);
  }
LAB_140113a4c:
  *param_1 = iVar2;
  return;
}

