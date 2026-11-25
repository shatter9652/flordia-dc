// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14003a430  size: 119 bytes
// Name:    FUN_14003a430
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14003a430(longlong param_1)

{
  uint uVar1;
  ushort uVar2;
  int iVar3;
  ulonglong *puVar4;
  short sVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (((_DAT_1471287fc >> (uVar1 & 0x1f) & 1) != 0) && (_DAT_147128808 != 0)) {
    for (puVar4 = *(ulonglong **)
                   (_DAT_147128800 + ((ulonglong)uVar1 % (ulonglong)_DAT_147128808) * 8);
        puVar4 != (ulonglong *)0x0; puVar4 = (ulonglong *)puVar4[2]) {
      if (*puVar4 == (ulonglong)uVar1) {
        iVar3 = *(ushort *)(param_1 + 0xe) - 500;
        uVar2 = (ushort)iVar3;
        if (iVar3 < (int)(uint)*(ushort *)(param_1 + 0xc)) {
          uVar2 = *(ushort *)(param_1 + 0xc);
        }
        *(ushort *)(param_1 + 0xc) = uVar2;
        return;
      }
    }
  }
  uVar2 = func_0x0001455a9ed0();
  sVar5 = -1;
  if (!CARRY2(uVar2,*(ushort *)(param_1 + 0xc))) {
    sVar5 = uVar2 + *(ushort *)(param_1 + 0xc);
  }
  *(short *)(param_1 + 0xc) = sVar5;
  return;
}

