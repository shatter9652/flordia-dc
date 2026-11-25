// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400179c0  size: 147 bytes
// Name:    FUN_1400179c0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400179c0(longlong *param_1,ulonglong param_2)

{
  short *psVar1;
  int iVar2;
  longlong lVar3;
  
  if (_DAT_14ab73aa0 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = (ulonglong)((uint)*(ushort *)((longlong)param_1 + 0x76) * _DAT_14ab73a88) +
            *(longlong *)
             (_DAT_14ab73aa0 + 0x8ab8 + (ulonglong)*(byte *)((longlong)param_1 + 0x7e) * 0x8ad0);
  }
  if ((param_2 & 2) == 0) {
    iVar2 = (**(code **)(*param_1 + 0x58))
                      (param_1,*(undefined8 *)(lVar3 + 0x1a8),lVar3,lVar3 + 8,lVar3 + 0xa0);
    if (iVar2 == 0) goto LAB_140017a2b;
  }
  func_0x000140017720(param_1);
LAB_140017a2b:
  LOCK();
  psVar1 = (short *)(_DAT_14ab73aa0 + 0x8ace +
                    (ulonglong)*(byte *)((longlong)param_1 + 0x7e) * 0x8ad0);
  *psVar1 = *psVar1 + -1;
  UNLOCK();
  *(byte *)((longlong)param_1 + 0xf7) = *(byte *)((longlong)param_1 + 0xf7) | 2;
  return;
}

