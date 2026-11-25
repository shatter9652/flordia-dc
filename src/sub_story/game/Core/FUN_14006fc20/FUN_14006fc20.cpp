// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14006fc20  size: 224 bytes
// Name:    FUN_14006fc20
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14006fd00, FUN_14006fd70
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14006fc20(longlong param_1,char param_2,longlong param_3)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  char cVar4;
  uint uVar5;
  ulonglong uVar6;
  bool bVar7;
  undefined4 uStack_1f;
  undefined3 uStack_1b;
  
  if (param_2 == '\0') {
    if (*(int *)(param_1 + 0x44) != 0) goto LAB_14006fc5e;
  }
  else {
    if (param_3 == 0) {
      cVar4 = FUN_14006fd00();
    }
    else {
      cVar4 = FUN_14006fd70(param_1,param_3);
    }
    if (cVar4 != '\0') {
LAB_14006fc5e:
      lVar2 = _DAT_147895a70;
      uVar5 = _DAT_147895a60 - _DAT_147895a5c;
      do {
        uVar6 = (ulonglong)uVar5;
        if (_DAT_147895a58 <= uVar5) {
LAB_14006fcd9:
          return CONCAT71((int7)(uVar6 >> 8),1);
        }
        uVar5 = _DAT_147895a60;
        do {
          while (uVar1 = *(uint *)(_DAT_147895a68 + (ulonglong)(uVar5 & _DAT_147895a58 - 1) * 4),
                bVar7 = uVar5 <= uVar1, uVar1 == uVar5) {
            uVar1 = uVar5 + 1;
            LOCK();
            bVar7 = uVar5 == _DAT_147895a60;
            uVar3 = uVar1;
            if (!bVar7) {
              uVar5 = _DAT_147895a60;
              uVar3 = _DAT_147895a60;
            }
            _DAT_147895a60 = uVar3;
            UNLOCK();
            if (bVar7) {
              uVar6 = (ulonglong)(uVar5 & _DAT_147895a58 - 1);
              *(longlong *)(_DAT_147895a70 + uVar6 * 0x18) = param_1;
              *(longlong *)(lVar2 + 8 + uVar6 * 0x18) = param_3;
              *(char *)(lVar2 + 0x10 + uVar6 * 0x18) = param_2;
              *(undefined4 *)(lVar2 + 0x11 + uVar6 * 0x18) = uStack_1f;
              *(uint *)(lVar2 + 0x14 + uVar6 * 0x18) = CONCAT31(uStack_1b,uStack_1f._3_1_);
              LOCK();
              *(uint *)(_DAT_147895a68 + uVar6 * 4) = uVar1;
              UNLOCK();
              goto LAB_14006fcd9;
            }
          }
          uVar5 = _DAT_147895a60;
        } while (bVar7);
        uVar5 = _DAT_147895a60 - _DAT_147895a5c;
      } while( true );
    }
  }
  return 0;
}

