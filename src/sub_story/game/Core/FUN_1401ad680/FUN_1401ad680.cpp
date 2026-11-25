// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401ad680  size: 295 bytes
// Name:    FUN_1401ad680
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1401ae630, FUN_14203f730
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401ad680(longlong param_1,longlong param_2)

{
  uint *puVar1;
  uint uVar2;
  undefined4 uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 *****pppppuVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined8 ******ppppppuVar13;
  ulonglong uVar14;
  undefined8 *puVar15;
  undefined8 *****pppppuStack_68;
  ulonglong uStack_60;
  undefined8 *****pppppuStack_58;
  ulonglong uStack_50;
  longlong lStack_48;
  undefined8 *****pppppuStack_40;
  undefined2 uStack_38;
  undefined5 uStack_36;
  char cStack_31;
  undefined *puStack_30;
  
  if (param_2 == 0) {
    return;
  }
  uVar9 = *(uint *)(param_2 + 0x148);
  uVar8 = uVar9 * 2 & 0x200;
  if (param_1 != param_2) {
    if (((*(uint *)(param_1 + 0xa8) & *(uint *)(param_2 + 0xa8) & 0x40000) != 0) &&
       (((*(uint *)(param_2 + 0xa8) | *(uint *)(param_1 + 0xa8)) & 0x1000000) == 0)) {
      *(uint *)(param_2 + 0x148) = uVar9 & 0xfffffcff | uVar8;
      if (uVar8 != 0) {
        pppppuStack_40 = (undefined8 *****)0x1401ad6f9;
        FUN_14203f730(param_2);
      }
      uVar9 = *(uint *)(param_2 + 0xfc);
      if (uVar9 == 0) {
        return;
      }
      uVar14 = 0;
      do {
        uVar8 = *(uint *)(*(longlong *)(param_2 + 0x100) + uVar14 * 4);
        if (uVar8 != 0x1ffff) {
          uVar2 = *(uint *)(_DAT_14a9b3f48[5] + (ulonglong)(uVar8 & 0x1ffff) * 4);
          if ((((uVar8 ^ uVar2) < 0x20000) &&
              ((uVar2 & *(uint *)(_DAT_14a9b3f48 + 6)) == *(uint *)(_DAT_14a9b3f48 + 6))) &&
             (lVar10 = *_DAT_14a9b3f48, lVar10 != 0)) {
            uVar12 = (ulonglong)((uVar8 & 0x1ffff) * (int)_DAT_14a9b3f48[1]);
            puVar1 = (uint *)(lVar10 + 0x88 + uVar12);
            *puVar1 = *puVar1 & 0xfffffff7;
            pppppuStack_40 = (undefined8 *****)0x1401ad76d;
            FUN_1401ae630(lVar10 + uVar12,0x1b);
            uVar9 = *(uint *)(param_2 + 0xfc);
          }
        }
        uVar14 = uVar14 + 1;
      } while (uVar14 < uVar9);
      return;
    }
  }
  *(uint *)(param_2 + 0x148) = uVar9 & 0xfffffdff | uVar8 | 0x100;
  if (uVar8 != 0) {
    return;
  }
  puStack_30 = &UNK_14186d390;
  lVar10 = func_0x000144f200a0(*(undefined4 *)(param_2 + 0x48));
  if (lVar10 != 0) {
    puStack_30 = &UNK_14186d3b5;
    lVar10 = func_0x000144fa1860(*(undefined4 *)(lVar10 + 0x9c));
    if (lVar10 != 0) {
      uVar9 = *(uint *)(param_2 + 0xa8);
      if ((uVar9 & 0x40) != 0) {
        *(byte *)(lVar10 + 0xe4d) = *(byte *)(lVar10 + 0xe4d) | 0x20;
      }
      if ((char)uVar9 < '\0') {
        *(byte *)(lVar10 + 0xe4d) = *(byte *)(lVar10 + 0xe4d) | 0x40;
      }
      if ((uVar9 >> 8 & 1) != 0) {
        *(byte *)(lVar10 + 0xe4d) = *(byte *)(lVar10 + 0xe4d) | 0x80;
      }
    }
  }
  puStack_30 = &UNK_14186d39d;
  FUN_14186d3f0(param_2);
  uVar9 = *(uint *)(param_2 + 0x48);
  uVar14 = (ulonglong)uVar9 & 0x1ffff;
  if (uVar14 == 0x1ffff) {
    return;
  }
  plVar4 = *(longlong **)((ulonglong)(uVar9 >> 0x11 & 0x1f) * 8 + 0x14abbe7c0);
  if (plVar4 == (longlong *)0x0) {
    return;
  }
  uVar8 = *(uint *)(plVar4[5] + uVar14 * 4);
  if ((uVar8 >> 0x11 & 0x3ff) != uVar9 >> 0x16) {
    return;
  }
  if ((uVar8 & *(uint *)(plVar4 + 6)) != *(uint *)(plVar4 + 6)) {
    return;
  }
  lVar10 = *plVar4;
  if (lVar10 == 0) {
    return;
  }
  lVar11 = plVar4[1];
  func_0x00014186d7f0(param_2,&pppppuStack_40);
  cVar7 = cStack_31;
  pppppuVar6 = pppppuStack_40;
  if ((undefined8 ******)pppppuStack_40 == (undefined8 ******)0x0 || cStack_31 == -0x80)
  goto code_r0x00014186d618;
  if (*(int *)(param_2 + 0x158) != 0x1ffff) {
    func_0x000141307ff0((uint *)(param_2 + 0x158));
  }
  uVar5 = _DAT_14ab56e30;
  lVar10 = lVar10 + (ulonglong)(uint)((int)uVar14 * (int)lVar11);
  if (cVar7 < '\0') {
    pppppuStack_68 = pppppuStack_40;
    uStack_60 = CONCAT17(cStack_31,CONCAT52(uStack_36,uStack_38));
  }
  else {
    FUN_1401bd1f0(&pppppuStack_68,pppppuVar6,uStack_38);
  }
  uVar3 = *(undefined4 *)(lVar10 + 0x9c);
  cVar7 = func_0x000145002610(uVar3);
  if (cVar7 == '\0') {
    lVar11 = FUN_140651480(uVar5,lVar10,0x32,0,1,5);
    if (lVar11 == 0) goto code_r0x00014186d6b0;
    if ((longlong)uStack_60 < 0) {
      pppppuStack_58 = pppppuStack_68;
      uStack_50 = uStack_60;
    }
    else {
      FUN_1401bd1f0(&pppppuStack_58,pppppuStack_68,uStack_60 & 0xffff);
    }
    puVar15 = (undefined8 *)(lVar11 + 0x1fU & 0xfffffffffffffff0);
    lStack_48 = lVar10;
    if (*(code **)(lVar11 + 0x70) != (code *)0x0) {
      (**(code **)(lVar11 + 0x70))(puVar15);
    }
    if (puVar15 != (undefined8 *)0x0) {
      if ((longlong)uStack_50 < 0) {
        *puVar15 = pppppuStack_58;
        puVar15[1] = uStack_50;
      }
      else {
        FUN_1401bd1f0(puVar15,pppppuStack_58,uStack_50 & 0xffff);
      }
      puVar15[2] = lVar10;
    }
    *(code **)(lVar11 + 0x60) = FUN_1436d13b0;
    *(code **)(lVar11 + 0x68) = FUN_14292f1c0;
    *(undefined **)(lVar11 + 0x70) = &UNK_14292f200;
    FUN_1403c9020(&pppppuStack_58);
    uVar9 = (uint)((ulonglong)(lVar11 - *plRam000000014ab5cff8) /
                  (ulonglong)*(uint *)(plRam000000014ab5cff8 + 1)) & 0x1ffff;
    uVar9 = *(uint *)(plRam000000014ab5cff8[5] + (ulonglong)uVar9 * 4) & 0xfffe0000 | uVar9;
  }
  else {
    lVar10 = func_0x00014179bba0(uVar3);
    ppppppuVar13 = (undefined8 ******)&UNK_14678d1bb;
    if ((undefined8 ******)pppppuStack_68 != (undefined8 ******)0x0) {
      ppppppuVar13 = (undefined8 ******)pppppuStack_68;
    }
    if ((longlong)uStack_60 < 0) {
      ppppppuVar13 = &pppppuStack_68;
    }
    FUN_14079e350(lVar10 + 0x28,ppppppuVar13);
code_r0x00014186d6b0:
    uVar9 = 0x1ffff;
  }
  FUN_1403c9020(&pppppuStack_68);
  *(uint *)(param_2 + 0x158) = uVar9;
code_r0x00014186d618:
  FUN_1403c9020(&pppppuStack_40);
  return;
}

