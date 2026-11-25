// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401141c0  size: 667 bytes
// Name:    FUN_1401141c0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145d9a820, FUN_14399b840, FUN_140004b40
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


int FUN_1401141c0(longlong param_1,ulonglong param_2,int param_3,char param_4,
                 undefined1 (*param_5) [16])

{
  undefined1 auVar1 [16];
  int iVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  ushort uVar5;
  uint uVar6;
  byte bVar7;
  char cVar8;
  int iVar9;
  undefined4 uVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong lVar13;
  uint uVar14;
  byte bVar15;
  longlong lVar16;
  uint uVar17;
  longlong lVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [64];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  bVar7 = (byte)param_2;
  FUN_140004b40();
  iVar9 = 2;
  if (*(int *)(param_1 + 0x1e0) != 0) {
    lVar3 = *(longlong *)(param_1 + 0x1e8);
    bVar15 = bVar7 & 0x7f;
    uVar12 = param_2 >> 7 & 0x1ffffff;
    auVar19._0_8_ =
         CONCAT17(bVar7,CONCAT16(bVar7,CONCAT15(bVar7,CONCAT14(bVar7,CONCAT13(bVar7,CONCAT12(bVar7,
                                                  CONCAT11(bVar7,bVar7))))))) & 0x7f7f7f7f7f7f7f7f;
    auVar19[8] = bVar15;
    auVar19[9] = bVar15;
    auVar19[10] = bVar15;
    auVar19[0xb] = bVar15;
    auVar19[0xc] = bVar15;
    auVar19[0xd] = bVar15;
    auVar19[0xe] = bVar15;
    auVar19[0xf] = bVar15;
    while( true ) {
      uVar11 = (uint)uVar12 & *(int *)(param_1 + 0x1e0) - 1U;
      auVar1 = *(undefined1 (*) [16])(lVar3 + (ulonglong)uVar11 * 0x1b10);
      auVar4 = vpcmpeqb_avx(auVar1,auVar19);
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
        uVar17 = (uint)uVar5;
        do {
          uVar14 = 0;
          for (uVar6 = uVar17; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
            uVar14 = uVar14 + 1;
          }
          if (*(int *)((ulonglong)uVar11 * 0x1b10 + lVar3 + 0x10 + (ulonglong)uVar14 * 0x1b0) ==
              (int)param_2) {
            uVar11 = uVar11 << 4 | uVar14;
            if (uVar11 != 0xffffffff) {
              uStack_68 = *(undefined8 *)*param_5;
              uStack_60 = *(undefined8 *)(*param_5 + 8);
              iVar9 = FUN_14399b840((ulonglong)(uVar14 & 0xf) * 0x1b0 + 0x14 +
                                    lVar3 + (ulonglong)(uVar11 >> 4) * 0x1b10,param_3);
            }
            goto LAB_1401142bb;
          }
          uVar17 = uVar17 - 1 & uVar17;
        } while (uVar17 != 0);
      }
      auVar1 = vpsignb_avx(auVar1,auVar1);
      if ((((((((((((((((SUB161(auVar1 >> 7,0) & 1) != 0 || (SUB161(auVar1 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar1 >> 0x17,0) & 1) != 0) || (SUB161(auVar1 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar1 >> 0x27,0) & 1) != 0) || (SUB161(auVar1 >> 0x2f,0) & 1) != 0)
                  || (SUB161(auVar1 >> 0x37,0) & 1) != 0) || (SUB161(auVar1 >> 0x3f,0) & 1) != 0) ||
                (SUB161(auVar1 >> 0x47,0) & 1) != 0) || (SUB161(auVar1 >> 0x4f,0) & 1) != 0) ||
              (SUB161(auVar1 >> 0x57,0) & 1) != 0) || (SUB161(auVar1 >> 0x5f,0) & 1) != 0) ||
            (SUB161(auVar1 >> 0x67,0) & 1) != 0) || (SUB161(auVar1 >> 0x6f,0) & 1) != 0) ||
          (SUB161(auVar1 >> 0x77,0) & 1) != 0) || auVar1[0xf] < '\0') break;
      uVar12 = (ulonglong)(uVar11 + 1);
    }
  }
LAB_1401142bb:
  if (param_4 == '\x01' && iVar9 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x1f8);
    uVar11 = *(uint *)(param_1 + 0x1f0) << 4;
    if (uVar11 == 0) {
      uVar17 = 0;
    }
    else {
      uVar14 = 0;
      do {
        uVar17 = uVar14;
        if (!SBORROW1('\0',*(char *)((ulonglong)(uVar14 & 0xf) +
                                    (ulonglong)(uVar14 >> 4) * 0x390 + lVar3))) break;
        uVar14 = uVar14 + 1;
        uVar17 = uVar11;
      } while (uVar11 != uVar14);
    }
    lVar13 = (ulonglong)(uVar17 >> 4) * 0x390;
    uVar12 = (ulonglong)((uVar17 & 0xf) * 0x38);
    if (lVar13 + uVar12 != (ulonglong)(*(uint *)(param_1 + 0x1f0) & 0xfffffff) * 0x390) {
      auVar20 = ZEXT1264(ZEXT812(0));
      lVar13 = lVar13 + 0x10 + uVar12 + lVar3;
      do {
        auVar19 = vcmpps_avx(auVar20._0_16_,*param_5,0);
        uVar10 = vmovmskps_avx(auVar19);
        uVar14 = uVar17;
        if ((~(byte)uVar10 & 7) == 0) {
LAB_140114375:
          iVar2 = *(int *)(lVar13 + 0x18 + (longlong)param_3 * 4);
          if (iVar2 <= iVar9) {
            iVar9 = iVar2;
          }
          if (iVar9 == 0) {
            iVar9 = 0;
            break;
          }
        }
        else {
          uStack_78 = *(undefined8 *)*param_5;
          uStack_70 = *(undefined8 *)(*param_5 + 8);
          cVar8 = FUN_145d9a820(*(undefined4 *)(lVar13 + 8),&uStack_78);
          if (cVar8 != '\0') goto LAB_140114375;
        }
        while (uVar17 = uVar11, uVar14 != uVar11) {
          while (uVar17 = uVar14 + 1, uVar14 = uVar17, uVar17 < uVar11) {
            if (!SBORROW1('\0',*(char *)((ulonglong)(uVar17 & 0xf) +
                                        (ulonglong)(uVar17 >> 4) * 0x390 + lVar3)))
            goto LAB_1401143bb;
          }
        }
LAB_1401143bb:
        lVar16 = (ulonglong)(uVar17 & 0xf) * 0x38;
        lVar18 = (ulonglong)(uVar17 >> 4) * 0x390 + lVar3;
        lVar13 = lVar16 + 0x10 + lVar18;
      } while (lVar18 + lVar16 !=
               (ulonglong)(*(uint *)(param_1 + 0x1f0) & 0xfffffff) * 0x390 +
               *(longlong *)(param_1 + 0x1f8));
    }
  }
  func_0x000144d9dab0(0x14a945300);
  return iVar9;
}

