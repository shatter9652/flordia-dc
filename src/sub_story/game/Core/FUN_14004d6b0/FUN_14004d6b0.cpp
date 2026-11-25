// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14004d6b0  size: 539 bytes
// Name:    FUN_14004d6b0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140006180, FUN_140323580
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_14004d6b0(uint param_1,undefined1 *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  ushort uVar3;
  uint uVar4;
  ulonglong uVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  byte bVar12;
  longlong lVar14;
  bool bVar15;
  undefined1 auVar16 [16];
  ulonglong uStack_40;
  byte bVar13;
  
  uVar7 = _DAT_14800e2e0;
LAB_14004d6eb:
  do {
    do {
      while (uVar8 = uVar7, (uVar8 & 0x1ff0000) == 0) {
        LOCK();
        bVar15 = uVar8 == _DAT_14800e2e0;
        uVar7 = uVar8 + 1;
        if (!bVar15) {
          uVar8 = _DAT_14800e2e0;
          uVar7 = _DAT_14800e2e0;
        }
        _DAT_14800e2e0 = uVar7;
        UNLOCK();
        uVar7 = uVar8;
        if (bVar15) {
          if (_DAT_14800e360 != 0) {
            uVar11 = ((ulonglong)param_1 + 0x651e95c4d06fbfb1 ^ 4) * -0x622015f714c7d297;
            lVar14 = (uVar11 >> 0x2f ^ uVar11 ^ 4) * -0x622015f714c7d297;
            uVar7 = ((uint)((ulonglong)lVar14 >> 0x2f) ^ (uint)lVar14) * -0x14c7d297;
            uVar8 = uVar7 >> 7;
            bVar13 = (byte)uVar7;
            bVar12 = bVar13 & 0x7f;
            auVar16._0_8_ =
                 CONCAT17(bVar13,CONCAT16(bVar13,CONCAT15(bVar13,CONCAT14(bVar13,CONCAT13(bVar13,
                                                  CONCAT12(bVar13,CONCAT11(bVar13,bVar13))))))) &
                 0x7f7f7f7f7f7f7f7f;
            auVar16[8] = bVar12;
            auVar16[9] = bVar12;
            auVar16[10] = bVar12;
            auVar16[0xb] = bVar12;
            auVar16[0xc] = bVar12;
            auVar16[0xd] = bVar12;
            auVar16[0xe] = bVar12;
            auVar16[0xf] = bVar12;
            while( true ) {
              uVar8 = uVar8 & _DAT_14800e360 - 1U;
              auVar1 = *(undefined1 (*) [16])(_DAT_14800e370 + (ulonglong)uVar8 * 0xd0);
              auVar2 = vpcmpeqb_avx(auVar1,auVar16);
              uVar3 = (ushort)(SUB161(auVar2 >> 7,0) & 1) |
                      (ushort)(SUB161(auVar2 >> 0xf,0) & 1) << 1 |
                      (ushort)(SUB161(auVar2 >> 0x17,0) & 1) << 2 |
                      (ushort)(SUB161(auVar2 >> 0x1f,0) & 1) << 3 |
                      (ushort)(SUB161(auVar2 >> 0x27,0) & 1) << 4 |
                      (ushort)(SUB161(auVar2 >> 0x2f,0) & 1) << 5 |
                      (ushort)(SUB161(auVar2 >> 0x37,0) & 1) << 6 |
                      (ushort)(SUB161(auVar2 >> 0x3f,0) & 1) << 7 |
                      (ushort)(SUB161(auVar2 >> 0x47,0) & 1) << 8 |
                      (ushort)(SUB161(auVar2 >> 0x4f,0) & 1) << 9 |
                      (ushort)(SUB161(auVar2 >> 0x57,0) & 1) << 10 |
                      (ushort)(SUB161(auVar2 >> 0x5f,0) & 1) << 0xb |
                      (ushort)(SUB161(auVar2 >> 0x67,0) & 1) << 0xc |
                      (ushort)(SUB161(auVar2 >> 0x6f,0) & 1) << 0xd |
                      (ushort)(SUB161(auVar2 >> 0x77,0) & 1) << 0xe |
                      (ushort)(byte)(auVar2[0xf] >> 7) << 0xf;
              if (uVar3 != 0) {
                lVar14 = (ulonglong)uVar8 * 0xd0 + _DAT_14800e370;
                uVar7 = (uint)uVar3;
                do {
                  uVar10 = 0;
                  for (uVar4 = uVar7; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
                    uVar10 = uVar10 + 1;
                  }
                  if ((*(int *)(lVar14 + 0x14 + (ulonglong)uVar10 * 0xc) == 4) &&
                     (*(uint *)(lVar14 + 0x10 + (ulonglong)uVar10 * 0xc) == param_1)) {
                    uVar7 = uVar8 << 4 | uVar10;
                    if (uVar7 == 0xffffffff) goto LAB_14004d8ab;
                    lVar14 = _DAT_14800e370 + (ulonglong)(uVar7 >> 4) * 0xd0;
                    if (*(short *)(lVar14 + 0x1a + (ulonglong)(uVar10 & 0xf) * 0xc) == 0)
                    goto LAB_14004d8ab;
                    *param_2 = *(undefined1 *)(lVar14 + 0x18 + (ulonglong)(uVar10 & 0xf) * 0xc);
                    uVar11 = CONCAT71((int7)((ulonglong)param_2 >> 8),1);
                    goto LAB_14004d8ad;
                  }
                  uVar7 = uVar7 - 1 & uVar7;
                } while (uVar7 != 0);
              }
              auVar1 = vpsignb_avx(auVar1,auVar1);
              if ((((((((((((((((SUB161(auVar1 >> 7,0) & 1) != 0 ||
                               (SUB161(auVar1 >> 0xf,0) & 1) != 0) ||
                              (SUB161(auVar1 >> 0x17,0) & 1) != 0) ||
                             (SUB161(auVar1 >> 0x1f,0) & 1) != 0) ||
                            (SUB161(auVar1 >> 0x27,0) & 1) != 0) ||
                           (SUB161(auVar1 >> 0x2f,0) & 1) != 0) ||
                          (SUB161(auVar1 >> 0x37,0) & 1) != 0) ||
                         (SUB161(auVar1 >> 0x3f,0) & 1) != 0) || (SUB161(auVar1 >> 0x47,0) & 1) != 0
                        ) || (SUB161(auVar1 >> 0x4f,0) & 1) != 0) ||
                      (SUB161(auVar1 >> 0x57,0) & 1) != 0) || (SUB161(auVar1 >> 0x5f,0) & 1) != 0)
                    || (SUB161(auVar1 >> 0x67,0) & 1) != 0) || (SUB161(auVar1 >> 0x6f,0) & 1) != 0)
                  || (SUB161(auVar1 >> 0x77,0) & 1) != 0) || auVar1[0xf] < '\0') break;
              uVar8 = uVar8 + 1;
            }
          }
LAB_14004d8ab:
          uVar11 = 0;
LAB_14004d8ad:
          FUN_140323580(&DAT_14800e2e0);
          return uVar11 & 0xffffffff;
        }
      }
      LOCK();
      bVar15 = uVar8 != _DAT_14800e2e0;
      uVar7 = uVar8;
      uVar10 = uVar8 + 0x100;
      if (bVar15) {
        uVar7 = _DAT_14800e2e0;
        uVar10 = _DAT_14800e2e0;
      }
      _DAT_14800e2e0 = uVar10;
      UNLOCK();
    } while (bVar15);
    uVar10 = (uint)(_DAT_14800e2e8 >> 7) & 0xffffff;
    uVar9 = _DAT_14800e2e8;
    uVar11 = _DAT_14800e2e8;
    if ((_DAT_14800e2e8 >> 7 & 0xffffff) != 0) {
      do {
        uVar11 = _DAT_14800e2e8;
        if (0xffffffff < (longlong)uVar9) {
          LOCK();
          uVar11 = uVar9;
          uVar5 = uVar9 - 0x100000000;
          if (uVar9 != _DAT_14800e2e8) {
            uVar11 = _DAT_14800e2e8;
            uVar5 = _DAT_14800e2e8;
          }
          _DAT_14800e2e8 = uVar5;
          UNLOCK();
          uVar7 = uVar8;
          if (uVar9 == uVar11) goto LAB_14004d6eb;
        }
        uVar10 = uVar10 - 1;
        uVar9 = uVar11;
        uVar11 = _DAT_14800e2e8;
      } while (uVar10 != 0);
    }
    do {
      while (uStack_40 = uVar11, 0xffffffff < (longlong)uStack_40) {
        LOCK();
        uVar11 = uStack_40;
        uVar9 = uStack_40 - 0x100000000;
        if (uStack_40 != _DAT_14800e2e8) {
          uVar11 = _DAT_14800e2e8;
          uVar9 = _DAT_14800e2e8;
        }
        _DAT_14800e2e8 = uVar9;
        UNLOCK();
        uVar7 = uVar8;
        if (uStack_40 == uVar11) goto LAB_14004d6eb;
      }
      cVar6 = FUN_140006180(&DAT_14800e2e8,1,&uStack_40);
      uVar7 = uVar8;
      uVar11 = uStack_40;
    } while (cVar6 == '\0');
  } while( true );
}

