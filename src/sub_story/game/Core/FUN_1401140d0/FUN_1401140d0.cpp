// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401140d0  size: 73 bytes
// Name:    FUN_1401140d0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14506c670
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Removing unreachable block (ram,0x0001402eb247) */
/* WARNING: Removing unreachable block (ram,0x0001402eb250) */
/* WARNING: Removing unreachable block (ram,0x0001402eb25a) */
/* WARNING: Removing unreachable block (ram,0x0001402eb268) */
/* WARNING: Removing unreachable block (ram,0x0001402eb281) */
/* WARNING: Removing unreachable block (ram,0x0001402eb26c) */

bool FUN_1401140d0(undefined8 param_1,undefined4 param_2)

{
  char cVar1;
  longlong lVar2;
  int *piVar3;
  bool bVar4;
  undefined8 uStack_10;
  undefined4 uStack_c;
  
  cVar1 = FUN_14506c670();
  if (cVar1 == '\0') {
    lVar2 = func_0x000144fc04a0(param_2);
    if (lVar2 != 0) {
      func_0x000140019da0(*(undefined4 *)(lVar2 + 0x14));
      piVar3 = (int *)func_0x000140c5f790(uStack_c);
      if (piVar3 == (int *)0x0) {
        bVar4 = false;
      }
      else {
        bVar4 = *piVar3 == 0;
      }
      return bVar4;
    }
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  return bVar4;
}

