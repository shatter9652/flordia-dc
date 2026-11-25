// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140115ab0  size: 1479 bytes
// Name:    FUN_140115ab0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144064b70, FUN_144064ba0, FUN_144efce80, FUN_144064d70, FUN_141ded1f0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140115ab0(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  undefined *puVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  undefined *puVar7;
  char cVar8;
  byte bVar9;
  longlong lVar10;
  longlong lVar11;
  int *piVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  byte bVar17;
  longlong lVar18;
  longlong unaff_GS_OFFSET;
  undefined *puStack_1d8;
  longlong lStack_1d0;
  longlong lStack_1c8;
  longlong lStack_1c0;
  longlong lStack_1b8;
  longlong lStack_1b0;
  longlong *plStack_1a8;
  ulonglong uStack_1a0;
  longlong lStack_198;
  undefined8 uStack_190;
  undefined *puStack_188;
  undefined *apuStack_180 [5];
  undefined2 auStack_158 [4];
  ushort uStack_150;
  ushort uStack_14e;
  int aiStack_d0 [2];
  longlong lStack_c8;
  undefined4 uStack_48;
  
  if (*(short *)(param_1 + 0x74) != 0) {
    lVar10 = func_0x00014044fdf0(param_2,&UNK_14677967d);
    if (lVar10 == 0) {
      uStack_150 = 0;
      uVar13 = 0;
    }
    else {
      uVar13 = 0;
      switch(*(undefined1 *)(lVar10 + 0x10)) {
      case 0:
        FUN_144064ae0(&uStack_150,*(undefined8 *)(lVar10 + 8));
        uVar13 = (uint)uStack_14e << 0x10;
        break;
      case 1:
        uStack_150 = *(ushort *)(lVar10 + 8);
        break;
      case 2:
        uStack_150 = (ushort)(longlong)*(double *)(lVar10 + 8);
        break;
      case 3:
        uStack_150 = *(byte *)(lVar10 + 8) ^ 1;
        break;
      default:
        uStack_150 = 0;
      }
    }
    cVar8 = FUN_144064b70(*(undefined2 *)(param_1 + 0x74),*(undefined2 *)(param_1 + 0x76),
                          uStack_150 | uVar13);
    if (cVar8 == '\0') {
      return;
    }
  }
  FUN_141ded1f0(param_1,param_3,0x4049095c,param_2);
  aiStack_d0[0] = 0;
  uStack_48 = 0;
  func_0x00014553b9c0(&uStack_150,param_1,param_3);
  puStack_1d8 = *(undefined **)(param_2 + 0x48);
  if (puStack_1d8 == (undefined *)0x0) {
    if ((*(byte *)(param_2 + 0x1a) & 8) == 0) {
      lVar10 = *(longlong *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1258);
      lVar11 = _DAT_14abcd240 + 0x68;
      if (lVar10 != 0) {
        lVar11 = lVar10;
      }
      if (((*(byte *)(lVar11 + 0x11) & 0x10) != 0) && (0 < (longlong)aiStack_d0[0])) {
        lVar10 = (longlong)aiStack_d0[0];
        do {
          lVar11 = *(longlong *)(aiStack_d0 + lVar10 * 2);
          if (*(short *)(lVar11 + 0x28) != 0) {
            uVar4 = *(undefined8 *)(auStack_158 + lVar10 * 4);
            uVar14 = 0;
            do {
              uVar5 = *(undefined8 *)(*(longlong *)(lVar11 + 0x20) + uVar14 * 8);
              func_0x00014036e810(apuStack_180);
              apuStack_180[0] = &UNK_1465a0890;
              auStack_158[0] = 0;
              FUN_144efce80(apuStack_180,uVar4,uVar5);
              uVar14 = uVar14 + 1;
            } while (uVar14 < *(ushort *)(lVar11 + 0x28));
          }
          bVar6 = 1 < lVar10;
          lVar10 = lVar10 + -1;
        } while (bVar6);
      }
    }
    else {
      lVar10 = (longlong)aiStack_d0[0];
      if (0 < (longlong)aiStack_d0[0]) {
        do {
          lVar11 = *(longlong *)(aiStack_d0 + lVar10 * 2);
          if (*(short *)(lVar11 + 0x28) != 0) {
            uVar4 = *(undefined8 *)(auStack_158 + lVar10 * 4);
            uVar14 = 0;
            do {
              FUN_144064ba0(param_2,*(undefined8 *)(*(longlong *)(lVar11 + 0x20) + uVar14 * 8),uVar4
                           );
              uVar14 = uVar14 + 1;
            } while (uVar14 < *(ushort *)(lVar11 + 0x28));
          }
          bVar6 = 1 < lVar10;
          lVar10 = lVar10 + -1;
        } while (bVar6);
      }
    }
  }
  else {
    uStack_190 = 0;
    lVar10 = **(longlong **)(unaff_GS_OFFSET + 0x58);
    lVar11 = *(longlong *)(lVar10 + 0x1258);
    lVar18 = _DAT_14abcd240 + 0x68;
    if (lVar11 != 0) {
      lVar18 = lVar11;
    }
    uStack_1a0 = *(ulonglong *)(lVar18 + 0x10);
    puVar2 = puStack_1d8;
    puVar7 = (undefined *)(uStack_1a0 & 0x40);
    while (puVar7 != (undefined *)0x0) {
      puVar2[0x1a] = puVar2[0x1a] & 0xfb;
      puVar2 = *(undefined **)(puVar2 + 0x30);
      puVar7 = puVar2;
    }
    lVar11 = (longlong)aiStack_d0[0];
    lStack_1c8 = param_1;
    puStack_188 = puStack_1d8;
    if (0 < lVar11) {
      plStack_1a8 = (longlong *)(lVar10 + 0x1258);
      lStack_1c0 = param_2;
      do {
        lVar10 = *(longlong *)(aiStack_d0 + lVar11 * 2);
        lStack_1d0 = lVar11;
        if (*(short *)(lVar10 + 0x28) != 0) {
          uVar14 = 0;
          lVar11 = *(longlong *)(auStack_158 + lVar11 * 4);
          lStack_1b8 = lVar11;
          lStack_1b0 = lVar10;
          do {
            plVar3 = *(longlong **)(*(longlong *)(lVar10 + 0x20) + uVar14 * 8);
            cVar8 = FUN_144064ba0(param_2,plVar3,lVar11);
            puVar2 = puStack_1d8;
            if (cVar8 == '\0') {
              bVar17 = 0;
              apuStack_180[0] = puStack_1d8;
              lStack_198 = plVar3[1];
              iVar1 = *(int *)(lStack_198 + 0x18);
              do {
                puVar7 = apuStack_180[0];
                lVar11 = lStack_1b8;
                lVar10 = lStack_1c8;
                if (*(int *)(apuStack_180[0] + 0x20) == iVar1) {
                  lVar18 = *(longlong *)(lStack_198 + 0x10) + lStack_1b8;
                  FUN_144064d70(lStack_1c8,lStack_1b8,0xb13f2c2f,apuStack_180[0],plVar3,lVar18);
                  (**(code **)(*plVar3 + 0x10))(plVar3,puVar7,lVar11);
                  FUN_144064d70(lVar10,lVar11,0x49e5d899,puVar7,plVar3,lVar18);
                  if ((uStack_1a0 & 0x40) != 0) {
                    puVar7[0x1a] = puVar7[0x1a] | 4;
                  }
                  func_0x0001455c9180(&puStack_1d8,&puStack_188,&uStack_190);
                  param_2 = lStack_1c0;
                  lVar10 = lStack_1b0;
                  goto LAB_140115deb;
                }
                bVar9 = func_0x0001455c9180(apuStack_180,&puStack_188,&uStack_190);
                bVar17 = bVar17 | bVar9;
              } while ((apuStack_180[0] == puVar2 & bVar17) != 1);
              func_0x0001455c9180(&puStack_1d8,&puStack_188,&uStack_190);
              lVar10 = lStack_1b0;
              lVar11 = lStack_1b8;
              param_2 = lStack_1c0;
              lVar18 = _DAT_14abcd240 + 0x68;
              if (*plStack_1a8 != 0) {
                lVar18 = *plStack_1a8;
              }
              if ((*(byte *)(lVar18 + 0x11) & 0x10) != 0) {
                func_0x00014036e810(apuStack_180);
                apuStack_180[0] = &UNK_1465a0890;
                auStack_158[0] = 0;
                FUN_144efce80(apuStack_180,param_3,plVar3);
              }
            }
LAB_140115deb:
            uVar14 = uVar14 + 1;
          } while (uVar14 < *(ushort *)(lVar10 + 0x28));
        }
        lVar11 = lStack_1d0 + -1;
        param_1 = lStack_1c8;
      } while (1 < lStack_1d0);
    }
  }
  lVar10 = *(longlong *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1258);
  lVar11 = _DAT_14abcd240 + 0x68;
  if (lVar10 != 0) {
    lVar11 = lVar10;
  }
  if (((*(byte *)(lVar11 + 0x14) & 2) == 0) && ((*(byte *)(lStack_c8 + 0x7a) & 2) != 0)) {
    if (param_3 == 0) {
      do {
        uVar14 = (ulonglong)*(ushort *)(param_1 + 0x60);
        if (uVar14 != 0) {
          piVar12 = *(int **)(param_1 + 0x58);
          do {
            uVar15 = uVar14 >> 1;
            uVar16 = ~uVar15 + uVar14;
            uVar14 = uVar15;
            if ((uint)(piVar12 + uVar15 * 4 + 4)[-4] < 0xa5434114) {
              piVar12 = piVar12 + uVar15 * 4 + 4;
              uVar14 = uVar16;
            }
          } while (0 < (longlong)uVar14);
          if (((piVar12 != *(int **)(param_1 + 0x58) + (ulonglong)*(ushort *)(param_1 + 0x60) * 4)
              && (*piVar12 == -0x5abcbeec)) && (*(longlong *)(piVar12 + 2) != 0)) {
            (**(code **)(*(longlong *)(piVar12 + 2) + 8))();
          }
        }
        param_1 = *(longlong *)(param_1 + 8);
      } while (param_1 != 0);
    }
    else {
      do {
        uVar14 = (ulonglong)*(ushort *)(param_1 + 0x60);
        if (uVar14 != 0) {
          piVar12 = *(int **)(param_1 + 0x58);
          do {
            uVar15 = uVar14 >> 1;
            uVar16 = ~uVar15 + uVar14;
            uVar14 = uVar15;
            if ((uint)(piVar12 + uVar15 * 4 + 4)[-4] < 0xa5434114) {
              piVar12 = piVar12 + uVar15 * 4 + 4;
              uVar14 = uVar16;
            }
          } while (0 < (longlong)uVar14);
          if (((piVar12 != *(int **)(param_1 + 0x58) + (ulonglong)*(ushort *)(param_1 + 0x60) * 4)
              && (*piVar12 == -0x5abcbeec)) && (*(longlong *)(piVar12 + 2) != 0)) {
            (**(code **)(*(longlong *)(piVar12 + 2) + 8))(param_3);
          }
        }
        param_1 = *(longlong *)(param_1 + 8);
      } while (param_1 != 0);
    }
  }
  return;
}

