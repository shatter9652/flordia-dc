// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401ae790  size: 346 bytes
// Name:    FUN_1401ae790
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144f9ff30, FUN_1401addb0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1401ae790(longlong param_1,longlong *param_2,longlong param_3,undefined1 *param_4)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  *param_4 = 0;
  if (((*(byte *)((longlong)param_2 + 0x149) & 0x10) == 0) &&
     (uVar4 = FUN_1401addb0(param_2,*(undefined8 *)(param_3 + 0x10)), (int)uVar4 != 1)) {
    return uVar4;
  }
  if ((((*(byte *)((longlong)param_2 + 0xaa) & 2) != 0) ||
      (uVar4 = 0xe7, *(int *)(param_1 + 0x40) != 0x621fbdbd)) &&
     (uVar4 = (**(code **)(*param_2 + 0x28))(param_2,param_3), (int)uVar4 == 1)) {
    if (*(int *)((longlong)param_2 + 0x10c) != 0) {
      uVar4 = 0;
      do {
        uVar1 = *(uint *)(param_2[0x22] + uVar4 * 4);
        if (uVar1 == 0x1ffff) {
LAB_1401ae82a:
          lVar5 = 0;
        }
        else {
          uVar2 = *(uint *)(_DAT_14a9b3f48[5] + (ulonglong)(uVar1 & 0x1ffff) * 4);
          if (0x1ffff < (uVar1 ^ uVar2)) goto LAB_1401ae82a;
          lVar5 = 0;
          if ((uVar2 & *(uint *)(_DAT_14a9b3f48 + 6)) == *(uint *)(_DAT_14a9b3f48 + 6)) {
            lVar5 = (ulonglong)((uVar1 & 0x1ffff) * (int)_DAT_14a9b3f48[1]) + *_DAT_14a9b3f48;
          }
        }
        cVar3 = FUN_144f9ff30(lVar5);
        if (cVar3 == '\0') {
          return 0x1e3;
        }
        uVar1 = *(uint *)(lVar5 + 0x88);
        uVar2 = *(uint *)(lVar5 + 0x70);
        *(uint *)(lVar5 + 0x88) = uVar1 | 0x40000000;
        if (8 < uVar2) {
          return (ulonglong)uVar2;
        }
        if ((0x182U >> (uVar2 & 0x1f) & 1) == 0) {
          return (ulonglong)uVar2;
        }
        if ((*(byte *)(param_2 + 0x15) & 0x20) != 0) {
          *(uint *)(lVar5 + 0x88) = uVar1 | 0xc0000000;
          if (*(uint *)(lVar5 + 0x78) != 1) {
            return (ulonglong)*(uint *)(lVar5 + 0x78);
          }
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < *(uint *)((longlong)param_2 + 0x10c));
    }
    uVar4 = 1;
    if ((*(byte *)(param_2 + 0x29) & 0x10) != 0) {
      uVar4 = 0x28;
      *param_4 = 1;
    }
  }
  return uVar4;
}

