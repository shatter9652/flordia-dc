// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140163360  size: 1397 bytes
// Name:    FUN_140163360
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1405e62a0, FUN_141feb880, FUN_141feb730, FUN_142f6f6f0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140163360(longlong param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  int *piVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  
  FUN_1405e62a0();
  FUN_141feb730(param_1);
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    func_0x0001404a7ed0();
    *(undefined8 *)(param_1 + 0xb0) = 0;
  }
  FUN_142f6f6f0(param_1);
  FUN_141feb880(param_1);
  lVar4 = *(longlong *)(param_1 + 0x220);
  uVar1 = *(uint *)(param_1 + 0x218);
  if ((ulonglong)uVar1 != 0) {
    lVar8 = 0;
    do {
      if (!SBORROW1('\0',*(char *)(lVar4 + lVar8))) {
        *(undefined1 *)(lVar4 + lVar8) = 0x80;
      }
      if (!SBORROW1('\0',*(char *)(lVar4 + 1 + lVar8))) {
        *(undefined1 *)(lVar4 + 1 + lVar8) = 0x80;
      }
      if (!SBORROW1('\0',*(char *)(lVar4 + 2 + lVar8))) {
        *(undefined1 *)(lVar4 + 2 + lVar8) = 0x80;
      }
      if (!SBORROW1('\0',*(char *)(lVar4 + 3 + lVar8))) {
        *(undefined1 *)(lVar4 + 3 + lVar8) = 0x80;
      }
      if (!SBORROW1('\0',*(char *)(lVar4 + 4 + lVar8))) {
        *(undefined1 *)(lVar4 + 4 + lVar8) = 0x80;
      }
      if (!SBORROW1('\0',*(char *)(lVar4 + 5 + lVar8))) {
        *(undefined1 *)(lVar4 + 5 + lVar8) = 0x80;
      }
      if (!SBORROW1('\0',*(char *)(lVar4 + 6 + lVar8))) {
        *(undefined1 *)(lVar4 + 6 + lVar8) = 0x80;
      }
      if (!SBORROW1('\0',*(char *)(lVar4 + 7 + lVar8))) {
        *(undefined1 *)(lVar4 + 7 + lVar8) = 0x80;
      }
      if (!SBORROW1('\0',*(char *)(lVar4 + 8 + lVar8))) {
        *(undefined1 *)(lVar4 + 8 + lVar8) = 0x80;
      }
      if (!SBORROW1('\0',*(char *)(lVar4 + 9 + lVar8))) {
        *(undefined1 *)(lVar4 + 9 + lVar8) = 0x80;
      }
      if (!SBORROW1('\0',*(char *)(lVar4 + 10 + lVar8))) {
        *(undefined1 *)(lVar4 + 10 + lVar8) = 0x80;
      }
      if (!SBORROW1('\0',*(char *)(lVar4 + 0xb + lVar8))) {
        *(undefined1 *)(lVar4 + 0xb + lVar8) = 0x80;
      }
      if (!SBORROW1('\0',*(char *)(lVar4 + 0xc + lVar8))) {
        *(undefined1 *)(lVar4 + 0xc + lVar8) = 0x80;
      }
      if (!SBORROW1('\0',*(char *)(lVar4 + 0xd + lVar8))) {
        *(undefined1 *)(lVar4 + 0xd + lVar8) = 0x80;
      }
      if (!SBORROW1('\0',*(char *)(lVar4 + 0xe + lVar8))) {
        *(undefined1 *)(lVar4 + 0xe + lVar8) = 0x80;
      }
      if (!SBORROW1('\0',*(char *)(lVar4 + 0xf + lVar8))) {
        *(undefined1 *)(lVar4 + 0xf + lVar8) = 0x80;
      }
      lVar8 = lVar8 + 0x210;
    } while ((ulonglong)uVar1 * 0x210 - lVar8 != 0);
    lVar4 = *(longlong *)(param_1 + 0x220);
  }
  *(undefined4 *)(param_1 + 0x21c) = 0;
  if (lVar4 != 0) {
    func_0x000144d9c130();
  }
  *(undefined4 *)(param_1 + 0x218) = 0;
  *(undefined8 *)(param_1 + 0x220) = 0;
  piVar2 = *(int **)(param_1 + 0x210);
  iVar3 = *(int *)(param_1 + 0x20c);
  piVar5 = piVar2;
  while (iVar3 != 0) {
    if (*piVar5 != 0) {
      iVar3 = iVar3 + -1;
      *piVar5 = 0;
      *(int *)(param_1 + 0x20c) = iVar3;
    }
    piVar5 = piVar5 + 0x18;
  }
  if (piVar2 != (int *)0x0) {
    func_0x000144d9c130();
  }
  *(undefined4 *)(param_1 + 0x208) = 0;
  *(undefined8 *)(param_1 + 0x210) = 0;
  piVar2 = *(int **)(param_1 + 0x200);
  iVar3 = *(int *)(param_1 + 0x1fc);
  piVar5 = piVar2;
  while (iVar3 != 0) {
    if (*piVar5 != 0) {
      *piVar5 = 0;
      iVar3 = *(int *)(param_1 + 0x1fc) + -1;
      *(int *)(param_1 + 0x1fc) = iVar3;
    }
    piVar5 = piVar5 + 3;
  }
  if (piVar2 != (int *)0x0) {
    func_0x000144d9c130();
  }
  *(undefined4 *)(param_1 + 0x1f8) = 0;
  *(undefined8 *)(param_1 + 0x200) = 0;
  *(undefined4 *)(param_1 + 0x1cc) = 0;
  if (*(longlong *)(param_1 + 0x1d0) != 0) {
    func_0x000144d9c130();
  }
  *(undefined4 *)(param_1 + 0x1c8) = 0;
  *(undefined8 *)(param_1 + 0x1d0) = 0;
  *(undefined4 *)(param_1 + 0x18c) = 0;
  if (*(longlong *)(param_1 + 400) != 0) {
    func_0x000144d9c130();
  }
  *(undefined4 *)(param_1 + 0x188) = 0;
  *(undefined8 *)(param_1 + 400) = 0;
  *(undefined4 *)(param_1 + 0x14c) = 0;
  if (*(longlong *)(param_1 + 0x150) != 0) {
    func_0x000144d9c130();
  }
  *(undefined4 *)(param_1 + 0x148) = 0;
  *(undefined8 *)(param_1 + 0x150) = 0;
  *(undefined4 *)(param_1 + 0x10c) = 0;
  if (*(longlong *)(param_1 + 0x110) != 0) {
    func_0x000144d9c130();
  }
  *(undefined4 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined4 *)(param_1 + 0xcc) = 0;
  if (*(longlong *)(param_1 + 0xd0) != 0) {
    func_0x000144d9c130();
  }
  *(undefined4 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  piVar2 = *(int **)(param_1 + 0xa8);
  iVar3 = *(int *)(param_1 + 0xa4);
  piVar5 = piVar2;
  while (iVar3 != 0) {
    if (*piVar5 != 0) {
      iVar3 = iVar3 + -1;
      *piVar5 = 0;
      *(int *)(param_1 + 0xa4) = iVar3;
    }
    piVar5 = piVar5 + 2;
  }
  if (piVar2 != (int *)0x0) {
    func_0x000144d9c130();
  }
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  piVar2 = *(int **)(param_1 + 0x98);
  iVar3 = *(int *)(param_1 + 0x94);
  piVar5 = piVar2;
  while (iVar3 != 0) {
    if (*piVar5 != 0) {
      iVar3 = iVar3 + -1;
      *piVar5 = 0;
      *(int *)(param_1 + 0x94) = iVar3;
    }
    piVar5 = piVar5 + 2;
  }
  if (piVar2 != (int *)0x0) {
    func_0x000144d9c130();
  }
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  piVar2 = *(int **)(param_1 + 0x88);
  iVar3 = *(int *)(param_1 + 0x84);
  piVar5 = piVar2;
  while (iVar3 != 0) {
    if (*piVar5 != 0) {
      iVar3 = iVar3 + -1;
      *piVar5 = 0;
      *(int *)(param_1 + 0x84) = iVar3;
    }
    piVar5 = piVar5 + 2;
  }
  if (piVar2 != (int *)0x0) {
    func_0x000144d9c130();
  }
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  piVar2 = *(int **)(param_1 + 0x78);
  iVar3 = *(int *)(param_1 + 0x74);
  piVar5 = piVar2;
  while (iVar3 != 0) {
    if (*piVar5 != 0) {
      iVar3 = iVar3 + -1;
      *piVar5 = 0;
      *(int *)(param_1 + 0x74) = iVar3;
    }
    piVar5 = piVar5 + 2;
  }
  if (piVar2 != (int *)0x0) {
    func_0x000144d9c130();
  }
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  iVar3 = *(int *)(param_1 + 100);
  if (iVar3 != 0) {
    plVar7 = (longlong *)(*(longlong *)(param_1 + 0x68) + 0x10);
    do {
      if ((int)plVar7[-2] != 0) {
        *(undefined4 *)(plVar7 + -2) = 0;
        *(undefined4 *)((longlong)plVar7 + -4) = 0;
        if (*plVar7 != 0) {
          func_0x000144d9c130();
        }
        *(undefined4 *)(plVar7 + -1) = 0;
        *plVar7 = 0;
        iVar3 = *(int *)(param_1 + 100) + -1;
        *(int *)(param_1 + 100) = iVar3;
      }
      plVar7 = plVar7 + 3;
    } while (iVar3 != 0);
  }
  if (*(longlong *)(param_1 + 0x68) != 0) {
    func_0x000144d9c130();
  }
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  piVar2 = *(int **)(param_1 + 0x58);
  iVar3 = *(int *)(param_1 + 0x54);
  piVar5 = piVar2;
  while (iVar3 != 0) {
    if (*piVar5 != 0) {
      iVar3 = iVar3 + -1;
      *piVar5 = 0;
      *(int *)(param_1 + 0x54) = iVar3;
    }
    piVar5 = piVar5 + 8;
  }
  if (piVar2 != (int *)0x0) {
    func_0x000144d9c130();
  }
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  iVar3 = *(int *)(param_1 + 0x44);
  if (iVar3 != 0) {
    plVar7 = (longlong *)(*(longlong *)(param_1 + 0x48) + 0x10);
    do {
      if ((int)plVar7[-2] != 0) {
        *(undefined4 *)(plVar7 + -2) = 0;
        *(undefined4 *)((longlong)plVar7 + -4) = 0;
        if (*plVar7 != 0) {
          func_0x000144d9c130();
        }
        *(undefined4 *)(plVar7 + -1) = 0;
        *plVar7 = 0;
        iVar3 = *(int *)(param_1 + 0x44) + -1;
        *(int *)(param_1 + 0x44) = iVar3;
      }
      plVar7 = plVar7 + 3;
    } while (iVar3 != 0);
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    func_0x000144d9c130();
  }
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  plVar7 = *(longlong **)(param_1 + 0x20);
  iVar3 = *(int *)(param_1 + 0x1c);
  plVar6 = plVar7;
  while (iVar3 != 0) {
    if (*plVar6 != 0) {
      iVar3 = iVar3 + -1;
      *plVar6 = 0;
      *(int *)(param_1 + 0x1c) = iVar3;
    }
    plVar6 = plVar6 + 3;
  }
  if (plVar7 != (longlong *)0x0) {
    func_0x000144d9c130();
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}

