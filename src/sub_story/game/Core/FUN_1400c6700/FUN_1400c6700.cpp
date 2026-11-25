// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400c6700  size: 205 bytes
// Name:    FUN_1400c6700
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1400c6700(ulonglong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  
  if (param_1 != 0 && _DAT_14a922f30 != 0) {
    if ((*(char *)(_DAT_14a922f30 + 0x20) == '\x01') && (*(char *)(_DAT_14a922f30 + 0x21) != '\x01')
       ) {
      uVar1 = *(int *)(_DAT_14a922f30 + 0x14) - 1;
      uVar2 = (ulonglong)uVar1;
      if (-1 < (int)uVar1) {
        iVar5 = 0;
        do {
          uVar1 = (uint)(iVar5 + (int)uVar2) >> 1;
          uVar3 = (ulonglong)*(uint *)(*(longlong *)(_DAT_14a922f30 + 0x18) + (ulonglong)uVar1 * 4);
          uVar4 = _DAT_14ab83ec0 + uVar3;
          if (uVar3 != 0) {
            uVar3 = uVar4;
          }
          if (*(ulonglong *)(uVar3 + 0x20) == param_1) {
LAB_1400c67b3:
            if (uVar4 == 0) {
              return 0;
            }
            if (*(char *)(uVar4 + 0x19) != '\x01') {
              return 0;
            }
            return CONCAT71((int7)(uVar2 >> 8),*(int *)(uVar4 + 0x44) != 0);
          }
          if (param_1 < *(ulonglong *)(uVar3 + 0x20)) {
            uVar2 = (ulonglong)(uVar1 - 1);
          }
          else {
            iVar5 = uVar1 + 1;
          }
        } while (iVar5 <= (int)uVar2);
      }
    }
    else if ((ulonglong)*(uint *)(_DAT_14a922f30 + 0x14) != 0) {
      uVar2 = (ulonglong)*(uint *)(_DAT_14a922f30 + 0x14) << 2;
      uVar3 = 0;
      do {
        uVar6 = (ulonglong)*(uint *)(*(longlong *)(_DAT_14a922f30 + 0x18) + uVar3);
        uVar4 = _DAT_14ab83ec0 + uVar6;
        if (uVar6 != 0) {
          uVar6 = uVar4;
        }
        if (*(ulonglong *)(uVar6 + 0x20) == param_1) goto LAB_1400c67b3;
        uVar3 = uVar3 + 4;
      } while (uVar2 != uVar3);
    }
  }
  return 0;
}

