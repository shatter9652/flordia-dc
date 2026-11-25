// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14018a490  size: 509 bytes
// Name:    FUN_14018a490
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140323580, FUN_140006180
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14018a490(ulonglong param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  ushort uVar3;
  uint uVar4;
  ulonglong uVar5;
  char cVar6;
  undefined8 uVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  byte bVar13;
  longlong lVar15;
  bool bVar16;
  undefined1 auVar17 [16];
  ulonglong uStack_38;
  byte bVar14;
  
  uVar8 = _DAT_148ef7d38;
LAB_14018a4c6:
  do {
    do {
      while (uVar9 = uVar8, (uVar9 & 0x1ff0000) == 0) {
        LOCK();
        bVar16 = uVar9 == _DAT_148ef7d38;
        uVar8 = uVar9 + 1;
        if (!bVar16) {
          uVar9 = _DAT_148ef7d38;
          uVar8 = _DAT_148ef7d38;
        }
        _DAT_148ef7d38 = uVar8;
        UNLOCK();
        uVar8 = uVar9;
        if (bVar16) {
          if (_DAT_148ef7d50 == 0) {
LAB_14018a66e:
            uVar7 = 0;
          }
          else {
            uVar7 = 0;
            uVar12 = (param_1 >> 0x21 ^ param_1) * -0xae502812aa7333;
            lVar15 = (uVar12 >> 0x21 ^ uVar12) * -0x3b314601e57a13ad;
            uVar8 = (uint)((ulonglong)lVar15 >> 0x21) ^ (uint)lVar15;
            uVar9 = uVar8 >> 7;
            bVar14 = (byte)uVar8;
            bVar13 = bVar14 & 0x7f;
            auVar17._0_8_ =
                 CONCAT17(bVar14,CONCAT16(bVar14,CONCAT15(bVar14,CONCAT14(bVar14,CONCAT13(bVar14,
                                                  CONCAT12(bVar14,CONCAT11(bVar14,bVar14))))))) &
                 0x7f7f7f7f7f7f7f7f;
            auVar17[8] = bVar13;
            auVar17[9] = bVar13;
            auVar17[10] = bVar13;
            auVar17[0xb] = bVar13;
            auVar17[0xc] = bVar13;
            auVar17[0xd] = bVar13;
            auVar17[0xe] = bVar13;
            auVar17[0xf] = bVar13;
            while( true ) {
              uVar9 = uVar9 & _DAT_148ef7d50 - 1U;
              auVar1 = *(undefined1 (*) [16])(_DAT_148ef7d58 + (ulonglong)uVar9 * 0x110);
              auVar2 = vpcmpeqb_avx(auVar1,auVar17);
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
                uVar8 = (uint)uVar3;
                do {
                  uVar11 = 0;
                  for (uVar4 = uVar8; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
                    uVar11 = uVar11 + 1;
                  }
                  if (*(ulonglong *)
                       ((ulonglong)uVar9 * 0x110 + _DAT_148ef7d58 + 0x10 + (ulonglong)(uVar11 << 4))
                      == param_1) {
                    uVar8 = uVar9 << 4 | uVar11;
                    if (uVar8 == 0xffffffff) goto LAB_14018a66e;
                    uVar7 = func_0x000144dd0bd0(*(undefined4 *)
                                                 ((ulonglong)((uVar11 & 0xf) << 4) + 0x18 +
                                                 _DAT_148ef7d58 + (ulonglong)(uVar8 >> 4) * 0x110));
                    goto LAB_14018a670;
                  }
                  uVar8 = uVar8 - 1 & uVar8;
                } while (uVar8 != 0);
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
              uVar9 = uVar9 + 1;
            }
          }
LAB_14018a670:
          FUN_140323580(&DAT_148ef7d38);
          return uVar7;
        }
      }
      LOCK();
      bVar16 = uVar9 != _DAT_148ef7d38;
      uVar8 = uVar9;
      uVar11 = uVar9 + 0x100;
      if (bVar16) {
        uVar8 = _DAT_148ef7d38;
        uVar11 = _DAT_148ef7d38;
      }
      _DAT_148ef7d38 = uVar11;
      UNLOCK();
    } while (bVar16);
    uVar11 = (uint)(_DAT_148ef7d40 >> 7) & 0xffffff;
    uVar10 = _DAT_148ef7d40;
    uVar12 = _DAT_148ef7d40;
    if ((_DAT_148ef7d40 >> 7 & 0xffffff) != 0) {
      do {
        uVar12 = _DAT_148ef7d40;
        if (0xffffffff < (longlong)uVar10) {
          LOCK();
          uVar12 = uVar10;
          uVar5 = uVar10 - 0x100000000;
          if (uVar10 != _DAT_148ef7d40) {
            uVar12 = _DAT_148ef7d40;
            uVar5 = _DAT_148ef7d40;
          }
          _DAT_148ef7d40 = uVar5;
          UNLOCK();
          uVar8 = uVar9;
          if (uVar10 == uVar12) goto LAB_14018a4c6;
        }
        uVar11 = uVar11 - 1;
        uVar10 = uVar12;
        uVar12 = _DAT_148ef7d40;
      } while (uVar11 != 0);
    }
    do {
      while (uStack_38 = uVar12, 0xffffffff < (longlong)uStack_38) {
        LOCK();
        uVar12 = uStack_38;
        uVar10 = uStack_38 - 0x100000000;
        if (uStack_38 != _DAT_148ef7d40) {
          uVar12 = _DAT_148ef7d40;
          uVar10 = _DAT_148ef7d40;
        }
        _DAT_148ef7d40 = uVar10;
        UNLOCK();
        uVar8 = uVar9;
        if (uStack_38 == uVar12) goto LAB_14018a4c6;
      }
      cVar6 = FUN_140006180(&DAT_148ef7d40,1,&uStack_38);
      uVar8 = uVar9;
      uVar12 = uStack_38;
    } while (cVar6 == '\0');
  } while( true );
}

