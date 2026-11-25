// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400c4500  size: 245 bytes
// Name:    FUN_1400c4500
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1400c4500(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 auVar5 [64];
  
  auVar5 = ZEXT464((uint)_DAT_145fc6ed8);
  bVar1 = *(byte *)(param_1 + 0x5dc);
  uVar2 = (uint)bVar1;
  uVar4 = (ulonglong)(uint)_DAT_145fc6ed8;
  if (bVar1 != 0) {
    uVar3 = func_0x000140004380(*(undefined4 *)(param_1 + 0x704));
    uVar4 = auVar5._0_8_;
    if ((bVar1 == 7) || (bVar1 == 9)) {
      uVar2 = func_0x0001400c4600(*(undefined1 *)(param_1 + 0x5dd));
      uVar4 = auVar5._0_8_;
      if (uVar2 == 7) {
        uVar2 = (uint)(*(byte *)(param_1 + 0xa9d) >> 7) * 4 + 1;
      }
    }
    if (param_2 == 1) {
      if (uVar2 == 1) {
LAB_1400c4586:
        return uVar3;
      }
      switch(uVar2) {
      case 2:
      case 6:
        goto code_r0x0001400c45e0;
      case 5:
        goto LAB_1400c4586;
      }
    }
    else {
      if (param_2 == 2) {
        return 0;
      }
      if ((param_2 == 0) && (1 < uVar2 - 1)) {
        switch(uVar2) {
        case 3:
        case 6:
          goto LAB_1400c4586;
        case 4:
        case 5:
code_r0x0001400c45e0:
          return (ulonglong)(uint)(_DAT_145fc6ed8 - (float)uVar3);
        }
      }
    }
  }
  uVar3 = uVar4;
LAB_1400c4586:
  return uVar3;
}

