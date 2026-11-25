// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140096e60  size: 239 bytes
// Name:    FUN_140096e60
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144f57850, FUN_144d9d7a0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Possible PIC construction at 0x000140096f27: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000140096f2c) */
/* WARNING: Removing unreachable block (ram,0x000140096f40) */
/* WARNING: Removing unreachable block (ram,0x000140096f43) */

undefined1 FUN_140096e60(ulonglong param_1)

{
  short sVar1;
  char cVar2;
  longlong lVar3;
  ulonglong uVar4;
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  uVar4 = param_1 >> 0x10 & 0xffff;
  cVar2 = FUN_144d9d7a0(param_1,uVar4);
  if (cVar2 != '\0') {
    lVar3 = FUN_144f57850(param_1 & 0xffffffff);
    if ((lVar3 != 0) && (*(longlong *)(lVar3 + 400) != 0)) {
      sVar1 = *(short *)(*(longlong *)(lVar3 + 400) + 0xf0);
      if (((uint)param_1 < 0xfffc0000 & (byte)uVar4) == 0) {
        func_0x000144d9d8a0(uVar4,&iStack_34);
      }
      else {
        iStack_34 = -1;
        uStack_2c = 0xffffffff;
        func_0x000144d9d8d0(uVar4,&uStack_30);
        func_0x0001400551d0(*(undefined4 *)(lVar3 + 0x134),*(undefined8 *)(lVar3 + 0x168),&iStack_34
                            ,&uStack_2c,uStack_30);
      }
      return *(undefined1 *)((longlong)iStack_34 + (longlong)(int)sVar1 * 0x1f + 0x14758a029);
    }
  }
  return uRam000000014758a028;
}

