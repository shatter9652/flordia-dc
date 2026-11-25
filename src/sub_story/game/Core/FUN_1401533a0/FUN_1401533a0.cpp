// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401533a0  size: 934 bytes
// Name:    FUN_1401533a0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140323580, FUN_14486a4a0, FUN_1454f3be0, FUN_140006180, FUN_14268d440, FUN_141acefe0, FUN_14211f470
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401533a0(longlong param_1,int *param_2,undefined4 param_3,char param_4)

{
  int iVar1;
  longlong lVar2;
  int *piVar3;
  ulonglong uVar4;
  char cVar5;
  uint uVar6;
  undefined1 *puVar7;
  ulonglong uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  bool bVar15;
  ulonglong uStack_90;
  undefined4 uStack_84;
  undefined8 uStack_80;
  undefined1 *puStack_78;
  undefined1 auStack_70 [32];
  int *piStack_50;
  int iStack_44;
  
  puStack_78 = auStack_70;
  iVar1 = *param_2;
  uStack_80 = 4;
  uVar11 = _DAT_149e713e8;
  uStack_84 = param_3;
  piStack_50 = param_2;
LAB_1401533f9:
  do {
    uVar6 = uVar11;
    if ((uVar6 & 0x1ff0000) != 0) {
      LOCK();
      bVar15 = uVar6 != _DAT_149e713e8;
      uVar11 = uVar6;
      uVar9 = uVar6 + 0x100;
      if (bVar15) {
        uVar11 = _DAT_149e713e8;
        uVar9 = _DAT_149e713e8;
      }
      _DAT_149e713e8 = uVar9;
      UNLOCK();
      if (!bVar15) {
        uVar9 = (uint)(_DAT_149e713f0 >> 7) & 0xffffff;
        uVar8 = _DAT_149e713f0;
        uVar13 = _DAT_149e713f0;
        if ((_DAT_149e713f0 >> 7 & 0xffffff) != 0) {
          do {
            uVar13 = _DAT_149e713f0;
            if (0xffffffff < (longlong)uVar8) {
              LOCK();
              uVar13 = uVar8;
              uVar4 = uVar8 - 0x100000000;
              if (uVar8 != _DAT_149e713f0) {
                uVar13 = _DAT_149e713f0;
                uVar4 = _DAT_149e713f0;
              }
              _DAT_149e713f0 = uVar4;
              UNLOCK();
              uVar11 = uVar6;
              if (uVar8 == uVar13) goto LAB_1401533f9;
            }
            uVar9 = uVar9 - 1;
            uVar8 = uVar13;
            uVar13 = _DAT_149e713f0;
          } while (uVar9 != 0);
        }
        do {
          while (uStack_90 = uVar13, 0xffffffff < (longlong)uStack_90) {
            LOCK();
            uVar13 = uStack_90;
            uVar8 = uStack_90 - 0x100000000;
            if (uStack_90 != _DAT_149e713f0) {
              uVar13 = _DAT_149e713f0;
              uVar8 = _DAT_149e713f0;
            }
            _DAT_149e713f0 = uVar8;
            UNLOCK();
            uVar11 = uVar6;
            if (uStack_90 == uVar13) goto LAB_1401533f9;
          }
          cVar5 = FUN_140006180(&DAT_149e713f0,1,&uStack_90);
          uVar11 = uVar6;
          uVar13 = uStack_90;
        } while (cVar5 == '\0');
      }
      goto LAB_1401533f9;
    }
    LOCK();
    bVar15 = uVar6 != _DAT_149e713e8;
    uVar11 = uVar6 + 1;
    if (bVar15) {
      uVar6 = _DAT_149e713e8;
      uVar11 = _DAT_149e713e8;
    }
    _DAT_149e713e8 = uVar11;
    UNLOCK();
    uVar11 = uVar6;
  } while (bVar15);
  uVar11 = *(uint *)(param_1 + 0x71ac);
  if (uVar11 != 0) {
    uVar13 = 0;
    do {
      lVar12 = *(longlong *)(param_1 + 0x71b0);
      lVar14 = *(longlong *)(lVar12 + uVar13 * 8);
      lVar2 = *(longlong *)(lVar14 + 0xd0);
      if (lVar2 == 0) {
        iVar10 = 0x1ffff;
      }
      else {
        iVar10 = *(int *)(lVar2 + 0x18);
      }
      if ((iVar10 == iVar1) && ((*(byte *)(lVar14 + 0x104) & 2) == 0)) {
        uVar11 = uStack_80._4_4_;
        if (uStack_80._4_4_ == (uint)uStack_80) {
          puVar7 = auStack_70;
          uVar11 = uStack_80._4_4_ >> 1;
          if (uStack_80._4_4_ < 2) {
            uVar11 = 1;
          }
          uVar11 = uVar11 + uStack_80._4_4_;
          if (4 < uVar11) {
            puVar7 = (undefined1 *)func_0x000144d9c140(8,(ulonglong)uVar11 << 3);
          }
          if (uStack_80._4_4_ != 0) {
            func_0x000145f40560(puVar7,puStack_78,(ulonglong)uStack_80._4_4_ << 3);
          }
          if (puStack_78 != (undefined1 *)0x0 && auStack_70 != puStack_78) {
            func_0x000144d9c130(puStack_78);
          }
          uStack_80 = CONCAT44(uStack_80._4_4_,uVar11);
          uVar11 = uStack_80._4_4_;
          puStack_78 = puVar7;
        }
        uStack_80 = CONCAT44(uVar11 + 1,(uint)uStack_80);
        *(undefined8 *)(puStack_78 + (ulonglong)uVar11 * 8) = *(undefined8 *)(lVar12 + uVar13 * 8);
        uVar11 = *(uint *)(param_1 + 0x71ac);
      }
      uVar13 = uVar13 + 1;
    } while (uVar13 < uVar11);
  }
  FUN_140323580(&DAT_149e713e8);
  puVar7 = puStack_78;
  lVar12 = 0;
  if (uStack_80 >> 0x20 != 0) {
    lVar12 = (uStack_80 >> 0x20) << 3;
    lVar14 = 0;
    do {
      FUN_141acefe0(param_1,*(undefined8 *)(puVar7 + lVar14));
      lVar14 = lVar14 + 8;
    } while (lVar12 != lVar14);
  }
  if (param_4 != '\0') {
    uVar11 = _DAT_149e71418;
LAB_14015360e:
    do {
      uVar6 = uVar11;
      if ((uVar6 & 0x10000ff) != 0) {
        LOCK();
        bVar15 = uVar6 == _DAT_149e71418;
        uVar11 = uVar6;
        uVar9 = uVar6 + 0x10000;
        if (!bVar15) {
          uVar11 = _DAT_149e71418;
          uVar9 = _DAT_149e71418;
        }
        _DAT_149e71418 = uVar9;
        UNLOCK();
        if (bVar15) {
          uVar9 = (uint)(_DAT_149e71428 >> 7) & 0xffffff;
          uVar8 = _DAT_149e71428;
          uVar13 = _DAT_149e71428;
          if ((_DAT_149e71428 >> 7 & 0xffffff) != 0) {
            do {
              uVar13 = _DAT_149e71428;
              if (0xffffffff < (longlong)uVar8) {
                LOCK();
                uVar13 = uVar8;
                uVar4 = uVar8 - 0x100000000;
                if (uVar8 != _DAT_149e71428) {
                  uVar13 = _DAT_149e71428;
                  uVar4 = _DAT_149e71428;
                }
                _DAT_149e71428 = uVar4;
                UNLOCK();
                uVar11 = uVar6;
                if (uVar8 == uVar13) goto LAB_14015360e;
              }
              uVar9 = uVar9 - 1;
              uVar8 = uVar13;
              uVar13 = _DAT_149e71428;
            } while (uVar9 != 0);
          }
          do {
            while (uStack_90 = uVar13, 0xffffffff < (longlong)uStack_90) {
              LOCK();
              uVar13 = uStack_90;
              uVar8 = uStack_90 - 0x100000000;
              if (uStack_90 != _DAT_149e71428) {
                uVar13 = _DAT_149e71428;
                uVar8 = _DAT_149e71428;
              }
              _DAT_149e71428 = uVar8;
              UNLOCK();
              uVar11 = uVar6;
              if (uStack_90 == uVar13) goto LAB_14015360e;
            }
            cVar5 = FUN_140006180(&DAT_149e71428,1,&uStack_90);
            uVar11 = uVar6;
            uVar13 = uStack_90;
          } while (cVar5 == '\0');
        }
        goto LAB_14015360e;
      }
      LOCK();
      bVar15 = uVar6 != _DAT_149e71418;
      uVar11 = uVar6 | 0x1000000;
      if (bVar15) {
        uVar6 = _DAT_149e71418;
        uVar11 = _DAT_149e71418;
      }
      _DAT_149e71418 = uVar11;
      UNLOCK();
      uVar11 = uVar6;
    } while (bVar15);
  }
  piVar3 = piStack_50;
  if (*(longlong *)(param_1 + 0x7b88) != 0) {
    FUN_1454f3be0(*(longlong *)(param_1 + 0x7b88),*piStack_50);
  }
  iStack_44 = *piVar3;
  FUN_14486a4a0();
  FUN_14211f470(*piVar3,uStack_84);
  FUN_14268d440(&DAT_149e71418,CONCAT71((int7)((ulonglong)lVar12 >> 8),param_4) & 0xffffffff);
  uStack_80 = uStack_80 & 0xffffffff;
  if ((auStack_70 != puStack_78) && (puStack_78 != (undefined1 *)0x0)) {
    func_0x000144d9c130();
  }
  return;
}

