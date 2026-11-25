// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401b5a00  size: 327 bytes
// Name:    FUN_1401b5a00
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140005d90, FUN_1407d39d0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined4 FUN_1401b5a00(longlong param_1,ulonglong param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  undefined4 uVar5;
  bool bVar6;
  
  if (*(int *)(param_1 + 0x9c) == 0) {
    return 0xffffffff;
  }
  lVar4 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x80);
  if ((lVar4 == 0) || (lVar4 = *(longlong *)(lVar4 + 0x40), lVar4 == 0)) {
    param_2 = param_2 & 0xffffffff;
    LOCK();
    bVar6 = *(int *)(param_1 + 0x20) == 0;
    if (bVar6) {
      *(int *)(param_1 + 0x20) = -1;
    }
    UNLOCK();
    while (!bVar6) {
      LOCK();
      bVar6 = *(int *)(param_1 + 0x20) == 0;
      if (bVar6) {
        *(int *)(param_1 + 0x20) = -1;
      }
      UNLOCK();
    }
    func_0x0001407d3ba0();
    LOCK();
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
    UNLOCK();
    LOCK();
    bVar6 = *(int *)(param_1 + 0x38) == 0;
    if (bVar6) {
      *(int *)(param_1 + 0x38) = -1;
    }
    UNLOCK();
    while (!bVar6) {
      LOCK();
      bVar6 = *(int *)(param_1 + 0x38) == 0;
      if (bVar6) {
        *(int *)(param_1 + 0x38) = -1;
      }
      UNLOCK();
    }
    func_0x0001407d3ba0();
    LOCK();
    *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
    UNLOCK();
    LOCK();
    bVar6 = *(int *)(param_1 + 0x50) == 0;
    if (bVar6) {
      *(int *)(param_1 + 0x50) = -1;
    }
    UNLOCK();
    while (!bVar6) {
      LOCK();
      bVar6 = *(int *)(param_1 + 0x50) == 0;
      if (bVar6) {
        *(int *)(param_1 + 0x50) = -1;
      }
      UNLOCK();
    }
    func_0x0001407d3ba0();
    LOCK();
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 0xa8) = 0;
  }
  else {
    lVar2 = *(longlong *)(lVar4 + 0x1b8);
    if (*(longlong *)(param_1 + 0xa8) != lVar2) {
      param_2 = param_2 & 0xffffffff;
      FUN_1407d39d0(param_1 + 0x20,lVar4);
      FUN_1407d39d0(param_1 + 0x38,lVar4);
      FUN_1407d39d0(param_1 + 0x50,lVar4);
      *(longlong *)(param_1 + 0xa8) = lVar2;
    }
  }
  do {
    iVar3 = *(int *)(param_1 + 0x20);
    while (iVar3 != -1) {
      LOCK();
      iVar1 = *(int *)(param_1 + 0x20);
      bVar6 = iVar3 == iVar1;
      if (bVar6) {
        *(int *)(param_1 + 0x20) = iVar3 + 1;
        iVar1 = iVar3;
      }
      iVar3 = iVar1;
      UNLOCK();
      if (bVar6) {
        lVar4 = FUN_140005d90(param_1,param_2,0);
        if (lVar4 == 0) {
          uVar5 = 0xffffffff;
        }
        else {
          uVar5 = *(undefined4 *)(lVar4 + 0x38);
        }
        iVar3 = *(int *)(param_1 + 0x20);
        do {
          LOCK();
          iVar1 = *(int *)(param_1 + 0x20);
          bVar6 = iVar3 == iVar1;
          if (bVar6) {
            *(int *)(param_1 + 0x20) = iVar3 + -1;
            iVar1 = iVar3;
          }
          iVar3 = iVar1;
          UNLOCK();
        } while (!bVar6);
        return uVar5;
      }
    }
  } while( true );
}

