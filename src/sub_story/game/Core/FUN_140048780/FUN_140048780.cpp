// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140048780  size: 674 bytes
// Name:    FUN_140048780
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140048c90, FUN_140048b50, FUN_140048ba0, FUN_140048f30, FUN_140643cd0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_140048780(uint param_1,char param_2,char param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  int *piVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  byte bVar15;
  undefined1 auVar17 [16];
  uint uStack_12c;
  longlong lStack_128;
  uint uStack_11c;
  char cStack_118;
  byte bVar16;
  
  iVar7 = 0;
  if ((param_1 < 0xfffffffe) && (uVar6 = func_0x000140048a30(), uVar6 != 0)) {
    uStack_12c = uVar6;
    if (_DAT_149ab7d80 != 0) {
      uVar13 = (uVar6 >> 0x10 ^ uVar6) * -0x7a143595;
      uVar13 = (uVar13 >> 0xd ^ uVar13) * -0x3d4d51cb;
      uVar13 = uVar13 >> 0x10 ^ uVar13;
      uVar14 = uVar13 >> 7;
      bVar16 = (byte)uVar13;
      bVar15 = bVar16 & 0x7f;
      auVar17._0_8_ =
           CONCAT17(bVar16,CONCAT16(bVar16,CONCAT15(bVar16,CONCAT14(bVar16,CONCAT13(bVar16,CONCAT12(
                                                  bVar16,CONCAT11(bVar16,bVar16))))))) &
           0x7f7f7f7f7f7f7f7f;
      auVar17[8] = bVar15;
      auVar17[9] = bVar15;
      auVar17[10] = bVar15;
      auVar17[0xb] = bVar15;
      auVar17[0xc] = bVar15;
      auVar17[0xd] = bVar15;
      auVar17[0xe] = bVar15;
      auVar17[0xf] = bVar15;
      while( true ) {
        uVar14 = uVar14 & _DAT_149ab7d80 - 1U;
        auVar1 = *(undefined1 (*) [16])(_DAT_149ab7d88 + (ulonglong)uVar14 * 400);
        auVar2 = vpcmpeqb_avx(auVar1,auVar17);
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
          uVar13 = (uint)uVar3;
          do {
            uVar4 = 0;
            for (uVar5 = uVar13; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
              uVar4 = uVar4 + 1;
            }
            if (*(uint *)((ulonglong)uVar14 * 400 + _DAT_149ab7d88 + 0x10 + (ulonglong)uVar4 * 0x18)
                == uVar6) {
              if ((uVar4 | uVar14 << 4) != 0xffffffff) {
                iVar7 = 0;
                if (param_3 != '\0') {
                  FUN_140048f30(&lStack_128,&uStack_12c);
                  if (cStack_118 == '\0') {
                    uVar10 = (ulonglong)(uStack_11c & 0xf);
                    uVar12 = (ulonglong)(uStack_11c >> 4);
                  }
                  else {
                    uVar10 = (ulonglong)(uStack_11c & 0xf);
                    uVar12 = (ulonglong)(uStack_11c >> 4);
                    *(uint *)(uVar12 * 400 + lStack_128 + 0x10 + uVar10 * 0x18) = uVar6;
                  }
                  iVar7 = *(int *)(uVar12 * 400 + lStack_128 + 0x20 + uVar10 * 0x18);
                }
                if ((param_2 == '\0') && (DAT_149e2fec9 != '\x01')) {
                  FUN_140048f30(&lStack_128,&uStack_12c);
                  if (cStack_118 == '\0') {
                    uVar10 = (ulonglong)(uStack_11c & 0xf);
                    uVar12 = (ulonglong)(uStack_11c >> 4);
                  }
                  else {
                    uVar10 = (ulonglong)(uStack_11c & 0xf);
                    uVar12 = (ulonglong)(uStack_11c >> 4);
                    *(uint *)(uVar12 * 400 + lStack_128 + 0x10 + uVar10 * 0x18) = uVar6;
                  }
                  piVar11 = (int *)(uVar12 * 400 + lStack_128 + 0x14 + uVar10 * 0x18);
                }
                else {
                  FUN_140048f30(&lStack_128,&uStack_12c);
                  if (cStack_118 == '\0') {
                    uVar10 = (ulonglong)(uStack_11c & 0xf);
                    uVar12 = (ulonglong)(uStack_11c >> 4);
                  }
                  else {
                    uVar10 = (ulonglong)(uStack_11c & 0xf);
                    uVar12 = (ulonglong)(uStack_11c >> 4);
                    *(uint *)(uVar12 * 400 + lStack_128 + 0x10 + uVar10 * 0x18) = uVar6;
                  }
                  piVar11 = (int *)(uVar12 * 400 + lStack_128 + 0x18 + uVar10 * 0x18);
                }
                return iVar7 + *piVar11;
              }
              goto LAB_14004884f;
            }
            uVar13 = uVar13 - 1 & uVar13;
          } while (uVar13 != 0);
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
        uVar14 = uVar14 + 1;
      }
    }
LAB_14004884f:
    uVar8 = func_0x000140048a40(param_1);
    FUN_140048ba0(&lStack_128,0x100,uVar8);
    uVar8 = FUN_140643cd0();
    puVar9 = (undefined8 *)FUN_140048c90(uVar8,&lStack_128,&UNK_14678d1bb,1);
    if (puVar9 != (undefined8 *)0x0) {
      iVar7 = func_0x000140048a50(*puVar9,puVar9[1]);
      FUN_140048b50(puVar9);
    }
  }
  return iVar7;
}

