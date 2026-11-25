// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1426047c0  size: 1264 bytes
// Name:    CFileMgr::Write
// Subsystem: core
// Class:   CFileMgr
//
// Evidence:
//   GTAVSRC: CFileMgr::Write  (game/Peds/rendering/PedVariationDebug.cpp)
//   literal: common:/data
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140643cd0, FUN_1451d2260, FUN_140048b50, FUN_140ad0ad0, FUN_141b63d80, FUN_140048c90, FUN_145cb4be0, FUN_140715f40
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"
#include "gta6decomp/CFileMgr.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool CFileMgr__Write(void)

{
  byte *pbVar1;
  undefined1 auVar2 [16];
  ushort uVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  uint uVar6;
  uint uVar7;
  int iVar8;
  byte bVar9;
  longlong lVar10;
  uint uVar11;
  undefined8 uVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong lVar16;
  ulonglong uVar17;
  byte bVar18;
  uint uVar19;
  ulonglong uVar20;
  uint uVar21;
  longlong lVar22;
  undefined1 auVar23 [16];
  undefined1 auStack_98 [16];
  longlong lStack_80;
  longlong lStack_78;
  uint uStack_6c;
  longlong lStack_68;
  undefined8 uStack_60;
  char cStack_58;
  undefined1 auStack_57 [12];
  undefined3 uStack_4b;
  undefined5 uStack_48;
  
  uVar21 = _DAT_1476765c4;
  uVar12 = FUN_140643cd0();
  FUN_140715f40(uVar12,&UNK_146785d5a);
  uVar12 = FUN_140643cd0();
  lVar13 = FUN_140048c90(uVar12,&UNK_14677b2dd,&UNK_14677afb9,1);
  if (lVar13 != 0) {
    iVar8 = uVar21 * 0x500;
    if (_DAT_147676770 != 0) {
      func_0x000144d9c130();
    }
    _DAT_147676770 = (undefined1  [16])0x0;
    if (iVar8 != 0) {
      FUN_145cb4be0(&DAT_147676770,iVar8,0);
    }
    _DAT_147676778 = iVar8;
    FUN_1451d2260(lVar13,&uStack_6c,4);
    lVar22 = (longlong)(int)uStack_6c;
    if (lVar22 == 0) {
      lVar14 = 0;
    }
    else {
      lVar14 = func_0x000144d9c140(8,lVar22 * 0x510);
    }
    FUN_1451d2260(lVar13,lVar14);
    lStack_80 = lVar13;
    FUN_140048b50(lVar13);
    uVar12 = FUN_140643cd0();
    func_0x000140704900(uVar12);
    lVar13 = _DAT_1476765c8;
    uVar20 = (ulonglong)_DAT_1476765c4;
    auStack_98 = (undefined1  [16])0x0;
    if (uVar20 != 0) {
      lVar16 = 0;
      do {
        lVar4 = *(longlong *)(lVar13 + lVar16);
        uVar3 = *(ushort *)(lVar4 + 0x28);
        FUN_141b63d80(auStack_98,&lStack_68);
        if (cStack_58 == '\x01') {
          *(undefined8 *)
           ((ulonglong)((uStack_60._4_4_ & 0xf) << 4) + 0x10 +
           (ulonglong)(uStack_60._4_4_ >> 4) * 0x110 + lStack_68) = *(undefined8 *)(lVar4 + 0x10);
        }
        lVar16 = lVar16 + 8;
        *(uint *)((ulonglong)((uStack_60._4_4_ & 0xf) << 4) + 0x18 +
                 lStack_68 + (ulonglong)(uStack_60._4_4_ >> 4) * 0x110) = (uint)uVar3;
      } while (uVar20 << 3 != lVar16);
    }
    lVar13 = _DAT_1476765c8;
    if ((uStack_6c != 0) && (uVar21 = auStack_98._0_4_ - 1, auStack_98._0_4_ != 0)) {
      uVar12 = auStack_98._8_8_;
      uVar20 = 0;
      lStack_78 = _DAT_147676770;
      do {
        uVar17 = *(ulonglong *)(lVar14 + 8 + uVar20 * 0x510);
        bVar9 = (byte)uVar17;
        bVar18 = bVar9 & 0x7f;
        uVar15 = uVar17 >> 7 & 0x1ffffff;
        auVar23._0_8_ =
             CONCAT17(bVar9,CONCAT16(bVar9,CONCAT15(bVar9,CONCAT14(bVar9,CONCAT13(bVar9,CONCAT12(
                                                  bVar9,CONCAT11(bVar9,bVar9))))))) &
             0x7f7f7f7f7f7f7f7f;
        auVar23[8] = bVar18;
        auVar23[9] = bVar18;
        auVar23[10] = bVar18;
        auVar23[0xb] = bVar18;
        auVar23[0xc] = bVar18;
        auVar23[0xd] = bVar18;
        auVar23[0xe] = bVar18;
        auVar23[0xf] = bVar18;
        while( true ) {
          uVar11 = (uint)uVar15 & uVar21;
          auVar2 = *(undefined1 (*) [16])(uVar12 + (ulonglong)uVar11 * 0x110);
          auVar5 = vpcmpeqb_avx(auVar2,auVar23);
          uVar3 = (ushort)(SUB161(auVar5 >> 7,0) & 1) | (ushort)(SUB161(auVar5 >> 0xf,0) & 1) << 1 |
                  (ushort)(SUB161(auVar5 >> 0x17,0) & 1) << 2 |
                  (ushort)(SUB161(auVar5 >> 0x1f,0) & 1) << 3 |
                  (ushort)(SUB161(auVar5 >> 0x27,0) & 1) << 4 |
                  (ushort)(SUB161(auVar5 >> 0x2f,0) & 1) << 5 |
                  (ushort)(SUB161(auVar5 >> 0x37,0) & 1) << 6 |
                  (ushort)(SUB161(auVar5 >> 0x3f,0) & 1) << 7 |
                  (ushort)(SUB161(auVar5 >> 0x47,0) & 1) << 8 |
                  (ushort)(SUB161(auVar5 >> 0x4f,0) & 1) << 9 |
                  (ushort)(SUB161(auVar5 >> 0x57,0) & 1) << 10 |
                  (ushort)(SUB161(auVar5 >> 0x5f,0) & 1) << 0xb |
                  (ushort)(SUB161(auVar5 >> 0x67,0) & 1) << 0xc |
                  (ushort)(SUB161(auVar5 >> 0x6f,0) & 1) << 0xd |
                  (ushort)(SUB161(auVar5 >> 0x77,0) & 1) << 0xe |
                  (ushort)(byte)(auVar5[0xf] >> 7) << 0xf;
          if (uVar3 != 0) {
            uVar19 = (uint)uVar3;
            do {
              uVar6 = 0;
              for (uVar7 = uVar19; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
                uVar6 = uVar6 + 1;
              }
              if (*(ulonglong *)
                   ((ulonglong)uVar11 * 0x110 + uVar12 + 0x10 + (ulonglong)(uVar6 << 4)) == uVar17)
              {
                uVar11 = uVar11 << 4 | uVar6;
                if (uVar11 != 0xffffffff) {
                  uVar17 = (ulonglong)((uVar6 & 0xf) << 4);
                  lVar16 = (ulonglong)(uVar11 >> 4) * 0x110 + uVar12;
                  func_0x000145f40560((ulonglong)(uint)(*(int *)(uVar17 + 0x18 + lVar16) * 0x500) +
                                      lStack_78,lVar14 + uVar20 * 0x510 + 0x10);
                  pbVar1 = (byte *)(*(longlong *)
                                     (lVar13 + (ulonglong)*(uint *)(uVar17 + 0x18 + lVar16) * 8) +
                                   0xd0);
                  *pbVar1 = *pbVar1 | 4;
                }
                goto LAB_142604a6f;
              }
              uVar19 = uVar19 - 1 & uVar19;
            } while (uVar19 != 0);
          }
          auVar2 = vpsignb_avx(auVar2,auVar2);
          if ((((((((((((((((SUB161(auVar2 >> 7,0) & 1) != 0 || (SUB161(auVar2 >> 0xf,0) & 1) != 0)
                          || (SUB161(auVar2 >> 0x17,0) & 1) != 0) ||
                         (SUB161(auVar2 >> 0x1f,0) & 1) != 0) || (SUB161(auVar2 >> 0x27,0) & 1) != 0
                        ) || (SUB161(auVar2 >> 0x2f,0) & 1) != 0) ||
                      (SUB161(auVar2 >> 0x37,0) & 1) != 0) || (SUB161(auVar2 >> 0x3f,0) & 1) != 0)
                    || (SUB161(auVar2 >> 0x47,0) & 1) != 0) || (SUB161(auVar2 >> 0x4f,0) & 1) != 0)
                  || (SUB161(auVar2 >> 0x57,0) & 1) != 0) || (SUB161(auVar2 >> 0x5f,0) & 1) != 0) ||
                (SUB161(auVar2 >> 0x67,0) & 1) != 0) || (SUB161(auVar2 >> 0x6f,0) & 1) != 0) ||
              (SUB161(auVar2 >> 0x77,0) & 1) != 0) || auVar2[0xf] < '\0') break;
          uVar15 = (ulonglong)(uVar11 + 1);
        }
LAB_142604a6f:
        uVar20 = uVar20 + 1;
      } while (uVar20 != uStack_6c);
    }
    lVar13 = _DAT_1476765c8;
    uVar20 = (ulonglong)_DAT_1476765c4;
    if ((uStack_6c != _DAT_1476765c4) && (uVar20 != 0)) {
      lVar16 = 0;
      do {
        if ((*(byte *)(*(longlong *)(lVar13 + lVar16) + 0xd0) & 4) == 0) {
          lVar10 = _DAT_147676770;
          lVar4 = (ulonglong)*(ushort *)(*(longlong *)(lVar13 + lVar16) + 0x28) * 0x500;
          func_0x000145f40580(_DAT_147676770 + lVar4,0);
          *(undefined1 *)(lVar10 + 1 + lVar4) = 0xff;
          *(undefined1 *)(_DAT_147676770 + 3 + lVar4) = 0xff;
        }
        lVar16 = lVar16 + 8;
      } while (uVar20 << 3 != lVar16);
    }
    if (_DAT_148562690 != 0) {
      func_0x000144faf600();
      _DAT_148562690 = 0;
    }
    uStack_60 = (longlong)iVar8;
    lStack_68 = _DAT_147676770;
    cStack_58 = 0;
    auStack_57 = SUB1612((undefined1  [16])0x0,1);
    uStack_4b = 0;
    uStack_48 = 0;
    _DAT_148562690 = FUN_140ad0ad0(iVar8 >> 2,4,0,&lStack_68,8,0,0x2d,0,0);
    lVar13 = lStack_80;
    if ((ulonglong)(uint)auStack_98._0_4_ != 0) {
      lVar16 = 0;
      do {
        if (!SBORROW1('\0',*(char *)(auStack_98._8_8_ + lVar16))) {
          *(undefined1 *)(auStack_98._8_8_ + lVar16) = 0x80;
        }
        if (!SBORROW1('\0',*(char *)(auStack_98._8_8_ + 1 + lVar16))) {
          *(undefined1 *)(auStack_98._8_8_ + 1 + lVar16) = 0x80;
        }
        if (!SBORROW1('\0',*(char *)(auStack_98._8_8_ + 2 + lVar16))) {
          *(undefined1 *)(auStack_98._8_8_ + 2 + lVar16) = 0x80;
        }
        if (!SBORROW1('\0',*(char *)(auStack_98._8_8_ + 3 + lVar16))) {
          *(undefined1 *)(auStack_98._8_8_ + 3 + lVar16) = 0x80;
        }
        if (!SBORROW1('\0',*(char *)(auStack_98._8_8_ + 4 + lVar16))) {
          *(undefined1 *)(auStack_98._8_8_ + 4 + lVar16) = 0x80;
        }
        if (!SBORROW1('\0',*(char *)(auStack_98._8_8_ + 5 + lVar16))) {
          *(undefined1 *)(auStack_98._8_8_ + 5 + lVar16) = 0x80;
        }
        if (!SBORROW1('\0',*(char *)(auStack_98._8_8_ + 6 + lVar16))) {
          *(undefined1 *)(auStack_98._8_8_ + 6 + lVar16) = 0x80;
        }
        if (!SBORROW1('\0',*(char *)(auStack_98._8_8_ + 7 + lVar16))) {
          *(undefined1 *)(auStack_98._8_8_ + 7 + lVar16) = 0x80;
        }
        if (!SBORROW1('\0',*(char *)(auStack_98._8_8_ + 8 + lVar16))) {
          *(undefined1 *)(auStack_98._8_8_ + 8 + lVar16) = 0x80;
        }
        if (!SBORROW1('\0',*(char *)(auStack_98._8_8_ + 9 + lVar16))) {
          *(undefined1 *)(auStack_98._8_8_ + 9 + lVar16) = 0x80;
        }
        if (!SBORROW1('\0',*(char *)(auStack_98._8_8_ + 10 + lVar16))) {
          *(undefined1 *)(auStack_98._8_8_ + 10 + lVar16) = 0x80;
        }
        if (!SBORROW1('\0',*(char *)(auStack_98._8_8_ + 0xb + lVar16))) {
          *(undefined1 *)(auStack_98._8_8_ + 0xb + lVar16) = 0x80;
        }
        if (!SBORROW1('\0',*(char *)(auStack_98._8_8_ + 0xc + lVar16))) {
          *(undefined1 *)(auStack_98._8_8_ + 0xc + lVar16) = 0x80;
        }
        if (!SBORROW1('\0',*(char *)(auStack_98._8_8_ + 0xd + lVar16))) {
          *(undefined1 *)(auStack_98._8_8_ + 0xd + lVar16) = 0x80;
        }
        if (!SBORROW1('\0',*(char *)(auStack_98._8_8_ + 0xe + lVar16))) {
          *(undefined1 *)(auStack_98._8_8_ + 0xe + lVar16) = 0x80;
        }
        if (!SBORROW1('\0',*(char *)(auStack_98._8_8_ + 0xf + lVar16))) {
          *(undefined1 *)(auStack_98._8_8_ + 0xf + lVar16) = 0x80;
        }
        lVar16 = lVar16 + 0x110;
      } while ((ulonglong)(uint)auStack_98._0_4_ * 0x110 - lVar16 != 0);
    }
    if (auStack_98._8_8_ != 0) {
      func_0x000144d9c130();
    }
    if (lVar14 != 0 && (lVar22 != 0 && (short)uStack_6c != 0)) {
      func_0x000144d9c130(lVar14);
    }
  }
  return lVar13 != 0;
}

