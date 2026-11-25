// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400601e0  size: 181 bytes
// Name:    FUN_1400601e0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1400601e0(longlong param_1,undefined8 param_2,uint *param_3,undefined1 *param_4)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  uint *puVar4;
  
  if (param_1 == 0) {
    uVar1 = 0x1ffff;
  }
  else {
    uVar1 = (uint)((ulonglong)(param_1 - *_DAT_14a9ec958) / (ulonglong)*(uint *)(_DAT_14a9ec958 + 1)
                  ) & 0x1ffff;
    uVar1 = *(uint *)(_DAT_14a9ec958[5] + (ulonglong)uVar1 * 4) & 0xfffe0000 | uVar1;
  }
  if ((ulonglong)_DAT_14ab42e64 != 0) {
    lVar3 = (ulonglong)_DAT_14ab42e64 * 0xc;
    puVar4 = _DAT_14ab42e68;
    do {
      if ((*puVar4 == uVar1) && (lVar2 = func_0x0001439ccc50(puVar4[1],param_2,0), lVar2 != 0)) {
        *param_3 = puVar4[1];
        *param_4 = (char)puVar4[2];
        return *(undefined8 *)(lVar2 + 8);
      }
      puVar4 = puVar4 + 3;
      lVar3 = lVar3 + -0xc;
    } while (lVar3 != 0);
  }
  return 0;
}

