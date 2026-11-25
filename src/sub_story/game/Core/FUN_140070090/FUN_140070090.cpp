// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140070090  size: 172 bytes
// Name:    FUN_140070090
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144f4b5f0, FUN_1402b5780
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_140070090(longlong param_1,ushort param_2,short param_3)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  
  iVar2 = (int)*(short *)(*(longlong *)(param_1 + 0x428) + 0x7c4 + (ulonglong)param_2 * 2000);
  if (*(int *)(*(longlong *)(param_1 + 0x3918) + (ulonglong)param_2 * 0x20) == -0x20) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x3918) + (ulonglong)param_2 * 0x20);
    LOCK();
    bVar3 = *piVar1 == -0x20;
    if (bVar3) {
      *piVar1 = 1;
    }
    UNLOCK();
    if (bVar3) {
      FUN_144f4b5f0(*(undefined8 *)(param_1 + 0x3960),iVar2);
      if (param_3 != -1) {
        *(short *)(*(longlong *)(param_1 + 0x3918) + 4 + (ulonglong)param_2 * 0x20) = param_3;
      }
      LOCK();
      *(int *)(param_1 + 0x3954) = *(int *)(param_1 + 0x3954) + 1;
      UNLOCK();
      FUN_1402b5780(*(undefined8 *)(param_1 + 0x3960),iVar2,0);
      return 1;
    }
  }
  return 0;
}

