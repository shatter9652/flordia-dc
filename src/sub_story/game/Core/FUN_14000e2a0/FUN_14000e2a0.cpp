// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14000e2a0  size: 715 bytes
// Name:    FUN_14000e2a0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1456a25e0, FUN_14513c500, FUN_144f85630
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14000e2a0(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  float fVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined2 *puVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  float fVar14;
  undefined4 uStack_60;
  undefined1 auStack_5c [28];
  
  uVar12 = *(uint *)(param_1 + 0x74);
  *(uint *)(param_1 + 0x74) = uVar12 & 0xffffff7f;
  lVar8 = *(longlong *)(param_1 + 0x48);
  uVar13 = *(uint *)(lVar8 + 0x94);
  if (uVar13 != 0x1ffff) {
    uVar11 = *(uint *)(_DAT_14abbe8c8[5] + (ulonglong)(uVar13 & 0x1ffff) * 4);
    if ((((~uVar11 & *(uint *)(_DAT_14abbe8c8 + 6)) == 0) &&
        ((uVar11 & 0x7fe0000) == (uVar13 & 0xfffe0000))) && (*_DAT_14abbe8c8 != 0)) {
      *(uint *)(param_1 + 0x74) = uVar12 | 0x80;
      goto LAB_14000e4a4;
    }
  }
  uVar13 = *(uint *)(lVar8 + 0x88);
  if (uVar13 != 0x1ffff) {
    uVar11 = *(uint *)(_DAT_14abbe8c8[5] + (ulonglong)(uVar13 & 0x1ffff) * 4);
    if ((~uVar11 & *(uint *)(_DAT_14abbe8c8 + 6)) == 0) {
      uVar11 = uVar11 & 0x7fe0000;
      if ((uVar11 == (uVar13 & 0xfffe0000)) && (lVar10 = *_DAT_14abbe8c8, lVar10 != 0)) {
        lVar2 = _DAT_14abbe8c8[1];
        if ((uVar12 & 0x10) == 0) {
          lVar7 = func_0x000144e24670(*(undefined4 *)(*(longlong *)(param_1 + 8) + 0x9c),
                                      uVar13 & 0xfffe0000,uVar11,0);
          cVar3 = FUN_1456a25e0(param_2,lVar7 + 0x5d0);
          if (cVar3 == '\0') goto LAB_14000e4a4;
        }
        fVar14 = *(float *)(lVar8 + 0x8c) * *(float *)(lVar8 + 0x8c);
        fVar1 = *(float *)(param_1 + 0x70) + _DAT_14615b968;
        if (fVar14 < fVar1 * fVar1) {
          lVar8 = func_0x000144e24670(*(undefined4 *)(*(longlong *)(param_1 + 8) + 0x9c));
          puVar9 = (undefined2 *)
                   FUN_144f85630(*(undefined4 *)
                                  (lVar10 + 0x9c + (ulonglong)((uVar13 & 0x1ffff) * (int)lVar2)));
          cVar3 = func_0x000144eb5740(*(undefined2 *)(lVar8 + 0x5d0),*(undefined2 *)(lVar8 + 0x5d8))
          ;
          if ((cVar3 != '\0') && (puVar9 != (undefined2 *)0x0)) {
            cVar3 = func_0x000144eb5740(*puVar9,puVar9[4]);
            if (cVar3 != '\0') {
              lVar10 = lVar8 + 0x5d0;
              uStack_60 = 0;
              iVar4 = func_0x000144eb6c10(puVar9);
              uVar12 = *(uint *)(puVar9 + 0x8c);
              if ((short)uVar12 < 2) {
                uVar12 = 1;
              }
              iVar5 = func_0x000144eb6c10(lVar10);
              uVar13 = 1;
              if (1 < (short)*(uint *)(lVar8 + 0x6e8)) {
                uVar13 = *(uint *)(lVar8 + 0x6e8);
              }
              cVar3 = FUN_14513c500(lVar10,puVar9,(uVar13 & 0xffff) - 1,iVar5 + -1,
                                    (uVar12 & 0xffff) - 1,iVar4 + -1,&uStack_60,auStack_5c);
              if (cVar3 != '\0') {
                lVar8 = func_0x00014509acd0(lVar10,uStack_60);
                if ((lVar8 != 0) && ((*(byte *)(lVar8 + 0x14) & 0x20) != 0)) {
                  lVar8 = func_0x000144a662d0(**(undefined4 **)(param_1 + 0x10),
                                              *(undefined8 *)
                                               (*(undefined4 **)(param_1 + 0x10) + 0x2a));
                  if ((lVar8 == 0) ||
                     ((*(int *)(lVar8 + 0xb0) != 2 ||
                      (fVar1 = *(float *)(param_1 + 0x70) + _DAT_146159ce0, fVar14 < fVar1 * fVar1))
                     )) {
                    *(byte *)(param_1 + 0x74) = *(byte *)(param_1 + 0x74) | 0x80;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_14000e4a4:
  if ((char)*(uint *)(param_1 + 0x74) < '\0') {
    uVar6 = 3;
  }
  else {
    *(uint *)(param_1 + 0x74) = *(uint *)(param_1 + 0x74) & 0xffffdf7f;
    uVar6 = 2;
  }
  *param_3 = uVar6;
  return;
}

