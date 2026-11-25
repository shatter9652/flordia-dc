// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401a30f0  size: 311 bytes
// Name:    FUN_1401a30f0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1401a3260, FUN_144dd3550, FUN_144e7e0f0, FUN_144dd3330, FUN_144e681a0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1401a30f0(longlong param_1,longlong param_2,longlong *param_3)

{
  undefined4 uVar1;
  int iVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  ulonglong uVar10;
  int iStack_74;
  undefined4 auStack_70 [8];
  undefined8 uStack_50;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    if (*(char *)(param_2 + 0xc) != '\0') {
      uVar10 = 0;
      do {
        uVar1 = *(undefined4 *)(param_2 + 0x10 + uVar10 * 4);
        uVar4 = func_0x000144ddb100(0);
        FUN_144dd3330(uVar1,auStack_70);
        lVar5 = FUN_144dd3550(uVar4,auStack_70[0],0x73);
        if (lVar5 != 0) {
          lVar6 = param_3[6];
          *(int *)(param_3 + 6) = (int)lVar6 + 1;
          param_3[(int)lVar6] = lVar5;
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 < *(byte *)(param_2 + 0xc));
    }
    func_0x0001401a3230(auStack_70);
    while (cVar3 = FUN_144e681a0(*(undefined4 *)(param_1 + 0x9c),auStack_70), cVar3 != '\0') {
      FUN_1401a3260(uStack_50,&iStack_74);
      iVar2 = iStack_74;
      if (iStack_74 != 0) {
        uVar4 = func_0x000144ddb100(0);
        lVar5 = FUN_144e7e0f0(uVar4,iVar2,0x73);
        if (lVar5 != 0) {
          iVar2 = (int)param_3[6];
          lVar6 = (longlong)iVar2;
          plVar8 = param_3;
          if (lVar6 != 0) {
            lVar9 = lVar6 * 8;
            plVar7 = param_3;
            do {
              plVar8 = plVar7;
              if (*plVar7 == lVar5) break;
              plVar7 = plVar7 + 1;
              lVar9 = lVar9 + -8;
              plVar8 = param_3 + lVar6;
            } while (lVar9 != 0);
          }
          if (iVar2 != 6 && plVar8 == param_3 + lVar6) {
            *(int *)(param_3 + 6) = iVar2 + 1;
            param_3[lVar6] = lVar5;
          }
        }
      }
    }
  }
  return;
}

