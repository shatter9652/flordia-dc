// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401851d0  size: 558 bytes
// Name:    FUN_1401851d0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1401875d0, FUN_1401854d0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_1401851d0(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  ulonglong *puVar2;
  float fVar3;
  ulonglong uVar4;
  char cVar5;
  uint uVar6;
  longlong *plVar7;
  longlong *plVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong *puVar14;
  ulonglong uVar15;
  
  if (param_2 == 0) {
    return (longlong *)0x0;
  }
  lVar12 = *(longlong *)(param_1 + 0x20);
  if (lVar12 != 0) {
    uVar6 = func_0x000140185400(param_2,param_3);
    uVar10 = (ulonglong)(uVar6 & *(uint *)(lVar12 + 8));
    if ((*(longlong *)(lVar12 + 0x10 + uVar10 * 0x18) != -2) &&
       (puVar14 = (ulonglong *)(lVar12 + 0x10 + uVar10 * 0x18), puVar14[1] == uVar10)) {
      uVar9 = uVar10;
      uVar15 = uVar10;
      do {
        if (uVar9 == uVar10) {
          uVar9 = puVar14[2];
          cVar5 = func_0x000140185450(*(undefined8 *)(uVar9 + 0x30),param_2);
          if (cVar5 != '\0') {
            if (*(longlong *)(param_2 + 0x30) != 0) {
              fVar3 = *(float *)(uVar9 + 0x40);
              if ((fVar3 != (float)param_3) || (NAN(fVar3) || NAN((float)param_3)))
              goto LAB_140185268;
            }
            if (-1 < (longlong)uVar15) {
              plVar1 = *(longlong **)(lVar12 + 0x20 + uVar15 * 0x18);
              (**(code **)(*plVar1 + 8))(plVar1);
              return plVar1;
            }
            break;
          }
        }
LAB_140185268:
        uVar15 = *puVar14;
        if (uVar15 == 0xffffffffffffffff) break;
        puVar14 = (ulonglong *)(lVar12 + 0x10 + uVar15 * 0x18);
        uVar9 = puVar14[1];
      } while( true );
    }
  }
  plVar1 = (longlong *)(param_1 + 0x20);
  plVar7 = (longlong *)(**(code **)(*_DAT_14abcc310 + 0x70))(_DAT_14abcc310,param_1,0x48);
  FUN_1401854d0(plVar7,param_1,param_2,param_3);
  if (plVar7[6] == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = func_0x000140185400(plVar7[6],(int)plVar7[8]);
  }
  plVar8 = (longlong *)*plVar1;
  if (plVar8 == (longlong *)0x0) {
    lVar12 = 8;
  }
  else {
    lVar12 = *plVar8;
    uVar10 = plVar8[1];
    if ((ulonglong)(lVar12 * 5) <= uVar10 * 4 + 4) goto LAB_140185319;
    lVar12 = (uVar10 + 1) * 2;
  }
  FUN_1401875d0(plVar1,plVar1,lVar12);
  plVar8 = (longlong *)*plVar1;
  lVar12 = *plVar8;
  uVar10 = plVar8[1];
LAB_140185319:
  uVar11 = (ulonglong)(uVar6 & (uint)uVar10);
  *plVar8 = lVar12 + 1;
  puVar14 = (ulonglong *)(plVar8 + uVar11 * 3 + 2);
  uVar15 = *puVar14;
  uVar9 = uVar11;
  if (uVar15 == 0xfffffffffffffffe) {
    *puVar14 = 0xffffffffffffffff;
    puVar14[2] = (ulonglong)plVar7;
  }
  else {
    do {
      uVar9 = uVar9 + 1 & uVar10;
    } while (plVar8[uVar9 * 3 + 2] != -2);
    puVar2 = (ulonglong *)(plVar8 + uVar9 * 3 + 2);
    uVar10 = puVar14[1];
    uVar4 = uVar10;
    if (uVar10 == uVar11) {
      *puVar2 = uVar15;
      puVar2[1] = uVar11;
      puVar2[2] = puVar14[2];
    }
    else {
      do {
        uVar13 = uVar4;
        uVar4 = plVar8[uVar13 * 3 + 2];
      } while (plVar8[uVar13 * 3 + 2] != uVar11);
      *puVar2 = uVar15;
      puVar2[1] = uVar10;
      puVar2[2] = puVar14[2];
      plVar8[uVar13 * 3 + 2] = uVar9;
      uVar9 = 0xffffffffffffffff;
    }
    puVar14[2] = (ulonglong)plVar7;
    *puVar14 = uVar9;
  }
  puVar14[1] = uVar11;
  return plVar7;
}

