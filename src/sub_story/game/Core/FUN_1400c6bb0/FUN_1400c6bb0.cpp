// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400c6bb0  size: 477 bytes
// Name:    FUN_1400c6bb0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140006180, FUN_140323580
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1400c6bb0(ulonglong param_1)

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
  ulonglong uStack_38;
  byte bVar13;
  
  uVar7 = _DAT_14a9ec910;
LAB_1400c6be6:
  do {
    do {
      while (uVar8 = uVar7, (uVar8 & 0x1ff0000) == 0) {
        LOCK();
        bVar15 = uVar8 == _DAT_14a9ec910;
        uVar7 = uVar8 + 1;
        if (!bVar15) {
          uVar8 = _DAT_14a9ec910;
          uVar7 = _DAT_14a9ec910;
        }
        _DAT_14a9ec910 = uVar7;
        UNLOCK();
        uVar7 = uVar8;
        if (bVar15) {
          if (_DAT_14a9ec900 != 0) {
            uVar11 = (param_1 >> 0x21 ^ param_1) * -0xae502812aa7333;
            lVar14 = (uVar11 >> 0x21 ^ uVar11) * -0x3b314601e57a13ad;
            uVar7 = (uint)((ulonglong)lVar14 >> 0x21) ^ (uint)lVar14;
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
              uVar8 = uVar8 & _DAT_14a9ec900 - 1U;
              auVar1 = *(undefined1 (*) [16])(_DAT_14a9ec908 + (ulonglong)uVar8 * 0x110);
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
                uVar7 = (uint)uVar3;
                do {
                  uVar10 = 0;
                  for (uVar4 = uVar7; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
                    uVar10 = uVar10 + 1;
                  }
                  if (*(ulonglong *)
                       ((ulonglong)uVar8 * 0x110 + _DAT_14a9ec908 + 0x10 + (ulonglong)(uVar10 << 4))
                      == param_1) {
                    uVar11 = CONCAT71((int7)(param_1 >> 8),(uVar10 | uVar8 << 4) != 0xffffffff);
                    goto LAB_1400c6d61;
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
          uVar11 = 0;
LAB_1400c6d61:
          FUN_140323580(&DAT_14a9ec910);
          return uVar11 & 0xffffffff;
        }
      }
      LOCK();
      bVar15 = uVar8 != _DAT_14a9ec910;
      uVar7 = uVar8;
      uVar10 = uVar8 + 0x100;
      if (bVar15) {
        uVar7 = _DAT_14a9ec910;
        uVar10 = _DAT_14a9ec910;
      }
      _DAT_14a9ec910 = uVar10;
      UNLOCK();
    } while (bVar15);
    uVar10 = (uint)(_DAT_14a9ec918 >> 7) & 0xffffff;
    uVar9 = _DAT_14a9ec918;
    uVar11 = _DAT_14a9ec918;
    if ((_DAT_14a9ec918 >> 7 & 0xffffff) != 0) {
      do {
        uVar11 = _DAT_14a9ec918;
        if (0xffffffff < (longlong)uVar9) {
          LOCK();
          uVar11 = uVar9;
          uVar5 = uVar9 - 0x100000000;
          if (uVar9 != _DAT_14a9ec918) {
            uVar11 = _DAT_14a9ec918;
            uVar5 = _DAT_14a9ec918;
          }
          _DAT_14a9ec918 = uVar5;
          UNLOCK();
          uVar7 = uVar8;
          if (uVar9 == uVar11) goto LAB_1400c6be6;
        }
        uVar10 = uVar10 - 1;
        uVar9 = uVar11;
        uVar11 = _DAT_14a9ec918;
      } while (uVar10 != 0);
    }
    do {
      while (uStack_38 = uVar11, 0xffffffff < (longlong)uStack_38) {
        LOCK();
        uVar11 = uStack_38;
        uVar9 = uStack_38 - 0x100000000;
        if (uStack_38 != _DAT_14a9ec918) {
          uVar11 = _DAT_14a9ec918;
          uVar9 = _DAT_14a9ec918;
        }
        _DAT_14a9ec918 = uVar9;
        UNLOCK();
        uVar7 = uVar8;
        if (uStack_38 == uVar11) goto LAB_1400c6be6;
      }
      cVar6 = FUN_140006180(&DAT_14a9ec918,1,&uStack_38);
      uVar7 = uVar8;
      uVar11 = uStack_38;
    } while (cVar6 == '\0');
  } while( true );
}

