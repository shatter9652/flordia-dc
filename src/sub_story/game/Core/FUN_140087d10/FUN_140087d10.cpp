// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140087d10  size: 365 bytes
// Name:    FUN_140087d10
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1456a4520
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140087d10(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  code *pcVar9;
  sbyte sVar10;
  char cVar11;
  ulonglong uVar12;
  longlong *plVar13;
  byte bVar14;
  longlong *plVar15;
  
  if (0x800000000000000 < param_2) {
    func_0x000145f3fcb0(&UNK_146779f53);
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  cVar11 = (char)LZCOUNT(param_2 - 1 | 1);
  bVar14 = 0x40 - cVar11;
  uVar12 = (ulonglong)(byte)-cVar11;
  FUN_1456a4520(param_1 + 0x18,2L << (uVar12 & 0x3f),plVar2);
  sVar10 = (bVar14 < 0x41) * ('@' - bVar14);
  *(ulonglong *)(param_1 + 0x30) = (ulonglong)(-1L << sVar10) >> sVar10;
  *(longlong *)(param_1 + 0x38) = 1L << (uVar12 & 0x3f);
  plVar15 = (longlong *)**(undefined8 **)(param_1 + 8);
LAB_140087d82:
  do {
    if (plVar15 == plVar2) {
      return;
    }
    plVar3 = (longlong *)*plVar15;
    uVar12 = func_0x000144efd510(plVar15 + 2);
    uVar12 = uVar12 & *(ulonglong *)(param_1 + 0x30);
    lVar4 = *(longlong *)(param_1 + 0x18);
    lVar1 = uVar12 * 2 + 1;
    plVar5 = *(longlong **)(lVar4 + uVar12 * 0x10);
    if (plVar5 == plVar2) {
      *(longlong **)(lVar4 + uVar12 * 0x10) = plVar15;
LAB_140087dbf:
      *(longlong **)(lVar4 + lVar1 * 8) = plVar15;
      plVar15 = plVar3;
      goto LAB_140087d82;
    }
    plVar13 = *(longlong **)(lVar4 + lVar1 * 8);
    lVar6 = plVar15[2];
    if (lVar6 == plVar13[2]) {
      plVar13 = (longlong *)*plVar13;
      if (plVar13 != plVar15) {
        plVar5 = (longlong *)plVar15[1];
        *plVar5 = (longlong)plVar3;
        puVar8 = (undefined8 *)plVar3[1];
        *puVar8 = plVar13;
        puVar7 = (undefined8 *)plVar13[1];
        *puVar7 = plVar15;
        plVar13[1] = (longlong)puVar8;
        plVar3[1] = (longlong)plVar5;
        plVar15[1] = (longlong)puVar7;
      }
      goto LAB_140087dbf;
    }
    do {
      if (plVar5 == plVar13) {
        plVar5 = (longlong *)plVar15[1];
        *plVar5 = (longlong)plVar3;
        puVar8 = (undefined8 *)plVar3[1];
        *puVar8 = plVar13;
        puVar7 = (undefined8 *)plVar13[1];
        *puVar7 = plVar15;
        plVar13[1] = (longlong)puVar8;
        plVar3[1] = (longlong)plVar5;
        plVar15[1] = (longlong)puVar7;
        *(longlong **)(lVar4 + uVar12 * 0x10) = plVar15;
        plVar15 = plVar3;
        goto LAB_140087d82;
      }
      plVar13 = (longlong *)plVar13[1];
    } while (lVar6 != plVar13[2]);
    plVar5 = (longlong *)plVar15[1];
    lVar1 = *plVar13;
    *plVar5 = (longlong)plVar3;
    plVar13 = (longlong *)plVar3[1];
    *plVar13 = lVar1;
    puVar8 = *(undefined8 **)(lVar1 + 8);
    *puVar8 = plVar15;
    *(longlong **)(lVar1 + 8) = plVar13;
    plVar3[1] = (longlong)plVar5;
    plVar15[1] = (longlong)puVar8;
    plVar15 = plVar3;
  } while( true );
}

