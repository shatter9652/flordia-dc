// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400049b0  size: 386 bytes
// Name:    FUN_1400049b0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140037a50, FUN_14010a0c0, FUN_14010a2a0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400049b0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  bool bVar7;
  undefined1 auStack_68 [56];
  
  puVar2 = *(uint **)(param_1 + 0x12198);
  uVar1 = *puVar2;
  while (((uVar1 & 0xff) <= (uVar1 >> 8 & 0xff) &&
         (iVar6 = _DAT_149c3d7ec, (*puVar2 >> 0x19 & 1) == 0))) {
    while (iVar6 != 0) {
      LOCK();
      iVar4 = iVar6;
      iVar3 = iVar6 + -1;
      if (iVar6 != _DAT_149c3d7ec) {
        iVar4 = _DAT_149c3d7ec;
        iVar3 = _DAT_149c3d7ec;
      }
      _DAT_149c3d7ec = iVar3;
      UNLOCK();
      bVar7 = iVar6 == iVar4;
      iVar6 = iVar4;
      if (bVar7) {
        LOCK();
        *puVar2 = *puVar2 + 0x10001;
        UNLOCK();
        goto LAB_140004a2d;
      }
    }
    FUN_140037a50(puVar2,1,1);
    uVar1 = *puVar2;
  }
LAB_140004a2d:
  if ((*puVar2 & 0xff) <= (*puVar2 >> 8 & 0xff)) {
    func_0x000142474f70();
    uVar1 = *puVar2;
    while (iVar6 = _DAT_149c3d7ec, (uVar1 & 0xff) <= (uVar1 >> 8 & 0xff)) {
      while (iVar6 != 0) {
        LOCK();
        iVar4 = iVar6;
        iVar3 = iVar6 + -1;
        if (iVar6 != _DAT_149c3d7ec) {
          iVar4 = _DAT_149c3d7ec;
          iVar3 = _DAT_149c3d7ec;
        }
        _DAT_149c3d7ec = iVar3;
        UNLOCK();
        bVar7 = iVar6 == iVar4;
        iVar6 = iVar4;
        if (bVar7) {
          LOCK();
          *puVar2 = *puVar2 + 0x10001;
          UNLOCK();
          goto LAB_140004a3c;
        }
      }
      FUN_140037a50(puVar2,1,0);
      uVar1 = *puVar2;
    }
  }
LAB_140004a3c:
  lVar5 = func_0x000144e9b470(param_1,param_2,param_3);
  if (lVar5 == 0) {
    FUN_14010a2a0(auStack_68);
    do {
      if ((*puVar2 >> 0x19 & 1) != 0) {
        func_0x000142474f70();
      }
      func_0x00014092eca0(1);
      FUN_14010a0c0(auStack_68);
      lVar5 = func_0x000144e9b470(param_1,param_2,param_3);
    } while (lVar5 == 0);
  }
  LOCK();
  *puVar2 = *puVar2 + 0x100;
  UNLOCK();
  *(undefined8 *)(lVar5 + 0x18) = 0xfffffffffffffffe;
  *(undefined4 *)(lVar5 + 0x20) = 1;
  **(longlong **)(param_1 + 0x121f8) = lVar5;
  *(longlong *)(param_1 + 0x121f8) = lVar5 + 0x30;
  return;
}

