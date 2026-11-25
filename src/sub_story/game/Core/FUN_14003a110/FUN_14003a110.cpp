// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14003a110  size: 87 bytes
// Name:    FUN_14003a110
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140005d90
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_14003a110(longlong param_1,undefined8 param_2,uint *param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  bool bVar7;
  
  do {
    iVar4 = *(int *)(param_1 + 0x20);
    while (iVar4 != -1) {
      LOCK();
      iVar1 = *(int *)(param_1 + 0x20);
      bVar7 = iVar4 == iVar1;
      if (bVar7) {
        *(int *)(param_1 + 0x20) = iVar4 + 1;
        iVar1 = iVar4;
      }
      iVar4 = iVar1;
      UNLOCK();
      if (bVar7) {
        lVar5 = FUN_140005d90(param_1,param_2,0);
        if (lVar5 != 0) {
          *param_3 = (uint)*(byte *)(lVar5 + 0x3c);
        }
        uVar6 = (ulonglong)*(uint *)(param_1 + 0x20);
        do {
          uVar3 = (uint)uVar6;
          LOCK();
          uVar2 = *(uint *)(param_1 + 0x20);
          if (uVar3 == uVar2) {
            *(uint *)(param_1 + 0x20) = uVar3 - 1;
          }
          else {
            uVar6 = (ulonglong)uVar2;
          }
          UNLOCK();
        } while (uVar3 != uVar2);
        return CONCAT71((int7)(uVar6 >> 8),lVar5 != 0);
      }
    }
  } while( true );
}

