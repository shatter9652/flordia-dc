// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401aefc0  size: 337 bytes
// Name:    FUN_1401aefc0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144f9fed0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1401aefc0(longlong param_1,undefined1 *param_2)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  undefined1 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  bool bVar7;
  
  if (*(int *)(param_1 + 0xfc) != 0) {
    if (param_2 == (undefined1 *)0x0) {
      uVar6 = 0;
      do {
        uVar1 = *(uint *)(*(longlong *)(param_1 + 0x100) + uVar6 * 4);
        if (uVar1 != 0x1ffff) {
          uVar2 = *(uint *)(_DAT_14a9b3f48[5] + (ulonglong)(uVar1 & 0x1ffff) * 4);
          if ((((uVar1 ^ uVar2) < 0x20000) &&
              ((uVar2 & *(uint *)(_DAT_14a9b3f48 + 6)) == *(uint *)(_DAT_14a9b3f48 + 6))) &&
             (*_DAT_14a9b3f48 != 0)) {
            lVar5 = *_DAT_14a9b3f48 + (ulonglong)((uVar1 & 0x1ffff) * (int)_DAT_14a9b3f48[1]);
            cVar3 = FUN_144f9fed0(lVar5);
            if ((cVar3 != '\0') && (*(int *)(lVar5 + 0x78) == 1)) {
              return 1;
            }
          }
        }
        uVar6 = uVar6 + 1;
        if (*(uint *)(param_1 + 0xfc) <= uVar6) {
          return 0;
        }
      } while( true );
    }
    uVar6 = 0;
    bVar7 = false;
    do {
      uVar1 = *(uint *)(*(longlong *)(param_1 + 0x100) + uVar6 * 4);
      if (uVar1 != 0x1ffff) {
        uVar2 = *(uint *)(_DAT_14a9b3f48[5] + (ulonglong)(uVar1 & 0x1ffff) * 4);
        if ((((uVar1 ^ uVar2) < 0x20000) &&
            ((uVar2 & *(uint *)(_DAT_14a9b3f48 + 6)) == *(uint *)(_DAT_14a9b3f48 + 6))) &&
           (*_DAT_14a9b3f48 != 0)) {
          lVar5 = *_DAT_14a9b3f48 + (ulonglong)((uVar1 & 0x1ffff) * (int)_DAT_14a9b3f48[1]);
          cVar3 = FUN_144f9fed0(lVar5);
          if ((cVar3 != '\0') && (*(int *)(lVar5 + 0x78) == 1)) {
            if (*(int *)(lVar5 + 0x84) == 1) {
              uVar4 = 0;
              goto LAB_1401af06c;
            }
            bVar7 = true;
          }
        }
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < *(uint *)(param_1 + 0xfc));
    if (bVar7) {
      uVar4 = 1;
LAB_1401af06c:
      *param_2 = uVar4;
      return 1;
    }
  }
  return 0;
}

