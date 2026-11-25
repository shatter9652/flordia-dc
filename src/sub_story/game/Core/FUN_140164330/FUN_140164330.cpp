// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140164330  size: 320 bytes
// Name:    FUN_140164330
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 * FUN_140164330(undefined8 *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  *param_1 = &UNK_1463b72c0;
  piVar2 = (int *)param_1[0x9e];
  iVar1 = *(int *)((longlong)param_1 + 0x4ec);
  if (iVar1 != 0) {
    do {
      if (*piVar2 != 0) {
        *piVar2 = 0;
        if ((*(short *)((longlong)piVar2 + 0x2a) != 0) && (*(longlong *)(piVar2 + 8) != 0)) {
          func_0x000144d9c130();
        }
        if ((*(short *)((longlong)piVar2 + 0x1a) != 0) && (*(longlong *)(piVar2 + 4) != 0)) {
          func_0x000144d9c130();
        }
        iVar1 = *(int *)((longlong)param_1 + 0x4ec) + -1;
        *(int *)((longlong)param_1 + 0x4ec) = iVar1;
      }
      piVar2 = piVar2 + 0xc;
    } while (iVar1 != 0);
    piVar2 = (int *)param_1[0x9e];
  }
  if (piVar2 != (int *)0x0) {
    func_0x000144d9c130(piVar2);
  }
  *(undefined4 *)(param_1 + 0x9d) = 0;
  param_1[0x9e] = 0;
  if ((*(short *)((longlong)param_1 + 0x4e2) != 0) && (param_1[0x9b] != 0)) {
    func_0x000144d9c130();
  }
  if ((*(short *)((longlong)param_1 + 0x46a) != 0) && (param_1[0x8c] != 0)) {
    func_0x000144d9c130();
  }
  if ((*(short *)((longlong)param_1 + 0x45a) != 0) && (param_1[0x8a] != 0)) {
    func_0x000144d9c130();
  }
  func_0x000144fb0750(param_1[0x85]);
  *param_1 = &UNK_1463b9670;
  if ((*(short *)((longlong)param_1 + 0x12) != 0) && (param_1[1] != 0)) {
    func_0x000144d9c130();
  }
  if (param_2 != 0) {
    func_0x000144d9c130(param_1,0x550);
  }
  return param_1;
}

