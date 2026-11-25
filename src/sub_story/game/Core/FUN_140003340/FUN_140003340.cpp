// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140003340  size: 997 bytes
// Name:    FUN_140003340
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_143622990, FUN_141159b80, FUN_14361f920, FUN_144fb81a0, FUN_145bc4110, FUN_14575cda0, FUN_1400b25e0, FUN_14361f900, FUN_144edcc50, FUN_143622a20
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140003340(longlong param_1,void *param_2,undefined8 param_3)

{
  ulonglong *puVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  char cVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  uint *puVar9;
  longlong lVar10;
  void *pvVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint uVar14;
  uint uVar15;
  longlong *plVar16;
  uint uVar17;
  uint uVar18;
  ulonglong uVar19;
  longlong lVar20;
  bool bVar21;
  bool bVar22;
  float fVar23;
  float fVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined8 unaff_XMM6_Qb;
  undefined1 auVar30 [64];
  undefined1 auVar31 [64];
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_98 [16];
  undefined1 auStack_88 [24];
  undefined8 uStack_70;
  undefined *puStack_60;
  ulonglong uStack_48;
  
  uStack_70 = unaff_XMM6_Qb;
  FUN_143622990();
  if ((param_2 != (void *)0x0) && (lVar6 = *(longlong *)((longlong)param_2 + 0xb0), lVar6 != 0)) {
    FUN_14361f900(lVar6);
    if (*(char *)(lVar6 + 0x6b) == '\x01') {
      lVar10 = *(longlong *)(param_1 + 0x150);
      uVar7 = func_0x000144d9f7c0(*(undefined4 *)(lVar10 + 0x9c));
      puVar8 = (undefined8 *)func_0x000144ecfea0(uVar7);
      uStack_a8 = *puVar8;
      uStack_a0 = puVar8[1];
      bVar21 = true;
      fVar23 = (float)FUN_144edcc50(&uStack_a8,*(undefined4 *)(puVar8 + 2),1);
      puVar8 = (undefined8 *)func_0x000144edcb10(uVar7);
      uStack_b8 = *puVar8;
      uStack_b0 = puVar8[1];
      fVar24 = (float)FUN_144edcc50(&uStack_b8,*(undefined4 *)(puVar8 + 2),1);
      auVar29._4_4_ = _DAT_146159be0;
      auVar29._0_4_ = _DAT_146159be0;
      auVar29._8_4_ = _DAT_146159be0;
      auVar29._12_4_ = _DAT_146159be0;
      auVar30 = ZEXT464(_DAT_145fc6f80);
      auVar27._0_12_ = ZEXT812(0);
      auVar27._12_4_ = 0;
      auVar27 = vcmpss_avx(auVar27,ZEXT416((uint)(fVar24 - fVar23)),2);
      auVar27 = vblendvps_avx(auVar29,ZEXT416(_DAT_145fc6f80),auVar27);
      auVar31 = ZEXT1664(auVar27);
      fVar23 = (float)func_0x000145f40820(auVar27._0_4_ + (fVar24 - fVar23),_DAT_145fc6f84);
      auVar25 = ZEXT416((uint)(fVar23 - auVar31._0_4_));
      auVar27 = vcmpss_avx(auVar25,ZEXT416(_DAT_146159be0),2);
      auVar27 = vblendvps_avx(auVar25,auVar30._0_16_,auVar27);
      auVar25._0_4_ = auVar27._0_4_ ^ _DAT_145fc6f10;
      auVar25._4_4_ = auVar27._4_4_ ^ _DAT_145fc6f10;
      auVar25._8_4_ = auVar27._8_4_ ^ _DAT_145fc6f10;
      auVar25._12_4_ = auVar27._12_4_ ^ _DAT_145fc6f10;
      auVar27 = vmaxss_avx(auVar25,auVar27);
      auVar30 = ZEXT1664(auVar27);
      uVar17 = _DAT_145fc6f10;
      uVar14 = _DAT_145fc6f10;
      uVar15 = _DAT_145fc6f10;
      uVar18 = _DAT_145fc6f10;
      fVar23 = (float)FUN_145bc4110(lVar10);
      puVar9 = (uint *)func_0x000144edcaf0(uVar7);
      if (puVar9[3] != 0) {
        if (puVar9[3] == 5) {
          auVar28._0_4_ = *puVar9 ^ uVar17;
          auVar28._4_4_ = uVar14;
          auVar28._8_4_ = uVar15;
          auVar28._12_4_ = uVar18;
          auVar27 = vmaxss_avx(auVar28,ZEXT416(*puVar9));
          bVar21 = auVar27._0_4_ <= _DAT_145fc6f00;
        }
        else {
          bVar21 = false;
        }
      }
      bVar2 = *(byte *)((longlong)param_2 + 0xd7);
      if ((byte)((fVar23 < auVar30._0_4_ | bVar21) & (bVar2 ^ 1)) == 1) {
        FUN_143622a20(param_1);
      }
      if ((fVar23 < auVar30._0_4_ && bVar21 == false) && bVar2 == 0) {
        pvVar11 = (void *)func_0x000144e2c880(uVar7);
        puVar8 = &uStack_d8;
        FUN_144fb81a0(pvVar11,puVar8,1);
        if ((*(longlong *)((longlong)param_2 + 0xb0) == 0) ||
           (*(char *)(*(longlong *)((longlong)param_2 + 0xb0) + 0x86) != '\x01')) {
          uStack_e8 = uStack_d8;
          uStack_e0 = uStack_d0;
        }
        else {
          uStack_c8 = *(undefined8 *)(*(longlong *)(param_1 + 0x150) + 0x70);
          uStack_c0 = *(undefined8 *)(*(longlong *)(param_1 + 0x150) + 0x78);
          func_0x000144dc3790(&uStack_c8,auStack_88);
          FUN_141159b80(param_3,auStack_98);
          puVar8 = &uStack_e8;
          pvVar11 = param_2;
          FUN_14575cda0(param_2,puVar8,auStack_98,auStack_88);
        }
        uVar17 = uVar17 ^ (uint)uStack_e8;
        atan2f(pvVar11,puVar8);
        *(uint *)(param_1 + 0x140) = uVar17;
        *(undefined4 *)(param_1 + 0x144) = 0;
        *(byte *)(param_1 + 0x148) = *(byte *)(param_1 + 0x148) | 1;
        *(undefined4 *)(param_1 + 0x158) = 0x14;
        *(undefined4 *)(param_1 + 0x15c) = _DAT_14abbef40;
        *(undefined1 *)(param_1 + 0x18c) = 2;
      }
    }
    if (*(char *)(param_1 + 0x18c) == '\0') {
      *(undefined4 *)(param_1 + 0x158) = 0x5dc;
      *(undefined4 *)(param_1 + 0x15c) = _DAT_14abbef40;
      *(byte *)(param_1 + 0x148) = *(byte *)(param_1 + 0x148) | 1;
      *(undefined1 *)(param_1 + 0x18c) = 1;
    }
    if (*(char *)(lVar6 + 0x8c) == '\x01') {
      lVar10 = func_0x000144e74830();
      func_0x0001456d93e0(0,*(undefined4 *)(lVar6 + 0x90),
                          *(undefined4 *)(*(longlong *)(lVar10 + 0x10) + 0x88),
                          *(undefined4 *)(*(longlong *)(lVar10 + 0x10) + 0x7c),0);
    }
    FUN_14361f920(param_1,lVar6);
    if (*(char *)((longlong)param_2 + 0xd7) == '\x01') {
      lVar6 = func_0x000144da10f0(*(undefined4 *)(*(longlong *)(param_1 + 0x150) + 0x9c));
      if ((lVar6 != 0) &&
         (lVar6 = func_0x0001408b2870(*(undefined8 *)(lVar6 + 0x660),0xe), lVar6 != 0)) {
        *(undefined4 *)(lVar6 + 0x290) = 0xffffffff;
      }
      cVar5 = func_0x0001458ac6e0(*(undefined4 *)(*(longlong *)((longlong)param_2 + 0xb8) + 0x9c));
      if (cVar5 != '\0') {
        func_0x00014361b0b0(param_2);
      }
    }
  }
  lVar6 = func_0x000144e6ea40(*(undefined4 *)(*(longlong *)(param_1 + 0x150) + 0x9c));
  if (lVar6 == 0) {
    return;
  }
  lVar6 = func_0x000144e6e9f0(lVar6);
  FUN_1400b25e0(lVar6,0xa7cc4466);
  puVar9 = (uint *)(lVar6 + 0x4070);
  puVar1 = (ulonglong *)(lVar6 + 0x4080);
  uVar17 = *(uint *)(lVar6 + 0x4070);
LAB_1400b2623:
  do {
    uVar14 = uVar17;
    if ((uVar14 & 0x10000ff) != 0) {
      LOCK();
      uVar17 = *puVar9;
      bVar21 = uVar14 == uVar17;
      if (bVar21) {
        *puVar9 = uVar14 + 0x10000;
        uVar17 = uVar14;
      }
      UNLOCK();
      if (bVar21) {
        uVar15 = (uint)(*puVar1 >> 7) & 0xffffff;
        uVar13 = *puVar1;
        if ((*puVar1 >> 7 & 0xffffff) != 0) {
          do {
            if ((longlong)uVar13 < 0x100000000) {
              uVar12 = *puVar1;
            }
            else {
              LOCK();
              uVar12 = *puVar1;
              if (uVar13 == uVar12) {
                *puVar1 = uVar13 - 0x100000000;
                uVar12 = uVar13;
              }
              UNLOCK();
              uVar17 = uVar14;
              if (uVar13 == uVar12) goto LAB_1400b2623;
            }
            uVar15 = uVar15 - 1;
            uVar13 = uVar12;
          } while (uVar15 != 0);
        }
        uVar13 = *puVar1;
        do {
          while (uStack_48 = uVar13, (longlong)uStack_48 < 0x100000000) {
            uStack_70 = 0x1400b26a6;
            cVar5 = FUN_140006180(puVar1,1,&uStack_48);
            uVar17 = uVar14;
            uVar13 = uStack_48;
            if (cVar5 != '\0') goto LAB_1400b2623;
          }
          LOCK();
          uVar13 = *puVar1;
          if (uStack_48 == uVar13) {
            *puVar1 = uStack_48 - 0x100000000;
            uVar13 = uStack_48;
          }
          UNLOCK();
          uVar17 = uVar14;
        } while (uStack_48 != uVar13);
      }
      goto LAB_1400b2623;
    }
    LOCK();
    uVar17 = *puVar9;
    bVar21 = uVar14 == uVar17;
    if (bVar21) {
      *puVar9 = uVar14 | 0x1000000;
      uVar17 = uVar14;
    }
    UNLOCK();
  } while (!bVar21);
  uVar17 = *(uint *)(lVar6 + 0x2570);
  if (uVar17 != 0) {
    lVar10 = *(longlong *)(lVar6 + 0x2580);
    uVar14 = 0x8a0dfe;
    auVar26[8] = 0x60;
    auVar26._0_8_ = 0x6060606060606060;
    auVar26[9] = 0x60;
    auVar26[10] = 0x60;
    auVar26[0xb] = 0x60;
    auVar26[0xc] = 0x60;
    auVar26[0xd] = 0x60;
    auVar26[0xe] = 0x60;
    auVar26[0xf] = 0x60;
    do {
      uVar14 = uVar14 & uVar17 - 1;
      auVar27 = *(undefined1 (*) [16])(lVar10 + (ulonglong)uVar14 * 0x110);
      auVar25 = vpcmpeqb_avx(auVar27,auVar26);
      uVar3 = (ushort)(SUB161(auVar25 >> 7,0) & 1) | (ushort)(SUB161(auVar25 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar25 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar25 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar25 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar25 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar25 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar25 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar25 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar25 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar25 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar25 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(auVar25 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(auVar25 >> 0x6f,0) & 1) << 0xd |
              (ushort)(SUB161(auVar25 >> 0x77,0) & 1) << 0xe |
              (ushort)(byte)(auVar25[0xf] >> 7) << 0xf;
      if (uVar3 != 0) {
        lVar20 = (ulonglong)uVar14 * 0x110 + lVar10;
        uVar15 = (uint)uVar3;
LAB_1400b2768:
        uVar18 = 0;
        for (uVar4 = uVar15; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
          uVar18 = uVar18 + 1;
        }
        if ((*(int *)(lVar20 + 0x14 + (ulonglong)(uVar18 << 4)) != 0) ||
           (*(int *)(lVar20 + 0x10 + (ulonglong)(uVar18 << 4)) != 0x75b049a2)) goto LAB_1400b2785;
        uVar18 = uVar18 | uVar14 << 4;
        uVar13 = (ulonglong)uVar18;
        if (uVar18 != 0xffffffff) {
          uVar14 = uVar17 * 0x10;
          uVar12 = uVar13;
          while ((uVar19 = uVar12, uVar18 != uVar14 &&
                 (uVar12 = (ulonglong)uVar14, uVar19 = uVar13,
                 SBORROW1('\0',*(char *)((ulonglong)((uint)uVar13 & 0xf) +
                                        (uVar13 >> 4) * 0x110 + lVar10))))) {
            uVar18 = (uint)uVar13 + 1;
            uVar13 = (ulonglong)uVar18;
          }
          goto LAB_1400b27ad;
        }
        goto LAB_1400b27a5;
      }
LAB_1400b278c:
      auVar27 = vpsignb_avx(auVar27,auVar27);
      if ((((((((((((((((SUB161(auVar27 >> 7,0) & 1) != 0 || (SUB161(auVar27 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar27 >> 0x17,0) & 1) != 0) || (SUB161(auVar27 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar27 >> 0x27,0) & 1) != 0) || (SUB161(auVar27 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar27 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar27 >> 0x3f,0) & 1) != 0) || (SUB161(auVar27 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar27 >> 0x4f,0) & 1) != 0) || (SUB161(auVar27 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar27 >> 0x5f,0) & 1) != 0) || (SUB161(auVar27 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar27 >> 0x6f,0) & 1) != 0) || (SUB161(auVar27 >> 0x77,0) & 1) != 0) ||
          auVar27[0xf] < '\0') goto LAB_1400b27a5;
      uVar14 = uVar14 + 1;
    } while( true );
  }
  lVar10 = *(longlong *)(lVar6 + 0x2580);
LAB_1400b27a5:
  uVar12 = (ulonglong)(uVar17 << 4);
  uVar19 = uVar12;
LAB_1400b27ad:
  uVar14 = (uint)uVar19;
  lVar20 = (uVar19 >> 4) * 0x110;
  uVar13 = (ulonglong)((uVar14 & 0xf) << 4);
  if (lVar20 + uVar13 != (ulonglong)(uVar17 & 0xfffffff) * 0x110) {
    bVar2 = *(byte *)(lVar10 + lVar20 + 0x1c + uVar13);
    while ((uVar13 = uVar12, uVar14 != (uint)uVar12 &&
           (uVar13 = uVar19,
           SBORROW1('\0',*(char *)((ulonglong)((uint)uVar19 & 0xf) + (uVar19 >> 4) * 0x110 + lVar10)
                   )))) {
      uVar14 = (uint)uVar19 + 1;
      uVar19 = (ulonglong)uVar14;
    }
    uStack_70 = 0x1400b284b;
    FUN_14138e800(lVar6 + 0x2570,uVar13);
    if (((bVar2 & 6) != 0) && ((ulonglong)*(uint *)(lVar6 + 4) != 0)) {
      lVar10 = *(longlong *)(lVar6 + 8);
      lVar20 = 0;
      do {
        if (((*(int *)(lVar10 + lVar20) == 0x75b049a2) &&
            ((*(byte *)(lVar10 + 5 + lVar20) & 1) != 0)) && (*(char *)(lVar10 + 4 + lVar20) < '\0'))
        {
          uStack_70 = 0x1400b28a4;
          FUN_140437e10(lVar6,0x75b049a2,0);
          break;
        }
        lVar20 = lVar20 + 0x18;
      } while ((ulonglong)*(uint *)(lVar6 + 4) * 0x18 != lVar20);
    }
  }
  uVar17 = *puVar9;
  do {
    LOCK();
    uVar14 = *puVar9;
    bVar21 = uVar17 == uVar14;
    if (bVar21) {
      *puVar9 = uVar17 & 0xfeffffff;
      uVar14 = uVar17;
    }
    uVar17 = uVar14;
    UNLOCK();
  } while (!bVar21);
  if ((uVar17 & 0xff0000) == 0) {
    if ((uVar17 & 0xff00) != 0) {
      uVar17 = *puVar9;
      do {
        LOCK();
        uVar14 = *puVar9;
        bVar21 = uVar17 == uVar14;
        if (bVar21) {
          *puVar9 = uVar17 & 0xffff00ff;
          uVar14 = uVar17;
        }
        uVar17 = uVar14;
        UNLOCK();
      } while (!bVar21);
      uVar17 = uVar17 >> 8 & 0xff;
      if (uVar17 != 0) {
        plVar16 = (longlong *)(lVar6 + 0x4078);
        lVar6 = *(longlong *)(lVar6 + 0x4078);
        do {
          while (lVar6 < 0) {
            puStack_60 = &UNK_14046577c;
            cVar5 = FUN_1400062d0(plVar16,uVar17,&stack0xffffffffffffffc8);
            if (cVar5 != '\0') {
              return;
            }
          }
          LOCK();
          lVar10 = *plVar16;
          if (lVar6 == lVar10) {
            *plVar16 = lVar6 + ((ulonglong)uVar17 << 0x20);
            lVar10 = lVar6;
          }
          UNLOCK();
          bVar21 = lVar6 != lVar10;
          lVar6 = lVar10;
        } while (bVar21);
      }
    }
  }
  else {
    uVar17 = uVar17 & 0xfeffffff;
    plVar16 = (longlong *)(lVar6 + 0x4080);
    do {
      if ((uVar17 & 0xff0000) == 0) {
        return;
      }
      LOCK();
      uVar14 = *puVar9;
      bVar21 = uVar17 == uVar14;
      if (bVar21) {
        *puVar9 = uVar17 - 0x10000;
        uVar14 = uVar17;
      }
      UNLOCK();
      if (bVar21) {
        lVar6 = *plVar16;
        do {
          while (lVar6 < 0) {
            puStack_60 = &UNK_1404656ef;
            cVar5 = FUN_1400062d0(plVar16,1,&stack0xffffffffffffffc8);
            uVar14 = uVar17;
            if (cVar5 != '\0') goto code_r0x00014046570e;
          }
          LOCK();
          lVar10 = *plVar16;
          if (lVar6 == lVar10) {
            *plVar16 = lVar6 + 0x100000000;
            lVar10 = lVar6;
          }
          UNLOCK();
          bVar22 = lVar6 != lVar10;
          uVar14 = uVar17;
          lVar6 = lVar10;
        } while (bVar22);
      }
code_r0x00014046570e:
      uVar17 = uVar14;
    } while (!bVar21);
  }
  return;
LAB_1400b2785:
  uVar15 = uVar15 - 1 & uVar15;
  if (uVar15 == 0) goto LAB_1400b278c;
  goto LAB_1400b2768;
}

