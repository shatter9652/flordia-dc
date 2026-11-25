// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1418e9f60  size: 838 bytes
// Name:    CFileMgr::ReadLine
// Subsystem: core
// Class:   CFileMgr
//
// Evidence:
//   GTAVSRC: CFileMgr::ReadLine  (game/debug/Debug.cpp)
//   literal: [INSTALL_VERSION_NUMBER]
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14300a400
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"
#include "gta6decomp/CFileMgr.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void CFileMgr__ReadLine(longlong *param_1,uint *param_2)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined1 auVar3 [16];
  ushort uVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined4 *puVar11;
  longlong lVar12;
  byte bVar13;
  uint uVar15;
  uint uVar16;
  longlong lVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [64];
  byte bVar14;
  
  auVar19 = ZEXT1664(CONCAT115(DAT_146159260,
                               CONCAT114(DAT_146159260,
                                         CONCAT113(DAT_146159260,
                                                   CONCAT112(DAT_146159260,
                                                             CONCAT111(DAT_146159260,
                                                                       CONCAT110(DAT_146159260,
                                                                                 CONCAT19(
                                                  DAT_146159260,
                                                  CONCAT18(DAT_146159260,
                                                           CONCAT17(DAT_146159260,
                                                                    CONCAT16(DAT_146159260,
                                                                             CONCAT15(DAT_146159260,
                                                                                      CONCAT14(
                                                  DAT_146159260,
                                                  CONCAT13(DAT_146159260,
                                                           CONCAT12(DAT_146159260,
                                                                    CONCAT11(DAT_146159260,
                                                                             DAT_146159260))))))))))
                                                  ))))));
  do {
    lVar6 = _DAT_147f027d0;
    uVar8 = 0;
    uVar15 = 0;
    if (_DAT_147f027c8 != 0) {
      uVar8 = *param_2;
      bVar14 = (byte)uVar8;
      bVar13 = bVar14 & 0x7f;
      uVar7 = uVar8 >> 7;
      auVar18._0_8_ =
           CONCAT17(bVar14,CONCAT16(bVar14,CONCAT15(bVar14,CONCAT14(bVar14,CONCAT13(bVar14,CONCAT12(
                                                  bVar14,CONCAT11(bVar14,bVar14))))))) &
           0x7f7f7f7f7f7f7f7f;
      auVar18[8] = bVar13;
      auVar18[9] = bVar13;
      auVar18[10] = bVar13;
      auVar18[0xb] = bVar13;
      auVar18[0xc] = bVar13;
      auVar18[0xd] = bVar13;
      auVar18[0xe] = bVar13;
      auVar18[0xf] = bVar13;
      while( true ) {
        uVar7 = uVar7 & _DAT_147f027c8 - 1;
        auVar1 = *(undefined1 (*) [16])(_DAT_147f027d0 + (ulonglong)uVar7 * 0x110);
        lVar10 = _DAT_147f027d0 + (ulonglong)uVar7 * 0x110;
        auVar3 = vpcmpeqb_avx(auVar1,auVar18);
        uVar4 = (ushort)(SUB161(auVar3 >> 7,0) & 1) | (ushort)(SUB161(auVar3 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar3 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar3 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar3 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar3 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar3 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar3 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar3 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar3 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar3 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar3 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar3 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar3 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auVar3 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar3[0xf] >> 7) << 0xf;
        uVar15 = (uint)uVar4;
        if (uVar4 != 0) {
          do {
            uVar16 = 0;
            for (uVar5 = uVar15; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
              uVar16 = uVar16 + 1;
            }
            if (*(uint *)(lVar10 + 0x10 + (ulonglong)(uVar16 << 4)) == uVar8) {
              uVar8 = _DAT_147f027c8 << 4;
              uVar16 = uVar16 | uVar7 << 4;
              while ((uVar15 = uVar8, uVar16 != uVar8 &&
                     (uVar15 = uVar16,
                     SBORROW1('\0',*(char *)((ulonglong)(uVar16 & 0xf) +
                                            (ulonglong)(uVar16 >> 4) * 0x110 + _DAT_147f027d0))))) {
                uVar16 = uVar16 + 1;
              }
              *(uint *)(param_1 + 1) = uVar8;
              *(uint *)((longlong)param_1 + 0xc) = uVar15;
              *(undefined1 *)(param_1 + 2) = 0;
              *param_1 = lVar6;
              return;
            }
            uVar15 = uVar15 - 1 & uVar15;
          } while (uVar15 != 0);
        }
        auVar1 = vpsignb_avx(auVar1,auVar1);
        uVar4 = (ushort)(SUB161(auVar1 >> 7,0) & 1) | (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar1 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar1 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar1 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar1 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar1 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar1 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar1 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar1 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar1 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar1 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar1 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar1 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar1[0xf] >> 7) << 0xf;
        if (uVar4 != 0) break;
        uVar7 = uVar7 + 1;
      }
      uVar8 = _DAT_147f027c8;
      uVar15 = _DAT_147f027cc;
      if (_DAT_147f027cc != (_DAT_147f027c8 * 0x570) / 100) {
        uVar8 = 0;
        for (uVar15 = (uint)uVar4; (uVar15 & 1) == 0; uVar15 = uVar15 >> 1 | 0x80000000) {
          uVar8 = uVar8 + 1;
        }
        *(byte *)(lVar10 + (ulonglong)uVar8) = bVar13;
        _DAT_147f027cc = _DAT_147f027cc + 1;
        uVar8 = uVar7 << 4 | uVar8;
        uVar7 = _DAT_147f027c8 << 4;
        uVar15 = uVar8;
        while ((uVar8 != uVar7 &&
               (uVar15 = uVar8,
               SBORROW1('\0',*(char *)((ulonglong)(uVar8 & 0xf) +
                                      (ulonglong)(uVar8 >> 4) * 0x110 + _DAT_147f027d0))))) {
          uVar8 = uVar8 + 1;
          uVar15 = uVar7;
        }
        *param_1 = _DAT_147f027d0;
        *(uint *)(param_1 + 1) = uVar7;
        *(uint *)((longlong)param_1 + 0xc) = uVar15;
        *(undefined1 *)(param_1 + 2) = 1;
        return;
      }
    }
    uVar7 = uVar15 * 2;
    if (uVar15 * 2 < 0x11) {
      uVar7 = 0x10;
    }
    uVar9 = ((ulonglong)uVar7 * 100 + 0x56) / 0x57 - 1;
    uVar9 = uVar9 >> 1 | uVar9;
    uVar9 = uVar9 >> 2 | uVar9;
    uVar9 = uVar9 >> 4 | uVar9;
    uVar9 = uVar9 >> 8 | uVar9;
    uVar9 = (uVar9 >> 0x10 | uVar9) + 1 >> 4;
    lVar17 = uVar9 * 0x110;
    lVar10 = func_0x000144d9c140(0x10,lVar17);
    lVar12 = 0;
    _DAT_147f027c8 = (uint)uVar9;
    _DAT_147f027d0 = lVar10;
    do {
      *(undefined1 (*) [16])(lVar10 + lVar12) = auVar19._0_16_;
      lVar12 = lVar12 + 0x110;
    } while (lVar17 - lVar12 != 0);
    if ((ulonglong)uVar8 != 0) {
      lVar10 = lVar6;
      do {
        lVar12 = 0;
        do {
          if (!SBORROW1('\0',*(char *)(lVar10 + lVar12))) {
            uVar15 = *(uint *)(lVar10 + 0x10 + lVar12 * 0x10);
            uVar7 = uVar15 >> 7;
            while( true ) {
              uVar7 = uVar7 & _DAT_147f027c8 - 1;
              lVar17 = (ulonglong)uVar7 * 0x110;
              auVar18 = *(undefined1 (*) [16])(_DAT_147f027d0 + lVar17);
              auVar18 = vpsignb_avx(auVar18,auVar18);
              uVar4 = (ushort)(SUB161(auVar18 >> 7,0) & 1) |
                      (ushort)(SUB161(auVar18 >> 0xf,0) & 1) << 1 |
                      (ushort)(SUB161(auVar18 >> 0x17,0) & 1) << 2 |
                      (ushort)(SUB161(auVar18 >> 0x1f,0) & 1) << 3 |
                      (ushort)(SUB161(auVar18 >> 0x27,0) & 1) << 4 |
                      (ushort)(SUB161(auVar18 >> 0x2f,0) & 1) << 5 |
                      (ushort)(SUB161(auVar18 >> 0x37,0) & 1) << 6 |
                      (ushort)(SUB161(auVar18 >> 0x3f,0) & 1) << 7 |
                      (ushort)(SUB161(auVar18 >> 0x47,0) & 1) << 8 |
                      (ushort)(SUB161(auVar18 >> 0x4f,0) & 1) << 9 |
                      (ushort)(SUB161(auVar18 >> 0x57,0) & 1) << 10 |
                      (ushort)(SUB161(auVar18 >> 0x5f,0) & 1) << 0xb |
                      (ushort)(SUB161(auVar18 >> 0x67,0) & 1) << 0xc |
                      (ushort)(SUB161(auVar18 >> 0x6f,0) & 1) << 0xd |
                      (ushort)(SUB161(auVar18 >> 0x77,0) & 1) << 0xe |
                      (ushort)(byte)(auVar18[0xf] >> 7) << 0xf;
              if (uVar4 != 0) break;
              uVar7 = uVar7 + 1;
            }
            uVar7 = 0;
            for (uVar16 = (uint)uVar4; (uVar16 & 1) == 0; uVar16 = uVar16 >> 1 | 0x80000000) {
              uVar7 = uVar7 + 1;
            }
            lVar17 = _DAT_147f027d0 + lVar17;
            puVar11 = (undefined4 *)(lVar12 * 0x10 + lVar10 + 0x10);
            *(byte *)(lVar17 + (ulonglong)uVar7) = (byte)uVar15 & 0x7f;
            *(undefined4 *)(lVar17 + 0x10 + (ulonglong)(uVar7 << 4)) = *puVar11;
            uVar2 = *(undefined8 *)(puVar11 + 2);
            *(undefined8 *)(puVar11 + 2) = 0;
            *(undefined8 *)(lVar17 + 0x18 + (ulonglong)(uVar7 << 4)) = uVar2;
            *(undefined1 *)(lVar10 + lVar12) = 0x80;
            lVar17 = *(longlong *)(puVar11 + 2);
            if (lVar17 != 0) {
              FUN_14300a400(lVar17);
              func_0x000144d9c130(lVar17,0x38);
            }
          }
          lVar12 = lVar12 + 1;
        } while (lVar12 != 0x10);
        lVar10 = lVar10 + 0x110;
      } while (lVar10 != (ulonglong)uVar8 * 0x110 + lVar6);
    }
    if (lVar6 != 0) {
      func_0x000144d9c130(lVar6);
    }
  } while( true );
}

