// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400bf810  size: 227 bytes
// Name:    FUN_1400bf810
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1400bf810(ulonglong param_1,uint *param_2,char param_3)

{
  bool bVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  ulonglong *puVar7;
  
  if ((param_1 != 0) && ((ulonglong)_DAT_1476d5cd4 != 0)) {
    lVar4 = (param_1 % (ulonglong)_DAT_1476d5cd4) * 0x58;
    if ((ulonglong)*(uint *)(lVar4 + 0x1476d5cdc) != 0) {
      lVar2 = (ulonglong)*(uint *)(lVar4 + 0x1476d5cdc) << 3;
      puVar7 = *(ulonglong **)(lVar4 + 0x1476d5ce0);
      while (*puVar7 != param_1) {
        puVar7 = puVar7 + 1;
        lVar2 = lVar2 + -8;
        if (lVar2 == 0) {
          return 0;
        }
      }
      uVar3 = *(uint *)(*(longlong *)(lVar4 + 0x1476d5cf0) +
                       ((ulonglong)
                        ((longlong)puVar7 - (longlong)*(ulonglong **)(lVar4 + 0x1476d5ce0)) >> 3 &
                       0xffffffff) * 4);
      if ((param_3 == '\0') && ((ulonglong)*(uint *)(lVar4 + 0x1476d5cfc) != 0)) {
        uVar6 = uVar3 & 0x3fffff;
        lVar2 = 0;
        do {
          uVar5 = *(uint *)(*(longlong *)(lVar4 + 0x1476d5d00) + lVar2) & 0x3fffff;
          bVar1 = uVar6 == 0x3fffff;
          if (uVar5 != 0x3fffff) {
            bVar1 = uVar6 == uVar5 && uVar6 != 0x3fffff;
          }
          if (bVar1) {
            return 0;
          }
          lVar2 = lVar2 + 4;
        } while ((ulonglong)*(uint *)(lVar4 + 0x1476d5cfc) << 2 != lVar2);
      }
      if (param_2 != (uint *)0x0) {
        *param_2 = uVar3;
      }
      uVar3 = uVar3 & 0x3fffff;
      if (uVar3 == 0x3fffff) {
        uVar3 = 0xffffffff;
      }
      if ((*(byte *)(lRam00000001476d5cc0 + (ulonglong)(uVar3 >> 3)) >> (uVar3 & 7) & 1) != 0 &&
          lRam00000001476d5c98 != 0) {
        return *(undefined8 *)(lRam00000001476d5c98 + (ulonglong)(uVar3 * iRam00000001476d5ca0));
      }
      return 0;
    }
  }
  return 0;
}

