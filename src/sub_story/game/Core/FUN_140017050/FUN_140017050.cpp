// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140017050  size: 1348 bytes
// Name:    FUN_140017050
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1443b11a0, FUN_144ddb0e0, FUN_144dad210, FUN_144de2db0, FUN_144fb9a80
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_140017050(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  char *pcVar1;
  undefined8 *puVar2;
  short *psVar3;
  byte bVar4;
  ushort uVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  byte bVar19;
  byte bVar20;
  char cVar21;
  ushort uVar22;
  undefined4 uVar23;
  longlong lVar24;
  longlong lVar25;
  ushort uVar26;
  longlong lVar27;
  longlong unaff_RBX;
  ulonglong uVar28;
  ulonglong uVar30;
  longlong unaff_GS_OFFSET;
  bool bVar31;
  undefined1 auVar32 [16];
  undefined1 auStack_58 [12];
  uint uStack_4c;
  undefined1 auStack_48 [4];
  int iStack_44;
  undefined7 uVar29;
  
  if (*(short *)(param_1 + 0x21c) != -1) {
    uVar5 = *(ushort *)(param_1 + 0x22e);
    uVar22 = uVar5;
    if (uVar5 == 0xffff) {
      uVar22 = FUN_1443b11a0();
      *(ushort *)(param_1 + 0x22e) = uVar22;
      if (uVar22 != 0xffff) {
        unaff_RBX = _DAT_149ce1160 + 0x5b4 + (ulonglong)uVar22 * 0x5c0;
        FUN_144fb9a80(unaff_RBX);
        uVar23 = FUN_144dad210(param_1);
        *(undefined4 *)(unaff_RBX + -0xb4) = uVar23;
        *(byte *)(unaff_RBX + 4) = *(byte *)(param_1 + 0x239) & 0x7f;
        bVar4 = *(byte *)(unaff_RBX + 5);
        bVar19 = *(byte *)(param_1 + 0x23c) >> 1 & 1;
        *(byte *)(unaff_RBX + 5) = bVar4 & 0xfe | bVar19;
        bVar20 = *(byte *)(param_1 + 0x23b) >> 3 & 2;
        *(byte *)(unaff_RBX + 5) = bVar4 & 0xfc | bVar19 | bVar20;
        *(byte *)(unaff_RBX + 5) =
             bVar4 & 0xec | bVar19 | bVar20 | *(char *)(param_1 + 0x23c) * '\x02' & 0x10U;
        *(undefined1 *)(unaff_RBX + 7) = *(undefined1 *)(param_1 + 0x7e);
        *(undefined1 *)(unaff_RBX + 6) = *(undefined1 *)(param_1 + 0x21e);
        *(undefined2 *)(unaff_RBX + -4) = *(undefined2 *)(param_1 + 0x22c);
        if ((*(byte *)(param_1 + 0x23b) & 0x20) != 0) {
          if ((*(byte *)(param_1 + 0x23e) & 4) != 0) {
            func_0x000144fffa40(*(undefined2 *)(param_1 + 0x21c),0xd140ca8e,1);
          }
          func_0x000144f55100(*(undefined2 *)(param_1 + 0x21c),0xf29bbce7,
                              *(undefined8 *)(param_1 + 0x30));
        }
        uVar22 = *(ushort *)(param_1 + 0x22e);
        if (uVar22 != 0xffff) goto LAB_140017085;
      }
    }
    else {
LAB_140017085:
      if ((((*(byte *)(param_1 + 0x23c) & 0x10) == 0) || (uVar5 == 0xffff)) ||
         ((*(byte *)(param_1 + 0x23b) & 4) == 0)) {
        if (_DAT_149ce1160 != 0) {
          bVar31 = false;
          goto LAB_1400170d4;
        }
        lVar25 = 0;
LAB_140017236:
        if (uVar5 != 0xffff) {
          cVar21 = func_0x000144dcc4b0(*(undefined2 *)(param_1 + 0x21c),auStack_48);
          if ((cVar21 == '\0') || (iStack_44 == -1)) goto LAB_14001755b;
          uVar22 = *(ushort *)(param_1 + 0x22e);
          lVar25 = _DAT_149ce1160;
        }
LAB_14001726e:
        uVar29 = (undefined7)((ulonglong)unaff_RBX >> 8);
        uVar28 = CONCAT71(uVar29,(*(byte *)(param_1 + 0xfe) & 3) == 2);
        lVar24 = 0;
        if (uVar22 != 0xffff) {
          lVar24 = (ulonglong)uVar22 * 0x5c0 + lVar25;
        }
        *(undefined2 *)(lVar24 + 0x5b0) = *(undefined2 *)(param_1 + 0x22c);
        lVar25 = _DAT_14ab73aa0;
        bVar4 = *(byte *)(param_1 + 0x7e);
        if ((ulonglong)*(ushort *)(param_1 + 0x230) != 0xffff) {
          *(undefined2 *)
           ((ulonglong)bVar4 * 0x8ad0 + _DAT_14ab73aa0 + 0x5400 +
           (ulonglong)*(ushort *)(param_1 + 0x230) * 2) = 0xffff;
        }
        lVar24 = (ulonglong)bVar4 * 0x8ad0;
        uVar22 = *(ushort *)(lVar25 + 0x8ab2 + lVar24);
        uVar30 = (ulonglong)uVar22;
        uVar26 = 0xffff;
        if (uVar30 < 0x100) {
          psVar3 = (short *)(lVar25 + 0x8ab2 + lVar24);
          lVar25 = lVar25 + lVar24;
          lVar24 = *(longlong *)(psVar3 + 3);
          uVar7 = (ulonglong)_DAT_14ab73a88;
          *psVar3 = uVar22 + 1;
          lVar27 = uVar30 * 0x54;
          uVar8 = *param_3;
          uVar9 = param_3[1];
          uVar10 = param_3[2];
          uVar11 = param_3[3];
          uVar12 = param_3[4];
          uVar13 = param_3[5];
          uVar14 = param_3[6];
          uVar15 = param_3[7];
          uVar16 = *(undefined8 *)((longlong)param_3 + 0x3c);
          uVar17 = *(undefined8 *)((longlong)param_3 + 0x44);
          uVar18 = *(undefined8 *)((longlong)param_3 + 0x4c);
          puVar2 = (undefined8 *)(lVar27 + 0x34 + lVar25);
          *puVar2 = *(undefined8 *)((longlong)param_3 + 0x34);
          puVar2[1] = uVar16;
          puVar2[2] = uVar17;
          puVar2[3] = uVar18;
          puVar2 = (undefined8 *)(lVar27 + 0x20 + lVar25);
          *puVar2 = uVar12;
          puVar2[1] = uVar13;
          puVar2[2] = uVar14;
          puVar2[3] = uVar15;
          puVar2 = (undefined8 *)(lVar27 + lVar25);
          *puVar2 = uVar8;
          puVar2[1] = uVar9;
          puVar2[2] = uVar10;
          puVar2[3] = uVar11;
          *(short *)(lVar25 + 0x5400 + uVar30 * 2) = (short)((ulonglong)(param_1 - lVar24) / uVar7);
          uVar26 = uVar22;
        }
        *(ushort *)(param_1 + 0x230) = uVar26;
        lVar25 = _DAT_149ce0ff0;
        if (*(short *)(param_1 + 0x21c) != -1) {
          pcVar1 = (char *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1180);
          uVar30 = (ulonglong)(uint)(int)*pcVar1;
          if ((*(short *)(param_1 + 0x220) != *(short *)(_DAT_149ce0ff0 + uVar30 * 2)) &&
             (FUN_144ddb0e0(param_1 + 0x220), (*(byte *)(param_1 + 0x23b) & 0x20) != 0)) {
            func_0x000144fffa40(*(undefined2 *)(param_1 + 0x21c),0x24527498,
                                *(undefined2 *)(lVar25 + uVar30 * 2));
            uVar30 = (ulonglong)(uint)(int)*pcVar1;
          }
          lVar25 = _DAT_149ce1000;
          if (*(short *)(param_1 + 0x222) != *(short *)(_DAT_149ce1000 + uVar30 * 2)) {
            FUN_144ddb0e0(param_1 + 0x222);
            func_0x000144fffa40(*(undefined2 *)(param_1 + 0x21c),0x9869fec0,
                                *(undefined2 *)(lVar25 + uVar30 * 2));
          }
          lVar25 = *(longlong *)
                    (_DAT_14ab73aa0 + 0x8ac0 + (ulonglong)*(byte *)(param_1 + 0x7e) * 0x8ad0);
          if (((lVar25 != 0) &&
              (uVar6 = *(uint *)(lVar25 + 0x620 +
                                (ulonglong)((uint)*(ushort *)(param_1 + 0xd6) * _DAT_14ab73a8c)),
              uVar6 != 0)) &&
             (cVar21 = func_0x000144dcc4b0(*(undefined2 *)(param_1 + 0x21c),auStack_58),
             cVar21 != '\0')) {
            auVar32 = ZEXT416((uint)((float)uVar6 * _DAT_146159ec4 *
                                    (float)(uStack_4c & 0xffff) * (float)(uStack_4c >> 0x10 & 3)));
            auVar32 = vroundss_avx(auVar32,auVar32,9);
            func_0x000144fffa40(*(undefined2 *)(param_1 + 0x21c),0x4850211b,(longlong)auVar32._0_4_)
            ;
          }
          lVar25 = _DAT_149ce1010;
          cVar21 = *pcVar1;
          if (*(short *)(param_1 + 0x224) !=
              *(short *)(_DAT_149ce1010 + (ulonglong)(uint)(int)cVar21 * 2)) {
            FUN_144ddb0e0(param_1 + 0x224);
            func_0x000144fffa40(*(undefined2 *)(param_1 + 0x21c),0xddb71e5e,
                                *(undefined2 *)(lVar25 + (ulonglong)(uint)(int)cVar21 * 2));
          }
          if (*(byte *)(param_1 + 0x23c) >> 7 != *(byte *)((longlong)param_3 + 0x4f)) {
            uVar23 = 0;
            if (*(byte *)((longlong)param_3 + 0x4f) != 0) {
              uVar23 = func_0x00014513d130(param_1);
            }
            func_0x000144fffa40(*(undefined2 *)(param_1 + 0x21c),0xccd73f9,uVar23);
            *(byte *)(param_1 + 0x23c) =
                 *(byte *)(param_1 + 0x23c) & 0x7f | *(char *)((longlong)param_3 + 0x4f) << 7;
          }
        }
        if ((uVar5 == 0xffff) &&
           (uVar28 = CONCAT71(uVar29,1), (*(byte *)(param_1 + 0x23b) & 0x20) != 0)) {
          func_0x000144ea9580(*(undefined2 *)(param_1 + 0x21c));
          *(byte *)(param_1 + 0x23b) = *(byte *)(param_1 + 0x23b) | 0x40;
        }
        goto LAB_140017580;
      }
      bVar31 = *(char *)(_DAT_149ce1160 + 0x5bc + (ulonglong)uVar22 * 0x5c0) == '\0';
LAB_1400170d4:
      uVar26 = *(ushort *)(_DAT_149ce1160 + 0x5b6 + (ulonglong)uVar22 * 0x5c0);
      lVar25 = _DAT_149ce1160;
      if (((uVar26 < 0xff) && (*(longlong *)(_DAT_14a924088 + 0x28) != 0)) &&
         ((uVar6 = *(uint *)(*(longlong *)(_DAT_14a924088 + 0x28) + 0x5b0 +
                            (ulonglong)((uint)uVar26 * 0x600)), 4 < uVar6 ||
          ((0x19U >> (uVar6 & 0x1f) & 1) == 0)))) {
        if (!bVar31) goto LAB_14001726e;
      }
      else if (!bVar31) goto LAB_140017236;
LAB_14001755b:
      if (*(longlong *)(param_1 + 0x118) != 0) {
        func_0x000144e72060(*(longlong *)(param_1 + 0x118),0,4);
      }
      FUN_144de2db0(param_1);
    }
  }
  uVar28 = 0;
LAB_140017580:
  return uVar28 & 0xffffffff;
}

