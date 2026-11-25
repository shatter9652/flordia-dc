// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14011cb40  size: 1368 bytes
// Name:    FUN_14011cb40
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14200d8b0, FUN_1407a2a80
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14011cb40(uint *param_1)

{
  uint *puVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  ushort uVar4;
  undefined8 uVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  uint *puVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  byte bVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  uint *puVar18;
  int iVar19;
  int iVar20;
  ulonglong uVar21;
  longlong lVar22;
  uint uVar23;
  uint uVar24;
  bool bVar25;
  undefined1 auVar26 [16];
  uint uStack_54;
  int iStack_50;
  byte bStack_4c;
  byte bStack_4b;
  ulonglong uStack_48;
  
  if (*(longlong *)(param_1 + 2) != 0) {
    bVar6 = *(byte *)((longlong)param_1 + 0x11);
    if ((bVar6 & 4) != 0) {
      *(undefined1 *)(*(longlong *)(param_1 + 2) + 0xd4a) = 1;
      bVar6 = bVar6 & 0xf3 | 8;
      *(byte *)((longlong)param_1 + 0x11) = bVar6;
    }
    if ((bVar6 & 8) == 0) {
      return;
    }
    puVar10 = param_1 + 4;
    *(char *)puVar10 = (char)*puVar10 + -1;
    if ((char)*puVar10 != '\0') {
      return;
    }
    func_0x0001419ec470();
    lVar16 = *(longlong *)(param_1 + 2);
    if (lVar16 != 0) {
      FUN_14200d8b0(lVar16);
      func_0x000144d9c130(lVar16,0xd80);
    }
    param_1[2] = 0;
    param_1[3] = 0;
    *(undefined2 *)(param_1 + 4) = 0x103;
  }
  uVar11 = *param_1;
  if (_DAT_1487b3358 != 0) {
    bVar6 = 0;
    do {
      bStack_4c = bVar6 & 7;
      bStack_4b = bVar6 >> 3;
      uVar9 = (ulonglong)bStack_4c * 0x10000 + (ulonglong)bStack_4b;
      uVar15 = (uVar9 ^ (ulonglong)uVar11 + 0x651e95c4d06fbfb1) * -0x622015f714c7d297;
      lVar16 = (uVar15 >> 0x2f ^ uVar9 ^ uVar15) * -0x622015f714c7d297;
      iStack_50 = ((uint)((ulonglong)lVar16 >> 0x2f) ^ (uint)lVar16) * -0x14c7d297;
      uStack_54 = uVar11;
      FUN_1407a2a80(&uStack_54,0xff);
      bVar6 = bVar6 + 1;
    } while (bVar6 != 0x40);
  }
  if (_DAT_1487b3390 != 0) {
    uVar7 = (uVar11 >> 0x10 ^ uVar11) * -0x7a143595;
    uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
    uVar7 = uVar7 >> 0x10 ^ uVar7;
    uVar12 = uVar7 >> 7;
    bVar14 = (byte)uVar7;
    bVar6 = bVar14 & 0x7f;
    auVar26._0_8_ =
         CONCAT17(bVar14,CONCAT16(bVar14,CONCAT15(bVar14,CONCAT14(bVar14,CONCAT13(bVar14,CONCAT12(
                                                  bVar14,CONCAT11(bVar14,bVar14))))))) &
         0x7f7f7f7f7f7f7f7f;
    auVar26[8] = bVar6;
    auVar26[9] = bVar6;
    auVar26[10] = bVar6;
    auVar26[0xb] = bVar6;
    auVar26[0xc] = bVar6;
    auVar26[0xd] = bVar6;
    auVar26[0xe] = bVar6;
    auVar26[0xf] = bVar6;
    while( true ) {
      uVar12 = uVar12 & _DAT_1487b3390 - 1U;
      auVar2 = *(undefined1 (*) [16])(_DAT_1487b3398 + (ulonglong)uVar12 * 0x1050);
      auVar3 = vpcmpeqb_avx(auVar2,auVar26);
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
        uVar7 = (uint)uVar4;
        do {
          uVar23 = 0;
          for (uVar24 = uVar7; (uVar24 & 1) == 0; uVar24 = uVar24 >> 1 | 0x80000000) {
            uVar23 = uVar23 + 1;
          }
          if (*(uint *)((ulonglong)uVar12 * 0x1050 + _DAT_1487b3398 + 0x10 +
                       (ulonglong)(uVar23 * 0x104)) == uVar11) {
            uVar11 = uVar12 << 4 | uVar23;
            if (uVar11 == 0xffffffff) goto LAB_14011ceb0;
            uVar11 = uVar11 >> 4;
            uVar23 = uVar23 & 0xf;
            lVar16 = _DAT_1487b3398;
            uVar7 = uVar11;
            goto LAB_14011cd0b;
          }
          uVar7 = uVar7 - 1 & uVar7;
        } while (uVar7 != 0);
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
  goto LAB_14011ceb0;
code_r0x00014011ce25:
  uVar15 = uVar15 + 1;
  puVar10 = puVar10 + 0x41;
  if (uVar9 == uVar15) goto LAB_14011cd47;
  goto LAB_14011cdc6;
LAB_14011cd0b:
  lVar22 = (ulonglong)uVar11 * 0x1050;
  lVar17 = lVar16 + lVar22;
  auVar26 = vpsignb_avx(*(undefined1 (*) [16])(lVar16 + lVar22),
                        *(undefined1 (*) [16])(lVar16 + lVar22));
  uVar12 = 0;
  uVar8 = (uint)(ushort)((ushort)(SUB161(auVar26 >> 7,0) & 1) |
                         (ushort)(SUB161(auVar26 >> 0xf,0) & 1) << 1 |
                         (ushort)(SUB161(auVar26 >> 0x17,0) & 1) << 2 |
                         (ushort)(SUB161(auVar26 >> 0x1f,0) & 1) << 3 |
                         (ushort)(SUB161(auVar26 >> 0x27,0) & 1) << 4 |
                         (ushort)(SUB161(auVar26 >> 0x2f,0) & 1) << 5 |
                         (ushort)(SUB161(auVar26 >> 0x37,0) & 1) << 6 |
                         (ushort)(SUB161(auVar26 >> 0x3f,0) & 1) << 7 |
                         (ushort)(SUB161(auVar26 >> 0x47,0) & 1) << 8 |
                         (ushort)(SUB161(auVar26 >> 0x4f,0) & 1) << 9 |
                         (ushort)(SUB161(auVar26 >> 0x57,0) & 1) << 10 |
                         (ushort)(SUB161(auVar26 >> 0x5f,0) & 1) << 0xb |
                         (ushort)(SUB161(auVar26 >> 0x67,0) & 1) << 0xc |
                         (ushort)(SUB161(auVar26 >> 0x6f,0) & 1) << 0xd |
                         (ushort)(SUB161(auVar26 >> 0x77,0) & 1) << 0xe |
                        (ushort)(byte)(auVar26[0xf] >> 7) << 0xf);
  for (uVar24 = uVar8; (uVar24 & 1) == 0; uVar24 = uVar24 >> 1 | 0x80000000) {
    uVar12 = uVar12 + 1;
  }
  if (uVar8 == 0) {
    uVar12 = 0x10;
  }
  uVar9 = (ulonglong)uVar12;
  if (uVar11 == uVar7) {
    uVar15 = (ulonglong)uVar23;
LAB_14011cd38:
    uVar24 = uVar12 - 1;
    uVar23 = (uint)uVar15;
    uVar7 = uVar11;
    if (uVar24 != uVar23) {
      *(undefined1 *)(lVar17 + (uVar15 & 0xffffffff)) = *(undefined1 *)(lVar17 + (ulonglong)uVar24);
      func_0x000145f40560(lVar17 + 0x10 + (uVar15 & 0xffffffff) * 0x104,
                          lVar17 + 0x10 + (ulonglong)uVar24 * 0x104,0x104);
      lVar16 = _DAT_1487b3398;
      uVar23 = uVar24;
    }
LAB_14011cd47:
    if (uVar12 != 0x10) goto LAB_14011ce96;
    uVar11 = uVar11 + 1 & _DAT_1487b3390 - 1U;
    goto LAB_14011cd0b;
  }
  if (uVar12 != 0) {
    puVar10 = (uint *)(lVar17 + 0x10);
    uVar15 = 0;
LAB_14011cdc6:
    uVar24 = (*puVar10 >> 0x10 ^ *puVar10) * -0x7a143595;
    uVar24 = (uVar24 >> 0xd ^ uVar24) * -0x3d4d51cb;
    uVar24 = (uVar24 >> 7 ^ uVar24 >> 0x17) & _DAT_1487b3390 - 1U;
    iVar19 = 0;
    if (uVar7 < uVar24) {
      iVar19 = _DAT_1487b3390;
    }
    iVar20 = 0;
    if (uVar11 < uVar24) {
      iVar20 = _DAT_1487b3390;
    }
    uStack_48 = uVar9;
    if (iVar20 + (uVar11 - uVar24) < iVar19 + (uVar7 - uVar24)) goto code_r0x00014011ce25;
    lVar16 = lVar16 + (ulonglong)uVar7 * 0x1050;
    *(undefined1 *)((ulonglong)uVar23 + lVar16) = *(undefined1 *)(lVar17 + uVar15);
    func_0x000145f40560(lVar16 + 0x10 + (ulonglong)uVar23 * 0x104,puVar10,0x104);
    lVar17 = _DAT_1487b3398 + lVar22;
    auVar26 = vpsignb_avx(*(undefined1 (*) [16])(_DAT_1487b3398 + lVar22),
                          *(undefined1 (*) [16])(_DAT_1487b3398 + lVar22));
    uVar12 = 0;
    uVar23 = (uint)(ushort)((ushort)(SUB161(auVar26 >> 7,0) & 1) |
                            (ushort)(SUB161(auVar26 >> 0xf,0) & 1) << 1 |
                            (ushort)(SUB161(auVar26 >> 0x17,0) & 1) << 2 |
                            (ushort)(SUB161(auVar26 >> 0x1f,0) & 1) << 3 |
                            (ushort)(SUB161(auVar26 >> 0x27,0) & 1) << 4 |
                            (ushort)(SUB161(auVar26 >> 0x2f,0) & 1) << 5 |
                            (ushort)(SUB161(auVar26 >> 0x37,0) & 1) << 6 |
                            (ushort)(SUB161(auVar26 >> 0x3f,0) & 1) << 7 |
                            (ushort)(SUB161(auVar26 >> 0x47,0) & 1) << 8 |
                            (ushort)(SUB161(auVar26 >> 0x4f,0) & 1) << 9 |
                            (ushort)(SUB161(auVar26 >> 0x57,0) & 1) << 10 |
                            (ushort)(SUB161(auVar26 >> 0x5f,0) & 1) << 0xb |
                            (ushort)(SUB161(auVar26 >> 0x67,0) & 1) << 0xc |
                            (ushort)(SUB161(auVar26 >> 0x6f,0) & 1) << 0xd |
                            (ushort)(SUB161(auVar26 >> 0x77,0) & 1) << 0xe |
                           (ushort)(byte)(auVar26[0xf] >> 7) << 0xf);
    for (uVar7 = uVar23; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
      uVar12 = uVar12 + 1;
    }
    lVar16 = _DAT_1487b3398;
    if (uVar23 == 0) {
      uVar12 = 0x10;
    }
    goto LAB_14011cd38;
  }
LAB_14011ce96:
  *(undefined1 *)((ulonglong)uVar23 + (ulonglong)uVar7 * 0x1050 + lVar16) = 0x80;
  _DAT_1487b3394 = _DAT_1487b3394 + -1;
LAB_14011ceb0:
  if ((_DAT_14999b468 != 0) && (uVar11 = *param_1, uVar11 != 0)) {
    uVar7 = _DAT_14999b468 - 1;
    uVar12 = (uVar11 >> 0x10 ^ uVar11) * -0x7a143595;
    uVar12 = (uVar12 >> 0xd ^ uVar12) * -0x3d4d51cb;
    uVar9 = (ulonglong)((uVar12 >> 0x10 ^ uVar12) & uVar7);
    uVar12 = *(uint *)(uVar9 * 0x18 + 0x14999b470);
    bVar25 = uVar12 != 0;
    if (uVar12 != uVar11 && bVar25) {
      do {
        uVar9 = (ulonglong)((int)(uVar9 * 0x18 + 0x18 >> 3) * -0x55555555 & uVar7);
        puVar10 = (uint *)(uVar9 * 0x18 + 0x14999b470);
        bVar25 = *puVar10 != 0;
      } while (bVar25 && *puVar10 != uVar11);
    }
    else {
      puVar10 = (uint *)(uVar9 * 0x18 + 0x14999b470);
    }
    if (bVar25) {
      uVar9 = (ulonglong)((int)((ulonglong)(puVar10 + -0x52666d16) >> 3) * -0x55555555 & uVar7);
      lVar16 = uVar9 * 0x18;
      uVar11 = *(uint *)(lVar16 + 0x14999b470);
      uVar7 = _DAT_14999b468;
      while (uVar11 != 0) {
        puVar18 = (uint *)(lVar16 + 0x14999b470);
        uVar11 = (uVar11 >> 0x10 ^ uVar11) * -0x7a143595;
        uVar12 = (uVar11 >> 0xd ^ uVar11) * -0x3d4d51cb;
        uVar11 = uVar7 - 1;
        uVar13 = (ulonglong)((uVar12 >> 0x10 ^ uVar12) & uVar11);
        puVar1 = (uint *)(uVar13 * 0x18 + 0x14999b470);
        uVar15 = 0;
        if (puVar10 < puVar1) {
          uVar15 = (ulonglong)uVar7;
        }
        uVar21 = lVar16 + uVar13 * -0x18;
        if (uVar9 < uVar13) {
          uVar21 = (longlong)puVar18 + ((ulonglong)uVar7 * 0x18 - (longlong)puVar1);
        }
        if ((uint)((int)((longlong)puVar10 + (uVar15 * 0x18 - (longlong)puVar1) >> 3) * -0x55555555)
            < (uint)((int)(uVar21 >> 3) * -0x55555555)) {
          *(undefined8 *)(puVar10 + 4) = *(undefined8 *)(lVar16 + 0x14999b480);
          uVar5 = *(undefined8 *)(lVar16 + 0x14999b478);
          *(undefined8 *)puVar10 = *(undefined8 *)puVar18;
          *(undefined8 *)(puVar10 + 2) = uVar5;
          uVar11 = _DAT_14999b468 - 1;
          puVar10 = puVar18;
          uVar7 = _DAT_14999b468;
        }
        uVar9 = (ulonglong)((int)(lVar16 + 0x18U >> 3) * -0x55555555 & uVar11);
        lVar16 = uVar9 * 0x18;
        uVar11 = *(uint *)(lVar16 + 0x14999b470);
      }
      *puVar10 = 0;
      _DAT_14999b46c = _DAT_14999b46c + -1;
    }
  }
  return;
}

