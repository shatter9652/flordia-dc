// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140034db0  size: 133 bytes
// Name:    FUN_140034db0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1450286b0, FUN_145220050, FUN_144e4a420
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


longlong * FUN_140034db0(longlong *param_1,ulonglong param_2,longlong param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lStack_30;
  uint uStack_24;
  char cStack_20;
  longlong lStack_18;
  
  plVar1 = (longlong *)FUN_145220050(param_1,param_2 & 0xffffffff | 0x1400000000);
  *plVar1 = param_3;
  uVar3 = *(uint *)((longlong)param_1 + 0x14);
  if (0x3fffffff < uVar3) {
    if ((uVar3 & 0x7ffe) != 0) {
      plVar1 = (longlong *)FUN_144e4a420(*param_1,(ulonglong)((uVar3 & 0x7fff) << 5) + *param_1);
      uVar3 = *(uint *)((longlong)param_1 + 0x14);
    }
    *(uint *)((longlong)param_1 + 0x14) = uVar3 & 0x3fffffff;
  }
  if (param_3 != 0) {
    puVar2 = (undefined8 *)FUN_1450286b0();
    lStack_18 = param_3;
    plVar1 = (longlong *)FUN_14526d4f0(*puVar2,&lStack_30);
    if (cStack_20 == '\x01') {
      plVar1 = (longlong *)(lStack_30 + 8 + (ulonglong)uStack_24 * 0x18);
      *(undefined4 *)(plVar1 + 1) = 5;
      *plVar1 = param_3;
      LOCK();
      *(int *)(param_3 + 0x30) = *(int *)(param_3 + 0x30) + 1;
      UNLOCK();
      return plVar1;
    }
    return plVar1;
  }
  return plVar1;
}

