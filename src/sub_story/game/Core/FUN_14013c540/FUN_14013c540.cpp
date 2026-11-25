// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14013c540  size: 402 bytes
// Name:    FUN_14013c540
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140006180, FUN_140323580
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_14013c540(uint param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  ushort uVar3;
  uint uVar4;
  ulonglong uVar5;
  char cVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  undefined7 uVar11;
  byte bVar12;
  uint uVar14;
  bool bVar15;
  undefined1 auVar16 [16];
  ulonglong uStack_38;
  byte bVar13;
  
  uVar8 = _DAT_14927f8d0;
LAB_14013c575:
  do {
    do {
      while (uVar14 = uVar8, (uVar14 & 0x1ff0000) == 0) {
        LOCK();
        bVar15 = uVar14 == _DAT_14927f8d0;
        uVar8 = uVar14 + 1;
        if (!bVar15) {
          uVar14 = _DAT_14927f8d0;
          uVar8 = _DAT_14927f8d0;
        }
        _DAT_14927f8d0 = uVar8;
        UNLOCK();
        uVar8 = uVar14;
        if (bVar15) {
          uVar11 = (undefined7)((ulonglong)&uStack_38 >> 8);
          uVar7 = CONCAT71(uVar11,1);
          if (_DAT_14927f8f8 != 0) {
            bVar13 = (byte)param_1;
            bVar12 = bVar13 & 0x7f;
            uVar8 = param_1 >> 7;
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
              uVar8 = uVar8 & _DAT_14927f8f8 - 1U;
              auVar1 = *(undefined1 (*) [16])(_DAT_14927f900 + (ulonglong)uVar8 * 0x50);
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
                uVar14 = (uint)uVar3;
                do {
                  uVar10 = 0;
                  for (uVar4 = uVar14; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
                    uVar10 = uVar10 + 1;
                  }
                  if (*(uint *)((ulonglong)uVar8 * 0x50 + _DAT_14927f900 + 0x10 +
                               (ulonglong)uVar10 * 4) == param_1) {
                    uVar7 = CONCAT71(uVar11,(uVar10 | uVar8 << 4) == 0xffffffff);
                    goto LAB_14013c6b6;
                  }
                  uVar14 = uVar14 - 1 & uVar14;
                } while (uVar14 != 0);
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
LAB_14013c6b6:
          FUN_140323580(&DAT_14927f8d0);
          return uVar7 & 0xffffffff;
        }
      }
      LOCK();
      bVar15 = uVar14 != _DAT_14927f8d0;
      uVar8 = uVar14;
      uVar10 = uVar14 + 0x100;
      if (bVar15) {
        uVar8 = _DAT_14927f8d0;
        uVar10 = _DAT_14927f8d0;
      }
      _DAT_14927f8d0 = uVar10;
      UNLOCK();
    } while (bVar15);
    uVar10 = (uint)(_DAT_14927f8d8 >> 7) & 0xffffff;
    uVar9 = _DAT_14927f8d8;
    uVar7 = _DAT_14927f8d8;
    if ((_DAT_14927f8d8 >> 7 & 0xffffff) != 0) {
      do {
        uVar7 = _DAT_14927f8d8;
        if (0xffffffff < (longlong)uVar9) {
          LOCK();
          uVar7 = uVar9;
          uVar5 = uVar9 - 0x100000000;
          if (uVar9 != _DAT_14927f8d8) {
            uVar7 = _DAT_14927f8d8;
            uVar5 = _DAT_14927f8d8;
          }
          _DAT_14927f8d8 = uVar5;
          UNLOCK();
          uVar8 = uVar14;
          if (uVar9 == uVar7) goto LAB_14013c575;
        }
        uVar10 = uVar10 - 1;
        uVar9 = uVar7;
        uVar7 = _DAT_14927f8d8;
      } while (uVar10 != 0);
    }
    do {
      while (uStack_38 = uVar7, 0xffffffff < (longlong)uStack_38) {
        LOCK();
        uVar7 = uStack_38;
        uVar9 = uStack_38 - 0x100000000;
        if (uStack_38 != _DAT_14927f8d8) {
          uVar7 = _DAT_14927f8d8;
          uVar9 = _DAT_14927f8d8;
        }
        _DAT_14927f8d8 = uVar9;
        UNLOCK();
        uVar8 = uVar14;
        if (uStack_38 == uVar7) goto LAB_14013c575;
      }
      cVar6 = FUN_140006180(&DAT_14927f8d8,1,&uStack_38);
      uVar8 = uVar14;
      uVar7 = uStack_38;
    } while (cVar6 == '\0');
  } while( true );
}

