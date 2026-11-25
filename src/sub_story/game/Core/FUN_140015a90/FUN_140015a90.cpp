// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140015a90  size: 2327 bytes
// Name:    FUN_140015a90
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1400163b0, FUN_1456a29e0, FUN_142220080, FUN_1422200b0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


ulonglong FUN_140015a90(longlong *param_1,int param_2)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  int *piVar5;
  longlong lVar6;
  longlong lVar7;
  bool bVar8;
  char cVar9;
  uint uVar10;
  int iVar11;
  undefined4 uVar12;
  uint uVar13;
  longlong lVar14;
  uint uVar15;
  ulonglong uVar16;
  
  if (param_1 == (longlong *)0x0) {
    return 0xfffffffe;
  }
  puVar4 = (undefined8 *)param_1[5];
  if (puVar4 == (undefined8 *)0x0) {
    return 0xfffffffe;
  }
  if ((param_1[2] == 0) ||
     (((*param_1 == 0 && ((int)param_1[1] != 0)) ||
      (iVar11 = *(int *)(puVar4 + 1), param_2 != 4 && iVar11 == 0x29a)))) {
    param_1[4] = (longlong)&UNK_14677d2a0;
    return 0xfffffffe;
  }
  if ((int)param_1[3] == 0) goto LAB_140016059;
  *puVar4 = param_1;
  iVar2 = *(int *)(puVar4 + 8);
  *(int *)(puVar4 + 8) = param_2;
  if (iVar11 == 0x2a) {
    if (*(int *)((longlong)puVar4 + 0x2c) != 2) {
      uVar13 = 0;
      uVar10 = *(int *)(puVar4 + 9) * 0x1000 - 0x7800;
      if ((*(int *)(puVar4 + 0x16) < 2) &&
         (uVar15 = *(uint *)((longlong)puVar4 + 0xac), 1 < (int)uVar15)) {
        uVar13 = 0x40;
        if (5 < uVar15) {
          uVar13 = (uVar15 != 6 | 2) << 6;
        }
      }
      *(undefined4 *)(puVar4 + 1) = 0x71;
      uVar15 = uVar13 + 0x20 + uVar10;
      if (*(int *)((longlong)puVar4 + 0x94) == 0) {
        uVar15 = uVar13 | uVar10;
      }
      FUN_142220080(puVar4,(uVar15 % 0x1f | uVar15) ^ 0x1f);
      if (*(int *)((longlong)puVar4 + 0x94) != 0) {
        FUN_142220080(puVar4,*(undefined2 *)((longlong)param_1 + 0x4e));
        FUN_142220080(puVar4,*(undefined2 *)((longlong)param_1 + 0x4c));
      }
      uVar12 = func_0x0001454d0400(0,0,0);
      *(undefined4 *)((longlong)param_1 + 0x4c) = uVar12;
      iVar11 = *(int *)(puVar4 + 1);
      goto LAB_140015b09;
    }
    uVar12 = func_0x0001407e0400(0,0,0);
    *(undefined4 *)((longlong)param_1 + 0x4c) = uVar12;
    uVar10 = *(uint *)(puVar4 + 5);
    *(uint *)(puVar4 + 5) = uVar10 + 1;
    *(undefined1 *)(puVar4[2] + (ulonglong)uVar10) = 0x1f;
    uVar10 = *(uint *)(puVar4 + 5);
    *(uint *)(puVar4 + 5) = uVar10 + 1;
    *(undefined1 *)(puVar4[2] + (ulonglong)uVar10) = 0x8b;
    uVar10 = *(uint *)(puVar4 + 5);
    *(uint *)(puVar4 + 5) = uVar10 + 1;
    *(undefined1 *)(puVar4[2] + (ulonglong)uVar10) = 8;
    piVar5 = (int *)puVar4[6];
    if (piVar5 != (int *)0x0) {
      iVar11 = *piVar5;
      iVar3 = piVar5[0xf];
      lVar14 = *(longlong *)(piVar5 + 4);
      lVar6 = *(longlong *)(piVar5 + 8);
      lVar7 = *(longlong *)(piVar5 + 0xc);
      uVar10 = *(uint *)(puVar4 + 5);
      *(uint *)(puVar4 + 5) = uVar10 + 1;
      *(char *)(puVar4[2] + (ulonglong)uVar10) =
           (lVar7 != 0) << 4 |
           (lVar6 != 0) << 3 | (lVar14 != 0) << 2 | (iVar3 != 0) * '\x02' | iVar11 != 0;
      uVar10 = *(uint *)(puVar4 + 5);
      uVar1 = *(undefined1 *)(puVar4[6] + 4);
      *(uint *)(puVar4 + 5) = uVar10 + 1;
      *(undefined1 *)(puVar4[2] + (ulonglong)uVar10) = uVar1;
      uVar10 = *(uint *)(puVar4 + 5);
      uVar1 = *(undefined1 *)(puVar4[6] + 5);
      *(uint *)(puVar4 + 5) = uVar10 + 1;
      *(undefined1 *)(puVar4[2] + (ulonglong)uVar10) = uVar1;
      uVar10 = *(uint *)(puVar4 + 5);
      uVar1 = *(undefined1 *)(puVar4[6] + 6);
      *(uint *)(puVar4 + 5) = uVar10 + 1;
      *(undefined1 *)(puVar4[2] + (ulonglong)uVar10) = uVar1;
      uVar10 = *(uint *)(puVar4 + 5);
      uVar1 = *(undefined1 *)(puVar4[6] + 7);
      *(uint *)(puVar4 + 5) = uVar10 + 1;
      *(undefined1 *)(puVar4[2] + (ulonglong)uVar10) = uVar1;
      cVar9 = '\x02';
      if (*(int *)((longlong)puVar4 + 0xac) != 9) {
        cVar9 = (*(int *)((longlong)puVar4 + 0xac) < 2 || 1 < *(int *)(puVar4 + 0x16)) << 2;
      }
      uVar10 = *(uint *)(puVar4 + 5);
      *(uint *)(puVar4 + 5) = uVar10 + 1;
      *(char *)(puVar4[2] + (ulonglong)uVar10) = cVar9;
      uVar10 = *(uint *)(puVar4 + 5);
      uVar1 = *(undefined1 *)(puVar4[6] + 0xc);
      *(uint *)(puVar4 + 5) = uVar10 + 1;
      *(undefined1 *)(puVar4[2] + (ulonglong)uVar10) = uVar1;
      lVar14 = puVar4[6];
      if (*(longlong *)(lVar14 + 0x10) != 0) {
        uVar10 = *(uint *)(puVar4 + 5);
        uVar1 = *(undefined1 *)(lVar14 + 0x18);
        *(uint *)(puVar4 + 5) = uVar10 + 1;
        *(undefined1 *)(puVar4[2] + (ulonglong)uVar10) = uVar1;
        uVar10 = *(uint *)(puVar4 + 5);
        uVar1 = *(undefined1 *)(puVar4[6] + 0x19);
        *(uint *)(puVar4 + 5) = uVar10 + 1;
        *(undefined1 *)(puVar4[2] + (ulonglong)uVar10) = uVar1;
        lVar14 = puVar4[6];
      }
      if (*(int *)(lVar14 + 0x3c) != 0) {
        uVar12 = func_0x0001407e0400(*(undefined4 *)((longlong)param_1 + 0x4c),puVar4[2],
                                     *(undefined4 *)(puVar4 + 5));
        *(undefined4 *)((longlong)param_1 + 0x4c) = uVar12;
      }
      *(undefined4 *)(puVar4 + 7) = 0;
      *(undefined4 *)(puVar4 + 1) = 0x45;
      goto LAB_140015dad;
    }
    uVar10 = *(uint *)(puVar4 + 5);
    *(uint *)(puVar4 + 5) = uVar10 + 1;
    *(undefined1 *)(puVar4[2] + (ulonglong)uVar10) = 0;
    uVar10 = *(uint *)(puVar4 + 5);
    *(uint *)(puVar4 + 5) = uVar10 + 1;
    *(undefined1 *)(puVar4[2] + (ulonglong)uVar10) = 0;
    uVar10 = *(uint *)(puVar4 + 5);
    *(uint *)(puVar4 + 5) = uVar10 + 1;
    *(undefined1 *)(puVar4[2] + (ulonglong)uVar10) = 0;
    uVar10 = *(uint *)(puVar4 + 5);
    *(uint *)(puVar4 + 5) = uVar10 + 1;
    *(undefined1 *)(puVar4[2] + (ulonglong)uVar10) = 0;
    uVar10 = *(uint *)(puVar4 + 5);
    *(uint *)(puVar4 + 5) = uVar10 + 1;
    *(undefined1 *)(puVar4[2] + (ulonglong)uVar10) = 0;
    cVar9 = '\x02';
    if (*(int *)((longlong)puVar4 + 0xac) != 9) {
      cVar9 = (*(int *)((longlong)puVar4 + 0xac) < 2 || 1 < *(int *)(puVar4 + 0x16)) << 2;
    }
    uVar10 = *(uint *)(puVar4 + 5);
    *(uint *)(puVar4 + 5) = uVar10 + 1;
    *(char *)(puVar4[2] + (ulonglong)uVar10) = cVar9;
    uVar10 = *(uint *)(puVar4 + 5);
    *(uint *)(puVar4 + 5) = uVar10 + 1;
    *(undefined1 *)(puVar4[2] + (ulonglong)uVar10) = 0xb;
LAB_140016024:
    *(undefined4 *)(puVar4 + 1) = 0x71;
  }
  else {
LAB_140015b09:
    if (iVar11 == 0x45) {
      lVar14 = puVar4[6];
LAB_140015dad:
      if (*(longlong *)(lVar14 + 0x10) != 0) {
        uVar10 = *(uint *)(puVar4 + 5);
        uVar13 = *(uint *)(puVar4 + 7);
        while (uVar13 < *(ushort *)(lVar14 + 0x18)) {
          uVar15 = *(uint *)(puVar4 + 5);
          if (uVar15 == *(uint *)(puVar4 + 3)) {
            if ((*(int *)(lVar14 + 0x3c) != 0) && (uVar10 < uVar15)) {
              uVar12 = func_0x0001407e0400(*(undefined4 *)((longlong)param_1 + 0x4c),
                                           (ulonglong)uVar10 + puVar4[2]);
              *(undefined4 *)((longlong)param_1 + 0x4c) = uVar12;
            }
            FUN_1400163b0(param_1);
            uVar10 = *(uint *)(puVar4 + 5);
            lVar14 = puVar4[6];
            if (uVar10 == *(uint *)(puVar4 + 3)) break;
            uVar13 = *(uint *)(puVar4 + 7);
            uVar15 = uVar10;
          }
          uVar1 = *(undefined1 *)(*(longlong *)(lVar14 + 0x10) + (ulonglong)uVar13);
          *(uint *)(puVar4 + 5) = uVar15 + 1;
          *(undefined1 *)(puVar4[2] + (ulonglong)uVar15) = uVar1;
          uVar13 = *(int *)(puVar4 + 7) + 1;
          *(uint *)(puVar4 + 7) = uVar13;
          lVar14 = puVar4[6];
        }
        if ((*(int *)(lVar14 + 0x3c) != 0) && (uVar10 < *(uint *)(puVar4 + 5))) {
          uVar12 = func_0x0001407e0400(*(undefined4 *)((longlong)param_1 + 0x4c),
                                       (ulonglong)uVar10 + puVar4[2]);
          *(undefined4 *)((longlong)param_1 + 0x4c) = uVar12;
        }
        if (*(int *)(puVar4 + 7) != *(int *)(lVar14 + 0x18)) {
          iVar11 = *(int *)(puVar4 + 1);
          goto LAB_140015b12;
        }
        *(undefined4 *)(puVar4 + 7) = 0;
      }
      *(undefined4 *)(puVar4 + 1) = 0x49;
LAB_140015e40:
      if (*(longlong *)(lVar14 + 0x20) != 0) {
        uVar10 = *(uint *)(puVar4 + 5);
        do {
          uVar13 = *(uint *)(puVar4 + 5);
          lVar14 = puVar4[6];
          if (uVar13 == *(uint *)(puVar4 + 3)) {
            if ((*(int *)(lVar14 + 0x3c) != 0) && (uVar10 < uVar13)) {
              uVar12 = func_0x0001407e0400(*(undefined4 *)((longlong)param_1 + 0x4c),
                                           (ulonglong)uVar10 + puVar4[2]);
              *(undefined4 *)((longlong)param_1 + 0x4c) = uVar12;
            }
            FUN_1400163b0(param_1);
            uVar10 = *(uint *)(puVar4 + 5);
            if (uVar10 == *(uint *)(puVar4 + 3)) {
              bVar8 = false;
              goto LAB_140015ec4;
            }
            lVar14 = puVar4[6];
            uVar13 = uVar10;
          }
          uVar15 = *(uint *)(puVar4 + 7);
          lVar14 = *(longlong *)(lVar14 + 0x20);
          *(uint *)(puVar4 + 7) = uVar15 + 1;
          cVar9 = *(char *)(lVar14 + (ulonglong)uVar15);
          *(uint *)(puVar4 + 5) = uVar13 + 1;
          *(char *)(puVar4[2] + (ulonglong)uVar13) = cVar9;
        } while (cVar9 != '\0');
        bVar8 = true;
LAB_140015ec4:
        lVar14 = puVar4[6];
        if ((*(int *)(lVar14 + 0x3c) != 0) &&
           (iVar11 = *(uint *)(puVar4 + 5) - uVar10, uVar10 <= *(uint *)(puVar4 + 5) && iVar11 != 0)
           ) {
          uVar12 = func_0x0001407e0400(*(undefined4 *)((longlong)param_1 + 0x4c),
                                       (ulonglong)uVar10 + puVar4[2],iVar11);
          *(undefined4 *)((longlong)param_1 + 0x4c) = uVar12;
        }
        if (!bVar8) {
          iVar11 = *(int *)(puVar4 + 1);
          goto LAB_140015b1b;
        }
        *(undefined4 *)(puVar4 + 7) = 0;
      }
      *(undefined4 *)(puVar4 + 1) = 0x5b;
LAB_140015f03:
      if (*(longlong *)(lVar14 + 0x30) != 0) {
        uVar10 = *(uint *)(puVar4 + 5);
        do {
          uVar13 = *(uint *)(puVar4 + 5);
          lVar14 = puVar4[6];
          if (uVar13 == *(uint *)(puVar4 + 3)) {
            if ((*(int *)(lVar14 + 0x3c) != 0) && (uVar10 < uVar13)) {
              uVar12 = func_0x0001407e0400(*(undefined4 *)((longlong)param_1 + 0x4c),
                                           (ulonglong)uVar10 + puVar4[2]);
              *(undefined4 *)((longlong)param_1 + 0x4c) = uVar12;
            }
            FUN_1400163b0(param_1);
            uVar10 = *(uint *)(puVar4 + 5);
            if (uVar10 == *(uint *)(puVar4 + 3)) {
              bVar8 = false;
              goto LAB_140015f87;
            }
            lVar14 = puVar4[6];
            uVar13 = uVar10;
          }
          uVar15 = *(uint *)(puVar4 + 7);
          lVar14 = *(longlong *)(lVar14 + 0x30);
          *(uint *)(puVar4 + 7) = uVar15 + 1;
          cVar9 = *(char *)(lVar14 + (ulonglong)uVar15);
          *(uint *)(puVar4 + 5) = uVar13 + 1;
          *(char *)(puVar4[2] + (ulonglong)uVar13) = cVar9;
        } while (cVar9 != '\0');
        bVar8 = true;
LAB_140015f87:
        lVar14 = puVar4[6];
        if ((*(int *)(lVar14 + 0x3c) != 0) &&
           (iVar11 = *(uint *)(puVar4 + 5) - uVar10, uVar10 <= *(uint *)(puVar4 + 5) && iVar11 != 0)
           ) {
          uVar12 = func_0x0001407e0400(*(undefined4 *)((longlong)param_1 + 0x4c),
                                       (ulonglong)uVar10 + puVar4[2],iVar11);
          *(undefined4 *)((longlong)param_1 + 0x4c) = uVar12;
        }
        if (!bVar8) {
          iVar11 = *(int *)(puVar4 + 1);
          goto LAB_140015b24;
        }
      }
      *(undefined4 *)(puVar4 + 1) = 0x67;
LAB_140015fbf:
      if (*(int *)(lVar14 + 0x3c) != 0) {
        uVar13 = *(uint *)(puVar4 + 5);
        uVar15 = *(uint *)(puVar4 + 3);
        uVar10 = uVar13 + 2;
        if (uVar15 < uVar10) {
          FUN_1400163b0(param_1);
          uVar13 = *(uint *)(puVar4 + 5);
          uVar15 = *(uint *)(puVar4 + 3);
          uVar10 = uVar13 + 2;
        }
        if (uVar15 < uVar10) goto LAB_140015b2d;
        uVar1 = *(undefined1 *)((longlong)param_1 + 0x4c);
        *(uint *)(puVar4 + 5) = uVar13 + 1;
        *(undefined1 *)(puVar4[2] + (ulonglong)uVar13) = uVar1;
        uVar10 = *(uint *)(puVar4 + 5);
        uVar1 = *(undefined1 *)((longlong)param_1 + 0x4d);
        *(uint *)(puVar4 + 5) = uVar10 + 1;
        *(undefined1 *)(puVar4[2] + (ulonglong)uVar10) = uVar1;
        uVar12 = func_0x0001407e0400(0,0,0);
        *(undefined4 *)((longlong)param_1 + 0x4c) = uVar12;
      }
      goto LAB_140016024;
    }
LAB_140015b12:
    if (iVar11 == 0x49) {
      lVar14 = puVar4[6];
      goto LAB_140015e40;
    }
LAB_140015b1b:
    if (iVar11 == 0x5b) {
      lVar14 = puVar4[6];
      goto LAB_140015f03;
    }
LAB_140015b24:
    if (iVar11 == 0x67) {
      lVar14 = puVar4[6];
      goto LAB_140015fbf;
    }
  }
LAB_140015b2d:
  if (*(int *)(puVar4 + 5) == 0) {
    iVar11 = (int)param_1[1];
    if (((iVar11 == 0) && (param_2 != 4)) && (param_2 <= iVar2)) goto LAB_140016059;
LAB_140015b4b:
    if (*(int *)(puVar4 + 1) == 0x29a) {
      if (iVar11 != 0) {
LAB_140016059:
        param_1[4] = (longlong)&UNK_14677d293;
        return 0xfffffffb;
      }
LAB_14001606e:
      if (*(int *)((longlong)puVar4 + 0x9c) != 0) goto LAB_140015b62;
      if (param_2 == 0) {
        return 0;
      }
      if (*(int *)(puVar4 + 1) != 0x29a) goto LAB_140015b62;
    }
    else {
      if (iVar11 == 0) goto LAB_14001606e;
LAB_140015b62:
      uVar10 = (**(code **)(&UNK_14618ada8 + (longlong)*(int *)((longlong)puVar4 + 0xac) * 0x10))
                         (puVar4,param_2);
      if ((uVar10 & 0xfffffffe) == 2) {
        *(undefined4 *)(puVar4 + 1) = 0x29a;
      }
      if ((uVar10 & 0xfffffffd) == 0) {
        if ((int)param_1[3] == 0) {
          *(undefined4 *)(puVar4 + 8) = 0xffffffff;
          return 0;
        }
        return 0;
      }
      if (uVar10 == 1) {
        if (param_2 == 1) {
          FUN_1422200b0();
        }
        else {
          FUN_1456a29e0(puVar4,0,0,0);
          if (param_2 == 3) {
            lVar14 = puVar4[0xd];
            uVar16 = (ulonglong)(*(int *)((longlong)puVar4 + 0x74) - 1);
            *(undefined2 *)(lVar14 + uVar16 * 2) = 0;
            func_0x000145f40580(lVar14,0,uVar16 * 2);
          }
        }
        FUN_1400163b0(param_1);
        if ((int)param_1[3] == 0) goto LAB_1400160b3;
      }
    }
    if (param_2 == 4) {
      if (0 < *(int *)((longlong)puVar4 + 0x2c)) {
        uVar10 = *(uint *)((longlong)param_1 + 0x4c);
        if (*(int *)((longlong)puVar4 + 0x2c) == 2) {
          uVar13 = *(uint *)(puVar4 + 5);
          *(uint *)(puVar4 + 5) = uVar13 + 1;
          *(char *)(puVar4[2] + (ulonglong)uVar13) = (char)uVar10;
          uVar10 = *(uint *)(puVar4 + 5);
          uVar1 = *(undefined1 *)((longlong)param_1 + 0x4d);
          *(uint *)(puVar4 + 5) = uVar10 + 1;
          *(undefined1 *)(puVar4[2] + (ulonglong)uVar10) = uVar1;
          uVar10 = *(uint *)(puVar4 + 5);
          uVar1 = *(undefined1 *)((longlong)param_1 + 0x4e);
          *(uint *)(puVar4 + 5) = uVar10 + 1;
          *(undefined1 *)(puVar4[2] + (ulonglong)uVar10) = uVar1;
          uVar10 = *(uint *)(puVar4 + 5);
          uVar1 = *(undefined1 *)((longlong)param_1 + 0x4f);
          *(uint *)(puVar4 + 5) = uVar10 + 1;
          *(undefined1 *)(puVar4[2] + (ulonglong)uVar10) = uVar1;
          uVar10 = *(uint *)(puVar4 + 5);
          uVar1 = *(undefined1 *)((longlong)param_1 + 0xc);
          *(uint *)(puVar4 + 5) = uVar10 + 1;
          *(undefined1 *)(puVar4[2] + (ulonglong)uVar10) = uVar1;
          uVar10 = *(uint *)(puVar4 + 5);
          uVar1 = *(undefined1 *)((longlong)param_1 + 0xd);
          *(uint *)(puVar4 + 5) = uVar10 + 1;
          *(undefined1 *)(puVar4[2] + (ulonglong)uVar10) = uVar1;
          uVar10 = *(uint *)(puVar4 + 5);
          uVar1 = *(undefined1 *)((longlong)param_1 + 0xe);
          *(uint *)(puVar4 + 5) = uVar10 + 1;
          *(undefined1 *)(puVar4[2] + (ulonglong)uVar10) = uVar1;
          uVar10 = *(uint *)(puVar4 + 5);
          uVar1 = *(undefined1 *)((longlong)param_1 + 0xf);
          *(uint *)(puVar4 + 5) = uVar10 + 1;
          *(undefined1 *)(puVar4[2] + (ulonglong)uVar10) = uVar1;
        }
        else {
          FUN_142220080(puVar4,uVar10 >> 0x10);
          FUN_142220080(puVar4,*(undefined2 *)((longlong)param_1 + 0x4c));
        }
        FUN_1400163b0(param_1);
        if (0 < *(int *)((longlong)puVar4 + 0x2c)) {
          *(int *)((longlong)puVar4 + 0x2c) = -*(int *)((longlong)puVar4 + 0x2c);
        }
        return (ulonglong)(*(int *)(puVar4 + 5) == 0);
      }
      return 1;
    }
  }
  else {
    FUN_1400163b0(param_1);
    if ((int)param_1[3] != 0) {
      iVar11 = (int)param_1[1];
      goto LAB_140015b4b;
    }
LAB_1400160b3:
    *(undefined4 *)(puVar4 + 8) = 0xffffffff;
  }
  return 0;
}

