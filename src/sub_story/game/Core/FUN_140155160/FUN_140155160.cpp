// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140155160  size: 212 bytes
// Name:    FUN_140155160
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1450cb0e0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140155160(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong uVar6;
  undefined8 unaff_RSI;
  
  plVar5 = *(longlong **)(param_1 + 0x198);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*plVar5 + 8))(plVar5);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  if (*(longlong *)(param_1 + 0x110) != 0) {
    FUN_1450cb0e0(*(longlong *)(param_1 + 0x110),param_1 + 0x110);
  }
  *(undefined8 *)(param_1 + 0x110) = 0;
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FUN_1450cb0e0(*(longlong *)(param_1 + 0x88),param_1 + 0x88);
  }
  *(undefined8 *)(param_1 + 0x88) = 0;
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_1450cb0e0(*(longlong *)(param_1 + 0x70),param_1 + 0x70);
  }
  *(undefined8 *)(param_1 + 0x70) = 0;
  plVar5 = (longlong *)(param_1 + 0x48);
  func_0x000144e71130(*(undefined4 *)(param_1 + 0x60));
  if (*(char *)(param_1 + 0x6c) == '\x01') {
    func_0x000144e71130(*(undefined4 *)(param_1 + 0x60));
    *(undefined2 *)(param_1 + 0x66) = 0;
    *(undefined4 *)(param_1 + 0x68) = 0;
    if (*plVar5 != 0) {
      func_0x000145f40580(*plVar5,0,(ulonglong)*(ushort *)(param_1 + 100) << 6,param_4,unaff_RSI);
      if (*(short *)(param_1 + 100) != 0) {
        lVar4 = 0x2a;
        uVar6 = 0;
        do {
          lVar3 = *plVar5;
          uVar6 = uVar6 + 1;
          *(undefined8 *)(lVar3 + -10 + lVar4) = 0xffffffff00000000;
          *(undefined1 *)(lVar3 + lVar4) = 0;
          *(undefined2 *)(lVar3 + -2 + lVar4) = 0xffff;
          lVar4 = lVar4 + 0x40;
        } while (uVar6 < *(ushort *)(param_1 + 100));
      }
      if (*plVar5 != 0) {
        FUN_144ec6720();
        if (*plVar5 != 0) {
          func_0x000144d9c130();
        }
        *plVar5 = 0;
        FUN_144ec6670();
        *(undefined1 *)(param_1 + 0x6c) = 0;
      }
    }
  }
  return;
}

