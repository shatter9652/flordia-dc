// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140193ed0  size: 178 bytes
// Name:    FUN_140193ed0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1451e8ce0, FUN_14505ef20
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140193ed0(longlong *param_1,longlong *param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  longlong lStack_48;
  longlong lStack_40;
  longlong lStack_30;
  longlong lStack_28;
  
  lStack_48 = *param_1;
  lStack_40 = param_1[1];
  while( true ) {
    *param_2 = lStack_48;
    *(undefined4 *)(param_2 + 1) = (undefined4)lStack_40;
    if ((lStack_48 != 0) && (sVar1 = FUN_1451e8ce0(param_2), -1 < sVar1)) break;
    FUN_14505ef20(&lStack_48,&lStack_30);
    lStack_48 = lStack_30;
    lStack_40 = lStack_28;
    if (lStack_30 == 0) {
      iVar2 = (**(code **)(*(longlong *)*param_1 + 0xf0))((longlong *)*param_1,(int)param_1[1]);
      if (iVar2 != -1) {
        (**(code **)(*(longlong *)*param_1 + 0x30))((longlong *)*param_1,param_2,0);
        iVar3 = (**(code **)(*(longlong *)*param_2 + 0xf0))((longlong *)*param_2,(int)param_2[1]);
        if (iVar2 < iVar3) {
          return;
        }
      }
      *param_2 = 0;
      *(undefined4 *)(param_2 + 1) = 0xffffffff;
      return;
    }
  }
  return;
}

