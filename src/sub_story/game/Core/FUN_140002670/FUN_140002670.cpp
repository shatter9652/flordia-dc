// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140002670  size: 298 bytes
// Name:    FUN_140002670
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1400027a0, FUN_1456a2260, FUN_1456a2190
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140002670(longlong *param_1,undefined8 param_2)

{
  float fVar1;
  char cVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [16];
  undefined1 auStack_38 [16];
  
  if (param_1[0x16] == 0) {
    return;
  }
  cVar2 = (char)param_1[0x1b];
  if (cVar2 == '\x01') {
    fVar1 = *(float *)(param_1[0x16] + 0x50);
    if (((fVar1 == _DAT_145fc6f48) && (!NAN(fVar1) && !NAN(_DAT_145fc6f48))) ||
       (_DAT_14abbef40 <= (uint)((int)(fVar1 * _DAT_146159c28) + (int)param_1[0x19])))
    goto LAB_140002699;
  }
  else {
LAB_140002699:
    if (*(char *)((longlong)param_1 + 0xd7) == '\0') {
      func_0x000144fa06a0(param_1 + 2,auStack_38);
      uStack_58 = *(undefined8 *)(param_1[0x17] + 0x70);
      uStack_50 = *(undefined8 *)(param_1[0x17] + 0x78);
      func_0x000144dc3790(&uStack_58,auStack_48);
      (**(code **)(*param_1 + 0x60))(param_1,auStack_48,auStack_38);
    }
    cVar3 = FUN_1400027a0(param_1);
    if (cVar3 != '\0') {
      if (cVar2 == '\0') {
        FUN_1456a2260(param_1,param_2);
      }
      goto LAB_1400026bb;
    }
    if (cVar2 == '\0') goto LAB_1400026bb;
  }
  FUN_1456a2190(param_1,param_2);
LAB_1400026bb:
  if ((((char)param_1[0x1b] == '\x01') && (*(char *)(param_1[0x16] + 0x59) == '\0')) &&
     ((*(char *)(param_1[0x16] + 0x58) == '\0' &&
      (lVar4 = func_0x000144d9f7c0(*(undefined4 *)(param_1[0x17] + 0x9c)), lVar4 != 0)))) {
    *(byte *)(lVar4 + 0x174) = *(byte *)(lVar4 + 0x174) | 4;
  }
  return;
}

