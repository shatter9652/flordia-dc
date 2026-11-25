// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14011e0a0  size: 636 bytes
// Name:    FUN_14011e0a0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140006180, FUN_140323580
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_14011e0a0(longlong param_1)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  longlong lVar3;
  undefined1 auVar4 [16];
  ushort uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  char cVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  byte bVar15;
  longlong lVar17;
  longlong lVar18;
  bool bVar19;
  undefined1 auVar20 [16];
  ulonglong uStack_40;
  byte bVar16;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar12 = _DAT_149e71418;
LAB_14011e0e0:
  do {
    uVar11 = uVar12;
    if ((uVar11 & 0x1ff0000) != 0) {
      LOCK();
      bVar19 = uVar11 == _DAT_149e71418;
      uVar12 = uVar11;
      uVar13 = uVar11 + 0x100;
      if (!bVar19) {
        uVar12 = _DAT_149e71418;
        uVar13 = _DAT_149e71418;
      }
      _DAT_149e71418 = uVar13;
      UNLOCK();
      if (bVar19) {
        uVar13 = (uint)(_DAT_149e71420 >> 7) & 0xffffff;
        uVar14 = _DAT_149e71420;
        uVar10 = _DAT_149e71420;
        if ((_DAT_149e71420 >> 7 & 0xffffff) != 0) {
          do {
            uVar10 = _DAT_149e71420;
            if (0xffffffff < (longlong)uVar14) {
              LOCK();
              uVar10 = uVar14;
              uVar8 = uVar14 - 0x100000000;
              if (uVar14 != _DAT_149e71420) {
                uVar10 = _DAT_149e71420;
                uVar8 = _DAT_149e71420;
              }
              _DAT_149e71420 = uVar8;
              UNLOCK();
              uVar12 = uVar11;
              if (uVar14 == uVar10) goto LAB_14011e0e0;
            }
            uVar13 = uVar13 - 1;
            uVar14 = uVar10;
            uVar10 = _DAT_149e71420;
          } while (uVar13 != 0);
        }
        do {
          while (uStack_40 = uVar10, (longlong)uStack_40 < 0x100000000) {
            cVar9 = FUN_140006180(&DAT_149e71420,1,&uStack_40);
            uVar12 = uVar11;
            uVar10 = uStack_40;
            if (cVar9 != '\0') goto LAB_14011e0e0;
          }
          LOCK();
          uVar10 = uStack_40;
          uVar14 = uStack_40 - 0x100000000;
          if (uStack_40 != _DAT_149e71420) {
            uVar10 = _DAT_149e71420;
            uVar14 = _DAT_149e71420;
          }
          _DAT_149e71420 = uVar14;
          UNLOCK();
          uVar12 = uVar11;
        } while (uStack_40 != uVar10);
      }
      goto LAB_14011e0e0;
    }
    LOCK();
    bVar19 = uVar11 != _DAT_149e71418;
    uVar12 = uVar11 + 1;
    if (bVar19) {
      uVar11 = _DAT_149e71418;
      uVar12 = _DAT_149e71418;
    }
    _DAT_149e71418 = uVar12;
    UNLOCK();
    uVar12 = uVar11;
  } while (bVar19);
  if (_DAT_149e71c50 == 0) {
LAB_14011e2f3:
    lVar17 = 0;
  }
  else {
    uVar12 = *(uint *)(param_1 + 0x14);
    lVar17 = 0;
    uVar11 = (uVar12 >> 0x10 ^ uVar12) * -0x7a143595;
    uVar11 = (uVar11 >> 0xd ^ uVar11) * -0x3d4d51cb;
    uVar11 = uVar11 >> 0x10 ^ uVar11;
    uVar13 = uVar11 >> 7;
    bVar16 = (byte)uVar11;
    bVar15 = bVar16 & 0x7f;
    auVar20._0_8_ =
         CONCAT17(bVar16,CONCAT16(bVar16,CONCAT15(bVar16,CONCAT14(bVar16,CONCAT13(bVar16,CONCAT12(
                                                  bVar16,CONCAT11(bVar16,bVar16))))))) &
         0x7f7f7f7f7f7f7f7f;
    auVar20[8] = bVar15;
    auVar20[9] = bVar15;
    auVar20[10] = bVar15;
    auVar20[0xb] = bVar15;
    auVar20[0xc] = bVar15;
    auVar20[0xd] = bVar15;
    auVar20[0xe] = bVar15;
    auVar20[0xf] = bVar15;
    while( true ) {
      uVar13 = uVar13 & _DAT_149e71c50 - 1U;
      auVar2 = *(undefined1 (*) [16])(_DAT_149e71c58 + (ulonglong)uVar13 * 400);
      auVar4 = vpcmpeqb_avx(auVar2,auVar20);
      uVar5 = (ushort)(SUB161(auVar4 >> 7,0) & 1) | (ushort)(SUB161(auVar4 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar4 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar4 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar4 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar4 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar4 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar4 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar4 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar4 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar4 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar4 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(auVar4 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(auVar4 >> 0x6f,0) & 1) << 0xd |
              (ushort)(SUB161(auVar4 >> 0x77,0) & 1) << 0xe |
              (ushort)(byte)(auVar4[0xf] >> 7) << 0xf;
      if (uVar5 != 0) {
        uVar11 = (uint)uVar5;
        do {
          uVar6 = 0;
          for (uVar7 = uVar11; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
            uVar6 = uVar6 + 1;
          }
          if (*(uint *)((ulonglong)uVar13 * 400 + _DAT_149e71c58 + 0x10 + (ulonglong)uVar6 * 0x18)
              == uVar12) {
            lVar17 = 0;
            uVar12 = uVar13 << 4 | uVar6;
            lVar1 = _DAT_149e71c58 + (ulonglong)(uVar12 >> 4) * 400 + 0x10 +
                    (ulonglong)(uVar6 & 0xf) * 0x18;
            if (uVar12 == 0xffffffff) goto LAB_14011e2fe;
            uVar10 = (ulonglong)*(uint *)(lVar1 + 0xc);
            if (uVar10 == 0) goto LAB_14011e2f3;
            lVar17 = 0;
            uVar14 = 0;
            goto LAB_14011e296;
          }
          uVar11 = uVar11 - 1 & uVar11;
        } while (uVar11 != 0);
      }
      auVar2 = vpsignb_avx(auVar2,auVar2);
      if ((((((((((((((((SUB161(auVar2 >> 7,0) & 1) != 0 || (SUB161(auVar2 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar2 >> 0x17,0) & 1) != 0) || (SUB161(auVar2 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar2 >> 0x27,0) & 1) != 0) || (SUB161(auVar2 >> 0x2f,0) & 1) != 0)
                  || (SUB161(auVar2 >> 0x37,0) & 1) != 0) || (SUB161(auVar2 >> 0x3f,0) & 1) != 0) ||
                (SUB161(auVar2 >> 0x47,0) & 1) != 0) || (SUB161(auVar2 >> 0x4f,0) & 1) != 0) ||
              (SUB161(auVar2 >> 0x57,0) & 1) != 0) || (SUB161(auVar2 >> 0x5f,0) & 1) != 0) ||
            (SUB161(auVar2 >> 0x67,0) & 1) != 0) || (SUB161(auVar2 >> 0x6f,0) & 1) != 0) ||
          (SUB161(auVar2 >> 0x77,0) & 1) != 0) || auVar2[0xf] < '\0') break;
      uVar13 = uVar13 + 1;
    }
  }
  goto LAB_14011e2fe;
  while (uVar14 = uVar14 + 1, uVar10 != uVar14) {
LAB_14011e296:
    lVar3 = *(longlong *)(*(longlong *)(lVar1 + 0x10) + uVar14 * 8);
    uVar12 = *(uint *)(lVar3 + 0x20);
    if (uVar12 == 0x1ffff) {
LAB_14011e2dd:
      lVar18 = 0;
    }
    else {
      uVar11 = *(uint *)(_DAT_149e8e208[5] + (ulonglong)(uVar12 & 0x1ffff) * 4);
      if (((~uVar11 & *(uint *)(_DAT_149e8e208 + 6)) != 0) ||
         ((uVar11 & 0x7fe0000) != (uVar12 & 0xfffe0000))) goto LAB_14011e2dd;
      lVar18 = (ulonglong)((uVar12 & 0x1ffff) * (int)_DAT_149e8e208[1]) + *_DAT_149e8e208;
    }
    if (lVar18 == param_1) {
      lVar17 = lVar3 + 8;
      break;
    }
  }
LAB_14011e2fe:
  FUN_140323580(&DAT_149e71418);
  return lVar17;
}

