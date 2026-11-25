// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140109ff0  size: 192 bytes
// Name:    FUN_140109ff0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140004b40
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Possible PIC construction at 0x00014010a07e: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00014010a083) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140109ff0(longlong param_1,ulonglong param_2)

{
  ulonglong *puVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  ulonglong uVar7;
  ulonglong *puVar8;
  ulonglong *unaff_RBX;
  longlong unaff_RSI;
  ulonglong *unaff_RDI;
  ulonglong uVar9;
  undefined8 auStack_60 [5];
  
  lVar2 = _DAT_1475eaea0;
  param_2 = param_2 & 0xffffffff;
  puVar1 = (ulonglong *)(_DAT_1475eaea0 + param_2 * 0x48);
  auStack_60[0] = 0x14010a01b;
  FUN_140004b40(puVar1);
  lVar2 = lVar2 + 0x28 + param_2 * 0x48;
  lVar5 = *(longlong *)(lVar2 + 8);
  do {
    lVar4 = lVar5;
    puVar8 = puVar1;
    if (lVar4 == lVar2) goto code_r0x000144d9dab0;
    lVar5 = *(longlong *)(lVar4 + 8);
  } while (*(longlong *)(lVar4 + 0x10) != param_1);
  unaff_RBX = (ulonglong *)(_DAT_1475eaea0 + param_2 * 0x48);
  uVar9 = unaff_RBX[4];
  auStack_60[0] = 0x14010a046;
  FUN_140004b40(unaff_RBX);
  uVar7 = unaff_RBX[4];
  uVar9 = (lVar4 + 0x10) - uVar9 & 0xffffffffffffffc0;
  lVar2 = *(longlong *)(uVar7 + uVar9);
  plVar3 = *(longlong **)(uVar7 + 8 + uVar9);
  *(longlong **)(lVar2 + 8) = plVar3;
  *plVar3 = lVar2;
  *(undefined8 *)(uVar7 + uVar9) = 0;
  *(ulonglong *)(uVar7 + 8 + uVar9) = unaff_RBX[7];
  unaff_RBX[7] = uVar7 + uVar9;
  unaff_RBX[8] = unaff_RBX[8] - 1;
  register0x00000020 = (BADSPACEBASE *)auStack_60;
  auStack_60[0] = 0x14010a083;
  puVar8 = unaff_RBX;
  unaff_RSI = param_1;
  unaff_RDI = puVar1;
code_r0x000144d9dab0:
  puVar1 = puVar8 + 2;
  *(int *)puVar1 = (int)*puVar1 + -1;
  uVar9 = *puVar8;
  if ((int)*puVar1 == 0) {
    do {
      uVar7 = uVar9;
      LOCK();
      uVar9 = *puVar8;
      if (uVar7 == uVar9) {
        *puVar8 = (ulonglong)((int)uVar7 - 1) | 0xffffffff00000000;
        uVar9 = uVar7;
      }
      UNLOCK();
    } while (uVar7 != uVar9);
    if ((uVar7 & 0xfffffffe) != 0) {
      *(longlong *)((longlong)register0x00000020 + -8) = unaff_RSI;
      *(ulonglong **)((longlong)register0x00000020 + -0x10) = unaff_RDI;
      *(ulonglong **)((longlong)register0x00000020 + -0x18) = unaff_RBX;
      uVar9 = puVar8[1];
      puVar8 = puVar8 + 1;
      *(ulonglong *)((longlong)register0x00000020 + -0x20) = uVar9;
      while( true ) {
        while ((longlong)uVar9 < 0) {
          *(undefined8 *)((longlong)register0x00000020 + -0x50) = 0x140019c89;
          cVar6 = FUN_1400062d0(puVar8,1,(ulonglong *)((longlong)register0x00000020 + -0x20));
          if (cVar6 != '\0') {
            return;
          }
          uVar9 = *(ulonglong *)((longlong)register0x00000020 + -0x20);
        }
        LOCK();
        uVar7 = *puVar8;
        if (uVar9 == *puVar8) {
          *puVar8 = uVar9 + 0x100000000;
          uVar7 = uVar9;
        }
        uVar9 = uVar7;
        UNLOCK();
        if (*(ulonglong *)((longlong)register0x00000020 + -0x20) == uVar9) break;
        *(ulonglong *)((longlong)register0x00000020 + -0x20) = uVar9;
      }
      return;
    }
  }
  return;
}

