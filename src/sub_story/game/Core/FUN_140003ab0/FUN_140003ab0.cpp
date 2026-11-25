// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140003ab0  size: 333 bytes
// Name:    FUN_140003ab0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14005a140, FUN_14005a120
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Possible PIC construction at 0x000140003bda: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000140003bdf) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140003ab0(ulonglong param_1)

{
  longlong lVar1;
  code *pcVar2;
  longlong *plVar3;
  char cVar4;
  longlong *plVar5;
  longlong unaff_GS_OFFSET;
  longlong *plStack_28;
  longlong *plStack_20;
  
  if (param_1 != 0) {
    if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8)
                 + 8) == '\0') {
      func_0x0001455db994();
    }
    plVar3 = _DAT_14aad45b0;
    lVar1 = **(longlong **)(unaff_GS_OFFSET + 0x58);
    plVar5 = *(longlong **)(lVar1 + 0x13a8);
    if (plVar5 == (longlong *)0x0) {
      if (*(char *)(*(longlong *)
                     (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8) ==
          '\0') {
        func_0x0001455db994();
      }
      *(longlong **)(lVar1 + 0x13a8) = plVar3;
      plVar5 = plVar3;
    }
    cVar4 = (**(code **)(*plVar5 + 200))(plVar5,param_1);
    if (cVar4 != '\0') {
code_r0x000140093420:
      if (param_1 == 0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x00014009342c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar5 + 0x10))();
      return;
    }
    if (((param_1 < _DAT_149e1dac0) || (_DAT_149e1dac0 + _DAT_149e1dac8 <= param_1)) &&
       ((param_1 < _DAT_149e1dad0 || (_DAT_149e1dad0 + _DAT_149e1dac8 <= param_1)))) {
      FUN_14005a140(&plStack_28);
      do {
        if (plStack_28 == (longlong *)0x0) {
LAB_140003bea:
          FUN_14005a120(&plStack_28);
LAB_140003bf4:
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        cVar4 = (**(code **)(*plStack_28 + 200))(plStack_28,param_1);
        plVar5 = plStack_28;
        if (cVar4 != '\0') {
          FUN_14005a120(&plStack_28);
          if (plVar5 != (longlong *)0x0) goto code_r0x000140093420;
          goto LAB_140003bf4;
        }
        if (plStack_28 == plStack_20) {
          plStack_28 = (longlong *)0x0;
          goto LAB_140003bea;
        }
        plStack_28 = (longlong *)plStack_28[1];
      } while( true );
    }
  }
  return;
}

