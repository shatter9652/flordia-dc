// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400b4370  size: 260 bytes
// Name:    FUN_1400b4370
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140cfb740, FUN_141fa9f90
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400b4370(longlong param_1,char param_2)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  char cVar4;
  ulonglong uVar5;
  
  cVar3 = '\x02';
  if (*(int *)(param_1 + 0x260) == 2) {
    cVar3 = param_2;
  }
  if (param_2 != '\x03') {
    cVar3 = param_2;
  }
  cVar4 = '\0';
  if (*(int *)(param_1 + 0x260) != 1) {
    cVar4 = cVar3;
  }
  if (cVar4 != *(char *)(param_1 + 0x228)) {
    if (*(int *)(param_1 + 0x8c) != 0) {
      uVar5 = 0;
      do {
        lVar1 = *(longlong *)(param_1 + 0x238);
        lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x90) + uVar5 * 8);
        if (cVar4 == '\x02') {
          if (*(int *)(lVar2 + 0x468) == 0) {
            *(undefined4 *)(lVar2 + 0x468) = _DAT_14abbef44;
          }
        }
        else if (cVar4 == '\x01') {
          if (*(int *)(lVar2 + 0x46c) == 0) {
            *(undefined4 *)(lVar2 + 0x46c) = _DAT_14abbef44;
          }
        }
        else if ((cVar4 == '\0') && (*(int *)(lVar2 + 0x470) == 0)) {
          *(undefined4 *)(lVar2 + 0x470) = _DAT_14abbef44;
        }
        cVar3 = cVar4;
        if (*(char *)(lVar1 + uVar5) != cVar4) {
          FUN_141fa9f90(lVar2,cVar4);
          cVar3 = *(char *)(lVar1 + uVar5);
        }
        if (cVar3 != *(char *)(param_1 + 0x228)) {
          FUN_140cfb740(lVar2);
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < *(uint *)(param_1 + 0x8c));
    }
    *(char *)(param_1 + 0x228) = cVar4;
  }
  return;
}

