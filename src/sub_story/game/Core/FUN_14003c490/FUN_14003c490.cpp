// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14003c490  size: 1089 bytes
// Name:    FUN_14003c490
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144da2360, FUN_144e6ff70, FUN_144da2320
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14003c490(longlong param_1,uint param_2,uint *param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  ushort uVar3;
  bool bVar4;
  undefined4 uVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  undefined4 uVar15;
  longlong lVar16;
  undefined8 uVar17;
  byte bVar18;
  undefined1 auVar20 [16];
  undefined4 uStack_78;
  undefined4 uStack_74;
  uint uStack_70;
  uint *puStack_68;
  uint uStack_5c;
  uint uStack_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  uint uStack_48;
  uint uStack_44;
  byte bVar19;
  
  FUN_144e6ff70();
  lVar10 = func_0x000144da24a0(param_1,param_2);
  if ((lVar10 != 0) && ((*(uint *)(lVar10 + 0x24) & 0xc00) == 0x400)) {
    func_0x0001452a0090(*(undefined8 *)(lVar10 + 0x10),*(undefined4 *)(lVar10 + 0x20),&uStack_78);
    if ((ulonglong)uStack_70 != 0) {
      lVar11 = CONCAT44(uStack_74,uStack_78);
      uVar12 = *param_3;
      lVar16 = 0;
      uVar13 = param_3[1];
      do {
        func_0x000144d9edb0(*(undefined4 *)(param_1 + 8),&uStack_48,*(undefined4 *)(lVar11 + lVar16)
                           );
        uVar7 = uVar12;
        if (uVar13 != uVar12) {
          uVar7 = uVar13 + 1;
          param_3[1] = uVar7;
          param_3[(ulonglong)uVar13 + 2] = uStack_48;
        }
        lVar16 = lVar16 + 4;
        uVar13 = uVar7;
      } while ((ulonglong)uStack_70 << 2 != lVar16);
    }
    uVar17 = *(undefined8 *)(lVar10 + 0x10);
    uVar15 = *(undefined4 *)(lVar10 + 0x20);
    lVar11 = func_0x000144feb2b0(uVar17,uVar15);
    if (lVar11 != 0) {
      func_0x000144feb2d0(param_1,&uStack_78,lVar11);
      func_0x000144d9edb0(*(undefined4 *)(param_1 + 8),&uStack_4c,uStack_78);
      uVar12 = param_3[1];
      if (uVar12 != *param_3) {
        param_3[1] = uVar12 + 1;
        param_3[(ulonglong)uVar12 + 2] = uStack_4c;
      }
      uVar17 = *(undefined8 *)(lVar10 + 0x10);
      uVar15 = *(undefined4 *)(lVar10 + 0x20);
    }
    lVar11 = func_0x00014555ca10(uVar17,uVar15);
    if (lVar11 != 0) {
      func_0x000144feb2d0(param_1,&uStack_78,lVar11);
      func_0x000144d9edb0(*(undefined4 *)(param_1 + 8),&uStack_50,uStack_78);
      uVar12 = param_3[1];
      if (uVar12 != *param_3) {
        param_3[1] = uVar12 + 1;
        param_3[(ulonglong)uVar12 + 2] = uStack_50;
      }
      uVar17 = *(undefined8 *)(lVar10 + 0x10);
      uVar15 = *(undefined4 *)(lVar10 + 0x20);
    }
    lVar11 = func_0x00014555ca30(uVar17,uVar15);
    if (lVar11 != 0) {
      func_0x000144feb2d0(param_1,&uStack_78,lVar11);
      func_0x000144d9edb0(*(undefined4 *)(param_1 + 8),&uStack_54,uStack_78);
      uVar12 = param_3[1];
      if (uVar12 != *param_3) {
        param_3[1] = uVar12 + 1;
        param_3[(ulonglong)uVar12 + 2] = uStack_54;
      }
      uVar17 = *(undefined8 *)(lVar10 + 0x10);
      uVar15 = *(undefined4 *)(lVar10 + 0x20);
    }
    lVar11 = func_0x00014555ca50(uVar17,uVar15);
    if (lVar11 != 0) {
      func_0x000144feb2d0(param_1,&uStack_78,lVar11);
      func_0x000144d9edb0(*(undefined4 *)(param_1 + 8),&uStack_58,uStack_78);
      uVar12 = param_3[1];
      if (uVar12 != *param_3) {
        param_3[1] = uVar12 + 1;
        param_3[(ulonglong)uVar12 + 2] = uStack_58;
      }
    }
    puStack_68 = param_3;
    func_0x000144d9edb0(*(undefined4 *)(param_1 + 8),&uStack_44,param_2);
    uVar14 = 0xffffffff;
    if ((uStack_44 & 0xfffffff) != 0xfffffff) {
      uVar14 = (ulonglong)(uStack_44 & 0xfffffff);
    }
    FUN_144da2320(uVar14 * 4 + _DAT_14abcc598,&uStack_78);
    cVar6 = FUN_144da2360(&uStack_78);
    if ((cVar6 == '\0') || ((*(byte *)(lVar10 + 0x28) & 8) != 0)) {
      uVar15 = *(undefined4 *)(lVar10 + 0x20);
      iVar8 = func_0x0001455069f0(uVar15);
      uVar5 = _DAT_147c21ad0;
      if (iVar8 != 0) {
        uVar7 = 0;
        uVar12 = *puStack_68;
        uVar13 = puStack_68[1];
        do {
          func_0x0001455aaec0(*(undefined8 *)(lVar10 + 0x10),uVar15,&uStack_78,uVar7);
          func_0x000144d9edb0(uVar5,&uStack_5c,uStack_78);
          uVar9 = uVar12;
          if (uVar13 != uVar12) {
            puStack_68[1] = uVar13 + 1;
            puStack_68[(ulonglong)uVar13 + 2] = uStack_5c;
            uVar15 = *(undefined4 *)(lVar10 + 0x20);
            uVar9 = uVar13 + 1;
          }
          uVar13 = uVar9;
          uVar7 = uVar7 + 1;
          uVar9 = func_0x0001455069f0(uVar15);
        } while (uVar7 < uVar9);
      }
    }
    if (*(int *)(param_1 + 0x2c0) != 0) {
      param_2 = param_2 & 0x3fffff;
      uVar12 = 0xffffffff;
      if (param_2 != 0x3fffff) {
        uVar12 = param_2;
      }
      uVar12 = (uVar12 >> 0x10 ^ uVar12) * -0x7a143595;
      uVar12 = (uVar12 >> 0xd ^ uVar12) * -0x3d4d51cb;
      uVar12 = uVar12 >> 0x10 ^ uVar12;
      lVar10 = *(longlong *)(param_1 + 0x2c8);
      uVar13 = uVar12 >> 7;
      bVar19 = (byte)uVar12;
      bVar18 = bVar19 & 0x7f;
      auVar20._0_8_ =
           CONCAT17(bVar19,CONCAT16(bVar19,CONCAT15(bVar19,CONCAT14(bVar19,CONCAT13(bVar19,CONCAT12(
                                                  bVar19,CONCAT11(bVar19,bVar19))))))) &
           0x7f7f7f7f7f7f7f7f;
      auVar20[8] = bVar18;
      auVar20[9] = bVar18;
      auVar20[10] = bVar18;
      auVar20[0xb] = bVar18;
      auVar20[0xc] = bVar18;
      auVar20[0xd] = bVar18;
      auVar20[0xe] = bVar18;
      auVar20[0xf] = bVar18;
      while( true ) {
        uVar13 = uVar13 & *(int *)(param_1 + 0x2c0) - 1U;
        auVar1 = *(undefined1 (*) [16])(lVar10 + (ulonglong)uVar13 * 0x90);
        auVar2 = vpcmpeqb_avx(auVar1,auVar20);
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
        uVar12 = (uint)uVar3;
        if (uVar3 != 0) {
          do {
            uVar7 = 0;
            for (uVar9 = uVar12; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
              uVar7 = uVar7 + 1;
            }
            uVar9 = *(uint *)((ulonglong)uVar13 * 0x90 + lVar10 + 0x10 + (ulonglong)uVar7 * 8) &
                    0x3fffff;
            bVar4 = param_2 == 0x3fffff;
            if (uVar9 != 0x3fffff) {
              bVar4 = param_2 == uVar9 && param_2 != 0x3fffff;
            }
            if (bVar4) {
              uVar12 = uVar13 << 4 | uVar7;
              if (uVar12 == 0xffffffff) {
                return;
              }
              uVar13 = puStack_68[1];
              if (uVar13 == *puStack_68) {
                return;
              }
              uVar12 = *(uint *)(lVar10 + (ulonglong)(uVar12 >> 4) * 0x90 + 0x14 +
                                (ulonglong)(uVar7 & 0xf) * 8);
              puStack_68[1] = uVar13 + 1;
              puStack_68[(ulonglong)uVar13 + 2] = uVar12;
              return;
            }
            uVar12 = uVar12 - 1 & uVar12;
          } while (uVar12 != 0);
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
        uVar13 = uVar13 + 1;
      }
    }
  }
  return;
}

