// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14015b470  size: 226 bytes
// Name:    FUN_14015b470
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14015b560, FUN_14015b5a0, FUN_1452d2330
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14015b470(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  undefined8 unaff_RBX;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  FUN_14015b560(param_1 + 0x10);
  FUN_14015b5a0(param_1);
  lVar4 = *(longlong *)(param_1 + 0xa8);
  if ((ulonglong)*(uint *)(param_1 + 0xa4) != 0) {
    lVar1 = lVar4 + (ulonglong)*(uint *)(param_1 + 0xa4) * 0x18;
    do {
      lVar3 = *(longlong *)(lVar4 + 0x10);
      if ((ulonglong)*(uint *)(lVar4 + 0xc) != 0) {
        lVar5 = (ulonglong)*(uint *)(lVar4 + 0xc) * 0x18;
        do {
          FUN_1452d2330(lVar3);
          lVar3 = lVar3 + 0x18;
          lVar5 = lVar5 + -0x18;
        } while (lVar5 != 0);
        lVar3 = *(longlong *)(lVar4 + 0x10);
      }
      *(undefined4 *)(lVar4 + 0xc) = 0;
      if (lVar3 != 0) {
        func_0x000144d9c130(lVar3);
      }
      *(undefined4 *)(lVar4 + 8) = 0;
      *(undefined8 *)(lVar4 + 0x10) = 0;
      lVar4 = lVar4 + 0x18;
    } while (lVar4 != lVar1);
    lVar4 = *(longlong *)(param_1 + 0xa8);
  }
  *(undefined4 *)(param_1 + 0xa4) = 0;
  if (lVar4 != 0) {
    func_0x000144d9c130(lVar4);
  }
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  lVar1 = _DAT_14ab7f638;
  lVar4 = *(longlong *)(param_1 + 0xb0);
  if (lVar4 != 0) {
    cVar2 = *(char *)(param_1 + 0xb9);
    func_0x000140003c10(lVar4,&stack0xffffffffffffffdc);
    func_0x000140003c30(*(undefined8 *)(lVar1 + 0x50),*(undefined4 *)(lVar1 + 0x58),
                        (int)((ulonglong)unaff_RBX >> 0x20),(int)cVar2);
    *(longlong *)(param_1 + 0xb0) = 0;
    *(uint *)(param_1 + 0xb8) = *(uint *)(param_1 + 0xb8) | 0xffff;
  }
  return;
}

