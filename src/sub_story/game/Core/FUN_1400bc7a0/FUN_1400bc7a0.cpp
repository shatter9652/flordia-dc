// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400bc7a0  size: 168 bytes
// Name:    FUN_1400bc7a0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145350d10
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


byte FUN_1400bc7a0(longlong param_1,ushort param_2)

{
  int *piVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  
  LOCK();
  *(int *)(param_1 + 0x3954) = *(int *)(param_1 + 0x3954) + 1;
  UNLOCK();
  if (param_2 == 0xffff) {
    if ((char)*(undefined4 *)(param_1 + 0x3990) != '\x02') {
      bVar3 = FUN_145350d10(param_1);
      LOCK();
      piVar1 = (int *)(param_1 + 0x3954);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      bVar3 = bVar3 | 2;
      goto LAB_1400bc836;
    }
  }
  else {
    LOCK();
    *(undefined4 *)(*(longlong *)(param_1 + 0x3918) + (ulonglong)param_2 * 0x20) = 1;
    UNLOCK();
    if (((char)*(undefined4 *)(param_1 + 0x3990) != '\x02') &&
       (cVar2 = FUN_145350d10(param_1), cVar2 != '\0')) {
      return 0;
    }
    LOCK();
    *(undefined4 *)(*(longlong *)(param_1 + 0x3918) + (ulonglong)param_2 * 0x20) = 0xffffffe0;
    UNLOCK();
  }
  bVar3 = 2;
  LOCK();
  piVar1 = (int *)(param_1 + 0x3954);
  iVar5 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
LAB_1400bc836:
  bVar4 = 1;
  if (iVar5 == 1) {
    bVar4 = bVar3;
  }
  return bVar4;
}

