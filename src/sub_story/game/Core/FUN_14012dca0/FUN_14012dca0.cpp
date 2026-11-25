// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14012dca0  size: 175 bytes
// Name:    FUN_14012dca0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14058ca70
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


char FUN_14012dca0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong *puVar3;
  char cVar4;
  ulonglong uVar5;
  float fVar6;
  float fVar7;
  ulonglong auStack_30 [3];
  
  if (*(longlong *)(param_1 + 0x18) == 0) {
    return '\x03';
  }
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 == 0) {
    return '\x03';
  }
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x40);
  if (lVar2 == 0) {
    return '\x03';
  }
  puVar3 = *(ulonglong **)(lVar2 + 0x48);
  if (puVar3 == (ulonglong *)0x0) {
    func_0x0001406f8830(auStack_30);
    uVar5 = auStack_30[0] & 0xffffffff;
  }
  else {
    uVar5 = *puVar3;
    auStack_30[0] = uVar5;
  }
  if ((int)uVar5 == **(int **)(param_1 + 0xb0)) {
    if (*(char *)(lVar1 + 0x44) != '\0') {
      return '\0';
    }
    if (*(char *)(lVar1 + 0xa0) != '\0') {
      return '\x02';
    }
  }
  fVar7 = *(float *)(lVar1 + 0x38);
  fVar6 = (float)FUN_14058ca70();
  cVar4 = '\x03';
  if (0.0 < fVar7) {
    cVar4 = (fVar7 <= fVar6) * '\x02' + '\x01';
  }
  return cVar4;
}

