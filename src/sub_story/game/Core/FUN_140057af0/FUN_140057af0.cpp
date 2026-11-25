// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140057af0  size: 259 bytes
// Name:    FUN_140057af0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


ulonglong FUN_140057af0(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  bool bVar5;
  longlong lVar6;
  float *pfVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  longlong *plVar10;
  ulonglong uVar11;
  float fVar12;
  
  uVar8 = param_3;
  lVar6 = func_0x000145162130(param_2);
  cVar2 = *(char *)(param_1 + 0xd0);
  uVar9 = CONCAT71((int7)((ulonglong)uVar8 >> 8),cVar2);
  if ((lVar6 == 0 || cVar2 != '\x01') || ((ulonglong)*(uint *)(lVar6 + 0x3c) == 0)) {
    bVar5 = false;
  }
  else {
    plVar10 = *(longlong **)(lVar6 + 0x40);
    fVar12 = 0.0;
    plVar1 = plVar10 + *(uint *)(lVar6 + 0x3c);
    do {
      lVar6 = *plVar10;
      if ((lVar6 != 0) && (uVar3 = *(uint *)(lVar6 + 0xf4), (ulonglong)uVar3 != 0)) {
        uVar4 = *(undefined4 *)(lVar6 + 0xe4);
        uVar8 = *(undefined8 *)(lVar6 + 0xe8);
        uVar11 = 0;
        pfVar7 = (float *)(*(longlong *)(lVar6 + 0xf8) + 0xc);
        do {
          uVar9 = uVar11 & 0xffffffff;
          lVar6 = func_0x000144fdebb0(uVar4,uVar8,uVar9);
          if ((lVar6 != 0) && (*(int *)(lVar6 + 0x110) == (int)param_3)) {
            fVar12 = fVar12 + *pfVar7;
          }
          uVar11 = uVar11 + 1;
          pfVar7 = pfVar7 + 0x14;
        } while (uVar3 != uVar11);
      }
      plVar10 = plVar10 + 1;
    } while (plVar10 != plVar1);
    uVar9 = CONCAT71((int7)(uVar9 >> 8),cVar2);
    bVar5 = 0.0 < fVar12;
  }
  return CONCAT71((int7)(uVar9 >> 8),~(byte)uVar9 | *(byte *)(param_1 + 0x70) | bVar5) & 0xffffff01;
}

