// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140016490  size: 564 bytes
// Name:    FUN_140016490
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1456a29e0, FUN_144dd85b0, FUN_144dd9600, FUN_1400166d0, FUN_144dd8ee0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140016490(longlong *param_1,longlong param_2,int param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  undefined1 uVar5;
  uint uVar6;
  longlong *plVar7;
  uint uVar8;
  
  if (*(int *)((longlong)param_1 + 0xac) < 1) {
    uVar6 = param_3 + 5;
    iVar2 = 1;
    uVar8 = uVar6;
  }
  else {
    if ((param_3 != 0) && (*(int *)(*param_1 + 0x48) == 2)) {
      func_0x000140016900(param_1);
    }
    FUN_144dd85b0(param_1,param_1 + 0x168);
    FUN_144dd85b0(param_1,param_1 + 0x16b);
    iVar2 = FUN_1400166d0(param_1);
    uVar8 = (int)param_1[0x2e0] + 10U >> 3;
    uVar6 = *(int *)((longlong)param_1 + 0x1704) + 10U >> 3;
    if (uVar6 < uVar8) {
      uVar8 = uVar6;
    }
    iVar2 = iVar2 + 1;
  }
  if ((param_2 == 0) || (uVar8 < param_3 + 4U)) {
    uVar1 = *(uint *)((longlong)param_1 + 0x1714);
    if ((uVar6 == uVar8) || ((int)param_1[0x16] == 4)) {
      uVar8 = (uint)*(ushort *)(param_1 + 0x2e2) | param_4 + 2U << (uVar1 & 0x1f);
      *(short *)(param_1 + 0x2e2) = (short)uVar8;
      if ((int)uVar1 < 0xe) {
        iVar2 = uVar1 + 3;
      }
      else {
        uVar6 = *(uint *)(param_1 + 5);
        *(uint *)(param_1 + 5) = uVar6 + 1;
        *(char *)(param_1[2] + (ulonglong)uVar6) = (char)uVar8;
        uVar8 = *(uint *)(param_1 + 5);
        *(uint *)(param_1 + 5) = uVar8 + 1;
        *(undefined1 *)(param_1[2] + (ulonglong)uVar8) = *(undefined1 *)((longlong)param_1 + 0x1711)
        ;
        iVar2 = *(int *)((longlong)param_1 + 0x1714) + -0xd;
        *(short *)(param_1 + 0x2e2) =
             (short)((param_4 + 2U & 0xffff) >>
                    ((byte)(0x10 - (char)*(int *)((longlong)param_1 + 0x1714)) & 0x1f));
      }
      *(int *)((longlong)param_1 + 0x1714) = iVar2;
      puVar4 = &UNK_14618b270;
      plVar7 = (longlong *)&UNK_14618b6f0;
    }
    else {
      uVar8 = (uint)*(ushort *)(param_1 + 0x2e2) | param_4 + 4U << (uVar1 & 0x1f);
      *(short *)(param_1 + 0x2e2) = (short)uVar8;
      if ((int)uVar1 < 0xe) {
        iVar3 = uVar1 + 3;
      }
      else {
        uVar6 = *(uint *)(param_1 + 5);
        *(uint *)(param_1 + 5) = uVar6 + 1;
        *(char *)(param_1[2] + (ulonglong)uVar6) = (char)uVar8;
        uVar8 = *(uint *)(param_1 + 5);
        *(uint *)(param_1 + 5) = uVar8 + 1;
        *(undefined1 *)(param_1[2] + (ulonglong)uVar8) = *(undefined1 *)((longlong)param_1 + 0x1711)
        ;
        iVar3 = *(int *)((longlong)param_1 + 0x1714) + -0xd;
        *(short *)(param_1 + 0x2e2) =
             (short)((param_4 + 4U & 0xffff) >>
                    ((byte)(0x10 - (char)*(int *)((longlong)param_1 + 0x1714)) & 0x1f));
      }
      *(int *)((longlong)param_1 + 0x1714) = iVar3;
      FUN_144dd8ee0(param_1,(int)param_1[0x169] + 1,(int)param_1[0x16c] + 1,iVar2);
      plVar7 = param_1 + 0x136;
      puVar4 = (undefined *)((longlong)param_1 + 0xbc);
    }
    FUN_144dd9600(param_1,puVar4,plVar7);
  }
  else {
    FUN_1456a29e0(param_1,param_2,param_3,param_4);
  }
  func_0x000144dd8c50(param_1);
  if (param_4 == 0) {
    return;
  }
  if (*(int *)((longlong)param_1 + 0x1714) < 9) {
    if (*(int *)((longlong)param_1 + 0x1714) < 1) goto code_r0x0001400168dd;
    uVar5 = (undefined1)(short)param_1[0x2e2];
  }
  else {
    uVar8 = *(uint *)(param_1 + 5);
    *(uint *)(param_1 + 5) = uVar8 + 1;
    *(char *)(param_1[2] + (ulonglong)uVar8) = (char)param_1[0x2e2];
    uVar5 = *(undefined1 *)((longlong)param_1 + 0x1711);
  }
  uVar8 = *(uint *)(param_1 + 5);
  *(uint *)(param_1 + 5) = uVar8 + 1;
  *(undefined1 *)(param_1[2] + (ulonglong)uVar8) = uVar5;
code_r0x0001400168dd:
  *(undefined2 *)(param_1 + 0x2e2) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1714) = 0;
  return;
}

