// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400b3550  size: 3605 bytes
// Name:    FUN_1400b3550
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140c24e30, FUN_140d2f0f0, FUN_1407c8cc0, FUN_14352ee40, FUN_142027b90, FUN_144e737c0, FUN_14352e9f0, FUN_140d2ee90, FUN_140bc4e40, FUN_1404f6050, FUN_143518000, FUN_145d0a3c0, FUN_1452e3b10, FUN_14352e5d0, FUN_14103d530, FUN_1451ac320, FUN_1404f4ef0, FUN_14504fd10, FUN_142029790, FUN_1454e85f0, FUN_144dd7510, FUN_1450e1d80, FUN_1404e2670, FUN_144e76200, FUN_140629100, FUN_14352ecb0, FUN_1451ab600, FUN_14501bb00, FUN_144edd090, FUN_141b84c20, FUN_14350c4a0, FUN_1409713a0, FUN_140e9f1f0, FUN_1407c83b0, FUN_143517e70, FUN_14352efe0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_1400b3550(longlong param_1,longlong param_2,longlong param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  bool bVar7;
  bool bVar8;
  char cVar9;
  byte bVar10;
  byte bVar11;
  char cVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  undefined4 uVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  longlong lVar23;
  int *piVar24;
  longlong *plVar25;
  longlong lVar26;
  longlong lVar27;
  longlong lVar28;
  longlong lVar29;
  ulonglong uVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  bool bVar34;
  bool bVar35;
  float fVar36;
  longlong lStack_c8;
  undefined1 auStack_98 [88];
  
  lVar29 = *(longlong *)(param_1 + 8);
  lVar23 = FUN_14504fd10();
  if (lVar23 != 0) {
    if ((*(byte *)(lVar23 + 0x5d9) & 1) != 0) {
      return 1;
    }
    if ((*(byte *)(lVar23 + 0xa9) & 2) != 0) {
      cVar9 = func_0x00014501bbd0(*(undefined4 *)(param_1 + 0xfc0),*(undefined1 *)(param_1 + 0x1010)
                                 );
      if (cVar9 == '\0') {
        return 3;
      }
      cVar9 = FUN_143517e70(0);
      if (cVar9 != '\0') {
        return 3;
      }
    }
  }
  piVar24 = (int *)FUN_1452e3b10();
  iVar2 = *piVar24;
  plVar25 = (longlong *)FUN_144e76200();
  cVar9 = (**(code **)(*plVar25 + 0x80))(plVar25,1,0);
  if (cVar9 != '\0') {
    return 1;
  }
  uVar19 = *(undefined4 *)(lVar29 + 0x9c);
  lVar23 = func_0x000144da6540(uVar19);
  if (lVar23 == 0) {
    lVar23 = 0;
  }
  else {
    lVar23 = *(longlong *)(lVar23 + 0x10a8);
  }
  lVar26 = func_0x000144da6540(uVar19);
  if ((lVar26 == 0) || (lVar26 = *(longlong *)(lVar26 + 0x10b8), lVar26 == 0)) {
    lVar26 = 0;
    bVar10 = 0;
    bVar7 = true;
  }
  else {
    bVar10 = func_0x000140793d90(*(undefined4 *)(lVar26 + 0x14));
    bVar7 = false;
  }
  lVar27 = func_0x000144da6540(uVar19);
  if (lVar27 == 0) {
    lStack_c8 = 0;
  }
  else {
    lStack_c8 = *(longlong *)(lVar27 + 0x10b0);
  }
  cVar9 = FUN_141b84c20(*(undefined8 *)(param_1 + 8),*(undefined1 *)(param_1 + 0x170e));
  uVar22 = _DAT_14abbef40;
  if (cVar9 == '\0') {
    iVar3 = *(int *)(param_1 + 0x16c4);
    lVar27 = FUN_140629100(_DAT_14a9b3e18,0xa549d9fc);
    cVar9 = '\x01';
    if (lVar27 != 0) {
      lVar27 = *(longlong *)(lVar27 + 0x1f0);
      cVar9 = '\x01';
      if (lVar27 != 0) {
        puVar5 = *(undefined8 **)(lVar27 + 0xc40);
        cVar9 = '\x01';
        if (puVar5 != (undefined8 *)0x0) {
          cVar12 = (**(code **)*puVar5)(puVar5,0x47bd21ac);
          cVar9 = '\x01';
          if (cVar12 != '\0') {
            puVar5 = *(undefined8 **)(lVar27 + 0xc40);
            if ((puVar5 == (undefined8 *)0x0) ||
               (cVar9 = (**(code **)*puVar5)(puVar5,0x47bd21ac), cVar9 == '\0')) {
              cVar9 = '\0';
            }
            else {
              cVar9 = func_0x000145268570(*(undefined1 *)(*(longlong *)(lVar27 + 0xc40) + 0x10),
                                          *(undefined1 *)(*(longlong *)(lVar27 + 0xc40) + 0x11));
            }
          }
        }
      }
    }
    lVar27 = func_0x000144da6540(*(undefined4 *)(lVar29 + 0x9c));
    if ((lVar27 == 0) || (lVar27 = *(longlong *)(lVar27 + 0x10e8), lVar27 == 0)) {
      bVar14 = 0;
      lVar27 = 0;
      bVar11 = 0;
      bVar34 = true;
    }
    else {
      bVar34 = false;
      bVar14 = func_0x00014501bbb0(lVar27,0,0);
      bVar11 = FUN_1404f4ef0(lVar27,0);
    }
    iVar20 = FUN_140c24e30(param_1,lVar29,param_3);
    if ((iVar20 != -1) && (cVar12 = func_0x000140c39da0(iVar20), cVar12 == '\0')) {
      return 6;
    }
    if ((((bVar14 & bVar11) == 1) && (cVar9 != '\0')) && (*(char *)(param_1 + 0x15ba) == '\0')) {
      if (((!bVar34) && (*(char *)(lVar27 + 0x28) == '\0')) &&
         (cVar9 = FUN_140bc4e40(lVar29), cVar9 != '\0')) {
        *(undefined1 *)(param_1 + 0x170d) = 1;
        return 5;
      }
      uVar22 = *(uint *)(param_1 + 0x14f0);
      uVar30 = (ulonglong)uVar22 & 0x1ffff;
      if ((uVar30 == 0x1ffff) ||
         (plVar25 = *(longlong **)((ulonglong)(uVar22 >> 0x11 & 0x1f) * 8 + 0x14abbe7c0),
         plVar25 == (longlong *)0x0)) {
        lVar29 = 0;
LAB_1400b3ddc:
        cVar9 = FUN_14352e9f0(param_1,lVar29,lVar27);
        bVar10 = *(byte *)(param_1 + 0x16b3) & 0xf3;
        *(byte *)(param_1 + 0x16b3) = bVar10;
        if (cVar9 == '\0') {
LAB_1400b40cc:
          bVar14 = 0;
          goto LAB_1400b40ce;
        }
      }
      else {
        uVar21 = *(uint *)(plVar25[5] + uVar30 * 4);
        lVar29 = 0;
        if ((((uVar21 >> 0x11 & 0x3ff) != uVar22 >> 0x16) ||
            ((uVar21 & *(uint *)(plVar25 + 6)) != *(uint *)(plVar25 + 6))) ||
           ((*plVar25 == 0 ||
            (lVar29 = *plVar25 + (ulonglong)(uint)((int)uVar30 * (int)plVar25[1]),
            *(char *)(lVar29 + 0x30) != '\x03')))) goto LAB_1400b3ddc;
        cVar9 = FUN_14352e9f0(param_1,lVar29,lVar27);
        if (cVar9 == '\0') {
          bVar10 = *(byte *)(param_1 + 0x16b3) & 0xf3;
          *(byte *)(param_1 + 0x16b3) = bVar10;
          goto LAB_1400b40cc;
        }
        cVar9 = FUN_14352ecb0(param_1,1);
        *(byte *)(param_1 + 0x16b3) = *(byte *)(param_1 + 0x16b3) & 0xfb | cVar9 << 2;
        cVar9 = FUN_14352ee40(param_1,1);
        *(byte *)(param_1 + 0x16b3) = cVar9 << 3 | *(byte *)(param_1 + 0x16b3) & 0xf7;
      }
      cVar9 = FUN_14352efe0(param_1,param_1 + 0x16b4,1);
      bVar10 = *(byte *)(param_1 + 0x16b3);
      bVar14 = cVar9 << 4;
LAB_1400b40ce:
      *(byte *)(param_1 + 0x16b3) = bVar10 & 0xef | bVar14;
      return 0;
    }
    cVar9 = func_0x000140c39da0(iVar20);
    if (cVar9 != '\0') {
      return 6;
    }
    cVar9 = FUN_140d2ee90(param_1,param_2,param_3);
    if (cVar9 != '\0') {
      cVar9 = func_0x0001450e1330(param_3,0x5a);
      if (cVar9 != '\0') {
        return 1;
      }
      if ((*(uint *)(lVar26 + 0x14) & 0xd) == 1) {
        if (DAT_149e33e26 != '\0') {
          return 1;
        }
        lVar28 = func_0x000144dd7540(*(undefined4 *)(lVar29 + 0x9c));
        if (lVar28 == 0) {
          return 1;
        }
        cVar9 = func_0x00014501bf10(lVar28);
        if (iVar2 != 2) {
          return 1;
        }
        if (cVar9 == '\0') {
          return 1;
        }
      }
      iVar20 = FUN_1407c83b0(lVar29,param_3);
      if (iVar20 != 0x15) {
        return 2;
      }
      lVar28 = *(longlong *)(param_3 + 0x28);
      uVar21 = iVar3 + 100;
      if (((*(short *)(lVar28 + 0x118) == 0) || (**(longlong **)(lVar28 + 0x110) == 0)) ||
         ((*(uint *)(*(longlong *)(**(longlong **)(lVar28 + 0x110) + 0x10) + 0x1c) & 0xfffffffe) !=
          2)) {
        bVar35 = false;
        bVar8 = false;
        if (iVar2 != 0) goto LAB_1400b3f7d;
      }
      else {
        uVar4 = *(uint *)(*(longlong *)(lVar28 + 0x10) + 0x348);
        bVar35 = (uVar4 & 0x800000) == 0;
        if (bVar35) {
          lVar28 = func_0x00014504fd40(lVar29);
          if (lVar28 == 0) {
            bVar11 = 0;
          }
          else {
            bVar11 = FUN_144e737c0(*(undefined8 *)(lVar28 + 0x70),*(undefined8 *)(lVar28 + 0x78),9);
          }
          bVar11 = bVar11 | *(byte *)(param_1 + 0x17ab);
          lVar28 = func_0x000144da10f0(*(undefined4 *)(lVar29 + 0x9c));
          bVar14 = bVar11;
          if (lVar28 != 0) {
            uVar6 = *(undefined8 *)(lVar28 + 0x650);
            lVar28 = func_0x000144f3ea40(uVar6,0x1bd);
            bVar14 = 1;
            if ((lVar28 == 0) && (lVar28 = func_0x000144f3ea40(uVar6,0x150), lVar28 == 0)) {
              lVar28 = func_0x000144f3ea40(uVar6,0x151);
              bVar14 = lVar28 != 0 | bVar11;
            }
          }
        }
        else {
          bVar14 = 0;
        }
        if (iVar2 != 0) {
          bVar8 = bVar35;
          if ((((byte)(uVar4 >> 0x17) | bVar14) & 1) == 0) {
            bVar35 = true;
            bVar8 = true;
            if (*(char *)(lVar26 + 0xe33) != '\x01') goto LAB_1400b4280;
          }
LAB_1400b3f7d:
          bVar35 = bVar8;
          cVar9 = func_0x00014501bbd0(*(undefined4 *)(param_1 + 0xfc0),
                                      *(undefined1 *)(param_1 + 0x1010));
          if (cVar9 != '\0') {
            FUN_145d0a3c0(auStack_98,param_1 + 0xf60);
            cVar9 = FUN_1451ab600(auStack_98,param_1 + 0x1390,_DAT_14615af54);
            if (cVar9 != '\0') goto LAB_1400b4280;
          }
          if ((iVar2 != 1 & (bVar10 ^ 1)) == 0) {
            cVar9 = FUN_14352e5d0();
            if (cVar9 != '\0') {
              cVar9 = FUN_14352ecb0(param_1,0);
              if (cVar9 != '\0') {
                *(byte *)(param_1 + 0x16b3) = *(byte *)(param_1 + 0x16b3) | 4;
              }
              cVar9 = FUN_14352ee40(param_1,0);
              if (cVar9 != '\0') {
                *(byte *)(param_1 + 0x16b3) = *(byte *)(param_1 + 0x16b3) | 8;
              }
              cVar9 = FUN_14352efe0(param_1,param_1 + 0x16b4,0);
              if (cVar9 != '\0') {
                *(byte *)(param_1 + 0x16b3) = *(byte *)(param_1 + 0x16b3) | 0x10;
              }
            }
            *(byte *)(param_1 + 0x16bc) = *(byte *)(param_1 + 0x16bc) & 0xf7;
            cVar9 = FUN_1454e85f0(lVar29,0);
            if (cVar9 != '\0') {
              FUN_1407c8cc0(param_1,1);
              *(byte *)(lStack_c8 + 0x4d1) = *(byte *)(lStack_c8 + 0x4d1) & 0xfe;
            }
            bVar14 = *(byte *)(param_1 + 0x16b3);
            if (((~bVar14 | bVar10) & 1) != 0 || uVar22 < uVar21) {
              *(byte *)(param_1 + 0x16b3) = bVar14 | 1;
              *(byte *)(param_1 + 0x16bc) = *(byte *)(param_1 + 0x16bc) & 0xfe;
              lVar29 = func_0x0001450bd950(*(undefined4 *)(lVar29 + 0x9c));
              lVar23 = func_0x000144f3a1d0();
              if (lVar23 != 0) {
                cVar9 = func_0x000140299090(*(undefined8 *)(lVar23 + 0x17b8));
                bVar10 = 1;
                if (cVar9 != '\0') goto LAB_1400b418b;
              }
              if (lVar29 == 0) {
                bVar10 = 0;
              }
              else {
                bVar10 = *(byte *)(lVar29 + 0x14) >> 2 & 1;
              }
LAB_1400b418b:
              *(byte *)(lVar26 + 0xe54) = *(byte *)(lVar26 + 0xe54) & 0xfe | bVar10;
              return 2;
            }
            if (param_2 == 0) {
              uVar19 = 0;
            }
            else {
              uVar19 = *(undefined4 *)(param_2 + 0x14);
            }
            fVar36 = (float)FUN_143518000(*(undefined8 *)(param_1 + 8),
                                          *(undefined8 *)(param_3 + 0x28),uVar19);
            if (((*(byte *)(param_1 + 0x16bc) >> 1 | *(byte *)(param_1 + 0x16bc)) & 1) == 0) {
              if (*(float *)(param_1 + 0x16d8) < fVar36) {
                return 2;
              }
              if (*(char *)(param_1 + 0x15b8) != '\0') {
                return 2;
              }
              if (!bVar34) {
                lVar27 = FUN_14501bb00(lVar27,0,0);
                if (lVar27 != 0) {
                  return 2;
                }
                bVar14 = *(byte *)(param_1 + 0x16b3);
              }
            }
            if ((bVar14 & 0x1c) == 0) {
              bVar14 = *(byte *)(param_1 + 0x16bc);
            }
            else {
              bVar14 = *(byte *)(param_1 + 0x16bc);
              if ((*(longlong *)(param_1 + 0x16d0) != 0) &&
                 (_DAT_14abbef40 < *(uint *)(param_1 + 0x16c0))) {
                *(byte *)(param_1 + 0x16bc) = bVar14 | 8;
                return 2;
              }
            }
            *(byte *)(param_1 + 0x16bc) = bVar14 | 1;
          }
          goto LAB_1400b36ae;
        }
      }
LAB_1400b4280:
      bVar14 = FUN_14352ecb0(param_1,0);
      bVar11 = FUN_14352ee40(param_1,0);
      cVar9 = FUN_14352efe0(param_1,param_1 + 0x16b4,0);
      if ((((bVar35) &&
           (cVar12 = FUN_14350c4a0(*(undefined4 *)(*(longlong *)(param_1 + 8) + 0x9c),0),
           cVar12 == '\0')) || ((~*(byte *)(param_1 + 0x16b3) & 1) != 0 || uVar22 < uVar21)) ||
         (((*(byte *)(param_1 + 0x16bc) & 1) != 0 ||
          (bVar13 = func_0x00014501bbd0(*(undefined4 *)(param_1 + 0xfc0),
                                        *(undefined1 *)(param_1 + 0x1010)),
          (byte)(bVar11 | bVar14 | bVar13) == 1)))) {
        if ((*(byte *)(lVar26 + 0x14) & 1) == 0) {
          *(byte *)(param_1 + 0x16b3) =
               (bVar14 << 2 | bVar11 << 3 | cVar9 << 4 | *(byte *)(param_1 + 0x16b3) & 0xe2) + 1;
          *(byte *)(param_1 + 0x16bc) = *(byte *)(param_1 + 0x16bc) & 0xfe;
        }
        return 1;
      }
    }
  }
LAB_1400b36ae:
  bVar11 = FUN_140d2f0f0();
  bVar14 = *(byte *)(lVar23 + 0xcb2);
  if ((bVar14 & 0x40) == 0) {
    bVar13 = 0;
  }
  else {
    bVar13 = (bVar11 ^ 1) & -1 < (char)bVar14;
  }
  if ((bVar10 | bVar13) == 1) {
    bVar34 = iVar2 == 1;
    *(uint *)(param_1 + 0x16c4) = _DAT_14abbef40;
    if (bVar34 && bVar11 == 0) {
LAB_1400b37c9:
      bVar34 = true;
      FUN_1407c8cc0(param_1,1);
      *(byte *)(lStack_c8 + 0x4d1) = *(byte *)(lStack_c8 + 0x4d1) & 0xfe;
    }
  }
  else if (iVar2 == 1) {
    bVar34 = true;
    if (bVar14 < 0x40 && bVar11 == 0) goto LAB_1400b37c9;
  }
  else {
    bVar34 = false;
  }
  lVar27 = func_0x000144d9f7c0(*(undefined4 *)(lVar29 + 0x9c));
  if ((lVar27 == 0) || (*(longlong *)(lVar27 + 0x1e68) == 0)) {
    bVar10 = 0;
  }
  else {
    bVar10 = *(byte *)(*(longlong *)(lVar27 + 0x1e68) + 0x10);
  }
  bVar14 = 1;
  cVar9 = FUN_144edd090(lVar29,1,1);
  lVar27 = FUN_144dd7510(*(undefined4 *)(lVar29 + 0x9c));
  if ((lVar27 == 0) || (lVar28 = func_0x000144eb3780(*(undefined4 *)(lVar27 + 0x9c)), lVar28 == 0))
  {
    bVar13 = 0;
  }
  else {
    uVar19 = FUN_1450e1d80(lVar28 + 0x40,lVar29);
    bVar13 = FUN_1409713a0(lVar27,uVar19);
  }
  bVar32 = *(byte *)(lVar23 + 0xcb2);
  if (-1 < (char)bVar32) {
    bVar14 = FUN_1404e2670(lVar29,0);
    bVar32 = *(byte *)(lVar23 + 0xcb2);
  }
  if (cVar9 == '\0') {
    bVar15 = 0;
  }
  else {
    bVar15 = func_0x0001450e1330(param_3,0x9c);
    bVar15 = bVar15 ^ 1;
  }
  cVar9 = func_0x0001450e1330(param_3,0x17);
  if (cVar9 != '\0') {
    bVar16 = func_0x0001450e1330(param_3,0x3a);
    bVar15 = bVar15 & (bVar16 ^ 1);
  }
  cVar9 = func_0x0001450e1330(param_3,8);
  bVar16 = 1;
  if (cVar9 == '\0') {
    bVar16 = FUN_142027b90(lVar29,param_3,1);
  }
  bVar17 = FUN_1451ac320(*(undefined4 *)(lVar29 + 0x9c));
  bVar18 = FUN_1404f6050(*(undefined4 *)(lVar29 + 0x9c));
  uVar19 = *(undefined4 *)(lVar29 + 0x9c);
  bVar1 = *(byte *)(param_1 + 0x17ab);
  bVar14 = bVar14 | bVar17 | bVar18;
  lVar27 = func_0x000144ef6280(uVar19);
  if (lVar27 == 0) {
    bVar33 = 0;
  }
  else {
    bVar33 = 1;
    if ((*(byte *)(lVar27 + 0x8e) & 0x10) == 0) {
      bVar33 = (*(byte *)(lVar27 + 0x11a) & 0x10) >> 4;
    }
  }
  lVar27 = func_0x000144fa1860(uVar19);
  if (lVar27 == 0) {
    bVar31 = 0;
  }
  else {
    bVar31 = (*(byte *)(lVar27 + 0xe6f) & 0x20) >> 5;
  }
  lVar27 = func_0x0001450da490(uVar19);
  if ((lVar27 == 0) || ((*(uint *)(lVar27 + 0x14) & 8) == 0)) {
    bVar35 = false;
  }
  else {
    bVar35 = (*(uint *)(lVar27 + 0x14) & 0x10) == 0;
  }
  if ((byte)(bVar17 | bVar18 | bVar16 | bVar1 & bVar14) == 1) {
    bVar11 = bVar11 | (bVar32 & 4) >> 2;
    bVar32 = bVar11 | bVar14;
    if (((bVar13 | bVar15 | bVar10 | bVar33 | bVar31 | bVar35 | bVar32) & 1) != 0) {
      if (bVar34) {
        fVar36 = (float)FUN_142029790(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x18),
                                      param_3);
        if ((bVar7) ||
           ((*(float *)(lVar26 + 0xe20) <= fVar36 || (((bVar14 | bVar11 | bVar10) & 1) == 0))))
        goto LAB_1400b3b79;
        *(byte *)(param_1 + 0x16b3) = *(byte *)(param_1 + 0x16b3) | 1;
      }
      else if ((iVar2 != 0) || ((*(byte *)(lVar23 + 0xcb2) & 0x10) != 0)) goto LAB_1400b3b79;
      *(byte *)(param_1 + 0x16bc) = *(byte *)(param_1 + 0x16bc) | 1;
LAB_1400b3b79:
      if (bVar32 == 0) {
        *(byte *)(lStack_c8 + 0x4d1) = *(byte *)(lStack_c8 + 0x4d1) & 0xfe;
        *(byte *)(lStack_c8 + 0x15fa) = *(byte *)(lStack_c8 + 0x15fa) & 0xfe;
      }
      else {
        *(byte *)(lStack_c8 + 0x4d1) = *(byte *)(lStack_c8 + 0x4d1) | 1;
        *(byte *)(lStack_c8 + 0x15fa) = *(byte *)(lStack_c8 + 0x15fa) | 1;
      }
      return 3;
    }
  }
  *(byte *)(param_1 + 0x16b3) = *(byte *)(param_1 + 0x16b3) & 0xfe;
  *(byte *)(lVar26 + 0xe54) = *(byte *)(lVar26 + 0xe54) & 0xfe;
  *(byte *)(lStack_c8 + 0x4d1) = *(byte *)(lStack_c8 + 0x4d1) & 0xfe;
  *(undefined4 *)(param_1 + 0x16c4) = 0;
  *(byte *)(lStack_c8 + 0x15fa) = *(byte *)(lStack_c8 + 0x15fa) & 0xfe;
  cVar9 = DAT_149e33ecc;
  bVar10 = func_0x00014527f5c0(lVar29,0,0,1);
  if (((DAT_149e33ecd & bVar10) != 0) || (cVar9 != '\0')) {
    uVar19 = *(undefined4 *)(lVar29 + 0x9c);
    lVar23 = func_0x000144fa1860(uVar19);
    if (lVar23 == 0) {
      if (bVar10 == 0) goto LAB_1400b3f41;
    }
    else if (bVar10 == 0 && (*(byte *)(lVar23 + 0xe64) & 8) == 0) goto LAB_1400b3f41;
    cVar9 = func_0x000140394fa0(lVar29);
    if ((cVar9 != '\0') &&
       ((lVar29 = *(longlong *)(*(longlong *)(param_3 + 0x28) + 0x10),
        (*(byte *)(lVar29 + 0x348) & 0x10) != 0 || ((*(byte *)(lVar29 + 0x34c) & 0x20) != 0)))) {
      fVar36 = (float)FUN_140e9f1f0();
      lVar29 = func_0x000144da6540(uVar19);
      uVar22 = _DAT_14abbef40;
      if (lVar29 == 0) {
        lVar29 = 0;
      }
      else {
        lVar29 = *(longlong *)(lVar29 + 0x10d0);
      }
      uVar21 = func_0x000144dc06d0(*(undefined4 *)(lVar29 + 0x2c),_DAT_14abbef40);
      if (uVar21 < (uint)(longlong)(fVar36 * (float)_DAT_149e33ed0)) {
        return 4;
      }
      uVar22 = func_0x000144dc06d0(*(undefined4 *)(lVar29 + 0x20),uVar22);
      if (uVar22 < (uint)(longlong)(fVar36 * (float)_DAT_149e33ed4)) {
        return 4;
      }
    }
  }
LAB_1400b3f41:
  bVar10 = FUN_14103d530(lStack_c8);
  return bVar10 + 5 + (uint)bVar10;
}

