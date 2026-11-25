// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400e87b0  size: 97 bytes
// Name:    FUN_1400e87b0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


byte FUN_1400e87b0(uint *param_1,ushort param_2,uint param_3)

{
  undefined4 uVar1;
  char cVar2;
  char cVar3;
  byte bVar4;
  byte bVar5;
  uint *puVar6;
  longlong *plVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  if (param_2 != 0) {
    uVar8 = (ulonglong)param_2;
    puVar6 = param_1;
    do {
      uVar10 = uVar8 >> 1;
      uVar9 = ~uVar10 + uVar8;
      uVar8 = uVar10;
      if ((puVar6 + uVar10 * 4 + 4)[-4] < param_3) {
        puVar6 = puVar6 + uVar10 * 4 + 4;
        uVar8 = uVar9;
      }
    } while (0 < (longlong)uVar8);
    if (((puVar6 != param_1 + (ulonglong)param_2 * 4) && (*puVar6 == param_3)) &&
       (plVar7 = *(longlong **)(puVar6 + 2), plVar7 != (longlong *)0x0)) {
      if (*(code **)(*plVar7 + 0x28) == (code *)&SUB_144df8430) {
        plVar7 = plVar7 + 3;
      }
      else {
        plVar7 = (longlong *)(**(code **)(*plVar7 + 0x28))();
      }
      cVar2 = func_0x000145229600(*(undefined1 *)((longlong)plVar7 + 0x22));
      cVar3 = func_0x0001452295f0((short)plVar7[4]);
      bVar4 = 0;
      if ((cVar3 == '\0') && (cVar2 != '\0')) {
        uVar1 = *(undefined4 *)((longlong)plVar7 + 0x1c);
        bVar4 = func_0x000145090400(uVar1);
        bVar5 = func_0x000144da4370(uVar1);
        bVar4 = bVar5 ^ 1 | bVar4;
      }
      return bVar4;
    }
  }
  return 0;
}

