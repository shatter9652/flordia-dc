// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140053760  size: 174 bytes
// Name:    FUN_140053760
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140134770
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Removing unreachable block (ram,0x0001401348af) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_140053760(longlong param_1)

{
  undefined1 auVar1 [16];
  undefined8 *puVar2;
  ulonglong uVar3;
  undefined1 auVar4 [16];
  ushort uVar5;
  uint uVar6;
  uint uVar7;
  byte bVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  undefined8 in_RAX;
  ulonglong uVar12;
  uint uVar13;
  int *piVar14;
  byte bVar15;
  undefined1 auVar16 [16];
  
  if (param_1 != 0) {
    puVar2 = *(undefined8 **)(param_1 + 8);
    if (puVar2 != (undefined8 *)0x0) {
      FUN_140134770(*puVar2);
      FUN_140134770(puVar2[1]);
      FUN_140134770(puVar2[2]);
      FUN_140134770(puVar2[3]);
      FUN_140134770(puVar2[4]);
      FUN_140134770(puVar2[5]);
    }
    if (*(undefined8 **)(param_1 + 0x10) != (undefined8 *)0x0) {
      FUN_140134770(**(undefined8 **)(param_1 + 0x10));
    }
    puVar2 = *(undefined8 **)(param_1 + 0x20);
    if (puVar2 != (undefined8 *)0x0) {
      FUN_140134770(*puVar2);
      FUN_140134770(puVar2[1]);
    }
    in_RAX = 0;
    if (*(ulonglong **)(param_1 + 0x18) != (ulonglong *)0x0) {
      uVar3 = **(ulonglong **)(param_1 + 0x18);
      uVar9 = func_0x000145037ab0();
      uVar12 = (ulonglong)((uVar9 & 0x3f) << 6);
      iVar10 = func_0x000145037ab0();
      iVar11 = *(int *)(uVar12 + 0x14856f200);
      if (iVar11 != iVar10 + 1) {
        piVar14 = (int *)(uVar12 + 0x14856f200);
        do {
          if (iVar11 < 1) {
            LOCK();
            iVar10 = *piVar14;
            if (iVar11 == iVar10) {
              *piVar14 = iVar11 + -1;
            }
            UNLOCK();
            if (iVar11 == iVar10) goto LAB_1401347bc;
          }
          iVar11 = *piVar14;
        } while( true );
      }
      goto LAB_1401347c0;
    }
  }
  return in_RAX;
LAB_1401347bc:
  LOCK();
  *piVar14 = *piVar14 + 1;
  UNLOCK();
LAB_1401347c0:
  if (_DAT_14856f1a0 != 0) {
    uVar12 = (uVar3 >> 0x21 ^ uVar3) * -0xae502812aa7333;
    uVar12 = (uVar12 >> 0x21 ^ uVar12) * -0x3b314601e57a13ad;
    uVar12 = uVar12 >> 0x21 ^ uVar12;
    uVar9 = (uint)uVar12 >> 7;
    bVar8 = (byte)uVar12;
    bVar15 = bVar8 & 0x7f;
    auVar16._0_8_ =
         CONCAT17(bVar8,CONCAT16(bVar8,CONCAT15(bVar8,CONCAT14(bVar8,CONCAT13(bVar8,CONCAT12(bVar8,
                                                  CONCAT11(bVar8,bVar8))))))) & 0x7f7f7f7f7f7f7f7f;
    auVar16[8] = bVar15;
    auVar16[9] = bVar15;
    auVar16[10] = bVar15;
    auVar16[0xb] = bVar15;
    auVar16[0xc] = bVar15;
    auVar16[0xd] = bVar15;
    auVar16[0xe] = bVar15;
    auVar16[0xf] = bVar15;
    while( true ) {
      uVar9 = uVar9 & _DAT_14856f1a0 - 1U;
      auVar1 = *(undefined1 (*) [16])(_DAT_14856f1a8 + (ulonglong)uVar9 * 0x110);
      auVar4 = vpcmpeqb_avx(auVar1,auVar16);
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
          if (*(ulonglong *)
               ((ulonglong)uVar9 * 0x110 + _DAT_14856f1a8 + 0x10 + (ulonglong)(uVar6 << 4)) == uVar3
             ) {
            uVar9 = uVar9 << 4 | uVar6;
            if (uVar9 == 0xffffffff) {
              return 0;
            }
            uVar9 = *(uint *)((ulonglong)((uVar6 & 0xf) << 4) + 0x18 +
                             _DAT_14856f1a8 + (ulonglong)(uVar9 >> 4) * 0x110);
            func_0x0001455be030(_DAT_14856f1c0,uVar9);
            if ((*(uint *)(_DAT_14856f1d0 + (ulonglong)(uVar9 >> 5) * 4) >> (uVar9 & 0x1f) & 1) == 0
               ) {
              return 0;
            }
            return *(undefined8 *)(_DAT_148570220 + (longlong)(int)uVar9 * 8);
          }
          uVar13 = uVar13 - 1 & uVar13;
        } while (uVar13 != 0);
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
      uVar9 = uVar9 + 1;
    }
  }
  return 0;
}

