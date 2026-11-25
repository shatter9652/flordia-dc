// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14004e970  size: 603 bytes
// Name:    FUN_14004e970
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14004ebd0, FUN_14062f3b0, FUN_14004c030, FUN_1452c44c0, FUN_140341750, FUN_14004e4a0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_14004e970(undefined8 *param_1,uint param_2,longlong param_3,ulonglong param_4)

{
  uint *puVar1;
  undefined1 auVar2 [16];
  code *pcVar3;
  undefined1 auVar4 [16];
  ushort uVar5;
  uint uVar6;
  uint uVar7;
  longlong *plVar8;
  char cVar9;
  int iVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint uVar13;
  byte bVar14;
  longlong lVar16;
  ulonglong uVar17;
  uint uVar18;
  longlong lVar19;
  bool bVar20;
  undefined1 auVar21 [16];
  uint uStack_58;
  uint uStack_54;
  longlong lStack_50;
  uint uStack_44;
  char cStack_40;
  byte bVar15;
  
  plVar8 = _DAT_148012788;
  uStack_58 = param_2;
  if (*(int *)(param_1 + 1) != 0) {
    lVar19 = param_1[2];
    bVar15 = (byte)param_2;
    bVar14 = bVar15 & 0x7f;
    uVar13 = param_2 >> 7;
    auVar21._0_8_ =
         CONCAT17(bVar15,CONCAT16(bVar15,CONCAT15(bVar15,CONCAT14(bVar15,CONCAT13(bVar15,CONCAT12(
                                                  bVar15,CONCAT11(bVar15,bVar15))))))) &
         0x7f7f7f7f7f7f7f7f;
    auVar21[8] = bVar14;
    auVar21[9] = bVar14;
    auVar21[10] = bVar14;
    auVar21[0xb] = bVar14;
    auVar21[0xc] = bVar14;
    auVar21[0xd] = bVar14;
    auVar21[0xe] = bVar14;
    auVar21[0xf] = bVar14;
    while( true ) {
      uVar13 = uVar13 & *(int *)(param_1 + 1) - 1U;
      auVar2 = *(undefined1 (*) [16])(lVar19 + (ulonglong)uVar13 * 0x110);
      auVar4 = vpcmpeqb_avx(auVar2,auVar21);
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
        uVar18 = (uint)uVar5;
        do {
          uVar6 = 0;
          for (uVar7 = uVar18; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
            uVar6 = uVar6 + 1;
          }
          if (*(uint *)((ulonglong)uVar13 * 0x110 + lVar19 + 0x10 + (ulonglong)(uVar6 << 4)) ==
              param_2) {
            uVar13 = uVar13 << 4 | uVar6;
            if (uVar13 == 0xffffffff) goto LAB_14004ea03;
            lVar19 = (ulonglong)((uVar6 & 0xf) << 4) + 0x10 +
                     lVar19 + (ulonglong)(uVar13 >> 4) * 0x110;
            goto LAB_14004eb4a;
          }
          uVar18 = uVar18 - 1 & uVar18;
        } while (uVar18 != 0);
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
      uVar13 = uVar13 + 1;
    }
  }
LAB_14004ea03:
  uVar12 = _DAT_148012788[4];
  do {
    iVar10 = (int)uVar12;
    if (iVar10 == 0x1fffe) goto LAB_14004eb67;
    uVar17 = uVar12 & 0xffffffff;
    LOCK();
    uVar11 = plVar8[4];
    bVar20 = uVar12 == uVar11;
    if (bVar20) {
      plVar8[4] = (ulonglong)(*(uint *)(plVar8[5] + uVar17 * 4) & 0x1ffff) |
                  uVar12 & 0xffffffff00000000;
      uVar11 = uVar12;
    }
    UNLOCK();
    uVar12 = uVar11;
  } while (!bVar20);
  LOCK();
  *(int *)(plVar8 + 2) = (int)plVar8[2] + 1;
  UNLOCK();
  puVar1 = (uint *)(plVar8[5] + uVar17 * 4);
  *puVar1 = *puVar1 | *(uint *)(plVar8 + 6);
  if (*plVar8 != 0) {
    lVar19 = *plVar8 + (ulonglong)(uint)((int)plVar8[1] * iVar10);
    if (plVar8[3] != 0) {
      FUN_14004c030(plVar8,lVar19);
      param_4 = param_4 & 0xffffffff;
    }
    FUN_14004ebd0(lVar19,&uStack_58,param_1,param_4);
    uStack_54 = param_2;
    FUN_14004e4a0(param_1 + 1,&lStack_50);
    if (cStack_40 != '\0') {
      uVar12 = (ulonglong)((uStack_44 & 0xf) << 4);
      lVar16 = (ulonglong)(uStack_44 >> 4) * 0x110 + lStack_50;
      *(uint *)(uVar12 + 0x10 + lVar16) = param_2;
      *(longlong *)(uVar12 + 0x18 + lVar16) = lVar19;
    }
    lVar19 = FUN_1452c44c0(*param_1);
    if (lVar19 != 0) {
      uVar12 = (ulonglong)uStack_58;
      cVar9 = FUN_14062f3b0(lVar19,uVar12 | 0x500000000);
      if (cVar9 == '\0') {
        FUN_140341750(lVar19,uVar12 | 0x500000000,0x147f0a410,0x8000);
      }
    }
    lVar19 = (ulonglong)((uStack_44 & 0xf) << 4) + 0x10 +
             (ulonglong)(uStack_44 >> 4) * 0x110 + lStack_50;
LAB_14004eb4a:
    lVar16 = *(longlong *)(lVar19 + 8);
    if (lVar16 == 0) {
      lVar16 = 0;
    }
    else if ((param_3 != 0) && (*(char *)(lVar16 + 0x1a) == '\0')) {
      func_0x00014004d070(lVar16,param_3);
      func_0x00014004d030(param_3,lVar16);
      lVar16 = *(longlong *)(lVar19 + 8);
    }
    return lVar16;
  }
LAB_14004eb67:
  pcVar3 = (code *)swi(3);
  lVar19 = (*pcVar3)();
  return lVar19;
}

