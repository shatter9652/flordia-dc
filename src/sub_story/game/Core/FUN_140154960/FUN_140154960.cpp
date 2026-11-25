// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140154960  size: 1273 bytes
// Name:    FUN_140154960
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140006180
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140154960(ulonglong param_1)

{
  undefined8 *puVar1;
  ulonglong *puVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  ushort uVar5;
  uint uVar6;
  byte bVar7;
  char cVar8;
  ulonglong uVar9;
  longlong lVar10;
  uint uVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  longlong lVar16;
  byte bVar17;
  uint uVar18;
  longlong lVar19;
  int iVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  uint uVar23;
  uint uVar24;
  bool bVar25;
  bool bVar26;
  undefined1 auVar27 [16];
  ulonglong *puStack_50;
  ulonglong uStack_48;
  
  uVar15 = _DAT_147129208;
LAB_140154999:
  do {
    uVar23 = uVar15;
    if ((uVar23 & 0x10000ff) != 0) {
      LOCK();
      bVar25 = uVar23 == _DAT_147129208;
      uVar15 = uVar23;
      uVar11 = uVar23 + 0x10000;
      if (!bVar25) {
        uVar15 = _DAT_147129208;
        uVar11 = _DAT_147129208;
      }
      _DAT_147129208 = uVar11;
      UNLOCK();
      if (bVar25) {
        uVar11 = (uint)(_DAT_147129218 >> 7) & 0xffffff;
        uVar22 = _DAT_147129218;
        uVar9 = _DAT_147129218;
        if ((_DAT_147129218 >> 7 & 0xffffff) != 0) {
          do {
            uVar9 = _DAT_147129218;
            if (0xffffffff < (longlong)uVar22) {
              LOCK();
              uVar9 = uVar22;
              uVar21 = uVar22 - 0x100000000;
              if (uVar22 != _DAT_147129218) {
                uVar9 = _DAT_147129218;
                uVar21 = _DAT_147129218;
              }
              _DAT_147129218 = uVar21;
              UNLOCK();
              uVar15 = uVar23;
              if (uVar22 == uVar9) goto LAB_140154999;
            }
            uVar11 = uVar11 - 1;
            uVar22 = uVar9;
            uVar9 = _DAT_147129218;
          } while (uVar11 != 0);
        }
        do {
          while (uStack_48 = uVar9, (longlong)uStack_48 < 0x100000000) {
            cVar8 = FUN_140006180(&DAT_147129218,1,&uStack_48);
            uVar15 = uVar23;
            uVar9 = uStack_48;
            if (cVar8 != '\0') goto LAB_140154999;
          }
          LOCK();
          uVar9 = uStack_48;
          uVar22 = uStack_48 - 0x100000000;
          if (uStack_48 != _DAT_147129218) {
            uVar9 = _DAT_147129218;
            uVar22 = _DAT_147129218;
          }
          _DAT_147129218 = uVar22;
          UNLOCK();
          uVar15 = uVar23;
        } while (uStack_48 != uVar9);
      }
      goto LAB_140154999;
    }
    LOCK();
    bVar25 = uVar23 != _DAT_147129208;
    uVar15 = uVar23 | 0x1000000;
    if (bVar25) {
      uVar23 = _DAT_147129208;
      uVar15 = _DAT_147129208;
    }
    _DAT_147129208 = uVar15;
    UNLOCK();
    uVar15 = uVar23;
  } while (bVar25);
  uVar15 = _DAT_147129208;
  if (_DAT_147129238 != 0) {
    uVar9 = (param_1 >> 0x21 ^ param_1) * -0xae502812aa7333;
    uVar9 = (uVar9 >> 0x21 ^ uVar9) * -0x3b314601e57a13ad;
    uVar9 = uVar9 >> 0x21 ^ uVar9;
    bVar7 = (byte)uVar9;
    uVar23 = (uint)uVar9 >> 7;
    bVar17 = bVar7 & 0x7f;
    auVar27._0_8_ =
         CONCAT17(bVar7,CONCAT16(bVar7,CONCAT15(bVar7,CONCAT14(bVar7,CONCAT13(bVar7,CONCAT12(bVar7,
                                                  CONCAT11(bVar7,bVar7))))))) & 0x7f7f7f7f7f7f7f7f;
    auVar27[8] = bVar17;
    auVar27[9] = bVar17;
    auVar27[10] = bVar17;
    auVar27[0xb] = bVar17;
    auVar27[0xc] = bVar17;
    auVar27[0xd] = bVar17;
    auVar27[0xe] = bVar17;
    auVar27[0xf] = bVar17;
    while( true ) {
      uVar23 = uVar23 & _DAT_147129238 - 1U;
      auVar3 = *(undefined1 (*) [16])(_DAT_147129240 + (ulonglong)uVar23 * 400);
      auVar4 = vpcmpeqb_avx(auVar3,auVar27);
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
        uVar11 = (uint)uVar5;
        do {
          uVar24 = 0;
          for (uVar6 = uVar11; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
            uVar24 = uVar24 + 1;
          }
          if (*(ulonglong *)
               ((ulonglong)uVar23 * 400 + _DAT_147129240 + 0x10 + (ulonglong)uVar24 * 0x18) ==
              param_1) {
            uVar23 = uVar23 << 4 | uVar24;
            if (uVar23 == 0xffffffff) goto code_r0x000140465681;
            uVar23 = uVar23 >> 4;
            uVar24 = uVar24 & 0xf;
            lVar10 = _DAT_147129240;
            uVar15 = uVar23;
            goto LAB_140154b3c;
          }
          uVar11 = uVar11 - 1 & uVar11;
        } while (uVar11 != 0);
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
      uVar23 = uVar23 + 1;
    }
  }
  goto code_r0x000140465681;
code_r0x000140154ce7:
  puStack_50 = puStack_50 + 3;
  uVar22 = uVar22 + 1;
  if (uVar9 == uVar22) goto LAB_140154c35;
  goto LAB_140154c75;
LAB_140154b3c:
  lVar12 = (ulonglong)uVar23 * 400;
  lVar16 = lVar10 + lVar12;
  auVar27 = vpsignb_avx(*(undefined1 (*) [16])(lVar10 + lVar12),
                        *(undefined1 (*) [16])(lVar10 + lVar12));
  uVar11 = 0;
  uVar18 = (uint)(ushort)((ushort)(SUB161(auVar27 >> 7,0) & 1) |
                          (ushort)(SUB161(auVar27 >> 0xf,0) & 1) << 1 |
                          (ushort)(SUB161(auVar27 >> 0x17,0) & 1) << 2 |
                          (ushort)(SUB161(auVar27 >> 0x1f,0) & 1) << 3 |
                          (ushort)(SUB161(auVar27 >> 0x27,0) & 1) << 4 |
                          (ushort)(SUB161(auVar27 >> 0x2f,0) & 1) << 5 |
                          (ushort)(SUB161(auVar27 >> 0x37,0) & 1) << 6 |
                          (ushort)(SUB161(auVar27 >> 0x3f,0) & 1) << 7 |
                          (ushort)(SUB161(auVar27 >> 0x47,0) & 1) << 8 |
                          (ushort)(SUB161(auVar27 >> 0x4f,0) & 1) << 9 |
                          (ushort)(SUB161(auVar27 >> 0x57,0) & 1) << 10 |
                          (ushort)(SUB161(auVar27 >> 0x5f,0) & 1) << 0xb |
                          (ushort)(SUB161(auVar27 >> 0x67,0) & 1) << 0xc |
                          (ushort)(SUB161(auVar27 >> 0x6f,0) & 1) << 0xd |
                          (ushort)(SUB161(auVar27 >> 0x77,0) & 1) << 0xe |
                         (ushort)(byte)(auVar27[0xf] >> 7) << 0xf);
  for (uVar6 = uVar18; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
    uVar11 = uVar11 + 1;
  }
  uVar9 = (ulonglong)uVar11;
  if (uVar18 == 0) {
    uVar9 = 0x10;
  }
  iVar13 = (int)uVar9;
  if (uVar23 == uVar15) {
    uVar22 = (ulonglong)uVar24;
LAB_140154b72:
    uVar11 = iVar13 - 1;
    uVar24 = (uint)uVar22;
    uVar15 = uVar23;
    if (uVar11 != uVar24) {
      uVar9 = (ulonglong)uVar11;
      puVar1 = (undefined8 *)(lVar16 + 0x10 + (uVar22 & 0xffffffff) * 0x18);
      *(undefined1 *)(lVar16 + (uVar22 & 0xffffffff)) = *(undefined1 *)(lVar16 + uVar9);
      *puVar1 = *(undefined8 *)(lVar16 + 0x10 + uVar9 * 0x18);
      uVar5 = *(ushort *)((longlong)puVar1 + 0x12);
      if ((ulonglong)uVar5 != 0) {
        lVar10 = puVar1[1];
        lVar12 = 0;
        do {
          if ((*(short *)(lVar10 + 0x1ea + lVar12) != 0) &&
             (lVar19 = *(longlong *)(lVar10 + 0x1e0 + lVar12), lVar19 != 0)) {
            func_0x000144d9c130(lVar19);
          }
          lVar12 = lVar12 + 0x208;
        } while ((ulonglong)uVar5 * 0x200 + (ulonglong)uVar5 * 8 != lVar12);
        if (lVar10 != 0) {
          func_0x000144d9c130();
        }
      }
      lVar10 = lVar16 + 0x10 + uVar9 * 0x18;
      puVar1[1] = *(undefined8 *)(lVar10 + 8);
      *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(lVar10 + 0x10);
      *(undefined8 *)(lVar10 + 8) = 0;
      *(undefined4 *)(lVar10 + 0x10) = 0;
      lVar10 = _DAT_147129240;
      uVar24 = uVar11;
    }
LAB_140154c35:
    if (iVar13 != 0x10) goto LAB_140154dc2;
    uVar23 = uVar23 + 1 & _DAT_147129238 - 1U;
    goto LAB_140154b3c;
  }
  if (iVar13 != 0) {
    puStack_50 = (ulonglong *)(lVar16 + 0x10);
    uVar22 = 0;
LAB_140154c75:
    uVar21 = (*puStack_50 >> 0x21 ^ *puStack_50) * -0xae502812aa7333;
    lVar19 = (uVar21 >> 0x21 ^ uVar21) * -0x3b314601e57a13ad;
    uVar11 = ((uint)((ulonglong)lVar19 >> 0x21) ^ (uint)lVar19) >> 7 & _DAT_147129238 - 1U;
    iVar14 = 0;
    if (uVar15 < uVar11) {
      iVar14 = _DAT_147129238;
    }
    iVar20 = 0;
    if (uVar23 < uVar11) {
      iVar20 = _DAT_147129238;
    }
    if (iVar20 + (uVar23 - uVar11) < (uVar15 - uVar11) + iVar14) goto code_r0x000140154ce7;
    lVar10 = lVar10 + (ulonglong)uVar15 * 400;
    puVar2 = (ulonglong *)(lVar10 + 0x10 + (ulonglong)uVar24 * 0x18);
    *(undefined1 *)((ulonglong)uVar24 + lVar10) = *(undefined1 *)(lVar16 + uVar22);
    *puVar2 = *puStack_50;
    uVar5 = *(ushort *)((longlong)puVar2 + 0x12);
    if ((ulonglong)uVar5 != 0) {
      uVar9 = puVar2[1];
      lVar10 = 0;
      do {
        if ((*(short *)(uVar9 + 0x1ea + lVar10) != 0) &&
           (*(longlong *)(uVar9 + 0x1e0 + lVar10) != 0)) {
          func_0x000144d9c130();
        }
        lVar10 = lVar10 + 0x208;
      } while ((ulonglong)uVar5 * 0x200 + (ulonglong)uVar5 * 8 != lVar10);
      if (uVar9 != 0) {
        func_0x000144d9c130(uVar9);
      }
    }
    puVar2[1] = puStack_50[1];
    *(int *)(puVar2 + 2) = (int)puStack_50[2];
    puStack_50[1] = 0;
    *(undefined4 *)(puStack_50 + 2) = 0;
    lVar16 = _DAT_147129240 + lVar12;
    auVar27 = vpsignb_avx(*(undefined1 (*) [16])(_DAT_147129240 + lVar12),
                          *(undefined1 (*) [16])(_DAT_147129240 + lVar12));
    iVar13 = 0;
    uVar11 = (uint)(ushort)((ushort)(SUB161(auVar27 >> 7,0) & 1) |
                            (ushort)(SUB161(auVar27 >> 0xf,0) & 1) << 1 |
                            (ushort)(SUB161(auVar27 >> 0x17,0) & 1) << 2 |
                            (ushort)(SUB161(auVar27 >> 0x1f,0) & 1) << 3 |
                            (ushort)(SUB161(auVar27 >> 0x27,0) & 1) << 4 |
                            (ushort)(SUB161(auVar27 >> 0x2f,0) & 1) << 5 |
                            (ushort)(SUB161(auVar27 >> 0x37,0) & 1) << 6 |
                            (ushort)(SUB161(auVar27 >> 0x3f,0) & 1) << 7 |
                            (ushort)(SUB161(auVar27 >> 0x47,0) & 1) << 8 |
                            (ushort)(SUB161(auVar27 >> 0x4f,0) & 1) << 9 |
                            (ushort)(SUB161(auVar27 >> 0x57,0) & 1) << 10 |
                            (ushort)(SUB161(auVar27 >> 0x5f,0) & 1) << 0xb |
                            (ushort)(SUB161(auVar27 >> 0x67,0) & 1) << 0xc |
                            (ushort)(SUB161(auVar27 >> 0x6f,0) & 1) << 0xd |
                            (ushort)(SUB161(auVar27 >> 0x77,0) & 1) << 0xe |
                           (ushort)(byte)(auVar27[0xf] >> 7) << 0xf);
    for (uVar15 = uVar11; (uVar15 & 1) == 0; uVar15 = uVar15 >> 1 | 0x80000000) {
      iVar13 = iVar13 + 1;
    }
    lVar10 = _DAT_147129240;
    if (uVar11 == 0) {
      iVar13 = 0x10;
    }
    goto LAB_140154b72;
  }
LAB_140154dc2:
  lVar10 = (ulonglong)uVar15 * 400 + lVar10;
  uVar9 = (ulonglong)uVar24;
  *(undefined1 *)(uVar9 + lVar10) = 0x80;
  uVar5 = *(ushort *)(lVar10 + 0x22 + uVar9 * 0x18);
  if ((ulonglong)uVar5 != 0) {
    lVar16 = 0;
    lVar10 = *(longlong *)(lVar10 + uVar9 * 0x18 + 0x18);
    do {
      if ((*(short *)(lVar10 + 0x1ea + lVar16) != 0) &&
         (lVar12 = *(longlong *)(lVar10 + 0x1e0 + lVar16), lVar12 != 0)) {
        func_0x000144d9c130(lVar12);
      }
      lVar16 = lVar16 + 0x208;
    } while ((ulonglong)uVar5 * 0x200 + (ulonglong)uVar5 * 8 != lVar16);
    if (lVar10 != 0) {
      func_0x000144d9c130();
    }
  }
  _DAT_14712923c = _DAT_14712923c + -1;
  uVar15 = _DAT_147129208;
code_r0x000140465681:
  do {
    LOCK();
    bVar25 = uVar15 != _DAT_147129208;
    uVar23 = uVar15 & 0xfeffffff;
    if (bVar25) {
      uVar15 = _DAT_147129208;
      uVar23 = _DAT_147129208;
    }
    _DAT_147129208 = uVar23;
    UNLOCK();
  } while (bVar25);
  if ((uVar15 & 0xff0000) == 0) {
    uVar23 = _DAT_147129208;
    if ((uVar15 & 0xff00) != 0) {
      do {
        LOCK();
        bVar25 = uVar23 != _DAT_147129208;
        uVar15 = uVar23 & 0xffff00ff;
        if (bVar25) {
          uVar23 = _DAT_147129208;
          uVar15 = _DAT_147129208;
        }
        _DAT_147129208 = uVar15;
        UNLOCK();
      } while (bVar25);
      uVar15 = uVar23 >> 8 & 0xff;
      if (uVar15 != 0) {
        lVar10 = lRam0000000147129210;
        do {
          while (-1 < lVar10) {
            LOCK();
            lVar16 = lVar10;
            lVar12 = lVar10 + ((ulonglong)uVar15 << 0x20);
            if (lVar10 != lRam0000000147129210) {
              lVar16 = lRam0000000147129210;
              lVar12 = lRam0000000147129210;
            }
            lRam0000000147129210 = lVar12;
            UNLOCK();
            bVar25 = lVar10 == lVar16;
            lVar10 = lVar16;
            if (bVar25) {
              return;
            }
          }
          cVar8 = FUN_1400062d0(0x147129210,uVar15,&stack0xffffffffffffffc8);
        } while (cVar8 == '\0');
      }
    }
  }
  else {
    uVar15 = uVar15 & 0xfeffffff;
    do {
      if ((uVar15 & 0xff0000) == 0) {
        return;
      }
      LOCK();
      bVar25 = uVar15 != _DAT_147129208;
      uVar23 = uVar15;
      uVar11 = uVar15 - 0x10000;
      if (bVar25) {
        uVar23 = _DAT_147129208;
        uVar11 = _DAT_147129208;
      }
      _DAT_147129208 = uVar11;
      UNLOCK();
      uVar9 = _DAT_147129218;
      if (!bVar25) {
        do {
          while ((longlong)uVar9 < 0) {
            cVar8 = FUN_1400062d0(&DAT_147129218,1,&stack0xffffffffffffffc8);
            uVar23 = uVar15;
            if (cVar8 != '\0') goto code_r0x00014046570e;
          }
          LOCK();
          uVar22 = uVar9;
          uVar21 = uVar9 + 0x100000000;
          if (uVar9 != _DAT_147129218) {
            uVar22 = _DAT_147129218;
            uVar21 = _DAT_147129218;
          }
          _DAT_147129218 = uVar21;
          UNLOCK();
          bVar26 = uVar9 != uVar22;
          uVar23 = uVar15;
          uVar9 = uVar22;
        } while (bVar26);
      }
code_r0x00014046570e:
      uVar15 = uVar23;
    } while (bVar25);
  }
  return;
}

