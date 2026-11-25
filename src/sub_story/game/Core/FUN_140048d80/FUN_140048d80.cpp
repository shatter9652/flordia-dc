// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140048d80  size: 275 bytes
// Name:    FUN_140048d80
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140048ea0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140048d80(uint param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  uint uVar11;
  byte bVar12;
  undefined1 auVar13 [16];
  
  uVar8 = func_0x000144ddb100(1);
  puVar9 = (undefined8 *)FUN_140048ea0(uVar8,param_1);
  if (puVar9 == (undefined8 *)0x0) {
    if (_DAT_14764e680 == 0) {
LAB_140048e8c:
      puVar9 = (undefined8 *)0x0;
    }
    else {
      uVar7 = (param_1 >> 0x10 ^ param_1) * -0x7a143595;
      uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
      uVar7 = uVar7 >> 0x10 ^ uVar7;
      uVar11 = uVar7 >> 7;
      bVar6 = (byte)uVar7;
      bVar12 = bVar6 & 0x7f;
      puVar9 = (undefined8 *)0x0;
      auVar13._0_8_ =
           CONCAT17(bVar6,CONCAT16(bVar6,CONCAT15(bVar6,CONCAT14(bVar6,CONCAT13(bVar6,CONCAT12(bVar6
                                                  ,CONCAT11(bVar6,bVar6))))))) & 0x7f7f7f7f7f7f7f7f;
      auVar13[8] = bVar12;
      auVar13[9] = bVar12;
      auVar13[10] = bVar12;
      auVar13[0xb] = bVar12;
      auVar13[0xc] = bVar12;
      auVar13[0xd] = bVar12;
      auVar13[0xe] = bVar12;
      auVar13[0xf] = bVar12;
      while( true ) {
        uVar11 = uVar11 & _DAT_14764e680 - 1U;
        auVar1 = *(undefined1 (*) [16])(_DAT_14764e688 + (ulonglong)uVar11 * 0x90);
        auVar2 = vpcmpeqb_avx(auVar1,auVar13);
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
        if (uVar3 != 0) {
          uVar7 = (uint)uVar3;
          do {
            uVar4 = 0;
            for (uVar5 = uVar7; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
              uVar4 = uVar4 + 1;
            }
            if (*(uint *)((ulonglong)uVar11 * 0x90 + _DAT_14764e688 + 0x10 + (ulonglong)uVar4 * 8)
                == param_1) {
              uVar7 = uVar11 << 4 | uVar4;
              if (uVar7 != 0xffffffff) {
                puVar9 = (undefined8 *)
                         (_DAT_14764e658 +
                         (ulonglong)
                         *(uint *)(_DAT_14764e688 + (ulonglong)(uVar7 >> 4) * 0x90 + 0x14 +
                                  (ulonglong)(uVar4 & 0xf) * 8) * 0x18);
                puVar10 = (undefined8 *)&UNK_14678d1bb;
                if ((undefined8 *)*puVar9 != (undefined8 *)0x0) {
                  puVar10 = (undefined8 *)*puVar9;
                }
                if (-1 < *(char *)((longlong)puVar9 + 0xf)) {
                  return puVar10;
                }
                return puVar9;
              }
              goto LAB_140048e8c;
            }
            uVar7 = uVar7 - 1 & uVar7;
          } while (uVar7 != 0);
        }
        auVar1 = vpsignb_avx(auVar1,auVar1);
        if ((((((((((((((((SUB161(auVar1 >> 7,0) & 1) != 0 || (SUB161(auVar1 >> 0xf,0) & 1) != 0) ||
                        (SUB161(auVar1 >> 0x17,0) & 1) != 0) || (SUB161(auVar1 >> 0x1f,0) & 1) != 0)
                      || (SUB161(auVar1 >> 0x27,0) & 1) != 0) || (SUB161(auVar1 >> 0x2f,0) & 1) != 0
                     ) || (SUB161(auVar1 >> 0x37,0) & 1) != 0) ||
                   (SUB161(auVar1 >> 0x3f,0) & 1) != 0) || (SUB161(auVar1 >> 0x47,0) & 1) != 0) ||
                 (SUB161(auVar1 >> 0x4f,0) & 1) != 0) || (SUB161(auVar1 >> 0x57,0) & 1) != 0) ||
               (SUB161(auVar1 >> 0x5f,0) & 1) != 0) || (SUB161(auVar1 >> 0x67,0) & 1) != 0) ||
             (SUB161(auVar1 >> 0x6f,0) & 1) != 0) || (SUB161(auVar1 >> 0x77,0) & 1) != 0) ||
            auVar1[0xf] < '\0') break;
        uVar11 = uVar11 + 1;
      }
    }
  }
  return puVar9;
}

