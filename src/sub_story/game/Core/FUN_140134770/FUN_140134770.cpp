// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140134770  size: 382 bytes
// Name:    FUN_140134770
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_140134770(ulonglong param_1,longlong *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  int *piVar12;
  byte bVar13;
  undefined1 auVar14 [16];
  
  uVar7 = func_0x000145037ab0();
  uVar10 = (ulonglong)((uVar7 & 0x3f) << 6);
  iVar8 = func_0x000145037ab0();
  iVar9 = *(int *)(uVar10 + 0x14856f200);
  if (iVar9 != iVar8 + 1) {
    piVar12 = (int *)(uVar10 + 0x14856f200);
    do {
      if (iVar9 < 1) {
        LOCK();
        iVar8 = *piVar12;
        if (iVar9 == iVar8) {
          *piVar12 = iVar9 + -1;
        }
        UNLOCK();
        if (iVar9 == iVar8) goto LAB_1401347bc;
      }
      iVar9 = *piVar12;
    } while( true );
  }
LAB_1401347c0:
  if (_DAT_14856f1a0 != 0) {
    uVar10 = (param_1 >> 0x21 ^ param_1) * -0xae502812aa7333;
    uVar10 = (uVar10 >> 0x21 ^ uVar10) * -0x3b314601e57a13ad;
    uVar10 = uVar10 >> 0x21 ^ uVar10;
    uVar7 = (uint)uVar10 >> 7;
    bVar6 = (byte)uVar10;
    bVar13 = bVar6 & 0x7f;
    auVar14._0_8_ =
         CONCAT17(bVar6,CONCAT16(bVar6,CONCAT15(bVar6,CONCAT14(bVar6,CONCAT13(bVar6,CONCAT12(bVar6,
                                                  CONCAT11(bVar6,bVar6))))))) & 0x7f7f7f7f7f7f7f7f;
    auVar14[8] = bVar13;
    auVar14[9] = bVar13;
    auVar14[10] = bVar13;
    auVar14[0xb] = bVar13;
    auVar14[0xc] = bVar13;
    auVar14[0xd] = bVar13;
    auVar14[0xe] = bVar13;
    auVar14[0xf] = bVar13;
    while( true ) {
      uVar7 = uVar7 & _DAT_14856f1a0 - 1U;
      auVar1 = *(undefined1 (*) [16])(_DAT_14856f1a8 + (ulonglong)uVar7 * 0x110);
      auVar2 = vpcmpeqb_avx(auVar1,auVar14);
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
        uVar11 = (uint)uVar3;
        do {
          uVar4 = 0;
          for (uVar5 = uVar11; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
            uVar4 = uVar4 + 1;
          }
          if (*(ulonglong *)
               ((ulonglong)uVar7 * 0x110 + _DAT_14856f1a8 + 0x10 + (ulonglong)(uVar4 << 4)) ==
              param_1) {
            uVar7 = uVar7 << 4 | uVar4;
            if (uVar7 == 0xffffffff) {
              return 0;
            }
            uVar7 = *(uint *)((ulonglong)((uVar4 & 0xf) << 4) + 0x18 +
                             _DAT_14856f1a8 + (ulonglong)(uVar7 >> 4) * 0x110);
            func_0x0001455be030(_DAT_14856f1c0,uVar7);
            if (param_2 != (longlong *)0x0) {
              *param_2 = (longlong)(int)uVar7 * 0x30 + _DAT_148570210;
            }
            if ((*(uint *)(_DAT_14856f1d0 + (ulonglong)(uVar7 >> 5) * 4) >> (uVar7 & 0x1f) & 1) == 0
               ) {
              return 0;
            }
            return *(undefined8 *)(_DAT_148570220 + (longlong)(int)uVar7 * 8);
          }
          uVar11 = uVar11 - 1 & uVar11;
        } while (uVar11 != 0);
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
      uVar7 = uVar7 + 1;
    }
  }
  return 0;
LAB_1401347bc:
  LOCK();
  *piVar12 = *piVar12 + 1;
  UNLOCK();
  goto LAB_1401347c0;
}

