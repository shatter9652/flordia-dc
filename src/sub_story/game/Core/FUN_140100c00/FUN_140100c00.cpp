// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140100c00  size: 823 bytes
// Name:    FUN_140100c00
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_143344de0, FUN_141d3ece0, FUN_1418916e0, FUN_1450ab0d0, FUN_140137970, FUN_1432ed900, FUN_140312470, FUN_140d15860, FUN_140100770, FUN_14134cfa0, FUN_1411ffe60
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_140100c00(longlong param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 uVar9;
  longlong lVar10;
  uint uVar11;
  longlong lVar12;
  int iVar13;
  ulonglong uVar14;
  ulonglong unaff_R13;
  int iStack_4c;
  longlong lStack_48;
  
  if ((((param_2 == 0 || param_1 == 0) || (*(char *)(param_2 + 0x30) != '\x04')) ||
      (lVar7 = func_0x000144fa4a90(*(undefined4 *)(param_2 + 0x9c)), lVar7 == 0)) ||
     ((lVar1 = *(longlong *)(lVar7 + 0x18), lVar1 == 0 || (*(int *)(lVar1 + 0x114) == 0)))) {
LAB_140100f1b:
    unaff_R13 = 0;
LAB_140100f1e:
    return unaff_R13 & 0xffffffff;
  }
  uVar11 = 0;
LAB_140100c6d:
  plVar8 = (longlong *)func_0x00014047cb80(lVar1,uVar11);
  if (plVar8 == (longlong *)0x0) goto LAB_140100f0c;
  iVar3 = (**(code **)(*plVar8 + 0x68))(plVar8);
  if (iVar3 == 1) {
    uVar9 = func_0x000145310cd0(*(undefined8 *)(lVar7 + 8));
    cVar2 = FUN_143344de0((int)plVar8[2],uVar9,param_1);
    if (cVar2 == '\0') goto LAB_140100cb2;
    goto LAB_140100f32;
  }
LAB_140100cb2:
  iVar3 = (**(code **)(*plVar8 + 0x68))(plVar8);
  if (((iVar3 == 0x2000) && (*(char *)((longlong)plVar8 + 0x19) == '\x01')) &&
     (FUN_140312470(&iStack_4c,param_2,_DAT_14ab56e38), iStack_4c != 0)) {
    unaff_R13 = CONCAT71((int7)(unaff_R13 >> 8),1);
    cVar2 = FUN_140100770(param_1,iStack_4c,1);
    if (cVar2 != '\0') goto LAB_140100f1e;
  }
  iVar3 = (**(code **)(*plVar8 + 0x68))(plVar8);
  if (iVar3 == 0x80) {
    uVar4 = FUN_141d3ece0(plVar8,param_2);
    lVar10 = FUN_1411ffe60(uVar4);
    if (lVar10 == 0) goto LAB_140100f0c;
    uVar5 = FUN_1418916e0(lVar7);
    if (uVar5 != 0) {
      if (_DAT_14a922f80 != 0) {
        if ((*(char *)(_DAT_14a922f80 + 0x20) == '\x01') &&
           (*(char *)(_DAT_14a922f80 + 0x21) != '\x01')) {
          iVar3 = *(int *)(_DAT_14a922f80 + 0x14) + -1;
          if (-1 < iVar3) {
            iVar13 = 0;
            do {
              uVar6 = (uint)(iVar13 + iVar3) >> 1;
              uVar14 = (ulonglong)
                       *(uint *)(*(longlong *)(_DAT_14a922f80 + 0x18) + (ulonglong)uVar6 * 4);
              unaff_R13 = _DAT_14ab83ec0 + uVar14;
              if (uVar14 != 0) {
                uVar14 = unaff_R13;
              }
              if (*(uint *)(uVar14 + 0x20) == uVar5) goto LAB_140100e25;
              if (*(uint *)(uVar14 + 0x20) < uVar5) {
                iVar13 = uVar6 + 1;
              }
              else {
                iVar3 = uVar6 - 1;
              }
            } while (iVar13 <= iVar3);
          }
        }
        else if ((ulonglong)*(uint *)(_DAT_14a922f80 + 0x14) != 0) {
          lVar12 = 0;
          do {
            uVar14 = (ulonglong)*(uint *)(*(longlong *)(_DAT_14a922f80 + 0x18) + lVar12);
            unaff_R13 = _DAT_14ab83ec0 + uVar14;
            if (uVar14 != 0) {
              uVar14 = unaff_R13;
            }
            if (*(uint *)(uVar14 + 0x20) == uVar5) goto LAB_140100e25;
            lVar12 = lVar12 + 4;
          } while ((ulonglong)*(uint *)(_DAT_14a922f80 + 0x14) << 2 != lVar12);
        }
      }
      goto LAB_140100f0c;
    }
    if (((*(short *)(lVar10 + 0x118) == 0) || (**(longlong **)(lVar10 + 0x110) == 0)) ||
       (unaff_R13 = *(ulonglong *)(**(longlong **)(lVar10 + 0x110) + 0x28), unaff_R13 == 0))
    goto LAB_140100f0c;
    goto LAB_140100e39;
  }
  goto LAB_140100f0c;
LAB_140100e25:
  if ((unaff_R13 != 0) && (*(char *)(unaff_R13 + 0x19) != '\0')) {
LAB_140100e39:
    lVar12 = FUN_1450ab0d0(*(undefined4 *)(param_1 + 0x9c));
    if (lVar12 != 0) {
      iVar3 = FUN_140d15860(lVar12 + 400,*(undefined4 *)(unaff_R13 + 0x20));
      lStack_48 = (longlong)iVar3;
      if (((((*(byte *)(*(longlong *)(lVar10 + 0x10) + 0x364) & 2) != 0) &&
           (lVar10 = FUN_140137970(param_1,2), lVar10 != 0)) &&
          ((plVar8 = (longlong *)
                     func_0x000141778ed0(*(undefined8 *)(lVar10 + 0x158),
                                         *(undefined4 *)(lVar10 + 0x3a4)), plVar8 != (longlong *)0x0
           && ((iVar3 = (**(code **)(*plVar8 + 0x30))(plVar8), iVar3 == 2 &&
               (lVar10 = FUN_14134cfa0(plVar8,0), lVar10 != param_2 && lVar10 != 0)))))) &&
         (lVar10 = func_0x000144fa4a90(*(undefined4 *)(lVar10 + 0x9c)), lVar10 != 0)) {
        uVar6 = FUN_1418916e0(lVar10);
        lStack_48 = lStack_48 + (ulonglong)(uVar5 == uVar6);
      }
      iVar3 = FUN_1432ed900(*(undefined4 *)(unaff_R13 + 0x20),param_1);
      if ((iVar3 != -1) && (iVar3 <= lStack_48)) {
LAB_140100f32:
        unaff_R13 = CONCAT71((int7)(unaff_R13 >> 8),1);
        goto LAB_140100f1e;
      }
    }
  }
LAB_140100f0c:
  uVar11 = uVar11 + 1;
  if (*(uint *)(lVar1 + 0x114) <= uVar11) goto LAB_140100f1b;
  goto LAB_140100c6d;
}

