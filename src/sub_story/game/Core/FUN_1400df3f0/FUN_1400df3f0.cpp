// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400df3f0  size: 126 bytes
// Name:    FUN_1400df3f0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400df3f0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  if (param_1 != (longlong *)0x0) {
    func_0x000144e71130((int)param_1[3]);
    *(undefined2 *)((longlong)param_1 + 0x1e) = 0;
    *(undefined4 *)(param_1 + 4) = 0;
    if (*param_1 != 0) {
      func_0x000145f40580(*param_1,0,(ulonglong)*(ushort *)((longlong)param_1 + 0x1c) << 6);
      if (*(short *)((longlong)param_1 + 0x1c) != 0) {
        lVar2 = 0x2a;
        uVar3 = 0;
        do {
          lVar1 = *param_1;
          uVar3 = uVar3 + 1;
          *(undefined8 *)(lVar1 + -10 + lVar2) = 0xffffffff00000000;
          *(undefined1 *)(lVar1 + lVar2) = 0;
          *(undefined2 *)(lVar1 + -2 + lVar2) = 0xffff;
          lVar2 = lVar2 + 0x40;
        } while (uVar3 < *(ushort *)((longlong)param_1 + 0x1c));
      }
    }
  }
  return;
}

