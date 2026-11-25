// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140180f00  size: 170 bytes
// Name:    FUN_140180f00
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140180f00(longlong param_1,longlong param_2,longlong *param_3)

{
  int *piVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong *plVar7;
  ulonglong *puVar8;
  bool bVar9;
  longlong lVar10;
  
  if (param_2 != 0) {
    (**(code **)(*param_3 + 0x28))(param_3,param_1,param_2 + 0x18,*(undefined1 *)(param_2 + 0x50));
    *(undefined1 *)(param_2 + 0x50) = 0;
    lVar10 = param_2 + 0x38;
    lVar4 = *(longlong *)(param_2 + 0x40);
    if (lVar4 != lVar10) {
      do {
        (**(code **)(*param_3 + 0x30))(param_3,lVar4);
        *(undefined8 *)(lVar4 + 0x28) = 0xbad;
        lVar4 = *(longlong *)(lVar4 + 8);
      } while (lVar4 != lVar10);
      lVar4 = *(longlong *)(param_2 + 0x40);
      lVar2 = *(longlong *)(param_1 + 0x78);
      puVar8 = (ulonglong *)(lVar2 + 0x10);
      func_0x00014515adb0(puVar8);
      do {
        if (*(char *)(lVar4 + 0x20) == '\x01') {
          func_0x0001445633a0(param_1,lVar4);
        }
        lVar4 = *(longlong *)(lVar4 + 8);
      } while (lVar4 != lVar10);
      piVar1 = (int *)(lVar2 + 0x20);
      *piVar1 = *piVar1 + -1;
      uVar6 = *puVar8;
      if (*piVar1 == 0) {
        do {
          uVar5 = uVar6;
          LOCK();
          uVar6 = *puVar8;
          if (uVar5 == uVar6) {
            *puVar8 = (ulonglong)((int)uVar5 - 1) | 0xffffffff00000000;
            uVar6 = uVar5;
          }
          UNLOCK();
        } while (uVar5 != uVar6);
        if ((uVar5 & 0xfffffffe) != 0) {
          plVar7 = (longlong *)(lVar2 + 0x18);
          lVar10 = *(longlong *)(lVar2 + 0x18);
          do {
            while (lVar10 < 0) {
              cVar3 = FUN_1400062d0(plVar7,1,&stack0xffffffffffffffe0);
              if (cVar3 != '\0') {
                return;
              }
            }
            LOCK();
            lVar4 = *plVar7;
            if (lVar10 == lVar4) {
              *plVar7 = lVar10 + 0x100000000;
              lVar4 = lVar10;
            }
            UNLOCK();
            bVar9 = lVar10 != lVar4;
            lVar10 = lVar4;
          } while (bVar9);
          return;
        }
      }
      return;
    }
  }
  return;
}

