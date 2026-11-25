// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400b9230  size: 1201 bytes
// Name:    FUN_1400b9230
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140a845f0, FUN_14004c030, FUN_1400b7520, FUN_144f399e0, FUN_144e8f2f0, FUN_140a84620, FUN_140338190, FUN_144e4c850, FUN_140981bd0, FUN_1400b7450, FUN_14063a3b0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400b9230(longlong param_1)

{
  byte *pbVar1;
  uint *puVar2;
  ushort uVar3;
  byte bVar4;
  longlong lVar5;
  code *pcVar6;
  ushort uVar7;
  longlong *plVar8;
  char cVar9;
  ushort uVar10;
  int iVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  uint uVar15;
  undefined8 unaff_RBX;
  longlong *plVar16;
  undefined8 *puVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  longlong unaff_GS_OFFSET;
  bool bVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  longlong alStack_128 [2];
  undefined4 uStack_118;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  ulonglong uStack_f0;
  undefined8 uStack_e8;
  ulonglong uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined1 uStack_c8;
  undefined1 auStack_b8 [32];
  undefined1 auStack_98 [20];
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  undefined1 auStack_78 [32];
  undefined1 auStack_58 [32];
  
  uVar18 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffff0;
  lVar5 = *(longlong *)(uVar18 + 0x20);
  if ((lVar5 != 0) && (*(longlong *)(uVar18 + 0x38) == 0)) {
    bVar4 = *(byte *)(lVar5 + 0x84);
    if ((bVar4 & 0x27) != 0x22 && (bVar4 & 7) != 1) {
      return;
    }
    if ((*(byte *)(lVar5 + 0x50) & 0x20) != 0) {
      *(byte *)(uVar18 + 0x36) = *(byte *)(uVar18 + 0x36) | 2;
      bVar4 = *(byte *)(lVar5 + 0x84);
    }
    lVar12 = FUN_144e4c850(*(undefined4 *)(lVar5 + 0x58),
                           CONCAT71((int7)((ulonglong)unaff_RBX >> 8),bVar4) & 0xffffffff);
    if (lVar12 == 0) {
      if (((bVar4 & 0x2f) == 0x2a) &&
         (cVar9 = FUN_1400b7520(lVar5,1), plVar8 = _DAT_149e40a50, cVar9 != '\0')) {
        uVar13 = _DAT_149e40a50[4];
        do {
          iVar11 = (int)uVar13;
          if (iVar11 == 0x1fffe) goto LAB_1400b96b9;
          uVar19 = uVar13 & 0xffffffff;
          LOCK();
          uVar14 = plVar8[4];
          bVar20 = uVar13 == uVar14;
          if (bVar20) {
            plVar8[4] = (ulonglong)(*(uint *)(plVar8[5] + uVar19 * 4) & 0x1ffff) |
                        uVar13 & 0xffffffff00000000;
            uVar14 = uVar13;
          }
          UNLOCK();
          uVar13 = uVar14;
        } while (!bVar20);
        LOCK();
        *(int *)(plVar8 + 2) = (int)plVar8[2] + 1;
        UNLOCK();
        puVar2 = (uint *)(plVar8[5] + uVar19 * 4);
        *puVar2 = *puVar2 | *(uint *)(plVar8 + 6);
        if (*plVar8 == 0) {
LAB_1400b96b9:
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        puVar17 = (undefined8 *)(*plVar8 + (ulonglong)(uint)((int)plVar8[1] * iVar11));
        if (plVar8[3] != 0) {
          FUN_14004c030(plVar8,puVar17);
        }
        FUN_140a845f0(puVar17,10);
        lVar12 = FUN_140338190(_DAT_149251cf8,uVar18);
        if (lVar12 == 0) {
          (**(code **)*puVar17)(puVar17,1);
          uVar10 = *(ushort *)(lVar5 + 0x80);
          do {
            if (uVar10 == 0xfff0) {
              return;
            }
            uVar7 = uVar10 - 1;
            if (uVar10 < 2) {
              uVar7 = 0xfff0;
            }
            LOCK();
            uVar3 = *(ushort *)(lVar5 + 0x80);
            bVar20 = uVar10 == uVar3;
            if (bVar20) {
              *(ushort *)(lVar5 + 0x80) = uVar7;
              uVar3 = uVar10;
            }
            uVar10 = uVar3;
            UNLOCK();
          } while (!bVar20);
          if (uVar7 != 0xfff0) {
            return;
          }
          LOCK();
          puVar17 = *(undefined8 **)(lVar5 + 8);
          *(undefined8 *)(lVar5 + 8) = 0;
          UNLOCK();
          func_0x0001451f3820(puVar17,0);
                    /* WARNING: Could not recover jumptable at 0x000140337c2f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)*puVar17)(puVar17,1);
          return;
        }
        auStack_b8 = *(undefined1 (*) [32])(uVar18 + 0x40);
        auVar21 = *(undefined1 (*) [16])(uVar18 + 0x70);
        auVar22 = vpunpckhwd_avx(auVar21,auVar21);
        auVar22 = vpsrad_avx(auVar22,0x10);
        auVar22 = vcvtdq2ps_avx(auVar22);
        auVar22 = vshufpd_avx(auVar22,auVar22,3);
        auStack_98._16_4_ = auVar22._0_4_ * _DAT_146159c90 + auVar21._0_4_;
        auStack_98._0_16_ = *(undefined1 (*) [16])(uVar18 + 0x60);
        fStack_84 = auVar22._4_4_ * _UNK_146159c94 + auVar21._4_4_;
        fStack_80 = auVar22._8_4_ * _UNK_146159c98 + auVar21._8_4_;
        fStack_7c = auVar22._12_4_ * _UNK_146159c9c + auVar21._12_4_;
        FUN_140a84620(puVar17,lVar12);
        func_0x0001451f3820(lVar12,1);
        FUN_1400b7450(uVar18,puVar17,1);
        lVar12 = func_0x000145028560(uVar18);
        if (((lVar12 != 0) && (*(longlong *)(lVar12 + 0xb0) == 0)) &&
           (cVar9 = FUN_144f399e0(*(undefined4 *)(uVar18 + 0x9c)), cVar9 == '\0')) {
          *(undefined8 **)(lVar12 + 0xb0) = puVar17;
        }
        cVar9 = func_0x0001451f9a70(*(undefined8 *)(lVar5 + 0x50));
        if (cVar9 != '\0') {
          *(byte *)((longlong)puVar17 + 0x154) = *(byte *)((longlong)puVar17 + 0x154) | 8;
        }
      }
    }
    else {
      *(byte *)(uVar18 + 0xb0) = *(byte *)(uVar18 + 0xb0) | 0x10;
      plVar8 = _DAT_1492ab488;
      if (*(longlong *)(lVar12 + 0x10) != 0) {
        alStack_128[1] = 0;
        uStack_c8 = 1;
        uStack_118 = 0xe;
        uStack_108 = *(undefined8 *)(uVar18 + 0x40);
        uStack_100 = *(undefined8 *)(uVar18 + 0x48);
        uStack_f8 = *(undefined8 *)(uVar18 + 0x50);
        uStack_f0 = *(ulonglong *)(uVar18 + 0x58);
        uStack_e8 = *(undefined8 *)(uVar18 + 0x60);
        uStack_e0 = *(ulonglong *)(uVar18 + 0x68);
        uStack_d8 = *(undefined8 *)(uVar18 + 0x70);
        uStack_d0 = *(undefined8 *)(uVar18 + 0x78);
        if (*(short *)(uVar18 + 0xc0) == 0xf) {
          uStack_f0 = uStack_f0 & 0xffffffff;
          uStack_e0 = uStack_e0 & 0xffffffff;
        }
        uVar13 = _DAT_1492ab488[4];
        do {
          iVar11 = (int)uVar13;
          alStack_128[0] = lVar12;
          if (iVar11 == 0x1fffe) goto LAB_1400b96b3;
          uVar19 = uVar13 & 0xffffffff;
          LOCK();
          uVar14 = plVar8[4];
          bVar20 = uVar13 == uVar14;
          if (bVar20) {
            plVar8[4] = (ulonglong)(*(uint *)(plVar8[5] + uVar19 * 4) & 0x1ffff) |
                        uVar13 & 0xffffffff00000000;
            uVar14 = uVar13;
          }
          UNLOCK();
          uVar13 = uVar14;
        } while (!bVar20);
        LOCK();
        *(int *)(plVar8 + 2) = (int)plVar8[2] + 1;
        UNLOCK();
        puVar2 = (uint *)(plVar8[5] + uVar19 * 4);
        *puVar2 = *puVar2 | *(uint *)(plVar8 + 6);
        if (*plVar8 == 0) {
LAB_1400b96b3:
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        plVar16 = (longlong *)(*plVar8 + (ulonglong)(uint)((int)plVar8[1] * iVar11));
        if (plVar8[3] != 0) {
          FUN_14004c030(plVar8,plVar16);
        }
        FUN_14063a3b0(plVar16,alStack_128);
        FUN_1400b7450(uVar18,plVar16,1);
        if (*(char *)(*(longlong *)
                       (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8) ==
            '\0') {
          func_0x0001455db994();
        }
        if (*(longlong *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1448) == 0) {
          auVar21._0_12_ = ZEXT812(0);
          auVar21._12_4_ = 0;
          auStack_78 = ZEXT1632(auVar21);
          auStack_b8 = ZEXT1632(auVar21);
          _auStack_98 = auStack_b8;
          auStack_58 = auStack_78;
        }
        FUN_140981bd0(auStack_b8,uVar18);
        (**(code **)(*plVar16 + 0x440))(plVar16,auStack_b8,0);
        *(uint *)(uVar18 + 0xe8) =
             *(uint *)(uVar18 + 0xe8) & 0xffffffdf | (uint)(*(char *)(lVar12 + 0xda) != '\0') << 5;
        lVar12 = func_0x000145028560(uVar18);
        if (((lVar12 != 0) && (*(longlong *)(lVar12 + 0xb0) == 0)) &&
           (cVar9 = FUN_144f399e0(*(undefined4 *)(uVar18 + 0x9c)), cVar9 == '\0')) {
          *(longlong **)(lVar12 + 0xb0) = plVar16;
        }
        cVar9 = func_0x0001451f9a70();
        if (cVar9 != '\0') {
          *(byte *)((longlong)plVar16 + 0x154) = *(byte *)((longlong)plVar16 + 0x154) | 8;
        }
        uVar15 = 0;
        if ((*(byte *)(plVar16 + 0x37) & 1) == 0) {
          uVar15 = (int)(char)(*(char *)(lVar5 + 0x9b) << 2) & 0x80000;
        }
        *(uint *)(param_1 + 0x304) = *(uint *)(param_1 + 0x304) & 0xfff7ffff | uVar15;
        cVar9 = FUN_144e8f2f0(uVar18,0x149e714b0);
        if ((cVar9 != '\0') &&
           (lVar12 = func_0x0001450da530(*(undefined4 *)(uVar18 + 0x9c)), lVar12 != 0)) {
          func_0x0001405d2f10(lVar12);
        }
      }
    }
    if ((*(longlong *)(uVar18 + 0x38) != 0) && (cVar9 = func_0x000140c416c0(lVar5), cVar9 != '\0'))
    {
      pbVar1 = (byte *)(*(longlong *)(uVar18 + 0x38) + 0x19);
      *pbVar1 = *pbVar1 | 8;
    }
  }
  lVar5 = *(longlong *)(uVar18 + 0x38);
  if (lVar5 != 0) {
    *(byte *)(lVar5 + 0x1b) = *(byte *)(lVar5 + 0x1b) | 0x80;
    *(byte *)(param_1 + 0x305) = *(byte *)(param_1 + 0x305) | 0x40;
    *(byte *)(lVar5 + 0x1f) = *(byte *)(lVar5 + 0x1f) | 0x10;
  }
  return;
}

