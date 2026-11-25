// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140160150  size: 148 bytes
// Name:    FUN_140160150
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_142e7c930, FUN_140437110
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140160150(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  
  lVar2 = func_0x0001453c0100(*(undefined4 *)(param_2 + 0x9c));
  if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x18) != 0)) {
    FUN_142e7c930(param_1);
  }
  FUN_140437110(param_2);
  lVar3 = func_0x0001450449c0(*(undefined4 *)(param_2 + 0x9c));
  if (lVar3 == 0) {
    if (lVar2 == 0) {
      return;
    }
  }
  else {
    if (lVar2 == 0) {
      return;
    }
    auVar4._8_8_ = 0;
    auVar4._0_8_ = *(ulonglong *)(lVar3 + 0x10);
    auVar4 = vpmovzxdq_avx(auVar4);
    auVar4 = vpsllq_avx(auVar4,0x3f);
    uVar1 = vmovmskpd_avx(auVar4);
    if ((byte)((byte)uVar1 >> 1) != 0) {
      return;
    }
    if ((uVar1 & 1) != 0) {
      return;
    }
  }
  if (*(longlong *)(lVar2 + 0x18) == 0) {
    return;
  }
  func_0x000145d15e10();
  lVar2 = *(longlong *)(lVar2 + 0x18);
  if (*(longlong *)(lVar2 + 0x220) != 0) {
    func_0x000140114e20();
    *(undefined8 *)(lVar2 + 0x220) = 0;
  }
  return;
}

