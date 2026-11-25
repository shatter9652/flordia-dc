// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140037f30  size: 132 bytes
// Name:    FUN_140037f30
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140004b40, FUN_1454e3820
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140037f30(longlong param_1,int *param_2)

{
  int *piVar1;
  ulonglong *puVar2;
  char cVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  longlong *plVar8;
  bool bVar9;
  longlong lStack_38;
  uint uStack_2c;
  char cStack_28;
  longlong lVar10;
  
  puVar2 = (ulonglong *)(param_1 + 400);
  FUN_140004b40(puVar2);
  uVar7 = (uint)*(ushort *)(param_2 + 1) | *param_2 << 0x10;
  if (*param_2 == 0x7fffffff) {
    uVar7 = 0x7fffffff;
  }
  FUN_1454e3820(param_1 + 0x1b0,&lStack_38);
  if (cStack_28 == '\x01') {
    *(uint *)((ulonglong)(uStack_2c >> 4) * 0x50 + lStack_38 + 0x10 +
             (ulonglong)(uStack_2c & 0xf) * 4) = uVar7;
  }
  piVar1 = (int *)(param_1 + 0x1a0);
  *piVar1 = *piVar1 + -1;
  uVar6 = *puVar2;
  if (*piVar1 == 0) {
    do {
      uVar5 = uVar6;
      LOCK();
      uVar6 = *puVar2;
      if (uVar5 == uVar6) {
        *puVar2 = (ulonglong)((int)uVar5 - 1) | 0xffffffff00000000;
        uVar6 = uVar5;
      }
      UNLOCK();
    } while (uVar5 != uVar6);
    if ((uVar5 & 0xfffffffe) != 0) {
      plVar8 = (longlong *)(param_1 + 0x198);
      lVar10 = *(longlong *)(param_1 + 0x198);
      do {
        while (lVar10 < 0) {
          cVar3 = FUN_1400062d0(plVar8,1,&stack0xffffffffffffffe0);
          if (cVar3 != '\0') {
            return;
          }
        }
        LOCK();
        lVar4 = *plVar8;
        if (lVar10 == lVar4) {
          *plVar8 = lVar10 + 0x100000000;
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

