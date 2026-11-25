// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401600c0  size: 142 bytes
// Name:    FUN_1401600c0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401600c0(longlong param_1)

{
  byte *pbVar1;
  bool bVar2;
  undefined8 uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auVar8 [16];
  
  uVar3 = _DAT_14ab6c900;
  lVar5 = *(longlong *)(param_1 + 8);
  if ((lVar5 == 0) || (*(int *)(param_1 + 0x28) != -1)) {
    if (*(int *)(param_1 + 0x28) != -1) {
      func_0x000141276940();
      *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
    }
    return;
  }
  lVar6 = *(longlong *)(*(longlong *)(lVar5 + 0xb0) + 0x48);
  if (lVar6 == 0) {
    return;
  }
  if ((ulonglong)*(uint *)(lVar5 + 0x44) != 0) {
    lVar7 = 0;
    bVar2 = true;
    do {
      pbVar1 = (byte *)(*(longlong *)(lVar5 + 0x48) + 0xdd + lVar7);
      lVar7 = lVar7 + 0x120;
      bVar2 = (bool)(bVar2 & (*pbVar1 & 4) == 0);
    } while ((ulonglong)*(uint *)(lVar5 + 0x44) * 0x120 != lVar7);
    if (!bVar2) {
      return;
    }
  }
  lVar5 = func_0x0001453c0100(*(undefined4 *)(lVar6 + 0x9c));
  if ((lVar5 != 0) && (*(longlong *)(lVar5 + 0x18) != 0)) {
    FUN_142e7c930(uVar3);
  }
  FUN_140437110(lVar6);
  lVar6 = func_0x0001450449c0(*(undefined4 *)(lVar6 + 0x9c));
  if (lVar6 == 0) {
    if (lVar5 == 0) {
      return;
    }
  }
  else {
    if (lVar5 == 0) {
      return;
    }
    auVar8._8_8_ = 0;
    auVar8._0_8_ = *(ulonglong *)(lVar6 + 0x10);
    auVar8 = vpmovzxdq_avx(auVar8);
    auVar8 = vpsllq_avx(auVar8,0x3f);
    uVar4 = vmovmskpd_avx(auVar8);
    if ((byte)((byte)uVar4 >> 1) != 0) {
      return;
    }
    if ((uVar4 & 1) != 0) {
      return;
    }
  }
  if (*(longlong *)(lVar5 + 0x18) == 0) {
    return;
  }
  func_0x000145d15e10();
  lVar5 = *(longlong *)(lVar5 + 0x18);
  if (*(longlong *)(lVar5 + 0x220) != 0) {
    func_0x000140114e20();
    *(undefined8 *)(lVar5 + 0x220) = 0;
  }
  return;
}

