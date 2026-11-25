// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140051d40  size: 232 bytes
// Name:    FUN_140051d40
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1403004d0, FUN_144da60a0, FUN_1431a90c0, FUN_1451c3a70, FUN_1452173e0, FUN_1431a90f0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140051d40(longlong param_1,int *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  longlong lVar3;
  int *piVar4;
  longlong lVar5;
  undefined1 auStack_48 [8];
  longlong lStack_40;
  char cStack_27;
  
  if ((*param_2 == 3) && (lVar3 = *(longlong *)(param_1 + 0x10), lVar3 != 0)) {
    FUN_144da60a0(auStack_48,lVar3 + 0x80 + (ulonglong)*(uint *)(lVar3 + 0x78) * 0x30,0x1a,
                  0x9184cb96);
    if ((cStack_27 == '\0') &&
       (lVar3 = **(longlong **)(*(longlong *)(lVar3 + 0x1d0) + 8), *(char *)(lVar3 + 0x30) == '\x03'
       )) {
      lVar3 = func_0x000144f12500(*(undefined4 *)(lVar3 + 0x9c));
      if (lVar3 != 0) {
        do {
          lVar1 = *(longlong *)(lStack_40 + 0x28);
          if (lVar1 != 0) {
            piVar4 = (int *)FUN_1431a90c0(lVar1);
            if ((piVar4 != (int *)0x0) && (*piVar4 != 0)) {
              FUN_1451c3a70();
              lVar5 = FUN_1403004d0(*piVar4);
              if (lVar5 != 0) {
                uVar2 = FUN_1431a90f0(lVar1);
                FUN_1452173e0(lVar5,lVar3,uVar2,0);
              }
            }
          }
          func_0x000144db7670(auStack_48);
        } while (cStack_27 != '\x01');
      }
    }
  }
  return;
}

