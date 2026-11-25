// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14001cdc0  size: 289 bytes
// Name:    FUN_14001cdc0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_141d6ba10
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14001cdc0(longlong param_1,uint param_2,undefined1 (*param_3) [16])

{
  undefined8 *puVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  byte bVar13;
  undefined1 auVar15 [16];
  undefined1 auVar16 [64];
  uint uStack_44;
  longlong lStack_40;
  uint uStack_34;
  char cStack_30;
  byte bVar14;
  
  if (_DAT_149fee010 != 0) {
    bVar14 = (byte)param_2;
    bVar13 = bVar14 & 0x7f;
    uVar12 = param_2 >> 7;
    auVar15._0_8_ =
         CONCAT17(bVar14,CONCAT16(bVar14,CONCAT15(bVar14,CONCAT14(bVar14,CONCAT13(bVar14,CONCAT12(
                                                  bVar14,CONCAT11(bVar14,bVar14))))))) &
         0x7f7f7f7f7f7f7f7f;
    auVar15[8] = bVar13;
    auVar15[9] = bVar13;
    auVar15[10] = bVar13;
    auVar15[0xb] = bVar13;
    auVar15[0xc] = bVar13;
    auVar15[0xd] = bVar13;
    auVar15[0xe] = bVar13;
    auVar15[0xf] = bVar13;
    while( true ) {
      uVar12 = uVar12 & _DAT_149fee010 - 1U;
      auVar2 = *(undefined1 (*) [16])((ulonglong)uVar12 * 0x90 + 0x149fee020);
      auVar16 = ZEXT1664(auVar2);
      auVar3 = vpcmpeqb_avx(auVar2,auVar15);
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
      if (uVar4 != 0) {
        uVar11 = (uint)uVar4;
        do {
          uVar5 = 0;
          for (uVar6 = uVar11; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
            uVar5 = uVar5 + 1;
          }
          if (*(uint *)((ulonglong)uVar12 * 0x90 + 0x149fee030 + (ulonglong)uVar5 * 8) == param_2) {
            if ((uVar5 | uVar12 << 4) == 0xffffffff) {
              return 0;
            }
            uStack_44 = param_2;
            FUN_141d6ba10(&lStack_40,&uStack_44);
            if (cStack_30 == '\0') {
              uVar8 = (ulonglong)(uStack_34 & 0xf);
              uVar10 = (ulonglong)(uStack_34 >> 4);
            }
            else {
              uVar8 = (ulonglong)(uStack_34 & 0xf);
              uVar10 = (ulonglong)(uStack_34 >> 4);
              *(uint *)(uVar10 * 0x90 + lStack_40 + 0x10 + uVar8 * 8) = param_2;
            }
            auVar15 = vpcmpeqd_avx(auVar16._0_16_,auVar16._0_16_);
            lVar9 = (ulonglong)*(byte *)(uVar10 * 0x90 + lStack_40 + 0x14 + uVar8 * 8) * 0x10;
            puVar1 = (undefined8 *)(param_1 + 0x30 + lVar9);
            uVar7 = puVar1[1];
            *(undefined8 *)*param_3 = *puVar1;
            *(undefined8 *)(*param_3 + 8) = uVar7;
            return CONCAT71((int7)((ulonglong)lVar9 >> 8),
                            (auVar15 & ~*param_3) != (undefined1  [16])0x0);
          }
          uVar11 = uVar11 - 1 & uVar11;
        } while (uVar11 != 0);
      }
      auVar2 = vpsignb_avx(auVar2,auVar2);
      if ((((((((((((((((SUB161(auVar2 >> 7,0) & 1) != 0 || (SUB161(auVar2 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar2 >> 0x17,0) & 1) != 0) || (SUB161(auVar2 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar2 >> 0x27,0) & 1) != 0) || (SUB161(auVar2 >> 0x2f,0) & 1) != 0)
                  || (SUB161(auVar2 >> 0x37,0) & 1) != 0) || (SUB161(auVar2 >> 0x3f,0) & 1) != 0) ||
                (SUB161(auVar2 >> 0x47,0) & 1) != 0) || (SUB161(auVar2 >> 0x4f,0) & 1) != 0) ||
              (SUB161(auVar2 >> 0x57,0) & 1) != 0) || (SUB161(auVar2 >> 0x5f,0) & 1) != 0) ||
            (SUB161(auVar2 >> 0x67,0) & 1) != 0) || (SUB161(auVar2 >> 0x6f,0) & 1) != 0) ||
          (SUB161(auVar2 >> 0x77,0) & 1) != 0) || auVar2[0xf] < '\0') break;
      uVar12 = uVar12 + 1;
    }
  }
  return 0;
}

