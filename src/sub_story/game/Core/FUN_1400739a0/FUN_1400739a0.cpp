// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400739a0  size: 644 bytes
// Name:    FUN_1400739a0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140847500, FUN_1405b8590, FUN_1453485c0, FUN_14523d840, FUN_145348760, FUN_144edb0d0, FUN_1453486d0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1400739a0(undefined1 *param_1,uint param_2,uint param_3)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  uint uVar11;
  byte bVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined1 auVar15 [64];
  float fVar16;
  undefined1 auVar17 [64];
  float fVar18;
  float fVar19;
  undefined1 auStack_c8 [52];
  undefined4 uStack_94;
  
  *(undefined8 *)(param_1 + 4) = 0xbf800000ffffffff;
  *param_1 = 1;
  uVar8 = FUN_140847500();
  lVar3 = _DAT_149c35060;
  if ((char)uVar8 != '\0') {
    if (_DAT_149c37724 < 0) {
      fVar18 = 0.0;
    }
    else {
      fVar18 = *(float *)(_DAT_149c350b8 + 0x34);
    }
    uVar9 = FUN_1405b8590(_DAT_149c374e0);
    uVar4 = _DAT_149c3773c;
    uVar8 = uVar9;
    if ((int)param_2 < (int)param_3) {
      fVar19 = 0.0;
      uVar11 = _DAT_149c3773c >> 10 & 1;
      do {
        lVar10 = (ulonglong)param_2 * 0x120;
        lVar1 = lVar3 + 0x79d0 + lVar10;
        uVar8 = (**(code **)(*(longlong *)(lVar3 + 0x79d0 + lVar10) + 0x10))(lVar1);
        if (((char)uVar8 != '\0') &&
           (uVar8 = FUN_14523d840(*(undefined8 *)(lVar1 + 0x108),*(undefined8 *)(lVar1 + 0x110)),
           (char)uVar8 != '\0')) {
          uVar6 = FUN_144edb0d0(0x149c34f90,lVar1,
                                *(undefined4 *)(_DAT_149c37770 + (ulonglong)param_2 * 4));
          uVar2 = _DAT_149c377a4;
          uVar8 = (ulonglong)uVar6 * 0x10;
          if (*(char *)(_DAT_149c3a908 + 0xc + uVar8) == '\x01') {
            auVar15 = ZEXT464(_DAT_149c377a4);
            FUN_1453485c0(auStack_c8,0x149c34f90,lVar1);
            auVar17 = ZEXT464(*(uint *)(param_1 + 8));
            bVar12 = (byte)uVar4;
            iVar7 = func_0x000145348500(*(uint *)(param_1 + 8),auVar15._0_8_,uVar11,bVar12 >> 7);
            uStack_94 = auVar17._0_4_;
            if (iVar7 != -1) {
              uStack_94 = auVar15._0_4_;
            }
            uVar13 = FUN_145348760(0x149c34f90,auStack_c8,uVar9);
            cVar5 = func_0x0001453484f0();
            if (((cVar5 != '\0') && (_DAT_149c350c8 != 0)) &&
               (lVar10 = FUN_1453486d0(_DAT_149c350c8,*(undefined4 *)(lVar1 + 0x90)), lVar10 != 0))
            {
              *(int *)(lVar10 + 0x4c) = (int)uVar13;
            }
            uVar14 = auVar15._0_8_;
            if (*(int *)(param_1 + 4) != -1) {
              uVar8 = func_0x000145348500(uVar13,*(undefined4 *)(param_1 + 8),uVar11,bVar12 >> 7);
              uVar14 = auVar15._0_8_;
              if ((int)uVar8 != -1) goto LAB_140073b55;
            }
            uVar8 = (ulonglong)((char)bVar12 < '\0');
            fVar16 = (float)uVar13;
            if (((char)bVar12 >= '\0' || fVar19 <= fVar16) && (fVar18 <= fVar16)) {
              *(undefined4 *)(param_1 + 4) = *(undefined4 *)(lVar1 + 0x90);
              *(float *)(param_1 + 8) = fVar16;
              uVar8 = func_0x000145348500(uVar13,uVar14,uVar11,bVar12 >> 7);
              if ((int)uVar8 == -1) {
                LOCK();
                uVar6 = (uint)uVar13;
                if (uVar2 != _DAT_149c377a4) {
                  uVar2 = _DAT_149c377a4;
                  uVar6 = _DAT_149c377a4;
                }
                _DAT_149c377a4 = uVar6;
                uVar8 = (ulonglong)uVar2;
                UNLOCK();
              }
            }
          }
        }
LAB_140073b55:
        param_2 = param_2 + 1;
      } while (param_3 != param_2);
    }
  }
  return uVar8;
}

