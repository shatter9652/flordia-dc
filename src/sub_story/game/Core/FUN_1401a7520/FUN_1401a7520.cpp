// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401a7520  size: 372 bytes
// Name:    FUN_1401a7520
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1401a76a0, FUN_1430864c0, FUN_1401a7720, FUN_143086620, FUN_143086320, FUN_143086050, FUN_143086800, FUN_1451d3090, FUN_14531ddb0, FUN_1430860e0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401a7520(longlong param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  byte bVar3;
  char cVar4;
  longlong lVar5;
  undefined1 auVar6 [16];
  
  if ((*(ulonglong *)(param_1 + 0x518) >> 0x23 & 1) != 0) {
    *(ulonglong *)(param_1 + 0x518) = *(ulonglong *)(param_1 + 0x518) & 0xfffffff7ffffffff;
  }
  lVar2 = *(longlong *)(param_1 + 0x10);
  uVar1 = *(undefined4 *)(lVar2 + 0x9c);
  lVar5 = FUN_14531ddb0(uVar1);
  if (lVar5 != 0) {
    bVar3 = func_0x00014527f5c0(lVar2,1,0,1);
    if (((*(uint *)(param_1 + 0xd0) & 0x1fc0000) == 0x80000) &&
       (*(longlong *)(param_1 + 0x3f0) != 0)) {
      cVar4 = func_0x000144da28f0(uVar1);
      if (cVar4 == '\0') {
        FUN_1401a76a0(param_1,uVar1);
      }
      else {
        FUN_143086050(param_1);
        FUN_1430860e0(param_1,lVar2);
        FUN_143086320(param_1,lVar2);
        FUN_1430864c0(param_1,lVar2);
        FUN_143086620(param_1,lVar2);
        FUN_143086800(param_1,lVar2);
      }
      FUN_1401a7720(param_1,*(undefined4 *)(lVar2 + 0x9c));
      if (*(int *)(*(longlong *)(param_1 + 0x3f0) + 0x54) != 0) {
        auVar6._4_4_ = _DAT_146159d50;
        auVar6._0_4_ = _DAT_146159d50;
        auVar6._8_4_ = _DAT_146159d50;
        auVar6._12_4_ = _DAT_146159d50;
        vmovlps_avx(auVar6);
        FUN_1451d3090(lVar5);
      }
    }
    *(byte *)(param_1 + 0x2b8) = *(byte *)(param_1 + 0x2b8) & 0xfe | bVar3;
  }
  return;
}

