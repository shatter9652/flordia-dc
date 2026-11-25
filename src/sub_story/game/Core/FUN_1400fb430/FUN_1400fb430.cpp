// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400fb430  size: 379 bytes
// Name:    FUN_1400fb430
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14074e7a0, FUN_140006180, FUN_1400062d0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1400fb430(int param_1)

{
  ulonglong uVar1;
  char cVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int *piVar6;
  uint uVar7;
  undefined8 unaff_RDI;
  ulonglong *puVar8;
  bool bVar9;
  ulonglong uStack_30;
  
  lVar3 = func_0x0001402b5650();
  if (lVar3 == 0) {
    puVar8 = (ulonglong *)0x0;
  }
  else {
    cVar2 = FUN_14074e7a0(lVar3);
    puVar8 = (ulonglong *)CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
    if (cVar2 == '\0') {
      uVar7 = (uint)(_DAT_14ab76158 >> 7) & 0xffffff;
      uVar5 = _DAT_14ab76158;
      if ((_DAT_14ab76158 >> 7 & 0xffffff) != 0) {
        do {
          uVar4 = _DAT_14ab76158;
          if (0xffffffff < (longlong)uVar5) {
            LOCK();
            uVar4 = uVar5;
            uVar1 = uVar5 - 0x100000000;
            if (uVar5 != _DAT_14ab76158) {
              uVar4 = _DAT_14ab76158;
              uVar1 = _DAT_14ab76158;
            }
            _DAT_14ab76158 = uVar1;
            UNLOCK();
            if (uVar5 == uVar4) goto LAB_1400fb512;
          }
          uVar7 = uVar7 - 1;
          uVar5 = uVar4;
        } while (uVar7 != 0);
      }
      puVar8 = &uStack_30;
      uStack_30 = _DAT_14ab76158;
      do {
        while ((longlong)uStack_30 < 0x100000000) {
          cVar2 = FUN_140006180(&DAT_14ab76158,1,puVar8);
          if (cVar2 != '\0') goto LAB_1400fb512;
        }
        LOCK();
        uVar5 = uStack_30;
        uVar4 = uStack_30 - 0x100000000;
        if (uStack_30 != _DAT_14ab76158) {
          uVar5 = _DAT_14ab76158;
          uVar4 = _DAT_14ab76158;
        }
        _DAT_14ab76158 = uVar4;
        UNLOCK();
        bVar9 = uStack_30 != uVar5;
        uStack_30 = uVar5;
      } while (bVar9);
LAB_1400fb512:
      uVar7 = (uint)_DAT_14ab76150;
      if ((ulonglong)uVar7 != 0) {
        uVar5 = (ulonglong)uVar7 + 1;
        piVar6 = (int *)(((ulonglong)(uVar7 * 0x50) - 0x10) + _DAT_14ab76148);
        do {
          if ((*piVar6 == 1) && (piVar6[-0x10] == param_1)) {
            puVar8 = (ulonglong *)CONCAT71((int7)((ulonglong)puVar8 >> 8),1);
            goto LAB_1400fb552;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + -0x14;
        } while (1 < uVar5);
      }
      puVar8 = (ulonglong *)0x0;
LAB_1400fb552:
      uStack_30 = _DAT_14ab76158;
      do {
        while (-1 < (longlong)uStack_30) {
          LOCK();
          uVar5 = uStack_30;
          uVar4 = uStack_30 + 0x100000000;
          if (uStack_30 != _DAT_14ab76158) {
            uVar5 = _DAT_14ab76158;
            uVar4 = _DAT_14ab76158;
          }
          _DAT_14ab76158 = uVar4;
          UNLOCK();
          bVar9 = uStack_30 == uVar5;
          uStack_30 = uVar5;
          if (bVar9) goto LAB_1400fb4b3;
        }
        cVar2 = FUN_1400062d0(&DAT_14ab76158,1,&uStack_30);
      } while (cVar2 == '\0');
    }
  }
LAB_1400fb4b3:
  return (ulonglong)puVar8 & 0xffffffff;
}

