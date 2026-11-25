// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140110ed0  size: 1217 bytes
// Name:    FUN_140110ed0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144e48ed0, FUN_144da6f10, FUN_144da26c0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_140110ed0(longlong *param_1,undefined4 *param_2,undefined1 *param_3)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  char cVar8;
  char cVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  byte bVar12;
  longlong lVar13;
  longlong *plVar14;
  ushort uVar15;
  byte bVar16;
  ushort uVar17;
  longlong lVar18;
  longlong *plVar19;
  longlong *plVar20;
  longlong **pplStack_78;
  uint uStack_70;
  longlong **pplStack_68;
  uint uStack_60;
  longlong **pplStack_58;
  uint uStack_50;
  longlong *plStack_48;
  
  *(undefined4 *)(param_1 + 1) = 1;
  *(undefined4 *)((longlong)param_1 + 0xc) = *param_2;
  lVar18 = *(longlong *)(param_2 + 2);
  param_1[2] = lVar18;
  lVar13 = (ulonglong)(uint)param_2[4] * 0x10;
  param_1[3] = lVar18 + lVar13;
  param_1[4] = *(longlong *)(param_2 + 6);
  *(undefined2 *)(param_1 + 5) = *(undefined2 *)(param_2 + 8);
  *param_3 = 1;
  plVar19 = *(longlong **)(lVar18 + lVar13);
  bVar16 = *(byte *)(lVar18 + 8 + lVar13);
  pplStack_78 = &plStack_48;
  cVar3 = *(char *)((longlong)param_2 + 0x22);
  uStack_50 = 0x10003;
  uStack_60 = 0x10004;
  uStack_70 = 0x10005;
  iVar4 = param_2[1];
  pplStack_68 = pplStack_78;
  pplStack_58 = pplStack_78;
  plStack_48 = param_1;
  if (iVar4 == 0) goto LAB_140111024;
  *(short *)((longlong)plVar19 + 10) = *(short *)((longlong)plVar19 + 10) + 1;
  uVar17 = *(ushort *)(plVar19 + 1);
  uVar15 = *(ushort *)((longlong)plVar19 + 0x16);
  if (iVar4 == 1) {
    cVar9 = *(char *)((longlong)plVar19 + 0x14);
    goto LAB_1401110a3;
  }
  if (bVar16 == 0) {
    uVar5 = *(uint *)((longlong)plVar19 + 0x1c);
    if ((uVar5 & 0x7fffffff) == 0) {
LAB_140111007:
      plVar20 = (longlong *)0x0;
    }
    else {
      lVar18 = _DAT_149fe5f78;
      if ((int)uVar5 < 0) {
        lVar18 = _DAT_149fe64f0;
      }
      plVar20 = (longlong *)(lVar18 + ((ulonglong)uVar5 & 0x7fffffff));
      cVar9 = *(char *)(lVar18 + ((ulonglong)uVar5 & 0x7fffffff) + 0x10);
      while (cVar9 == cVar3) {
        uVar5 = *(uint *)((longlong)plVar20 + 0x1c);
        if ((uVar5 & 0x7fffffff) == 0) goto LAB_140111007;
        lVar18 = _DAT_149fe5f78;
        if ((int)uVar5 < 0) {
          lVar18 = _DAT_149fe64f0;
        }
        plVar20 = (longlong *)(lVar18 + ((ulonglong)uVar5 & 0x7fffffff));
        cVar9 = *(char *)(lVar18 + ((ulonglong)uVar5 & 0x7fffffff) + 0x10);
      }
    }
  }
  else {
    plVar20 = (longlong *)0x0;
  }
LAB_14011123d:
  *(byte *)(plVar19 + 1) = *(byte *)(plVar19 + 1) & 199;
  if (((uVar17 & 2) == 0) ||
     (cVar9 = (**(code **)(*plVar19 + 0x10))(plVar19,param_1), cVar9 != '\0')) {
    if ((((uVar15 & 0x20) != 0) &&
        (((((uStack_70 & 0xff0000) != 0x10000 &&
           (*(char *)((longlong)plVar19 + 0x14) != (char)(uStack_70 >> 0x10))) ||
          (0xf < (uStack_70 & 0xffff))) ||
         ((*(ushort *)((longlong)plVar19 + 0x16) >> (uStack_70 & 0x1f) & 1) != 0)))) &&
       ((longlong *)plVar19[6] != (longlong *)0x0)) {
      plVar14 = (longlong *)plVar19[6];
      do {
        plVar6 = (longlong *)plVar14[2];
        (**(code **)(*plVar14 + 0x10))(plVar14,&pplStack_78);
        plVar14 = plVar6;
      } while (plVar6 != (longlong *)0x0);
    }
    FUN_144e48ed0(param_1,plVar19);
    *(char *)((longlong)plVar19 + 0x11) = cVar3;
    if ((uVar17 & 4) != 0) {
      (**(code **)(*plVar19 + 0x20))(plVar19,param_1);
    }
    FUN_144da6f10(param_1,plVar19);
    psVar1 = (short *)((longlong)plVar19 + 10);
    *psVar1 = *psVar1 + -1;
    if (*psVar1 == 0) {
      (**(code **)*plVar19)(plVar19,1);
    }
    plVar19 = plVar20;
    if (plVar20 != (longlong *)0x0) {
LAB_140111024:
      do {
        *(short *)((longlong)plVar19 + 10) = *(short *)((longlong)plVar19 + 10) + 1;
        uVar17 = *(ushort *)(plVar19 + 1);
        uVar15 = *(ushort *)((longlong)plVar19 + 0x16);
        cVar9 = *(char *)((longlong)plVar19 + 0x14);
        FUN_144da26c0(param_1,plVar19);
        if (((uVar15 & 8) != 0) &&
           (((((uStack_50 & 0xff0000) != 0x10000 &&
              (*(char *)((longlong)plVar19 + 0x14) != (char)(uStack_50 >> 0x10))) ||
             ((0xf < (uStack_50 & 0xffff) ||
              ((*(ushort *)((longlong)plVar19 + 0x16) >> (uStack_50 & 0x1f) & 1) != 0)))) &&
            ((longlong *)plVar19[6] != (longlong *)0x0)))) {
          plVar20 = (longlong *)plVar19[6];
          do {
            plVar14 = (longlong *)plVar20[2];
            (**(code **)(*plVar20 + 0x10))(plVar20,&pplStack_58);
            plVar20 = plVar14;
          } while (plVar14 != (longlong *)0x0);
        }
LAB_1401110a3:
        if (((uVar17 & 1) != 0) &&
           (cVar8 = (**(code **)(*plVar19 + 0x18))(plVar19,param_1), cVar8 == '\0')) {
          psVar1 = (short *)((longlong)plVar19 + 10);
          *psVar1 = *psVar1 + -1;
          sVar2 = *psVar1;
          uVar11 = 1;
          goto joined_r0x00014011116d;
        }
        *(char *)(plVar19 + 2) = cVar3;
        uVar5 = *(uint *)(plVar19 + 3);
        while ((uVar5 & 0x7fffffff) != 0) {
          lVar18 = _DAT_149fe5f78;
          if ((int)uVar5 < 0) {
            lVar18 = _DAT_149fe64f0;
          }
          plVar20 = (longlong *)(lVar18 + ((ulonglong)uVar5 & 0x7fffffff));
          if (*(char *)(lVar18 + ((ulonglong)uVar5 & 0x7fffffff) + 0x10) != cVar3) {
            puVar10 = (undefined8 *)param_1[3];
            bVar12 = 0;
            if (puVar10 < (undefined8 *)(param_1[2] + 0x1310)) goto LAB_140111013;
            *param_3 = 0;
            break;
          }
          uVar5 = *(uint *)((longlong)plVar20 + 0x1c);
        }
        if (((cVar9 != '\x11') || (plVar20 = (longlong *)plVar19[9], plVar20 == (longlong *)0x0)) ||
           (*(char *)((longlong)plVar20 + 0x11) == cVar3)) goto LAB_140111178;
        puVar10 = (undefined8 *)param_1[3];
        bVar12 = 1;
        if ((undefined8 *)(param_1[2] + 0x1310) <= puVar10) goto code_r0x000140111145;
LAB_140111013:
        *puVar10 = plVar19;
        *(byte *)(puVar10 + 1) = bVar16;
        param_1[3] = (longlong)(puVar10 + 2);
        plVar19 = plVar20;
        bVar16 = bVar12;
      } while( true );
    }
    uVar7 = param_1[3];
    if ((ulonglong)param_1[2] < uVar7) {
      param_1[3] = uVar7 - 0x10;
      plVar19 = *(longlong **)(uVar7 - 0x10);
      bVar16 = *(byte *)(uVar7 - 8);
      uVar17 = *(ushort *)(plVar19 + 1);
      uVar15 = *(ushort *)((longlong)plVar19 + 0x16);
      goto LAB_140111178;
    }
    uVar11 = 0;
  }
  else {
    psVar1 = (short *)((longlong)plVar19 + 10);
    *psVar1 = *psVar1 + -1;
    sVar2 = *psVar1;
    uVar11 = 2;
joined_r0x00014011116d:
    if (sVar2 == 0) {
      (**(code **)*plVar19)(plVar19,1);
    }
    puVar10 = (undefined8 *)param_1[3];
    *puVar10 = plVar19;
    *(byte *)(puVar10 + 1) = bVar16;
    param_2[4] = (int)((ulonglong)((longlong)puVar10 - param_1[2]) >> 4);
    *(short *)(param_2 + 8) = (short)param_1[5];
  }
  *(undefined4 *)(param_1 + 1) = 0;
  return uVar11;
code_r0x000140111145:
  *param_3 = 0;
LAB_140111178:
  plVar20 = (longlong *)0x0;
  if ((bVar16 & 1) == 0) {
    uVar5 = *(uint *)((longlong)plVar19 + 0x1c);
    plVar20 = (longlong *)0x0;
    if ((uVar5 & 0x7fffffff) != 0) {
      do {
        lVar18 = _DAT_149fe5f78;
        if ((int)uVar5 < 0) {
          lVar18 = _DAT_149fe64f0;
        }
        plVar20 = (longlong *)(lVar18 + ((ulonglong)uVar5 & 0x7fffffff));
        if (*(char *)(lVar18 + ((ulonglong)uVar5 & 0x7fffffff) + 0x10) != cVar3) goto LAB_1401111d2;
        uVar5 = *(uint *)((longlong)plVar20 + 0x1c);
      } while ((uVar5 & 0x7fffffff) != 0);
      plVar20 = (longlong *)0x0;
    }
  }
LAB_1401111d2:
  func_0x000144da2990(*(undefined1 *)((longlong)plVar19 + 0x14),plVar19[5]);
  if ((((uVar15 & 0x10) != 0) &&
      ((((uStack_60 & 0xff0000) != 0x10000 &&
        (*(char *)((longlong)plVar19 + 0x14) != (char)(uStack_60 >> 0x10))) ||
       ((0xf < (uStack_60 & 0xffff) ||
        ((*(ushort *)((longlong)plVar19 + 0x16) >> (uStack_60 & 0x1f) & 1) != 0)))))) &&
     ((longlong *)plVar19[6] != (longlong *)0x0)) {
    plVar14 = (longlong *)plVar19[6];
    do {
      plVar6 = (longlong *)plVar14[2];
      (**(code **)(*plVar14 + 0x10))(plVar14,&pplStack_68);
      plVar14 = plVar6;
    } while (plVar6 != (longlong *)0x0);
  }
  goto LAB_14011123d;
}

