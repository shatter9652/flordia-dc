// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14001c590  size: 291 bytes
// Name:    FUN_14001c590
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140007340, FUN_142ba2480, FUN_142363360
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


longlong FUN_14001c590(longlong param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined1 auVar2 [16];
  longlong lVar3;
  undefined1 auVar4 [16];
  ushort uVar5;
  uint uVar6;
  uint uVar7;
  byte bVar8;
  longlong lVar9;
  uint uVar10;
  undefined8 *puVar11;
  longlong lVar12;
  uint uVar13;
  byte bVar14;
  undefined1 auVar15 [64];
  undefined8 auStack_40 [3];
  
  FUN_142ba2480(auStack_40,param_1 + 0xc0);
  if ((ulonglong)*(uint *)(param_1 + 0x9c) == 0) {
    lVar12 = 0;
  }
  else {
    puVar11 = *(undefined8 **)(param_1 + 0xa0);
    lVar12 = 0;
    puVar1 = puVar11 + (ulonglong)*(uint *)(param_1 + 0x9c) * 5;
    bVar8 = (byte)param_2;
    bVar14 = bVar8 & 0x7f;
    auVar15 = ZEXT1664(CONCAT115(bVar14,CONCAT114(bVar14,CONCAT113(bVar14,CONCAT112(bVar14,CONCAT111
                                                  (bVar14,CONCAT110(bVar14,CONCAT19(bVar14,CONCAT18(
                                                  bVar14,CONCAT17(bVar8,CONCAT16(bVar8,CONCAT15(
                                                  bVar8,CONCAT14(bVar8,CONCAT13(bVar8,CONCAT12(bVar8
                                                  ,CONCAT11(bVar8,bVar8))))))) & 0x7f7f7f7f7f7f7f7f)
                                                  ))))))));
    do {
      lVar9 = FUN_140007340(*puVar11,*(undefined4 *)((longlong)puVar11 + 0xc));
      if ((lVar9 != 0) && (*(int *)(lVar9 + 8) != 0)) {
        lVar3 = *(longlong *)(lVar9 + 0x10);
        uVar10 = param_2 >> 7;
        while( true ) {
          uVar10 = uVar10 & *(int *)(lVar9 + 8) - 1U;
          auVar2 = *(undefined1 (*) [16])(lVar3 + (ulonglong)uVar10 * 0x510);
          auVar4 = vpcmpeqb_avx(auVar2,auVar15._0_16_);
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
            uVar13 = (uint)uVar5;
            do {
              uVar6 = 0;
              for (uVar7 = uVar13; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
                uVar6 = uVar6 + 1;
              }
              if (*(uint *)((ulonglong)uVar10 * 0x510 + lVar3 + 0x10 + (ulonglong)(uVar6 * 0x50)) ==
                  param_2) {
                uVar10 = uVar10 << 4 | uVar6;
                if (uVar10 == 0xffffffff) goto LAB_14001c665;
                lVar12 = (ulonglong)((uVar6 & 0xf) * 0x50) + 0x20 +
                         lVar3 + (ulonglong)(uVar10 >> 4) * 0x510;
                goto LAB_14001c676;
              }
              uVar13 = uVar13 - 1 & uVar13;
            } while (uVar13 != 0);
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
          uVar10 = uVar10 + 1;
        }
      }
LAB_14001c665:
      puVar11 = puVar11 + 5;
    } while (puVar11 != puVar1);
  }
LAB_14001c676:
  FUN_142363360(auStack_40[0]);
  return lVar12;
}

