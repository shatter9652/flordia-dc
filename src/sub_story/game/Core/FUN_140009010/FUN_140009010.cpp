// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140009010  size: 393 bytes
// Name:    FUN_140009010
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140009010(uint param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong unaff_GS_OFFSET;
  
  uVar4 = 0;
  uVar5 = param_1 * 0x10;
  uVar1 = uVar4;
  if (uVar5 != 0) {
    do {
      uVar1 = uVar4;
      if (!SBORROW1('\0',*(char *)((ulonglong)(uVar4 & 0xf) +
                                  (ulonglong)(uVar4 >> 4) * 0x790 + param_2))) break;
      uVar4 = uVar4 + 1;
      uVar1 = uVar5;
    } while (uVar5 != uVar4);
  }
  lVar6 = (ulonglong)(param_1 & 0xfffffff) * 0x790;
  lVar2 = (ulonglong)(uVar1 >> 4) * 0x790;
  uVar3 = (ulonglong)((uVar1 & 0xf) * 0x78);
  if (lVar2 + uVar3 != lVar6) {
    lVar2 = lVar2 + 0x10 + uVar3;
    uVar8 = _DAT_149ab14c0;
    do {
      uVar7 = uVar8;
      if (*(char *)(*(longlong *)
                     (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8) ==
          '\0') {
        func_0x0001455db994();
        uVar7 = _DAT_149ab14c0;
      }
      *(undefined4 *)(param_2 + 0x30 + lVar2) = uVar8;
      *(undefined8 *)(param_2 + 0x34 + lVar2) = 0x900000000;
      *(undefined4 *)(param_2 + 0x3c + lVar2) = 0;
      uVar8 = uVar7;
      if (*(char *)(*(longlong *)
                     (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8) ==
          '\0') {
        func_0x0001455db994();
        uVar8 = _DAT_149ab14c0;
      }
      *(undefined4 *)(param_2 + 0x40 + lVar2) = uVar7;
      *(undefined8 *)(param_2 + 0x44 + lVar2) = 0x900000000;
      *(undefined4 *)(param_2 + 0x4c + lVar2) = 0;
      *(undefined4 *)(param_2 + 0x54 + lVar2) = 0;
      uVar4 = uVar1;
      while (uVar1 = uVar5, uVar4 != uVar5) {
        while (uVar1 = uVar4 + 1, uVar4 = uVar1, uVar1 < uVar5) {
          if (!SBORROW1('\0',*(char *)((ulonglong)(uVar1 & 0xf) +
                                      (ulonglong)(uVar1 >> 4) * 0x790 + param_2)))
          goto LAB_14000913f;
        }
      }
LAB_14000913f:
      lVar2 = (ulonglong)(uVar1 >> 4) * 0x790 + 0x10 + (ulonglong)((uVar1 & 0xf) * 0x78);
    } while (lVar2 != lVar6 + 0x10);
  }
  return;
}

