// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140196350  size: 323 bytes
// Name:    FUN_140196350
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145213ee0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_140196350(longlong param_1)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  ulonglong uStack_58;
  int aiStack_50 [2];
  int aiStack_48 [2];
  
  puVar1 = (uint *)(param_1 + 8);
  if ((ulonglong)*(uint *)(param_1 + 4) == 0) {
    uVar5 = 0;
    puVar9 = puVar1;
  }
  else {
    puVar7 = (uint *)(param_1 + 0xc);
    lVar6 = (ulonglong)*(uint *)(param_1 + 4) * 0x28;
    puVar2 = (uint *)(param_1 + 8 + lVar6);
    puVar8 = puVar1;
    do {
      uVar3 = puVar7[-1];
      puVar9 = puVar8;
      if (uVar3 == 2) {
        if (*puVar7 != 0) break;
      }
      else if (uVar3 == 1) {
        if ((2 < *puVar7 + 2) && (*puVar7 != _DAT_14ab4344c)) break;
      }
      else if (uVar3 == 0) {
        uVar5 = (ulonglong)_DAT_14ab4344c;
        FUN_145213ee0(puVar7,&uStack_58);
        if ((int)uStack_58 - 1U < 0xfffffffd) {
          uStack_58 = uVar5 | 0xffffffff00000000;
          FUN_145213ee0(&uStack_58,aiStack_48);
          iVar4 = aiStack_48[0];
          FUN_145213ee0(puVar7,aiStack_50);
          if (iVar4 != aiStack_50[0]) {
            puVar9 = puVar7 + -1;
            break;
          }
        }
      }
      puVar8 = puVar8 + 10;
      puVar7 = puVar7 + 10;
      lVar6 = lVar6 + -0x28;
      puVar9 = puVar2;
    } while (lVar6 != 0);
    uVar5 = (ulonglong)*(uint *)(param_1 + 4);
  }
  if (puVar9 == puVar1 + uVar5 * 10) {
    iVar4 = -1;
  }
  else {
    iVar4 = (int)((ulonglong)((longlong)puVar9 - (longlong)puVar1) >> 3) * -0x33333333;
  }
  return iVar4;
}

