// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140060540  size: 563 bytes
// Name:    FUN_140060540
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140006180, FUN_140323580, FUN_144e9e0a0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_140060540(ulonglong param_1,undefined8 param_2)

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
  ulonglong uVar10;
  uint uVar11;
  undefined4 *puVar12;
  undefined8 uVar13;
  byte bVar14;
  longlong lVar16;
  bool bVar17;
  undefined1 auVar18 [16];
  ulonglong uStack_40;
  byte bVar15;
  
  uVar7 = _DAT_1492d7c58;
LAB_14006057b:
  do {
    do {
      while (uVar8 = uVar7, (uVar8 & 0x1ff0000) == 0) {
        LOCK();
        bVar17 = uVar8 == _DAT_1492d7c58;
        uVar7 = uVar8 + 1;
        if (!bVar17) {
          uVar8 = _DAT_1492d7c58;
          uVar7 = _DAT_1492d7c58;
        }
        _DAT_1492d7c58 = uVar7;
        UNLOCK();
        uVar7 = uVar8;
        if (bVar17) {
          if ((param_1 != 0) && (_DAT_1492d7c48 != 0)) {
            uVar10 = (param_1 >> 0x21 ^ param_1) * -0xae502812aa7333;
            lVar16 = (uVar10 >> 0x21 ^ uVar10) * -0x3b314601e57a13ad;
            uVar7 = (uint)((ulonglong)lVar16 >> 0x21) ^ (uint)lVar16;
            uVar8 = uVar7 >> 7;
            bVar15 = (byte)uVar7;
            bVar14 = bVar15 & 0x7f;
            auVar18._0_8_ =
                 CONCAT17(bVar15,CONCAT16(bVar15,CONCAT15(bVar15,CONCAT14(bVar15,CONCAT13(bVar15,
                                                  CONCAT12(bVar15,CONCAT11(bVar15,bVar15))))))) &
                 0x7f7f7f7f7f7f7f7f;
            auVar18[8] = bVar14;
            auVar18[9] = bVar14;
            auVar18[10] = bVar14;
            auVar18[0xb] = bVar14;
            auVar18[0xc] = bVar14;
            auVar18[0xd] = bVar14;
            auVar18[0xe] = bVar14;
            auVar18[0xf] = bVar14;
            while( true ) {
              uVar8 = uVar8 & _DAT_1492d7c48 - 1U;
              auVar1 = *(undefined1 (*) [16])(_DAT_1492d7c50 + (ulonglong)uVar8 * 0x110);
              auVar2 = vpcmpeqb_avx(auVar1,auVar18);
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
                  uVar11 = 0;
                  for (uVar4 = uVar7; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
                    uVar11 = uVar11 + 1;
                  }
                  if (*(ulonglong *)
                       ((ulonglong)uVar8 * 0x110 + _DAT_1492d7c50 + 0x10 + (ulonglong)(uVar11 << 4))
                      == param_1) {
                    uVar13 = 0;
                    uVar7 = uVar8 << 4 | uVar11;
                    if (uVar7 == 0xffffffff) goto LAB_14006064c;
                    puVar12 = (undefined4 *)
                              ((ulonglong)((uVar11 & 0xf) << 4) +
                               _DAT_1492d7c50 + (ulonglong)(uVar7 >> 4) * 0x110 + 0x18);
                    cVar6 = func_0x000144e3ee00(*puVar12);
                    if (cVar6 == '\0') goto LAB_14006064a;
                    FUN_144e9e0a0(param_2,puVar12);
                    uVar13 = 1;
                    goto LAB_14006064c;
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
LAB_14006064a:
          uVar13 = 0;
LAB_14006064c:
          FUN_140323580(&DAT_1492d7c58);
          return uVar13;
        }
      }
      LOCK();
      bVar17 = uVar8 != _DAT_1492d7c58;
      uVar7 = uVar8;
      uVar11 = uVar8 + 0x100;
      if (bVar17) {
        uVar7 = _DAT_1492d7c58;
        uVar11 = _DAT_1492d7c58;
      }
      _DAT_1492d7c58 = uVar11;
      UNLOCK();
    } while (bVar17);
    uVar11 = (uint)(_DAT_1492d7c60 >> 7) & 0xffffff;
    uVar9 = _DAT_1492d7c60;
    uVar10 = _DAT_1492d7c60;
    if ((_DAT_1492d7c60 >> 7 & 0xffffff) != 0) {
      do {
        uVar10 = _DAT_1492d7c60;
        if (0xffffffff < (longlong)uVar9) {
          LOCK();
          uVar10 = uVar9;
          uVar5 = uVar9 - 0x100000000;
          if (uVar9 != _DAT_1492d7c60) {
            uVar10 = _DAT_1492d7c60;
            uVar5 = _DAT_1492d7c60;
          }
          _DAT_1492d7c60 = uVar5;
          UNLOCK();
          uVar7 = uVar8;
          if (uVar9 == uVar10) goto LAB_14006057b;
        }
        uVar11 = uVar11 - 1;
        uVar9 = uVar10;
        uVar10 = _DAT_1492d7c60;
      } while (uVar11 != 0);
    }
    do {
      while (uStack_40 = uVar10, 0xffffffff < (longlong)uStack_40) {
        LOCK();
        uVar10 = uStack_40;
        uVar9 = uStack_40 - 0x100000000;
        if (uStack_40 != _DAT_1492d7c60) {
          uVar10 = _DAT_1492d7c60;
          uVar9 = _DAT_1492d7c60;
        }
        _DAT_1492d7c60 = uVar9;
        UNLOCK();
        uVar7 = uVar8;
        if (uStack_40 == uVar10) goto LAB_14006057b;
      }
      cVar6 = FUN_140006180(&DAT_1492d7c60,1,&uStack_40);
      uVar7 = uVar8;
      uVar10 = uStack_40;
    } while (cVar6 == '\0');
  } while( true );
}

