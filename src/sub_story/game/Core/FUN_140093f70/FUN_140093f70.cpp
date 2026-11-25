// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140093f70  size: 83 bytes
// Name:    FUN_140093f70
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140093f70(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  
  lVar2 = *param_1;
  do {
    if (lVar2 == 0) {
      return;
    }
    lVar1 = *(longlong *)(lVar2 + 8);
    plVar4 = param_1;
    lVar3 = *param_1;
    if (*param_1 != lVar2) {
      do {
        lVar5 = lVar3;
        if (lVar5 == 0) goto LAB_140093f93;
        lVar3 = *(longlong *)(lVar5 + 8);
      } while (*(longlong *)(lVar5 + 8) != lVar2);
      plVar4 = (longlong *)(lVar5 + 8);
    }
    *plVar4 = lVar1;
LAB_140093f93:
    func_0x000144d9c130(lVar2,0x10);
    lVar2 = lVar1;
  } while( true );
}

