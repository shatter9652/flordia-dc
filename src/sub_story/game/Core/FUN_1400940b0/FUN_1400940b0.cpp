// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400940b0  size: 686 bytes
// Name:    FUN_1400940b0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_143b57500, FUN_142079050, FUN_141d73950, FUN_1413a2030, FUN_140189080, FUN_14004c030, FUN_140004b40
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_1400940b0(undefined8 param_1)

{
  ulonglong *puVar1;
  uint *puVar2;
  undefined1 auVar3 [16];
  code *pcVar4;
  undefined1 auVar5 [16];
  ushort uVar6;
  uint uVar7;
  uint uVar8;
  longlong *plVar9;
  int iVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  ulonglong uVar16;
  byte bVar17;
  bool bVar19;
  undefined1 auVar20 [16];
  uint uStack_34;
  longlong lStack_30;
  uint uStack_24;
  char cStack_20;
  byte bVar18;
  
  FUN_140004b40(0x14928d860);
  uStack_34 = FUN_142079050(param_1);
  plVar9 = _DAT_14928d880;
  if (_DAT_14928d840 != 0) {
    uVar13 = (uStack_34 >> 0x10 ^ uStack_34) * -0x7a143595;
    uVar13 = (uVar13 >> 0xd ^ uVar13) * -0x3d4d51cb;
    uVar13 = uVar13 >> 0x10 ^ uVar13;
    uVar14 = uVar13 >> 7;
    bVar18 = (byte)uVar13;
    bVar17 = bVar18 & 0x7f;
    auVar20._0_8_ =
         CONCAT17(bVar18,CONCAT16(bVar18,CONCAT15(bVar18,CONCAT14(bVar18,CONCAT13(bVar18,CONCAT12(
                                                  bVar18,CONCAT11(bVar18,bVar18))))))) &
         0x7f7f7f7f7f7f7f7f;
    auVar20[8] = bVar17;
    auVar20[9] = bVar17;
    auVar20[10] = bVar17;
    auVar20[0xb] = bVar17;
    auVar20[0xc] = bVar17;
    auVar20[0xd] = bVar17;
    auVar20[0xe] = bVar17;
    auVar20[0xf] = bVar17;
    while( true ) {
      uVar14 = uVar14 & _DAT_14928d840 - 1U;
      auVar3 = *(undefined1 (*) [16])(_DAT_14928d848 + (ulonglong)uVar14 * 0x110);
      auVar5 = vpcmpeqb_avx(auVar3,auVar20);
      uVar6 = (ushort)(SUB161(auVar5 >> 7,0) & 1) | (ushort)(SUB161(auVar5 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar5 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar5 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar5 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar5 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar5 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar5 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar5 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar5 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar5 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar5 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(auVar5 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(auVar5 >> 0x6f,0) & 1) << 0xd |
              (ushort)(SUB161(auVar5 >> 0x77,0) & 1) << 0xe |
              (ushort)(byte)(auVar5[0xf] >> 7) << 0xf;
      if (uVar6 != 0) {
        uVar13 = (uint)uVar6;
        do {
          uVar7 = 0;
          for (uVar8 = uVar13; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
            uVar7 = uVar7 + 1;
          }
          if (*(uint *)((ulonglong)uVar14 * 0x110 + _DAT_14928d848 + 0x10 + (ulonglong)(uVar7 << 4))
              == uStack_34) {
            uVar13 = uVar14 << 4 | uVar7;
            if (uVar13 == 0xffffffff) goto LAB_1400941a7;
            lVar15 = *(longlong *)
                      ((ulonglong)((uVar7 & 0xf) << 4) + 0x18 +
                      _DAT_14928d848 + (ulonglong)(uVar13 >> 4) * 0x110);
            goto LAB_14009419a;
          }
          uVar13 = uVar13 - 1 & uVar13;
        } while (uVar13 != 0);
      }
      auVar3 = vpsignb_avx(auVar3,auVar3);
      if ((((((((((((((((SUB161(auVar3 >> 7,0) & 1) != 0 || (SUB161(auVar3 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar3 >> 0x17,0) & 1) != 0) || (SUB161(auVar3 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar3 >> 0x27,0) & 1) != 0) || (SUB161(auVar3 >> 0x2f,0) & 1) != 0)
                  || (SUB161(auVar3 >> 0x37,0) & 1) != 0) || (SUB161(auVar3 >> 0x3f,0) & 1) != 0) ||
                (SUB161(auVar3 >> 0x47,0) & 1) != 0) || (SUB161(auVar3 >> 0x4f,0) & 1) != 0) ||
              (SUB161(auVar3 >> 0x57,0) & 1) != 0) || (SUB161(auVar3 >> 0x5f,0) & 1) != 0) ||
            (SUB161(auVar3 >> 0x67,0) & 1) != 0) || (SUB161(auVar3 >> 0x6f,0) & 1) != 0) ||
          (SUB161(auVar3 >> 0x77,0) & 1) != 0) || auVar3[0xf] < '\0') break;
      uVar14 = uVar14 + 1;
    }
  }
LAB_1400941a7:
  if (*(int *)((longlong)_DAT_14928d880 + 0xc) != (int)_DAT_14928d880[2]) {
    uVar11 = _DAT_14928d880[4];
    do {
      iVar10 = (int)uVar11;
      if (iVar10 == 0x1fffe) goto LAB_140094293;
      uVar16 = uVar11 & 0xffffffff;
      LOCK();
      uVar12 = plVar9[4];
      bVar19 = uVar11 == uVar12;
      if (bVar19) {
        plVar9[4] = (ulonglong)(*(uint *)(plVar9[5] + uVar16 * 4) & 0x1ffff) |
                    uVar11 & 0xffffffff00000000;
        uVar12 = uVar11;
      }
      UNLOCK();
      uVar11 = uVar12;
    } while (!bVar19);
    LOCK();
    *(int *)(plVar9 + 2) = (int)plVar9[2] + 1;
    UNLOCK();
    puVar2 = (uint *)(plVar9[5] + uVar16 * 4);
    *puVar2 = *puVar2 | *(uint *)(plVar9 + 6);
    if (*plVar9 == 0) {
LAB_140094293:
      pcVar4 = (code *)swi(3);
      lVar15 = (*pcVar4)();
      return lVar15;
    }
    lVar15 = *plVar9 + (ulonglong)(uint)((int)plVar9[1] * iVar10);
    if (plVar9[3] != 0) {
      FUN_14004c030(plVar9,lVar15);
    }
    FUN_143b57500(lVar15);
    if ((*(longlong *)(lVar15 + 0x10) != 0) &&
       ((*(int *)(lVar15 + 0x44) != 0 || (*(longlong *)(lVar15 + 0x50) != 0)))) {
      FUN_141d73950(&lStack_30,&uStack_34);
      if (cStack_20 == '\x01') {
        uVar11 = (ulonglong)((uStack_24 & 0xf) << 4);
        lStack_30 = (ulonglong)(uStack_24 >> 4) * 0x110 + lStack_30;
        *(uint *)(uVar11 + 0x10 + lStack_30) = uStack_34;
        *(longlong *)(uVar11 + 0x18 + lStack_30) = lVar15;
      }
LAB_14009419a:
      func_0x0001400bcd70(lVar15);
      goto LAB_140094347;
    }
    FUN_1413a2030(lVar15);
    plVar9 = _DAT_14928d880;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = lVar15 - *_DAT_14928d880;
    uVar13 = SUB164(auVar3 / ZEXT416(*(uint *)(_DAT_14928d880 + 1)),0);
    uVar14 = *(uint *)(_DAT_14928d880[5] +
                      (SUB168(auVar3 / ZEXT416(*(uint *)(_DAT_14928d880 + 1)),0) & 0xffffffff) * 4)
             & 0xfffe0000 | uVar13;
    uVar13 = uVar13 & 0x1ffff | 0x20000;
    if (uVar14 < 0xfffe0000) {
      uVar13 = uVar14 + 0x20000;
    }
    puVar1 = (ulonglong *)(_DAT_14928d880 + 4);
    LOCK();
    *(int *)(_DAT_14928d880 + 2) = (int)_DAT_14928d880[2] + -1;
    UNLOCK();
    uVar11 = *puVar1;
    do {
      *(uint *)(plVar9[5] + (ulonglong)(uVar13 & 0x1ffff) * 4) =
           (uint)uVar11 & 0x1ffff | uVar13 & 0xfffe0000;
      LOCK();
      uVar12 = plVar9[4];
      bVar19 = uVar11 == uVar12;
      if (bVar19) {
        plVar9[4] = (uVar11 & 0xffffffff00000000) + (ulonglong)(uVar13 & 0x1ffff) + 0x100000000;
        uVar12 = uVar11;
      }
      UNLOCK();
      uVar11 = uVar12;
    } while (!bVar19);
    if (plVar9[3] != 0) {
      FUN_140189080(plVar9,lVar15);
    }
  }
  lVar15 = 0;
LAB_140094347:
  func_0x000144d9dab0(0x14928d860);
  return lVar15;
}

