// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140117350  size: 399 bytes
// Name:    FUN_140117350
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_142bfed60, FUN_140006180, FUN_141099ab0, FUN_144f8c5c0, FUN_142bfd970, FUN_145647140
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140117350(undefined8 param_1,ulonglong param_2,char param_3)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint uVar9;
  undefined8 unaff_RBP;
  uint uVar10;
  bool bVar11;
  undefined8 uStack_40;
  
  uStack_40 = 0x140117365;
  lVar4 = FUN_145647140();
  lVar4 = -lVar4;
  if (param_3 != '\0') {
    *(undefined8 *)(&stack0xfffffffffffffff8 + lVar4) = 0x400;
    *(undefined8 *)((longlong)&uStack_40 + lVar4) = 0x140117387;
    FUN_142bfd970(&stack0xfffffffffffffff8 + lVar4,param_1);
    *(undefined8 *)((longlong)&uStack_40 + lVar4) = 0x140117394;
    FUN_141099ab0((longlong)&stack0x00000000 + lVar4,
                  *(undefined4 *)(&stack0xfffffffffffffffc + lVar4));
    return;
  }
  DAT_147c1cf90 = 1;
  uVar10 = _DAT_147c1cf70;
LAB_1401173d7:
  do {
    uVar3 = uVar10;
    if ((uVar3 & 0x10000ff) != 0) {
      LOCK();
      bVar11 = uVar3 == _DAT_147c1cf70;
      uVar10 = uVar3;
      uVar9 = uVar3 + 0x10000;
      if (!bVar11) {
        uVar10 = _DAT_147c1cf70;
        uVar9 = _DAT_147c1cf70;
      }
      _DAT_147c1cf70 = uVar9;
      UNLOCK();
      if (bVar11) {
        uVar9 = (uint)(_DAT_147c1cf80 >> 7) & 0xffffff;
        uVar6 = _DAT_147c1cf80;
        uVar8 = _DAT_147c1cf80;
        if ((_DAT_147c1cf80 >> 7 & 0xffffff) != 0) {
          do {
            uVar5 = _DAT_147c1cf80;
            if (0xffffffff < (longlong)uVar8) {
              LOCK();
              uVar5 = uVar8;
              uVar6 = uVar8 - 0x100000000;
              if (uVar8 != _DAT_147c1cf80) {
                uVar5 = _DAT_147c1cf80;
                uVar6 = _DAT_147c1cf80;
              }
              _DAT_147c1cf80 = uVar6;
              UNLOCK();
              uVar10 = uVar3;
              if (uVar8 == uVar5) goto LAB_1401173d7;
            }
            uVar9 = uVar9 - 1;
            uVar6 = _DAT_147c1cf80;
            uVar8 = uVar5;
          } while (uVar9 != 0);
        }
        do {
          *(ulonglong *)(&stack0xfffffffffffffff8 + lVar4) = uVar6;
          while ((longlong)uVar6 < 0x100000000) {
            *(undefined8 *)((longlong)&uStack_40 + lVar4) = 0x140117475;
            cVar2 = FUN_140006180(&DAT_147c1cf80,1,&stack0xfffffffffffffff8 + lVar4);
            uVar10 = uVar3;
            if (cVar2 != '\0') goto LAB_1401173d7;
            uVar6 = *(ulonglong *)(&stack0xfffffffffffffff8 + lVar4);
          }
          LOCK();
          uVar8 = uVar6 - 0x100000000;
          if (uVar6 != _DAT_147c1cf80) {
            uVar6 = _DAT_147c1cf80;
            uVar8 = _DAT_147c1cf80;
          }
          _DAT_147c1cf80 = uVar8;
          UNLOCK();
          uVar10 = uVar3;
        } while (*(ulonglong *)(&stack0xfffffffffffffff8 + lVar4) != uVar6);
      }
      goto LAB_1401173d7;
    }
    LOCK();
    bVar11 = uVar3 != _DAT_147c1cf70;
    uVar10 = uVar3 | 0x1000000;
    if (bVar11) {
      uVar3 = _DAT_147c1cf70;
      uVar10 = _DAT_147c1cf70;
    }
    _DAT_147c1cf70 = uVar10;
    UNLOCK();
    uVar10 = uVar3;
    if (!bVar11) {
      *(undefined8 *)((longlong)&uStack_40 + lVar4) = 0x1401174a9;
      FUN_144f8c5c0(&stack0xfffffffffffffff8 + lVar4);
      *(undefined8 *)(&stack0xffffffffffffffe8 + lVar4) =
           *(undefined8 *)(&stack0xfffffffffffffff8 + lVar4);
      *(undefined8 *)(&stack0xfffffffffffffff0 + lVar4) = *(undefined8 *)(&stack0x00000000 + lVar4);
      *(undefined8 *)((longlong)&uStack_40 + lVar4) = 0x1401174c1;
      FUN_142bfed60(param_1,&stack0xffffffffffffffe8 + lVar4,param_2 & 0xffffffff);
      *(undefined8 *)(&stack0x00002038 + lVar4) = *(undefined8 *)(&stack0x00002038 + lVar4);
      *(undefined8 *)(&stack0x00002030 + lVar4) = *(undefined8 *)(&stack0x00002030 + lVar4);
      *(undefined8 *)(&stack0x00002028 + lVar4) = *(undefined8 *)(&stack0x00002018 + lVar4);
      *(undefined8 *)(&stack0x00002020 + lVar4) = *(undefined8 *)(&stack0x00002010 + lVar4);
      *(undefined8 *)(&stack0x00002018 + lVar4) = unaff_RBP;
      *(undefined8 *)(&stack0x00002010 + lVar4) = *(undefined8 *)(&stack0x00002008 + lVar4);
      uVar10 = _DAT_147c1cf70;
      do {
        LOCK();
        bVar11 = uVar10 != _DAT_147c1cf70;
        uVar3 = uVar10 & 0xfeffffff;
        if (bVar11) {
          uVar10 = _DAT_147c1cf70;
          uVar3 = _DAT_147c1cf70;
        }
        _DAT_147c1cf70 = uVar3;
        UNLOCK();
      } while (bVar11);
      if ((uVar10 & 0xff0000) == 0) {
        uVar3 = _DAT_147c1cf70;
        if ((uVar10 & 0xff00) != 0) {
          do {
            LOCK();
            bVar11 = uVar3 != _DAT_147c1cf70;
            uVar10 = uVar3 & 0xffff00ff;
            if (bVar11) {
              uVar3 = _DAT_147c1cf70;
              uVar10 = _DAT_147c1cf70;
            }
            _DAT_147c1cf70 = uVar10;
            UNLOCK();
          } while (bVar11);
          uVar10 = uVar3 >> 8 & 0xff;
          if (uVar10 != 0) {
            *(longlong *)(&stack0x00002008 + lVar4) = lRam0000000147c1cf78;
            lVar7 = lRam0000000147c1cf78;
            while( true ) {
              while (lVar7 < 0) {
                *(undefined **)(&stack0x00001fe0 + lVar4) = &UNK_14046577c;
                cVar2 = FUN_1400062d0(0x147c1cf78,uVar10,&stack0x00002008 + lVar4);
                if (cVar2 != '\0') {
                  return;
                }
                lVar7 = *(longlong *)(&stack0x00002008 + lVar4);
              }
              LOCK();
              lVar1 = lVar7 + ((ulonglong)uVar10 << 0x20);
              if (lVar7 != lRam0000000147c1cf78) {
                lVar7 = lRam0000000147c1cf78;
                lVar1 = lRam0000000147c1cf78;
              }
              lRam0000000147c1cf78 = lVar1;
              UNLOCK();
              if (*(longlong *)(&stack0x00002008 + lVar4) == lVar7) break;
              *(longlong *)(&stack0x00002008 + lVar4) = lVar7;
            }
          }
        }
      }
      else {
        uVar10 = uVar10 & 0xfeffffff;
        do {
          if ((uVar10 & 0xff0000) == 0) {
            return;
          }
          LOCK();
          bVar11 = uVar10 != _DAT_147c1cf70;
          uVar3 = uVar10;
          uVar9 = uVar10 - 0x10000;
          if (bVar11) {
            uVar3 = _DAT_147c1cf70;
            uVar9 = _DAT_147c1cf70;
          }
          _DAT_147c1cf70 = uVar9;
          UNLOCK();
          uVar6 = _DAT_147c1cf80;
          if (!bVar11) {
            do {
              *(ulonglong *)(&stack0x00002008 + lVar4) = uVar6;
              while ((longlong)uVar6 < 0) {
                *(undefined **)(&stack0x00001fe0 + lVar4) = &UNK_1404656ef;
                cVar2 = FUN_1400062d0(&DAT_147c1cf80,1,&stack0x00002008 + lVar4);
                uVar3 = uVar10;
                if (cVar2 != '\0') goto code_r0x00014046570e;
                uVar6 = *(ulonglong *)(&stack0x00002008 + lVar4);
              }
              LOCK();
              uVar8 = uVar6 + 0x100000000;
              if (uVar6 != _DAT_147c1cf80) {
                uVar6 = _DAT_147c1cf80;
                uVar8 = _DAT_147c1cf80;
              }
              _DAT_147c1cf80 = uVar8;
              UNLOCK();
              uVar3 = uVar10;
            } while (*(ulonglong *)(&stack0x00002008 + lVar4) != uVar6);
          }
code_r0x00014046570e:
          uVar10 = uVar3;
        } while (bVar11);
      }
      return;
    }
  } while( true );
}

