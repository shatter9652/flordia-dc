// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400525e0  size: 1558 bytes
// Name:    FUN_1400525e0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400525e0(longlong param_1,undefined1 param_2,undefined8 param_3,char *param_4)

{
  char *pcVar1;
  byte *pbVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 auVar6 [16];
  byte bVar7;
  char cVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  longlong lVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  undefined8 *puVar18;
  uint uVar19;
  uint *puVar20;
  ulonglong *puVar21;
  uint uVar22;
  undefined8 *puVar23;
  undefined7 uVar25;
  longlong lVar24;
  byte bVar26;
  longlong *plVar27;
  undefined1 uVar28;
  longlong lVar29;
  longlong unaff_GS_OFFSET;
  bool bVar30;
  bool bVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  float fVar35;
  float fVar36;
  undefined1 in_ZMM6 [64];
  undefined1 auVar37 [64];
  float fVar38;
  undefined1 auVar39 [64];
  float fVar40;
  float fVar41;
  undefined1 auVar42 [64];
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  uint uStack_e4;
  longlong lStack_e0;
  longlong lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined1 auStack_c0 [8];
  longlong lStack_b8;
  char cStack_9f;
  undefined1 auStack_98 [16];
  undefined *puStack_70;
  ulonglong uStack_48;
  
  auStack_98 = in_ZMM6._0_16_;
  switch(param_2) {
  case 6:
    if (*param_4 == '\0') {
      lVar14 = func_0x000144db7870(*(undefined8 *)(param_1 + 8));
      uVar22 = *(uint *)(lVar14 + 0xc);
      if (uVar22 != 0) {
        uVar10 = 0;
        do {
          if (*(char *)(*(longlong *)(lVar14 + 0x10 + uVar10 * 8) + 0x18) == '\v') {
            FUN_14546e1c0(lVar14);
            uVar22 = *(uint *)(lVar14 + 0xc);
            uVar10 = (ulonglong)((int)uVar10 - 1);
          }
          uVar17 = (int)uVar10 + 1;
          uVar10 = (ulonglong)uVar17;
        } while (uVar17 < uVar22);
      }
      return;
    }
    break;
  case 8:
    puVar20 = (uint *)(param_1 + 0xa8);
    iVar15 = 1 << ((uint)param_3 & 0x1f);
    lVar14 = *(longlong *)(param_1 + 0xc0);
    if (*(char *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1440) == '\x01') {
      plVar27 = (longlong *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1438);
      lVar29 = *(longlong *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1438);
    }
    else {
      lVar11 = **(longlong **)(unaff_GS_OFFSET + 0x58);
      *(undefined1 *)(lVar11 + 0x1440) = 1;
      puStack_70 = &UNK_145303a1f;
      lVar29 = FUN_1400063f0();
      plVar27 = (longlong *)(lVar11 + 0x1438);
      *plVar27 = lVar29;
    }
    if (lVar29 == lVar14) {
      *(char *)(param_1 + 200) = *(char *)(param_1 + 200) + '\x01';
    }
    else {
      puVar21 = (ulonglong *)(param_1 + 0xb8);
      uVar22 = *puVar20;
code_r0x000145303a46:
      do {
        uVar17 = uVar22;
        if ((uVar17 & 0x10000ff) != 0) {
          LOCK();
          uVar22 = *puVar20;
          bVar30 = uVar17 == uVar22;
          if (bVar30) {
            *puVar20 = uVar17 + 0x10000;
            uVar22 = uVar17;
          }
          UNLOCK();
          if (bVar30) {
            uVar10 = *puVar21;
            uVar16 = (uint)(*puVar21 >> 7) & 0xffffff;
            if ((*puVar21 >> 7 & 0xffffff) != 0) {
              do {
                if ((longlong)uVar10 < 0x100000000) {
                  uVar13 = *puVar21;
                }
                else {
                  LOCK();
                  uVar13 = *puVar21;
                  if (uVar10 == uVar13) {
                    *puVar21 = uVar10 - 0x100000000;
                    uVar13 = uVar10;
                  }
                  UNLOCK();
                  uVar22 = uVar17;
                  if (uVar10 == uVar13) goto code_r0x000145303a46;
                }
                uVar16 = uVar16 - 1;
                uVar10 = uVar13;
              } while (uVar16 != 0);
            }
            uVar10 = *puVar21;
            do {
              while (uStack_48 = uVar10, 0xffffffff < (longlong)uStack_48) {
                LOCK();
                uVar10 = *puVar21;
                if (uStack_48 == uVar10) {
                  *puVar21 = uStack_48 - 0x100000000;
                  uVar10 = uStack_48;
                }
                UNLOCK();
                uVar22 = uVar17;
                if (uStack_48 == uVar10) goto code_r0x000145303a46;
              }
              puStack_70 = &UNK_145303abe;
              cVar8 = FUN_140006180(puVar21,1,&uStack_48);
              uVar22 = uVar17;
              uVar10 = uStack_48;
            } while (cVar8 == '\0');
          }
          goto code_r0x000145303a46;
        }
        LOCK();
        uVar22 = *puVar20;
        bVar30 = uVar17 == uVar22;
        if (bVar30) {
          *puVar20 = uVar17 | 0x1000000;
          uVar22 = uVar17;
        }
        UNLOCK();
      } while (!bVar30);
      *(undefined1 *)(param_1 + 200) = 1;
      if (*(char *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1440) == '\x01') {
        lVar14 = *plVar27;
      }
      else {
        *(undefined1 *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1440) = 1;
        puStack_70 = &UNK_145303d34;
        lVar14 = FUN_1400063f0();
        *plVar27 = lVar14;
      }
      *(longlong *)(param_1 + 0xc0) = lVar14;
    }
    uVar22 = *(uint *)(param_1 + 0x11c);
    if ((ulonglong)uVar22 != 0) {
      lVar14 = *(longlong *)(param_1 + 0x120);
      lVar29 = 0;
      do {
        if ((*(byte *)(lVar14 + 10 + lVar29) & (byte)iVar15) != 0) {
          switch(*(undefined1 *)(lVar14 + 8 + lVar29)) {
          case 0:
            puStack_70 = &UNK_145303d5b;
            FUN_140560040(puVar20,*(undefined8 *)(lVar14 + lVar29),
                          *(undefined1 *)(lVar14 + 9 + lVar29),iVar15);
            break;
          case 1:
            puStack_70 = &UNK_145303da6;
            FUN_1448371e0(puVar20,*(undefined8 *)(lVar14 + lVar29),
                          *(undefined1 *)(lVar14 + 9 + lVar29),iVar15);
            break;
          case 2:
            puStack_70 = &UNK_145303dd8;
            FUN_144837340(puVar20,*(undefined8 *)(lVar14 + lVar29),
                          *(undefined1 *)(lVar14 + 9 + lVar29),iVar15);
            break;
          case 3:
            puStack_70 = &UNK_145303dbf;
            FUN_1448374a0(puVar20,*(undefined8 *)(lVar14 + lVar29),
                          *(undefined1 *)(lVar14 + 9 + lVar29),iVar15);
            break;
          case 4:
            puStack_70 = &UNK_145303df1;
            FUN_144837600(puVar20,*(undefined8 *)(lVar14 + lVar29),
                          *(undefined1 *)(lVar14 + 9 + lVar29),iVar15);
            break;
          case 5:
            puStack_70 = &UNK_145303bbc;
            FUN_145303ea0(puVar20,*(undefined8 *)(lVar14 + lVar29),
                          *(undefined1 *)(lVar14 + 9 + lVar29),iVar15);
            break;
          case 6:
            puStack_70 = &UNK_145303d74;
            FUN_144837760(puVar20,*(undefined8 *)(lVar14 + lVar29),
                          *(undefined1 *)(lVar14 + 9 + lVar29),iVar15);
            break;
          case 7:
            puStack_70 = &UNK_145303d8d;
            FUN_1448378c0(puVar20,*(undefined8 *)(lVar14 + lVar29),
                          *(undefined1 *)(lVar14 + 9 + lVar29),iVar15);
            break;
          case 8:
            puStack_70 = &UNK_145303d0d;
            FUN_1453040e0(puVar20,*(undefined8 *)(lVar14 + lVar29),
                          *(undefined1 *)(lVar14 + 9 + lVar29),iVar15);
            break;
          case 9:
            puStack_70 = &UNK_145303e0a;
            FUN_144837a20(puVar20,*(undefined8 *)(lVar14 + lVar29),
                          *(undefined1 *)(lVar14 + 9 + lVar29),iVar15);
            break;
          case 10:
            puStack_70 = &UNK_145303e23;
            FUN_144837ba0(puVar20,*(undefined8 *)(lVar14 + lVar29),
                          *(undefined1 *)(lVar14 + 9 + lVar29),iVar15);
          }
          pbVar2 = (byte *)(lVar14 + 10 + lVar29);
          *pbVar2 = *pbVar2 & ~(byte)iVar15;
        }
        lVar29 = lVar29 + 0x10;
      } while ((ulonglong)uVar22 << 4 != lVar29);
      uVar10 = (ulonglong)*(uint *)(param_1 + 0x11c);
      puVar23 = *(undefined8 **)(param_1 + 0x120);
      lVar14 = uVar10 * 0x10;
      puVar18 = puVar23;
      if (uVar10 == 0) {
code_r0x000145303beb:
        puVar23 = puVar23 + uVar10 * 2;
        if (puVar18 != puVar23) {
          puStack_70 = &UNK_145303c0d;
          func_0x000145f40570(puVar18,puVar23,
                              ((ulonglong)*(uint *)(param_1 + 0x11c) * 0x10 +
                              *(longlong *)(param_1 + 0x120)) - (longlong)puVar23);
          *(int *)(param_1 + 0x11c) =
               *(int *)(param_1 + 0x11c) -
               (int)((ulonglong)((longlong)puVar23 - (longlong)puVar18) >> 4);
          pcVar1 = (char *)(param_1 + 200);
          *pcVar1 = *pcVar1 + -1;
          cVar8 = *pcVar1;
          goto joined_r0x000145303c1a;
        }
      }
      else {
        lVar29 = 0;
        do {
          if (*(char *)((longlong)puVar23 + lVar29 + 10) == '\0') {
            puVar18 = (undefined8 *)((longlong)puVar23 + lVar29);
            if (lVar14 + -0x10 != lVar29) {
              lVar29 = lVar29 + 0x10;
              do {
                if (*(char *)((longlong)puVar23 + lVar29 + 10) != '\0') {
                  uVar12 = ((undefined8 *)((longlong)puVar23 + lVar29))[1];
                  *puVar18 = *(undefined8 *)((longlong)puVar23 + lVar29);
                  puVar18[1] = uVar12;
                  puVar18 = puVar18 + 2;
                }
                lVar29 = lVar29 + 0x10;
              } while (lVar14 != lVar29);
            }
            goto code_r0x000145303beb;
          }
          lVar29 = lVar29 + 0x10;
        } while (lVar14 != lVar29);
      }
    }
    pcVar1 = (char *)(param_1 + 200);
    *pcVar1 = *pcVar1 + -1;
    cVar8 = *pcVar1;
joined_r0x000145303c1a:
    if (cVar8 == '\0') {
      *(undefined8 *)(param_1 + 0xc0) = 0xffffffffffffffff;
      uVar22 = *puVar20;
      do {
        LOCK();
        uVar17 = *puVar20;
        bVar30 = uVar22 == uVar17;
        if (bVar30) {
          *puVar20 = uVar22 & 0xfeffffff;
          uVar17 = uVar22;
        }
        uVar22 = uVar17;
        UNLOCK();
      } while (!bVar30);
      if ((uVar22 & 0xff0000) == 0) {
        if ((uVar22 & 0xff00) != 0) {
          uVar22 = *puVar20;
          do {
            LOCK();
            uVar17 = *puVar20;
            bVar30 = uVar22 == uVar17;
            if (bVar30) {
              *puVar20 = uVar22 & 0xffff00ff;
              uVar17 = uVar22;
            }
            uVar22 = uVar17;
            UNLOCK();
          } while (!bVar30);
          uVar22 = uVar22 >> 8 & 0xff;
          if (uVar22 != 0) {
            puVar21 = (ulonglong *)(param_1 + 0xb0);
            uStack_48 = *(ulonglong *)(param_1 + 0xb0);
            do {
              while ((longlong)uStack_48 < 0) {
                puStack_70 = &UNK_145303ce0;
                cVar8 = FUN_1400062d0(puVar21,uVar22,&uStack_48);
                if (cVar8 != '\0') {
                  return;
                }
              }
              LOCK();
              uVar10 = *puVar21;
              if (uStack_48 == uVar10) {
                *puVar21 = uStack_48 + ((ulonglong)uVar22 << 0x20);
                uVar10 = uStack_48;
              }
              UNLOCK();
              bVar30 = uStack_48 != uVar10;
              uStack_48 = uVar10;
            } while (bVar30);
          }
        }
      }
      else {
        uVar22 = uVar22 & 0xfeffffff;
        puVar21 = (ulonglong *)(param_1 + 0xb8);
        do {
          if ((uVar22 & 0xff0000) == 0) {
            return;
          }
          LOCK();
          uVar17 = *puVar20;
          bVar30 = uVar22 == uVar17;
          if (bVar30) {
            *puVar20 = uVar22 - 0x10000;
            uVar17 = uVar22;
          }
          UNLOCK();
          if (bVar30) {
            uStack_48 = *puVar21;
            do {
              while (-1 < (longlong)uStack_48) {
                LOCK();
                uVar10 = *puVar21;
                if (uStack_48 == uVar10) {
                  *puVar21 = uStack_48 + 0x100000000;
                  uVar10 = uStack_48;
                }
                UNLOCK();
                bVar31 = uStack_48 == uVar10;
                uVar17 = uVar22;
                uStack_48 = uVar10;
                if (bVar31) goto code_r0x000145303e32;
              }
              puStack_70 = &UNK_145303e76;
              cVar8 = FUN_1400062d0(puVar21,1,&uStack_48);
              uVar17 = uVar22;
            } while (cVar8 == '\0');
          }
code_r0x000145303e32:
          uVar22 = uVar17;
        } while (!bVar30);
      }
    }
    return;
  case 9:
    lVar14 = *(longlong *)(param_1 + 8);
    uVar10 = (ulonglong)
             *(byte *)(lVar14 + 0x19 + (longlong)(char)param_3 + (ulonglong)bRam000000014abbe908 * 6
                      );
    if (uVar10 == 0x1e) {
      lVar29 = 0;
    }
    else {
      lVar29 = *(longlong *)(lVar14 + 0xa0 + uVar10 * 8);
    }
    lVar11 = (ulonglong)((uint)DAT_14ab83d38 * 2) * 3;
    cVar8 = *(char *)(lVar14 + 0x18 + lVar11);
    uVar10 = CONCAT71((int7)((ulonglong)param_3 >> 8),cVar8);
    if (cVar8 == '\x1e') {
      cVar8 = *(char *)(lVar14 + 0x19 + lVar11);
      uVar25 = (undefined7)((ulonglong)lVar11 >> 8);
      uVar10 = CONCAT71(uVar25,cVar8);
      if ((((cVar8 != '\x1e') ||
           (cVar8 = *(char *)(lVar14 + 0x1a + lVar11), uVar10 = CONCAT71(uVar25,cVar8),
           cVar8 != '\x1e')) ||
          (cVar8 = *(char *)(lVar14 + 0x1b + lVar11), uVar10 = CONCAT71(uVar25,cVar8),
          cVar8 != '\x1e')) ||
         ((cVar8 = *(char *)(lVar14 + 0x1c + lVar11), uVar10 = CONCAT71(uVar25,cVar8),
          cVar8 != '\x1e' ||
          (cVar8 = *(char *)(lVar14 + 0x1d + lVar11), uVar10 = CONCAT71(uVar25,cVar8),
          cVar8 != '\x1e')))) goto code_r0x0001400527e6;
      lVar14 = 0;
    }
    else {
code_r0x0001400527e6:
      lVar14 = *(longlong *)(lVar14 + 0xa0 + (uVar10 & 0xff) * 8);
    }
    if ((lVar29 != 0) &&
       (FUN_144da60a0(auStack_c0,
                      *(longlong *)(lVar29 + 0x18) + 0x80 +
                      (ulonglong)*(uint *)(*(longlong *)(lVar29 + 0x18) + 0x78) * 0x30,
                      CONCAT71((int7)(uVar10 >> 8),0x1a),0x98e522f2), cStack_9f == '\0')) {
      uVar22 = 0;
      uVar17 = 0;
      uVar16 = 0;
      auVar42 = ZEXT464((uint)_DAT_145fc6ed8);
      lStack_d8 = param_1 + 0xa8;
      auVar39 = ZEXT1264(ZEXT812(0));
      bVar26 = 0;
      lStack_e0 = param_1 + 0x28;
      fVar40 = _DAT_145fc6ed8;
      fVar41 = _DAT_145fc6edc;
      uStack_e4 = (uint)param_3;
      do {
        lVar29 = *(longlong *)(lStack_b8 + 0x28);
        if (lVar29 != 0) {
          fVar38 = auVar39._0_4_;
          fVar3 = *(float *)(lStack_b8 + 0x18);
          fVar4 = *(float *)(lVar29 + 0x48);
          fVar5 = *(float *)(lVar29 + 0x4c);
          auVar32 = ZEXT416((uint)fVar3);
          if ((*(float *)(lStack_b8 + 0x1c) < fVar38) || (fVar5 < fVar4)) {
            fVar36 = fVar5;
            fVar35 = fVar3;
            if ((fVar5 < fVar4) && (fVar36 = fVar40 + fVar5, fVar3 < fVar5)) {
              fVar35 = fVar40 + fVar3;
            }
            if ((fVar4 <= fVar35) && (fVar35 <= fVar36)) {
              fVar36 = fVar36 - fVar4;
              if ((fVar36 != fVar38) || (NAN(fVar36) || NAN(fVar38))) {
                auVar37 = ZEXT464((uint)((fVar35 - fVar4) / fVar36));
                goto code_r0x00014005290e;
              }
            }
            auVar34 = ZEXT416((uint)fVar4);
            auVar6 = vcmpss_avx(auVar34,ZEXT416((uint)fVar5),6);
            auVar6 = vblendvps_avx(ZEXT416((uint)(fVar40 + fVar4)),auVar34,auVar6);
            auVar33 = auVar32;
            if (fVar4 <= fVar5) {
              auVar33 = ZEXT416((uint)(fVar40 + fVar3));
            }
            auVar34 = vcmpss_avx(auVar32,auVar34,5);
            auVar32 = vblendvps_avx(auVar33,auVar32,auVar34);
            auVar32 = vcmpss_avx(auVar32,ZEXT416((uint)(fVar41 * (auVar6._0_4_ + fVar5))),1);
            auVar37 = ZEXT1664(CONCAT412(uVar16 & auVar32._12_4_,
                                         CONCAT48(uVar17 & auVar32._8_4_,
                                                  CONCAT44(uVar22 & auVar32._4_4_,
                                                           (uint)fVar40 & auVar32._0_4_))));
          }
          else if (fVar3 < fVar4) {
            auVar37 = ZEXT1264(ZEXT812(0));
          }
          else {
            auVar6 = vcmpss_avx(ZEXT416((uint)fVar5),auVar32,1);
            auVar33._0_4_ = (fVar3 - fVar4) / (fVar5 - fVar4);
            auVar33._4_12_ = SUB6012((undefined1  [60])0x0,0);
            auVar32 = vcmpss_avx(ZEXT416((uint)(fVar5 - fVar4)),auVar39._0_16_,0);
            auVar32 = vblendvps_avx(auVar33,auVar42._0_16_,auVar32);
            auVar32 = vblendvps_avx(auVar32,auVar42._0_16_,auVar6);
            auVar37 = ZEXT1664(auVar32);
          }
code_r0x00014005290e:
          bVar7 = FUN_141fc8860(lVar29,lStack_d8,auVar37._0_8_);
          if (lVar14 != 0) {
            FUN_14556cb00(lVar14,lVar29,auVar37._0_8_);
          }
          lVar11 = FUN_144d9e2f0(lVar29,0x1e720953);
          if ((lVar11 == 0) || (*(char *)(lVar11 + 4) != '\v')) {
            uVar28 = 0;
          }
          else {
            lVar24 = *(longlong *)(lVar11 + 0x18) + 0x18 + lVar11;
            if (*(longlong *)(lVar11 + 0x18) == 1) {
              lVar24 = 0;
            }
            lVar11 = *(longlong *)(lVar24 + 0x20) + 0x20 + lVar24;
            if (*(longlong *)(lVar24 + 0x20) == 1) {
              lVar11 = 0;
            }
            uVar28 = *(undefined1 *)(lVar11 + 4);
          }
          uVar12 = FUN_144d9e2f0(lVar29,0xf9555de7);
          func_0x000144debac0(&uStack_d0,uVar12);
          cVar8 = FUN_144f21480(uStack_d0,0);
          if (*(int *)(lVar29 + 0x40) == -0x671add0e) {
            uVar12 = FUN_144d9e2f0(lVar29,0xe6e17f14);
            func_0x000140092750(&uStack_f0,uVar12);
            uStack_f4 = 0;
            FUN_140092760(CONCAT44(uStack_ec,uStack_f0),&uStack_f4);
            uVar12 = FUN_144d9e2f0(lVar29,0xb25e00b2);
            func_0x000140092750(&uStack_c8,uVar12);
            uStack_f8 = 0;
            FUN_140092760(uStack_c8,&uStack_f8);
            lVar29 = CONCAT44(uStack_f8,uStack_f4);
          }
          else {
            lVar29 = -1;
          }
          bVar26 = bVar26 | bVar7;
          if (cVar8 == '\0') {
            lVar11 = *(longlong *)(param_1 + 0x20);
            uVar9 = *(uint *)(param_1 + 0x1c);
            uVar10 = (ulonglong)uVar9;
            if (uVar10 != 0) {
              lVar24 = 0;
              do {
                if (*(longlong *)(lVar11 + lVar24) == lVar29) goto code_r0x000140052af4;
                lVar24 = lVar24 + 0x10;
              } while (uVar10 << 4 != lVar24);
            }
            if (uVar9 == *(uint *)(param_1 + 0x18)) {
              uVar19 = uVar9 >> 1;
              if (uVar9 < 2) {
                uVar19 = 1;
              }
              uVar19 = uVar19 + uVar9;
              lVar24 = lStack_e0;
              if (8 < uVar19) {
                lVar24 = func_0x000144d9c140(8,(ulonglong)uVar19 << 4);
                uVar9 = *(uint *)(param_1 + 0x1c);
                lVar11 = *(longlong *)(param_1 + 0x20);
              }
              if (uVar9 != 0) {
                func_0x000145f40560(lVar24);
                lVar11 = *(longlong *)(param_1 + 0x20);
              }
              if (lVar11 != 0 && lStack_e0 != lVar11) {
                func_0x000144d9c130(lVar11);
              }
              *(longlong *)(param_1 + 0x20) = lVar24;
              *(uint *)(param_1 + 0x18) = uVar19;
              uVar10 = (ulonglong)*(uint *)(param_1 + 0x1c);
              lVar11 = lVar24;
            }
            lVar24 = uVar10 * 0x10;
            *(int *)(param_1 + 0x1c) = (int)uVar10 + 1;
            *(longlong *)(lVar11 + lVar24) = lVar29;
            *(undefined1 *)(lVar11 + 8 + lVar24) = uVar28;
            *(undefined4 *)(lVar11 + 9 + lVar24) = uStack_f0;
            *(uint *)(lVar11 + 0xc + lVar24) = CONCAT31((undefined3)uStack_ec,uStack_f0._3_1_);
          }
        }
code_r0x000140052af4:
        func_0x000144db7670(auStack_c0);
      } while (cStack_9f != '\x01');
      if ((bVar26 & 1) != 0) {
        FUN_145303990(lStack_d8,1 << (uStack_e4 & 0x1f));
      }
    }
    break;
  case 10:
    if ((char)param_3 == '\x03') {
      uVar22 = *(uint *)(param_1 + 0x1c);
      if ((ulonglong)uVar22 != 0) {
        lVar14 = *(longlong *)(param_1 + 0x20);
        lVar29 = 0;
        bVar26 = 0;
        do {
          bVar7 = func_0x000141fc8a50(*(undefined8 *)(lVar14 + lVar29),
                                      *(undefined1 *)(lVar14 + 8 + lVar29),param_1 + 0xa8);
          bVar26 = bVar26 | bVar7;
          lVar29 = lVar29 + 0x10;
        } while ((ulonglong)uVar22 << 4 != lVar29);
        if ((bVar26 & 1) != 0) {
          FUN_145303990(param_1 + 0xa8,8);
        }
      }
      *(undefined4 *)(param_1 + 0x1c) = 0;
    }
  }
  return;
}

