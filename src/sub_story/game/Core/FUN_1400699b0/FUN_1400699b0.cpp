// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400699b0  size: 799 bytes
// Name:    FUN_1400699b0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144dd1ea0, FUN_1408de3e0, FUN_144e55330
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400699b0(longlong param_1,undefined8 param_2,undefined8 param_3,int param_4,
                  undefined4 param_5,undefined4 param_6,uint param_7)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  bool bVar8;
  byte bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  int aiStack_64 [3];
  undefined8 auStack_58 [3];
  
  if ((*(byte *)(param_1 + 0x33d) & 2) == 0) {
    bVar10 = param_4 == 0x12;
    bVar11 = param_4 == 0x56;
    uVar7 = (*(ushort *)(param_1 + 0x14) & 0x7fff) >> (param_7 & 0x1f) & 7;
    bVar12 = uVar7 == 7;
    if (((*(byte *)(param_1 + 0x33c) & 0x20) != 0) ||
       ((bVar12 && (bVar11 || bVar10)) && (*(byte *)(param_1 + 0x33c) & 0x40) != 0)) {
      bVar8 = (!bVar12 && (bVar11 || bVar10)) != (param_4 != 0x15 && param_4 != 0x54);
    }
    else {
      bVar8 = false;
    }
    plVar3 = *(longlong **)(param_1 + 0x300);
    iVar5 = 1;
    if ((((plVar3 == (longlong *)0x0) || (plVar3[1] == 0)) ||
        (*(short *)((longlong)plVar3 + 0x2a) == 0)) || (cVar1 = FUN_1408de3e0(), cVar1 == '\0')) {
      uVar2 = 0;
      auStack_58[2] = 0;
      aiStack_64[0] = 0;
    }
    else {
      iVar5 = ((*(uint *)(plVar3 + 8) >> 4 & 1) != 0) + 1;
      uVar2 = (**(code **)(*plVar3 + 0x68))(plVar3);
      auStack_58[2] = (**(code **)(**(longlong **)(param_1 + 0x300) + 0x70))();
      aiStack_64[0] = 1;
    }
    if ((!bVar12 || !bVar11 && !bVar10) || ((*(byte *)(param_1 + 0x33c) & 0x40) != 0)) {
      auStack_58[0] = uVar2;
      auStack_58[1] = uVar2;
      lVar4 = 0;
      lVar6 = (ulonglong)(uint)(iVar5 + aiStack_64[0]) << 2;
      aiStack_64[1] = 2;
      aiStack_64[2] = 2;
      if (bVar8) {
        bVar9 = 0;
        do {
          FUN_144dd1ea0(param_1,param_2,param_3,param_4,param_5,bVar9,param_6,uVar7 != 7,
                        &stack0x00000040,&stack0x00000048,
                        *(undefined4 *)((longlong)aiStack_64 + lVar4),
                        *(undefined8 *)((longlong)auStack_58 + lVar4 * 2),param_1 + 0x2f0);
          plVar3 = (longlong *)FUN_144e55330(param_1,param_5,bVar9);
          if (((plVar3 != (longlong *)0x0) && ((*(byte *)(*plVar3 + 0x88) & 2) != 0)) &&
             ((*(uint *)(plVar3 + 0x14) & 0x400000) != 0)) {
            *(byte *)((longlong)plVar3 + 0xa4) = *(byte *)((longlong)plVar3 + 0xa4) | 1;
          }
          bVar9 = bVar9 & (&UNK_14646d890)[lVar4] | (&UNK_14646d89c)[lVar4];
          lVar4 = lVar4 + 4;
        } while (lVar6 != lVar4);
      }
      else {
        bVar9 = 0;
        do {
          FUN_144dd1ea0(param_1,param_2,param_3,param_4,param_5,bVar9,param_6,uVar7 != 7,
                        &stack0x00000040,&stack0x00000048,
                        *(undefined4 *)((longlong)aiStack_64 + lVar4),
                        *(undefined8 *)((longlong)auStack_58 + lVar4 * 2),param_1 + 0x2f0);
          if ((((*(byte *)(param_1 + 0x33d) & 8) != 0) &&
              (plVar3 = (longlong *)FUN_144e55330(param_1,param_5,bVar9), plVar3 != (longlong *)0x0)
              ) && (((*(byte *)(*plVar3 + 0x88) & 2) != 0 &&
                    ((*(uint *)(plVar3 + 0x14) & 0x400000) != 0)))) {
            plVar3[9] = 0;
            *(undefined1 (*) [32])(plVar3 + 5) = ZEXT1232(ZEXT812(0));
          }
          bVar9 = bVar9 & (&UNK_14646d890)[lVar4] | (&UNK_14646d89c)[lVar4];
          lVar4 = lVar4 + 4;
        } while (lVar6 != lVar4);
      }
    }
  }
  return;
}

