// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14011d5f0  size: 841 bytes
// Name:    FUN_14011d5f0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140465670, FUN_14206be60, FUN_140006180
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14011d5f0(longlong param_1)

{
  ulonglong *puVar1;
  undefined1 auVar2 [16];
  ushort uVar3;
  undefined1 auVar4 [16];
  byte bVar5;
  ulonglong uVar6;
  int iVar7;
  char cVar8;
  ulonglong uVar9;
  uint uVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  ulonglong uVar15;
  bool bVar16;
  byte bVar17;
  undefined1 auVar18 [64];
  ulonglong uStack_70;
  longlong lStack_68;
  ulonglong uStack_60;
  
  uVar13 = *(uint *)(param_1 + 0x124);
  uVar3 = *(ushort *)(param_1 + 0x122);
  uStack_60 = (ulonglong)(uVar13 >> 9 & 0x7ff);
  uVar12 = _DAT_149fd6300;
  lStack_68 = param_1;
LAB_14011d65e:
  do {
    uVar14 = uVar12;
    if ((uVar14 & 0x10000ff) != 0) {
      LOCK();
      bVar16 = uVar14 == _DAT_149fd6300;
      uVar12 = uVar14;
      uVar10 = uVar14 + 0x10000;
      if (!bVar16) {
        uVar12 = _DAT_149fd6300;
        uVar10 = _DAT_149fd6300;
      }
      _DAT_149fd6300 = uVar10;
      UNLOCK();
      if (bVar16) {
        uVar10 = (uint)(_DAT_149fd6310 >> 7) & 0xffffff;
        uVar15 = _DAT_149fd6310;
        uVar9 = _DAT_149fd6310;
        if ((_DAT_149fd6310 >> 7 & 0xffffff) != 0) {
          do {
            uVar9 = _DAT_149fd6310;
            if (0xffffffff < (longlong)uVar15) {
              LOCK();
              uVar9 = uVar15;
              uVar6 = uVar15 - 0x100000000;
              if (uVar15 != _DAT_149fd6310) {
                uVar9 = _DAT_149fd6310;
                uVar6 = _DAT_149fd6310;
              }
              _DAT_149fd6310 = uVar6;
              UNLOCK();
              uVar12 = uVar14;
              if (uVar15 == uVar9) goto LAB_14011d65e;
            }
            uVar10 = uVar10 - 1;
            uVar15 = uVar9;
            uVar9 = _DAT_149fd6310;
          } while (uVar10 != 0);
        }
        do {
          while (uStack_70 = uVar9, (longlong)uStack_70 < 0x100000000) {
            cVar8 = FUN_140006180(&DAT_149fd6310,1,&uStack_70);
            uVar12 = uVar14;
            uVar9 = uStack_70;
            if (cVar8 != '\0') goto LAB_14011d65e;
          }
          LOCK();
          uVar9 = uStack_70;
          uVar15 = uStack_70 - 0x100000000;
          if (uStack_70 != _DAT_149fd6310) {
            uVar9 = _DAT_149fd6310;
            uVar15 = _DAT_149fd6310;
          }
          _DAT_149fd6310 = uVar15;
          UNLOCK();
          uVar12 = uVar14;
        } while (uStack_70 != uVar9);
      }
      goto LAB_14011d65e;
    }
    LOCK();
    bVar16 = uVar14 != _DAT_149fd6300;
    uVar12 = uVar14 | 0x1000000;
    if (bVar16) {
      uVar14 = _DAT_149fd6300;
      uVar12 = _DAT_149fd6300;
    }
    _DAT_149fd6300 = uVar12;
    UNLOCK();
    uVar12 = uVar14;
  } while (bVar16);
  uVar15 = (ulonglong)(uVar3 >> 2) * 0x800 + uStack_60 | (ulonglong)(uVar13 >> 0x14) << 0x19;
  uVar9 = (uVar13 >> 0x1c ^ uVar15) * -0xae502812aa7333;
  uVar9 = (uVar9 >> 0x21 ^ uVar9) * -0x3b314601e57a13ad;
  uVar9 = uVar9 >> 0x21 ^ uVar9;
  bVar5 = (byte)uVar9;
  bVar17 = bVar5 & 0x7f;
  auVar18 = ZEXT1664(CONCAT115(bVar17,CONCAT114(bVar17,CONCAT113(bVar17,CONCAT112(bVar17,CONCAT111(
                                                  bVar17,CONCAT110(bVar17,CONCAT19(bVar17,CONCAT18(
                                                  bVar17,CONCAT17(bVar5,CONCAT16(bVar5,CONCAT15(
                                                  bVar5,CONCAT14(bVar5,CONCAT13(bVar5,CONCAT12(bVar5
                                                  ,CONCAT11(bVar5,bVar5))))))) & 0x7f7f7f7f7f7f7f7f)
                                                  ))))))));
  do {
    if (_DAT_149fd62f0 == 0) {
      uVar13 = 0;
    }
    else {
      uVar12 = (uint)uVar9 >> 7;
      while( true ) {
        uVar12 = uVar12 & _DAT_149fd62f0 - 1U;
        auVar2 = *(undefined1 (*) [16])(_DAT_149fd62f8 + (ulonglong)uVar12 * 0x110);
        lVar11 = _DAT_149fd62f8 + (ulonglong)uVar12 * 0x110;
        auVar4 = vpcmpeqb_avx(auVar2,auVar18._0_16_);
        uVar3 = (ushort)(SUB161(auVar4 >> 7,0) & 1) | (ushort)(SUB161(auVar4 >> 0xf,0) & 1) << 1 |
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
        if (uVar3 != 0) {
          uVar13 = (uint)uVar3;
          do {
            uVar14 = 0;
            for (uVar10 = uVar13; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x80000000) {
              uVar14 = uVar14 + 1;
            }
            if (*(ulonglong *)(lVar11 + 0x10 + (ulonglong)(uVar14 << 4)) == uVar15) {
              uVar14 = uVar14 | uVar12 << 4;
              if (uVar14 == _DAT_149fd62f0 << 4) goto LAB_14011d8e4;
              goto LAB_14011d8be;
            }
            uVar13 = uVar13 - 1 & uVar13;
          } while (uVar13 != 0);
        }
        auVar2 = vpsignb_avx(auVar2,auVar2);
        uVar3 = (ushort)(SUB161(auVar2 >> 7,0) & 1) | (ushort)(SUB161(auVar2 >> 0xf,0) & 1) << 1 |
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
        if (uVar3 != 0) break;
        uVar12 = uVar12 + 1;
      }
      uVar13 = _DAT_149fd62f4;
      if (_DAT_149fd62f4 != (uint)(_DAT_149fd62f0 * 0x570) / 100) break;
    }
    FUN_14206be60(uVar13 * 2);
  } while( true );
  uVar13 = 0;
  for (uVar14 = (uint)uVar3; (uVar14 & 1) == 0; uVar14 = uVar14 >> 1 | 0x80000000) {
    uVar13 = uVar13 + 1;
  }
  *(byte *)(lVar11 + (ulonglong)uVar13) = bVar17;
  _DAT_149fd62f4 = _DAT_149fd62f4 + 1;
  uVar13 = uVar12 << 4 | uVar13;
  uVar12 = uVar13;
  while ((uVar13 != _DAT_149fd62f0 << 4 &&
         (uVar12 = uVar13,
         SBORROW1('\0',*(char *)((ulonglong)(uVar13 & 0xf) +
                                (ulonglong)(uVar13 >> 4) * 0x110 + _DAT_149fd62f8))))) {
    uVar13 = uVar13 + 1;
    uVar12 = _DAT_149fd62f0 << 4;
  }
  uVar9 = (ulonglong)((uVar12 & 0xf) << 4);
  lVar11 = _DAT_149fd62f8 + (ulonglong)(uVar12 >> 4) * 0x110;
  *(ulonglong *)(uVar9 + 0x10 + lVar11) = uVar15;
  *(undefined4 *)(uVar9 + 0x18 + lVar11) = 0;
  FUN_140465670(&DAT_149fd6300);
  LOCK();
  UNLOCK();
  iVar7 = _DAT_149fd6418 + (*(uint *)(lStack_68 + 0x124) >> 0x14);
  *(int *)(uVar9 + 0x18 + lVar11) = _DAT_149fd6418;
  _DAT_149fd6418 = iVar7;
  goto LAB_14011d8f5;
  while (uVar14 = uVar14 + 1, _DAT_149fd62f0 << 4 != uVar14) {
LAB_14011d8be:
    if (!SBORROW1('\0',*(char *)((ulonglong)(uVar14 & 0xf) +
                                (ulonglong)(uVar14 >> 4) * 0x110 + _DAT_149fd62f8))) break;
  }
LAB_14011d8e4:
  FUN_140465670(&DAT_149fd6300);
LAB_14011d8f5:
  LOCK();
  puVar1 = (ulonglong *)((ulonglong)(*(uint *)(lStack_68 + 0x124) >> 0xf & 0x1f) * 8 + 0x149fd6318);
  *puVar1 = *puVar1 | 1L << ((ulonglong)(*(uint *)(lStack_68 + 0x124) >> 9) & 0x3f);
  UNLOCK();
  return;
}

