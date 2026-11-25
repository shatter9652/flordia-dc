// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140047380  size: 424 bytes
// Name:    FUN_140047380
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1450b7440, FUN_1451de9b0, FUN_14520af50, FUN_140006180, FUN_140323580, FUN_1451de780
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_140047380(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  ulonglong uVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  bool bVar10;
  float fVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [64];
  ulonglong auStack_88 [5];
  undefined8 uStack_60;
  float afStack_54 [7];
  
  uVar5 = _DAT_147ec8848;
LAB_1400473c1:
  do {
    do {
      while (uVar6 = uVar5, (uVar6 & 0x1ff0000) == 0) {
        LOCK();
        bVar10 = uVar6 == _DAT_147ec8848;
        uVar5 = uVar6 + 1;
        if (!bVar10) {
          uVar6 = _DAT_147ec8848;
          uVar5 = _DAT_147ec8848;
        }
        _DAT_147ec8848 = uVar5;
        UNLOCK();
        uVar5 = uVar6;
        if (bVar10) {
          auVar13 = ZEXT1264(ZEXT812(0));
          if ((*(longlong *)(param_1 + 0xd0) != 0) && (DAT_147ec8860 == '\x01')) {
            FUN_1450b7440(&uStack_60,param_2);
            fVar11 = (float)FUN_14520af50(uStack_60);
            FUN_1451de9b0(auStack_88,param_2);
            lVar1 = *(longlong *)(param_1 + 0xd0);
            FUN_1451de780(afStack_54,lVar1,auStack_88);
            auVar12._0_4_ = (float)afStack_54._4_8_ * (float)*(undefined8 *)(lVar1 + 0x14);
            auVar12._4_4_ =
                 SUB84(afStack_54._4_8_,4) *
                 (float)((ulonglong)*(undefined8 *)(lVar1 + 0x14) >> 0x20);
            auVar12._8_8_ = 0;
            auVar2 = vmovshdup_avx(auVar12);
            auVar13 = ZEXT464((uint)(afStack_54[0] * *(float *)(lVar1 + 0x10) + fVar11 +
                                    auVar12._0_4_ + auVar2._0_4_));
          }
          FUN_140323580(&DAT_147ec8848);
          return auVar13._0_8_;
        }
      }
      LOCK();
      bVar10 = uVar6 != _DAT_147ec8848;
      uVar5 = uVar6;
      uVar9 = uVar6 + 0x100;
      if (bVar10) {
        uVar5 = _DAT_147ec8848;
        uVar9 = _DAT_147ec8848;
      }
      _DAT_147ec8848 = uVar9;
      UNLOCK();
    } while (bVar10);
    uVar9 = (uint)(_DAT_147ec8850 >> 7) & 0xffffff;
    uVar8 = _DAT_147ec8850;
    uVar7 = _DAT_147ec8850;
    if ((_DAT_147ec8850 >> 7 & 0xffffff) != 0) {
      do {
        uVar7 = _DAT_147ec8850;
        if (0xffffffff < (longlong)uVar8) {
          LOCK();
          uVar7 = uVar8;
          uVar3 = uVar8 - 0x100000000;
          if (uVar8 != _DAT_147ec8850) {
            uVar7 = _DAT_147ec8850;
            uVar3 = _DAT_147ec8850;
          }
          _DAT_147ec8850 = uVar3;
          UNLOCK();
          uVar5 = uVar6;
          if (uVar8 == uVar7) goto LAB_1400473c1;
        }
        uVar9 = uVar9 - 1;
        uVar8 = uVar7;
        uVar7 = _DAT_147ec8850;
      } while (uVar9 != 0);
    }
    do {
      while (auStack_88[0] = uVar7, 0xffffffff < (longlong)auStack_88[0]) {
        LOCK();
        uVar7 = auStack_88[0];
        uVar8 = auStack_88[0] - 0x100000000;
        if (auStack_88[0] != _DAT_147ec8850) {
          uVar7 = _DAT_147ec8850;
          uVar8 = _DAT_147ec8850;
        }
        _DAT_147ec8850 = uVar8;
        UNLOCK();
        uVar5 = uVar6;
        if (auStack_88[0] == uVar7) goto LAB_1400473c1;
      }
      cVar4 = FUN_140006180(&DAT_147ec8850,1,auStack_88);
      uVar5 = uVar6;
      uVar7 = auStack_88[0];
    } while (cVar4 == '\0');
  } while( true );
}

