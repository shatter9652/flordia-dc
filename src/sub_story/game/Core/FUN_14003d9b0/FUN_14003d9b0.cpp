// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14003d9b0  size: 325 bytes
// Name:    FUN_14003d9b0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140004b40, FUN_1400ff260, FUN_14003db00, FUN_140d0dc50
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_14003d9b0(longlong param_1,uint param_2,undefined8 param_3)

{
  ushort uVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong *puVar7;
  uint *puVar8;
  int *piVar9;
  ulonglong uVar10;
  int *piVar11;
  undefined8 unaff_RBX;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined8 uStack_38;
  
  if (param_2 == 4) {
    return 0;
  }
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    lVar5 = func_0x0001450da490(*(undefined4 *)(param_1 + 0x9c));
    if (lVar5 != 0) {
      uStack_38 = 0;
      cVar2 = FUN_14003db00(param_1,param_2);
      if (cVar2 == '\0') {
        FUN_140004b40(lVar5 + 0xf08);
        uVar10 = (ulonglong)param_2;
        uVar3 = func_0x000144dc06c0(*(undefined4 *)(lVar5 + 0xef0 + uVar10 * 4));
        if (uVar3 < 0xfa) {
          if (*(int *)(lVar5 + 0xed4 + uVar10 * 4) == 0) {
            lVar6 = 0;
          }
          else {
            lVar6 = FUN_1400ff260(*(undefined8 *)(_DAT_14ab7f650 + 0x238),
                                  *(undefined2 *)(_DAT_14ab7f650 + 0x240));
          }
        }
        else {
          *(undefined4 *)(lVar5 + 0xef0 + uVar10 * 4) = _DAT_14abbef40;
          lVar6 = FUN_140d0dc50(_DAT_14ab7f650,param_1,param_2,param_3);
          if (lVar6 == 0) {
            uVar4 = 0;
          }
          else {
            uVar4 = *(undefined4 *)(lVar6 + 8);
          }
          *(undefined4 *)(lVar5 + 0xed4 + uVar10 * 4) = uVar4;
        }
        func_0x000144d9dab0(lVar5 + 0xf08);
        return lVar6;
      }
      return uStack_38;
    }
  }
  lVar5 = _DAT_14ab7f650;
  if (param_1 == 0) {
code_r0x000140d0ddff:
    switch(param_2) {
    case 0:
      uVar10 = (ulonglong)*(ushort *)(lVar5 + 0x348);
      if (uVar10 == 0) {
        return 0;
      }
      piVar9 = *(int **)(lVar5 + 0x340);
      do {
        uVar12 = uVar10 >> 1;
        uVar13 = ~uVar12 + uVar10;
        uVar10 = uVar12;
        if ((uint)(piVar9 + uVar12 * 4 + 4)[-4] < 0x9681ded9) {
          piVar9 = piVar9 + uVar12 * 4 + 4;
          uVar10 = uVar13;
        }
      } while (0 < (longlong)uVar10);
      if (piVar9 == *(int **)(lVar5 + 0x340) + (ulonglong)*(ushort *)(lVar5 + 0x348) * 4) {
        return 0;
      }
      if (*piVar9 != -0x697e2127) {
        return 0;
      }
      break;
    case 1:
      goto code_r0x000140d0de8a;
    case 2:
      if (param_1 == 0) {
code_r0x000140d0e0f8:
        uVar10 = (ulonglong)*(ushort *)(lVar5 + 0x348);
        if (uVar10 == 0) {
          return 0;
        }
        piVar9 = *(int **)(lVar5 + 0x340);
        do {
          uVar12 = uVar10 >> 1;
          uVar13 = ~uVar12 + uVar10;
          uVar10 = uVar12;
          if ((uint)(piVar9 + uVar12 * 4 + 4)[-4] < 0xbc9403c8) {
            piVar9 = piVar9 + uVar12 * 4 + 4;
            uVar10 = uVar13;
          }
        } while (0 < (longlong)uVar10);
        if (piVar9 == *(int **)(lVar5 + 0x340) + (ulonglong)*(ushort *)(lVar5 + 0x348) * 4) {
          return 0;
        }
        if (*piVar9 != -0x436bfc38) {
          return 0;
        }
      }
      else if (*(char *)(param_1 + 0x30) == '\x04') {
        uVar4 = *(undefined4 *)(param_1 + 0x9c);
        lVar6 = FUN_144eaa5a0(uVar4);
        if ((lVar6 == 0) || ((*(byte *)(lVar6 + 0x11c9) & 0x20) != 0)) {
          lVar6 = func_0x000144fa4a90(uVar4);
          if ((lVar6 == 0) || (FUN_140d154f0(lVar6,&stack0xffffffffffffffd0), (int)unaff_RBX == 0))
          goto code_r0x000140d0e0f8;
          uVar1 = *(ushort *)(lVar5 + 0x348);
          uVar10 = (ulonglong)uVar1;
          if (uVar10 == 0) {
            return 0;
          }
          piVar11 = *(int **)(lVar5 + 0x340);
          piVar9 = piVar11;
          do {
            uVar12 = uVar10 >> 1;
            uVar13 = ~uVar12 + uVar10;
            uVar10 = uVar12;
            if ((uint)(piVar9 + uVar12 * 4 + 4)[-4] < 0x6c9bb7e2) {
              piVar9 = piVar9 + uVar12 * 4 + 4;
              uVar10 = uVar13;
            }
          } while (0 < (longlong)uVar10);
        }
        else {
          uVar1 = *(ushort *)(lVar5 + 0x348);
          uVar10 = (ulonglong)uVar1;
          if (uVar10 == 0) {
            return 0;
          }
          piVar11 = *(int **)(lVar5 + 0x340);
          piVar9 = piVar11;
          do {
            uVar12 = uVar10 >> 1;
            uVar13 = ~uVar12 + uVar10;
            uVar10 = uVar12;
            if ((uint)(piVar9 + uVar12 * 4 + 4)[-4] < 0x6c9bb7e2) {
              piVar9 = piVar9 + uVar12 * 4 + 4;
              uVar10 = uVar13;
            }
          } while (0 < (longlong)uVar10);
        }
        if (piVar9 == piVar11 + (ulonglong)uVar1 * 4) {
          return 0;
        }
        if (*piVar9 != 0x6c9bb7e2) {
          return 0;
        }
      }
      else {
        if (*(char *)(param_1 + 0x30) != '\x03') goto code_r0x000140d0e0f8;
        uVar10 = (ulonglong)*(ushort *)(lVar5 + 0x348);
        if (uVar10 == 0) {
          return 0;
        }
        piVar9 = *(int **)(lVar5 + 0x340);
        do {
          uVar12 = uVar10 >> 1;
          uVar13 = ~uVar12 + uVar10;
          uVar10 = uVar12;
          if ((uint)(piVar9 + uVar12 * 4 + 4)[-4] < 0x781827ea) {
            piVar9 = piVar9 + uVar12 * 4 + 4;
            uVar10 = uVar13;
          }
        } while (0 < (longlong)uVar10);
        if (piVar9 == *(int **)(lVar5 + 0x340) + (ulonglong)*(ushort *)(lVar5 + 0x348) * 4) {
          return 0;
        }
        if (*piVar9 != 0x781827ea) {
          return 0;
        }
      }
      break;
    case 3:
      uVar10 = (ulonglong)*(ushort *)(lVar5 + 0x348);
      if (uVar10 == 0) {
        return 0;
      }
      piVar9 = *(int **)(lVar5 + 0x340);
      do {
        uVar12 = uVar10 >> 1;
        uVar13 = ~uVar12 + uVar10;
        uVar10 = uVar12;
        if ((uint)(piVar9 + uVar12 * 4 + 4)[-4] < 0xf8f05402) {
          piVar9 = piVar9 + uVar12 * 4 + 4;
          uVar10 = uVar13;
        }
      } while (0 < (longlong)uVar10);
      if (piVar9 == *(int **)(lVar5 + 0x340) + (ulonglong)*(ushort *)(lVar5 + 0x348) * 4) {
        return 0;
      }
      if (*piVar9 != -0x70fabfe) {
        return 0;
      }
      break;
    default:
      goto code_r0x000140d0e1a7;
    }
  }
  else {
    if (*(longlong *)(param_1 + 0x20) != 0) {
      uVar10 = (ulonglong)*(ushort *)(_DAT_14ab7f650 + 0x360);
      if (uVar10 != 0) {
        uVar12 = *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x60);
        puVar7 = *(ulonglong **)(_DAT_14ab7f650 + 0x358);
        do {
          uVar13 = uVar10 >> 1;
          uVar14 = ~uVar13 + uVar10;
          uVar10 = uVar13;
          if ((puVar7 + uVar13 * 4 + 4)[-4] < uVar12) {
            puVar7 = puVar7 + uVar13 * 4 + 4;
            uVar10 = uVar14;
          }
        } while (0 < (longlong)uVar10);
        if (((puVar7 != *(ulonglong **)(_DAT_14ab7f650 + 0x358) +
                        (ulonglong)*(ushort *)(_DAT_14ab7f650 + 0x360) * 4) && (*puVar7 == uVar12))
           && (uVar10 = (ulonglong)(ushort)puVar7[3], uVar10 != 0)) {
          puVar8 = (uint *)puVar7[2];
          uVar12 = uVar10;
          do {
            uVar13 = uVar12 >> 1;
            uVar14 = ~uVar13 + uVar12;
            uVar12 = uVar13;
            if ((int)(puVar8 + uVar13 * 2 + 2)[-2] < (int)param_2) {
              puVar8 = puVar8 + uVar13 * 2 + 2;
              uVar12 = uVar14;
            }
          } while (0 < (longlong)uVar12);
          if ((puVar8 != (uint *)puVar7[2] + uVar10 * 2) && (*puVar8 == param_2)) {
            uVar3 = puVar8[1];
            lVar6 = FUN_1400ff260(*(undefined8 *)(_DAT_14ab7f650 + 0x238),
                                  *(undefined2 *)(_DAT_14ab7f650 + 0x240),uVar3);
            if (lVar6 != 0) {
              return lVar6;
            }
            lVar6 = FUN_1400ff260(*(undefined8 *)(_DAT_14ab7f650 + 0x2c8),
                                  *(undefined2 *)(_DAT_14ab7f650 + 0x2d0),uVar3);
            if (lVar6 != 0) {
              FUN_140100410(&stack0xffffffffffffffd4,_DAT_14ab56e38,param_1,lVar6,param_3,0);
              lVar6 = FUN_1400ff260(*(undefined8 *)(lVar5 + 0x238),*(undefined2 *)(lVar5 + 0x240),
                                    (int)((ulonglong)unaff_RBX >> 0x20));
              if (lVar6 != 0) {
                return lVar6;
              }
            }
          }
        }
      }
    }
    if (param_2 != 1) {
      lVar6 = FUN_141314150(param_1);
      if (((lVar6 != 0) && (*(int *)(lVar6 + 0x18) != 0)) &&
         (lVar6 = FUN_1400ff260(*(undefined8 *)(lVar5 + 0x238),*(undefined2 *)(lVar5 + 0x240)),
         lVar6 != 0)) {
        return lVar6;
      }
      goto code_r0x000140d0ddff;
    }
code_r0x000140d0de8a:
    uVar10 = (ulonglong)*(ushort *)(lVar5 + 0x348);
    if (uVar10 == 0) {
      return 0;
    }
    piVar9 = *(int **)(lVar5 + 0x340);
    do {
      uVar12 = uVar10 >> 1;
      uVar13 = ~uVar12 + uVar10;
      uVar10 = uVar12;
      if ((uint)(piVar9 + uVar12 * 4 + 4)[-4] < 0x537aeb1) {
        piVar9 = piVar9 + uVar12 * 4 + 4;
        uVar10 = uVar13;
      }
    } while (0 < (longlong)uVar10);
    if (piVar9 == *(int **)(lVar5 + 0x340) + (ulonglong)*(ushort *)(lVar5 + 0x348) * 4) {
      return 0;
    }
    if (*piVar9 != 0x537aeb1) {
      return 0;
    }
  }
  if (*(longlong *)(piVar9 + 2) != 0) {
    FUN_140100410((longlong)&uStack_38 + 4,_DAT_14ab56e38,param_1,*(longlong *)(piVar9 + 2),param_3,
                  0);
    lVar5 = FUN_1400ff260(*(undefined8 *)(lVar5 + 0x238),*(undefined2 *)(lVar5 + 0x240),
                          uStack_38._4_4_);
    if (lVar5 != 0) {
      return lVar5;
    }
  }
code_r0x000140d0e1a7:
  return 0;
}

