// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140187a40  size: 471 bytes
// Name:    FUN_140187a40
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_140187a40(uint param_1,uint param_2)

{
  int iVar1;
  undefined1 auVar2 [16];
  ushort uVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  byte bVar7;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  byte bVar8;
  
  if (_DAT_147efe980 != 0) {
    bVar8 = (byte)param_1;
    bVar7 = bVar8 & 0x7f;
    uVar11 = param_1 >> 7;
    auVar12._0_8_ =
         CONCAT17(bVar8,CONCAT16(bVar8,CONCAT15(bVar8,CONCAT14(bVar8,CONCAT13(bVar8,CONCAT12(bVar8,
                                                  CONCAT11(bVar8,bVar8))))))) & 0x7f7f7f7f7f7f7f7f;
    auVar12[8] = bVar7;
    auVar12[9] = bVar7;
    auVar12[10] = bVar7;
    auVar12[0xb] = bVar7;
    auVar12[0xc] = bVar7;
    auVar12[0xd] = bVar7;
    auVar12[0xe] = bVar7;
    auVar12[0xf] = bVar7;
    while( true ) {
      uVar11 = uVar11 & _DAT_147efe980 - 1;
      auVar13 = *(undefined1 (*) [16])(_DAT_147efe988 + (ulonglong)uVar11 * 400);
      auVar2 = vpcmpeqb_avx(auVar13,auVar12);
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
      uVar6 = (uint)uVar3;
      if (uVar3 != 0) {
        do {
          uVar9 = 0;
          for (uVar4 = uVar6; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
            uVar9 = uVar9 + 1;
          }
          if (*(uint *)((ulonglong)uVar11 * 400 + _DAT_147efe988 + 0x10 + (ulonglong)uVar9 * 0x18)
              == param_1) {
            uVar9 = uVar9 | uVar11 << 4;
            if (uVar9 != 0xffffffff) {
              uVar11 = uVar9;
              while ((uVar9 != _DAT_147efe980 * 0x10 &&
                     (uVar11 = uVar9,
                     SBORROW1('\0',*(char *)((ulonglong)(uVar9 & 0xf) +
                                            (ulonglong)(uVar9 >> 4) * 400 + _DAT_147efe988))))) {
                uVar9 = uVar9 + 1;
                uVar11 = _DAT_147efe980 * 0x10;
              }
              goto LAB_140187ad3;
            }
            goto LAB_140187acc;
          }
          uVar6 = uVar6 - 1 & uVar6;
        } while (uVar6 != 0);
      }
      auVar13 = vpsignb_avx(auVar13,auVar13);
      if ((((((((((((((((SUB161(auVar13 >> 7,0) & 1) != 0 || (SUB161(auVar13 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar13 >> 0x17,0) & 1) != 0) || (SUB161(auVar13 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar13 >> 0x27,0) & 1) != 0) || (SUB161(auVar13 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar13 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar13 >> 0x3f,0) & 1) != 0) || (SUB161(auVar13 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar13 >> 0x4f,0) & 1) != 0) || (SUB161(auVar13 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar13 >> 0x5f,0) & 1) != 0) || (SUB161(auVar13 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar13 >> 0x6f,0) & 1) != 0) || (SUB161(auVar13 >> 0x77,0) & 1) != 0) ||
          auVar13[0xf] < '\0') break;
      uVar11 = uVar11 + 1;
    }
  }
LAB_140187acc:
  uVar11 = _DAT_147efe980 << 4;
LAB_140187ad3:
  lVar5 = (ulonglong)(uVar11 >> 4) * 400;
  uVar10 = (ulonglong)((uVar11 & 0xf) * 0x18);
  if (lVar5 + uVar10 != (ulonglong)(_DAT_147efe980 & 0xfffffff) * 400) {
    lVar5 = lVar5 + 0x10 + uVar10;
    iVar1 = *(int *)(_DAT_147efe988 + 8 + lVar5);
    if (iVar1 != 0) {
      lVar5 = *(longlong *)(_DAT_147efe988 + 0x10 + lVar5);
      bVar8 = (byte)param_2;
      bVar7 = bVar8 & 0x7f;
      uVar11 = param_2 >> 7;
      auVar13._0_8_ =
           CONCAT17(bVar8,CONCAT16(bVar8,CONCAT15(bVar8,CONCAT14(bVar8,CONCAT13(bVar8,CONCAT12(bVar8
                                                  ,CONCAT11(bVar8,bVar8))))))) & 0x7f7f7f7f7f7f7f7f;
      auVar13[8] = bVar7;
      auVar13[9] = bVar7;
      auVar13[10] = bVar7;
      auVar13[0xb] = bVar7;
      auVar13[0xc] = bVar7;
      auVar13[0xd] = bVar7;
      auVar13[0xe] = bVar7;
      auVar13[0xf] = bVar7;
      do {
        uVar11 = uVar11 & iVar1 - 1U;
        auVar12 = *(undefined1 (*) [16])(lVar5 + (ulonglong)uVar11 * 0x110);
        auVar2 = vpcmpeqb_avx(auVar12,auVar13);
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
        uVar6 = (uint)uVar3;
        if (uVar3 != 0) {
          do {
            uVar9 = 0;
            for (uVar4 = uVar6; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
              uVar9 = uVar9 + 1;
            }
            if (*(uint *)((ulonglong)uVar11 * 0x110 + lVar5 + 0x10 + (ulonglong)(uVar9 << 4)) ==
                param_2) {
              uVar11 = uVar11 << 4 | uVar9;
              if (uVar11 == 0xffffffff) {
                return 0;
              }
              return *(undefined8 *)
                      ((ulonglong)((uVar9 & 0xf) << 4) + 0x18 +
                      lVar5 + (ulonglong)(uVar11 >> 4) * 0x110);
            }
            uVar6 = uVar6 - 1 & uVar6;
          } while (uVar6 != 0);
        }
        auVar12 = vpsignb_avx(auVar12,auVar12);
        if ((((((((((((((((SUB161(auVar12 >> 7,0) & 1) != 0 || (SUB161(auVar12 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar12 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar12 >> 0x1f,0) & 1) != 0) || (SUB161(auVar12 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar12 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar12 >> 0x37,0) & 1) != 0) || (SUB161(auVar12 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar12 >> 0x47,0) & 1) != 0) || (SUB161(auVar12 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar12 >> 0x57,0) & 1) != 0) || (SUB161(auVar12 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar12 >> 0x67,0) & 1) != 0) || (SUB161(auVar12 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar12 >> 0x77,0) & 1) != 0) || auVar12[0xf] < '\0') {
          return 0;
        }
        uVar11 = uVar11 + 1;
      } while( true );
    }
  }
  return 0;
}

