// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140001140  size: 59 bytes
// Name:    FUN_140001140
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140001e10
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140001140(longlong param_1)

{
  float fVar1;
  char cVar2;
  longlong *plVar3;
  longlong *plVar4;
  char cVar5;
  longlong lVar6;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [16];
  undefined1 auStack_38 [8];
  undefined8 uStack_30;
  
  uStack_30 = 0x14000114d;
  FUN_140001e10();
  if (((*(longlong *)(param_1 + 0x18) == 0) ||
      (plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x18) + 8), plVar3 == (longlong *)0x0)) ||
     (plVar4 = (longlong *)*plVar3, plVar4 == (longlong *)0x0)) {
    return;
  }
  if (plVar4[0x16] == 0) {
    return;
  }
  cVar2 = (char)plVar4[0x1b];
  if (cVar2 == '\x01') {
    fVar1 = *(float *)(plVar4[0x16] + 0x50);
    if (((fVar1 == _DAT_145fc6f48) && (!NAN(fVar1) && !NAN(_DAT_145fc6f48))) ||
       (_DAT_14abbef40 <= (uint)((int)(fVar1 * _DAT_146159c28) + (int)plVar4[0x19])))
    goto LAB_140002699;
  }
  else {
LAB_140002699:
    if (*(char *)((longlong)plVar4 + 0xd7) == '\0') {
      func_0x000144fa06a0(plVar4 + 2,auStack_38);
      uStack_58 = *(undefined8 *)(plVar4[0x17] + 0x70);
      uStack_50 = *(undefined8 *)(plVar4[0x17] + 0x78);
      func_0x000144dc3790(&uStack_58,auStack_48);
      (**(code **)(*plVar4 + 0x60))(plVar4,auStack_48,auStack_38);
    }
    cVar5 = FUN_1400027a0(plVar4);
    if (cVar5 != '\0') {
      if (cVar2 == '\0') {
        FUN_1456a2260(plVar4,plVar3 + 2);
      }
      goto LAB_1400026bb;
    }
    if (cVar2 == '\0') goto LAB_1400026bb;
  }
  FUN_1456a2190(plVar4,plVar3 + 2);
LAB_1400026bb:
  if ((((char)plVar4[0x1b] == '\x01') && (*(char *)(plVar4[0x16] + 0x59) == '\0')) &&
     ((*(char *)(plVar4[0x16] + 0x58) == '\0' &&
      (lVar6 = func_0x000144d9f7c0(*(undefined4 *)(plVar4[0x17] + 0x9c)), lVar6 != 0)))) {
    *(byte *)(lVar6 + 0x174) = *(byte *)(lVar6 + 0x174) | 4;
  }
  return;
}

