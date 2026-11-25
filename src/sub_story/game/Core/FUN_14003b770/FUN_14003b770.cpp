// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14003b770  size: 676 bytes
// Name:    FUN_14003b770
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140040760, FUN_140465670, FUN_1443b2930, FUN_140006180, FUN_1412a7250, FUN_14003b670
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_14003b770(longlong param_1,longlong *param_2,byte param_3,undefined4 param_4)

{
  ulonglong uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  uint uVar10;
  bool bVar11;
  undefined8 uStack_78;
  undefined4 uStack_70;
  uint uStack_6c;
  uint uStack_68;
  longlong lStack_64;
  
  cVar2 = func_0x00014003b650();
  if (cVar2 == '\0') {
    uVar6 = 0;
  }
  else {
    uVar3 = _DAT_149e581a8;
LAB_14003b7c6:
    do {
      uVar4 = uVar3;
      if ((uVar4 & 0x10000ff) != 0) {
        LOCK();
        bVar11 = uVar4 == _DAT_149e581a8;
        uVar3 = uVar4;
        uVar10 = uVar4 + 0x10000;
        if (!bVar11) {
          uVar3 = _DAT_149e581a8;
          uVar10 = _DAT_149e581a8;
        }
        _DAT_149e581a8 = uVar10;
        UNLOCK();
        if (bVar11) {
          uVar10 = (uint)(_DAT_149e581b8 >> 7) & 0xffffff;
          uVar9 = _DAT_149e581b8;
          uVar7 = _DAT_149e581b8;
          if ((_DAT_149e581b8 >> 7 & 0xffffff) != 0) {
            do {
              uVar7 = _DAT_149e581b8;
              if (0xffffffff < (longlong)uVar9) {
                LOCK();
                uVar7 = uVar9;
                uVar1 = uVar9 - 0x100000000;
                if (uVar9 != _DAT_149e581b8) {
                  uVar7 = _DAT_149e581b8;
                  uVar1 = _DAT_149e581b8;
                }
                _DAT_149e581b8 = uVar1;
                UNLOCK();
                uVar3 = uVar4;
                if (uVar9 == uVar7) goto LAB_14003b7c6;
              }
              uVar10 = uVar10 - 1;
              uVar9 = uVar7;
              uVar7 = _DAT_149e581b8;
            } while (uVar10 != 0);
          }
          do {
            while (uStack_78 = uVar7, 0xffffffff < (longlong)uStack_78) {
              LOCK();
              uVar7 = uStack_78;
              uVar9 = uStack_78 - 0x100000000;
              if (uStack_78 != _DAT_149e581b8) {
                uVar7 = _DAT_149e581b8;
                uVar9 = _DAT_149e581b8;
              }
              _DAT_149e581b8 = uVar9;
              UNLOCK();
              uVar3 = uVar4;
              if (uStack_78 == uVar7) goto LAB_14003b7c6;
            }
            cVar2 = FUN_140006180(&DAT_149e581b8,1,&uStack_78);
            uVar3 = uVar4;
            uVar7 = uStack_78;
          } while (cVar2 == '\0');
        }
        goto LAB_14003b7c6;
      }
      LOCK();
      bVar11 = uVar4 != _DAT_149e581a8;
      uVar3 = uVar4 | 0x1000000;
      if (bVar11) {
        uVar4 = _DAT_149e581a8;
        uVar3 = _DAT_149e581a8;
      }
      _DAT_149e581a8 = uVar3;
      UNLOCK();
      uVar3 = uVar4;
    } while (bVar11);
    if ((((param_2 != (longlong *)0x0) && (param_3 < 3)) && (*(longlong *)(param_1 + 0x88) == 0)) &&
       (((int)param_2[4] == 5 && (param_2[10] != 0)))) {
      *(undefined4 *)(param_1 + 0xa8) = 1;
      (**(code **)(*param_2 + 8))(param_2);
      if (*(longlong **)(param_1 + 0x88) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_1 + 0x88) + 0x10))();
      }
      *(longlong **)(param_1 + 0x88) = param_2;
      *(byte *)(param_1 + 0x1c) = param_3;
      *(undefined4 *)(param_1 + 0x10) = param_4;
      *(undefined8 *)(param_1 + 0x58) = 0;
      lVar8 = func_0x000144e5b020();
      if (lVar8 != 0) {
        uStack_6c = (uint)param_3;
        uStack_70 = 0x400;
        uStack_68 = *(uint *)((longlong)param_2 + 0x5c) >> 2;
        lStack_64 = param_2[10];
        iVar5 = (uint)(param_3 == 2) * 2;
        if ((int)param_2[3] == 2) {
          iVar5 = (uint)(param_3 == 2) * 2 + 8;
        }
        uStack_78 = CONCAT44(iVar5,1);
        iVar5 = func_0x0001411d4720(lVar8,*(undefined4 *)(param_1 + 0xac),&uStack_78,param_1 + 0x70,
                                    param_1 + 0x68);
        *(int *)(param_1 + 0x60) = iVar5;
        if ((-1 < iVar5) &&
           (cVar2 = FUN_1412a7250(lVar8,*(undefined4 *)(param_1 + 0xac),1,iVar5,
                                  *(int *)(param_1 + 0x80) + 1,1), cVar2 != '\0')) {
          *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + 1;
          FUN_1443b2930(param_1,*(undefined4 *)(*(longlong *)(param_1 + 0x88) + 0x10));
          FUN_14003b670(param_1,1);
          *(undefined4 *)(param_1 + 0xa8) = 3;
        }
      }
    }
    uVar6 = FUN_140040760(param_1);
    FUN_140465670(&DAT_149e581a8);
  }
  return uVar6;
}

