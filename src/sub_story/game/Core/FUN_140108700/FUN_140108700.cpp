// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140108700  size: 143 bytes
// Name:    FUN_140108700
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140004b40, FUN_14516b5d0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Possible PIC construction at 0x00014010876d: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000140108772) */
/* WARNING: Removing unreachable block (ram,0x000140108787) */
/* WARNING: Removing unreachable block (ram,0x000140108777) */
/* WARNING: Removing unreachable block (ram,0x000144fb0380) */
/* WARNING: Removing unreachable block (ram,0x000144fb0396) */
/* WARNING: Removing unreachable block (ram,0x000144fb039c) */
/* WARNING: Removing unreachable block (ram,0x000144fb03a5) */
/* WARNING: Removing unreachable block (ram,0x000144fb03d6) */
/* WARNING: Removing unreachable block (ram,0x000144fb03dc) */
/* WARNING: Removing unreachable block (ram,0x000144fb03b5) */
/* WARNING: Removing unreachable block (ram,0x000144fb03be) */
/* WARNING: Removing unreachable block (ram,0x000144fb03ce) */
/* WARNING: Removing unreachable block (ram,0x000144fb03d0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140108700(longlong param_1,uint param_2)

{
  int *piVar1;
  longlong lVar2;
  ulonglong *puVar3;
  ushort *puVar4;
  ushort uVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong unaff_RBX;
  longlong *plVar11;
  ulonglong *unaff_RSI;
  undefined8 unaff_RDI;
  undefined8 auStack_40 [5];
  
  lVar2 = (ulonglong)((uint)param_1 & 0x1f8) * 4;
  puVar3 = (ulonglong *)(lVar2 + 0x149c3d840);
  auStack_40[0] = 0x140108726;
  FUN_140004b40(puVar3);
  lVar7 = _DAT_149c3e108;
  lVar8 = (ulonglong)*(ushort *)(param_1 + 6) * 0x10;
  LOCK();
  puVar4 = (ushort *)(_DAT_149c3e108 + 8 + lVar8);
  uVar5 = *puVar4;
  *puVar4 = *puVar4 - (short)param_2;
  UNLOCK();
  if ((uVar5 == param_2) && (*(short *)(lVar7 + lVar8 + 10) == 0)) {
    auStack_40[0] = 0x140108767;
    unaff_RDI = FUN_14516b5d0(param_1);
    register0x00000020 = (BADSPACEBASE *)auStack_40;
    auStack_40[0] = 0x140108772;
    unaff_RBX = (ulonglong)param_2;
    unaff_RSI = puVar3;
  }
  piVar1 = (int *)(lVar2 + 0x149c3d850);
  *piVar1 = *piVar1 + -1;
  uVar10 = *puVar3;
  if (*piVar1 == 0) {
    do {
      uVar9 = uVar10;
      LOCK();
      uVar10 = *puVar3;
      if (uVar9 == uVar10) {
        *puVar3 = (ulonglong)((int)uVar9 - 1) | 0xffffffff00000000;
        uVar10 = uVar9;
      }
      UNLOCK();
    } while (uVar9 != uVar10);
    if ((uVar9 & 0xfffffffe) != 0) {
      *(ulonglong **)((longlong)register0x00000020 + -8) = unaff_RSI;
      *(undefined8 *)((longlong)register0x00000020 + -0x10) = unaff_RDI;
      *(ulonglong *)((longlong)register0x00000020 + -0x18) = unaff_RBX;
      lVar7 = *(longlong *)(lVar2 + 0x149c3d848);
      plVar11 = (longlong *)(lVar2 + 0x149c3d848);
      *(longlong *)((longlong)register0x00000020 + -0x20) = lVar7;
      while( true ) {
        while (lVar7 < 0) {
          *(undefined8 *)((longlong)register0x00000020 + -0x50) = 0x140019c89;
          cVar6 = FUN_1400062d0(plVar11,1,(longlong *)((longlong)register0x00000020 + -0x20));
          if (cVar6 != '\0') {
            return;
          }
          lVar7 = *(longlong *)((longlong)register0x00000020 + -0x20);
        }
        LOCK();
        lVar2 = *plVar11;
        if (lVar7 == *plVar11) {
          *plVar11 = lVar7 + 0x100000000;
          lVar2 = lVar7;
        }
        lVar7 = lVar2;
        UNLOCK();
        if (*(longlong *)((longlong)register0x00000020 + -0x20) == lVar7) break;
        *(longlong *)((longlong)register0x00000020 + -0x20) = lVar7;
      }
      return;
    }
  }
  return;
}

