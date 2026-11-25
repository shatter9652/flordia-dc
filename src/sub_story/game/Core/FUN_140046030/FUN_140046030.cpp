// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140046030  size: 448 bytes
// Name:    FUN_140046030
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1443b2930, FUN_141165f80, FUN_140006180
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140046030(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  char cVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong *plVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  bool bVar11;
  ulonglong uStack_38;
  
  uVar9 = _DAT_149e581a8;
LAB_140046066:
  do {
    uVar4 = uVar9;
    if ((uVar4 & 0x10000ff) != 0) {
      LOCK();
      bVar10 = uVar4 == _DAT_149e581a8;
      uVar9 = uVar4;
      uVar8 = uVar4 + 0x10000;
      if (!bVar10) {
        uVar9 = _DAT_149e581a8;
        uVar8 = _DAT_149e581a8;
      }
      _DAT_149e581a8 = uVar8;
      UNLOCK();
      if (bVar10) {
        uVar8 = (uint)(_DAT_149e581b8 >> 7) & 0xffffff;
        uVar6 = _DAT_149e581b8;
        uVar5 = _DAT_149e581b8;
        if ((_DAT_149e581b8 >> 7 & 0xffffff) != 0) {
          do {
            uVar5 = _DAT_149e581b8;
            if (0xffffffff < (longlong)uVar6) {
              LOCK();
              uVar5 = uVar6;
              uVar2 = uVar6 - 0x100000000;
              if (uVar6 != _DAT_149e581b8) {
                uVar5 = _DAT_149e581b8;
                uVar2 = _DAT_149e581b8;
              }
              _DAT_149e581b8 = uVar2;
              UNLOCK();
              uVar9 = uVar4;
              if (uVar6 == uVar5) goto LAB_140046066;
            }
            uVar8 = uVar8 - 1;
            uVar6 = uVar5;
            uVar5 = _DAT_149e581b8;
          } while (uVar8 != 0);
        }
        do {
          while (uStack_38 = uVar5, (longlong)uStack_38 < 0x100000000) {
            cVar3 = FUN_140006180(&DAT_149e581b8,1,&uStack_38);
            uVar9 = uVar4;
            uVar5 = uStack_38;
            if (cVar3 != '\0') goto LAB_140046066;
          }
          LOCK();
          uVar5 = uStack_38;
          uVar6 = uStack_38 - 0x100000000;
          if (uStack_38 != _DAT_149e581b8) {
            uVar5 = _DAT_149e581b8;
            uVar6 = _DAT_149e581b8;
          }
          _DAT_149e581b8 = uVar6;
          UNLOCK();
          uVar9 = uVar4;
        } while (uStack_38 != uVar5);
      }
      goto LAB_140046066;
    }
    LOCK();
    bVar10 = uVar4 != _DAT_149e581a8;
    uVar9 = uVar4 | 0x1000000;
    if (bVar10) {
      uVar4 = _DAT_149e581a8;
      uVar9 = _DAT_149e581a8;
    }
    _DAT_149e581a8 = uVar9;
    UNLOCK();
    uVar9 = uVar4;
  } while (bVar10);
  lVar1 = *(longlong *)(param_1 + 0x88);
  uVar9 = _DAT_149e581a8;
  if (((lVar1 == 0) || (cVar3 = func_0x00014003b650(), uVar9 = _DAT_149e581a8, cVar3 == '\0')) ||
     (*(uint *)(param_1 + 0xa8) < 2)) goto code_r0x000140465681;
  if ((*(uint *)(param_1 + 0xa8) == 5) || (*(int *)(lVar1 + 0x20) != 5)) {
    if (*(longlong **)(param_1 + 0x90) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_1 + 0x90) + 0x10))();
      *(undefined8 *)(param_1 + 0x90) = 0;
    }
    *(undefined1 *)(param_1 + 0xb0) = 1;
    uVar9 = _DAT_149e581a8;
    goto code_r0x000140465681;
  }
  FUN_141165f80(param_1);
  plVar7 = *(longlong **)(param_1 + 0x88);
  if ((int)plVar7[1] == 1) {
    (**(code **)(*plVar7 + 0x20))();
    plVar7 = *(longlong **)(param_1 + 0x88);
    if (plVar7 != (longlong *)0x0) goto LAB_140046189;
  }
  else {
LAB_140046189:
    (**(code **)(*plVar7 + 0x10))();
    *(undefined8 *)(param_1 + 0x88) = 0;
  }
  *(undefined4 *)(param_1 + 0xa8) = 0;
  FUN_1443b2930(param_1,0xffffffff);
  uVar9 = _DAT_149e581a8;
code_r0x000140465681:
  do {
    LOCK();
    bVar10 = uVar9 != _DAT_149e581a8;
    uVar4 = uVar9 & 0xfeffffff;
    if (bVar10) {
      uVar9 = _DAT_149e581a8;
      uVar4 = _DAT_149e581a8;
    }
    _DAT_149e581a8 = uVar4;
    UNLOCK();
  } while (bVar10);
  if ((uVar9 & 0xff0000) == 0) {
    uVar4 = _DAT_149e581a8;
    if ((uVar9 & 0xff00) != 0) {
      do {
        LOCK();
        bVar10 = uVar4 != _DAT_149e581a8;
        uVar9 = uVar4 & 0xffff00ff;
        if (bVar10) {
          uVar4 = _DAT_149e581a8;
          uVar9 = _DAT_149e581a8;
        }
        _DAT_149e581a8 = uVar9;
        UNLOCK();
      } while (bVar10);
      uVar9 = uVar4 >> 8 & 0xff;
      if (uVar9 != 0) {
        uStack_38 = uRam0000000149e581b0;
        do {
          while (-1 < (longlong)uStack_38) {
            LOCK();
            uVar5 = uStack_38;
            uVar6 = uStack_38 + ((ulonglong)uVar9 << 0x20);
            if (uStack_38 != uRam0000000149e581b0) {
              uVar5 = uRam0000000149e581b0;
              uVar6 = uRam0000000149e581b0;
            }
            uRam0000000149e581b0 = uVar6;
            UNLOCK();
            bVar10 = uStack_38 == uVar5;
            uStack_38 = uVar5;
            if (bVar10) {
              return;
            }
          }
          cVar3 = FUN_1400062d0(0x149e581b0,uVar9,&uStack_38);
        } while (cVar3 == '\0');
      }
    }
  }
  else {
    uVar9 = uVar9 & 0xfeffffff;
    do {
      if ((uVar9 & 0xff0000) == 0) {
        return;
      }
      LOCK();
      bVar10 = uVar9 != _DAT_149e581a8;
      uVar4 = uVar9;
      uVar8 = uVar9 - 0x10000;
      if (bVar10) {
        uVar4 = _DAT_149e581a8;
        uVar8 = _DAT_149e581a8;
      }
      _DAT_149e581a8 = uVar8;
      UNLOCK();
      uStack_38 = _DAT_149e581b8;
      if (!bVar10) {
        do {
          while ((longlong)uStack_38 < 0) {
            cVar3 = FUN_1400062d0(&DAT_149e581b8,1,&uStack_38);
            uVar4 = uVar9;
            if (cVar3 != '\0') goto code_r0x00014046570e;
          }
          LOCK();
          uVar5 = uStack_38;
          uVar6 = uStack_38 + 0x100000000;
          if (uStack_38 != _DAT_149e581b8) {
            uVar5 = _DAT_149e581b8;
            uVar6 = _DAT_149e581b8;
          }
          _DAT_149e581b8 = uVar6;
          UNLOCK();
          bVar11 = uStack_38 != uVar5;
          uVar4 = uVar9;
          uStack_38 = uVar5;
        } while (bVar11);
      }
code_r0x00014046570e:
      uVar9 = uVar4;
    } while (bVar10);
  }
  return;
}

