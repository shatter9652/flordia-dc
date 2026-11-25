// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401a2360  size: 47 bytes
// Name:    FUN_1401a2360
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401a2360(undefined8 param_1,int param_2)

{
  code *pcVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  
  iVar4 = (**(code **)(_DAT_14aa56540 + 0x10))(&DAT_14aa56540);
  pcVar1 = *(code **)(_DAT_14aa56540 + 0x18);
  if (pcVar1 == (code *)&UNK_14506a1e0) {
    iVar5 = func_0x00014506a1e0();
  }
  else if (pcVar1 == (code *)&UNK_14506a150) {
    iVar5 = func_0x00014506a150();
  }
  else if (pcVar1 == (code *)&UNK_14506a1f0) {
    iVar5 = func_0x00014506a1f0();
  }
  else {
    iVar5 = (*pcVar1)(&DAT_14aa56540);
  }
  uVar2 = iVar5 - iRam000000014aa5656c;
  if (uRam000000014aa56574 <= (uint)(iVar5 - iRam000000014aa5656c)) {
    uVar2 = uRam000000014aa56574;
  }
  iVar7 = (int)uVar2 % iVar4;
  iVar5 = param_2;
  if (iVar7 < param_2) {
    iVar5 = iVar7;
  }
  iVar7 = (uint)(param_2 < iVar7) + (int)uVar2 / iVar4;
  iVar4 = iVar5 + iRam000000014aa5656c + ((int)uVar2 / iVar4) * param_2;
  if (iVar4 < iVar4 + iVar7) {
    do {
      pcVar1 = *(code **)(_DAT_14aa56540 + 0x48);
      if (pcVar1 == FUN_14506a0b0) {
        lVar6 = FUN_14506a0b0(&DAT_14aa56540,iVar4);
      }
      else if (pcVar1 == FUN_14506a160) {
        lVar6 = FUN_14506a160(&DAT_14aa56540,iVar4);
      }
      else if (pcVar1 == FUN_1401a23a0) {
        lVar6 = FUN_1401a23a0(&DAT_14aa56540,iVar4);
      }
      else {
        lVar6 = (*pcVar1)(&DAT_14aa56540,iVar4);
      }
      if ((((lVar6 != 0) && ((*(byte *)(lVar6 + 0x34) & 1) != 0)) &&
          (cVar3 = FUN_145044930(*(undefined1 *)(lVar6 + 0x30),*(undefined4 *)(lVar6 + 0x9c)),
          cVar3 == '\0')) && ((*(byte *)(lVar6 + 0xb0) & 1) == 0)) {
        pcVar1 = *(code **)(_DAT_14aa56540 + 0x40);
        if (pcVar1 == FUN_14506a200) {
          FUN_14506a200(&DAT_14aa56540,lVar6);
        }
        else if (pcVar1 == FUN_1401a26c0) {
          FUN_1401a26c0(&DAT_14aa56540,lVar6);
        }
        else if (pcVar1 == FUN_1401a2420) {
          FUN_1401a2420(&DAT_14aa56540,lVar6);
        }
        else {
          (*pcVar1)(&DAT_14aa56540,lVar6,iVar4);
        }
      }
      iVar4 = iVar4 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  return;
}

