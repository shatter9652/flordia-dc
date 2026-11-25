// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140161c00  size: 43 bytes
// Name:    FUN_140161c00
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140161c30
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Possible PIC construction at 0x000140003bda: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000140003bdf) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140161c00(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  code *pcVar3;
  longlong *plVar4;
  char cVar5;
  longlong *plVar6;
  longlong unaff_GS_OFFSET;
  longlong *plStack_28;
  longlong *plStack_20;
  
  FUN_140161c30();
  uVar2 = *(ulonglong *)(param_1 + 8);
  if (uVar2 == 0) {
    return;
  }
  if (uVar2 != 0) {
    if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8)
                 + 8) == '\0') {
      func_0x0001455db994();
    }
    plVar4 = _DAT_14aad45b0;
    lVar1 = **(longlong **)(unaff_GS_OFFSET + 0x58);
    plVar6 = *(longlong **)(lVar1 + 0x13a8);
    if (plVar6 == (longlong *)0x0) {
      if (*(char *)(*(longlong *)
                     (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8) ==
          '\0') {
        func_0x0001455db994();
      }
      *(longlong **)(lVar1 + 0x13a8) = plVar4;
      plVar6 = plVar4;
    }
    cVar5 = (**(code **)(*plVar6 + 200))(plVar6,uVar2);
    if (cVar5 != '\0') {
code_r0x000140093420:
      if (uVar2 == 0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x00014009342c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar6 + 0x10))();
      return;
    }
    if (((uVar2 < _DAT_149e1dac0) || (_DAT_149e1dac0 + _DAT_149e1dac8 <= uVar2)) &&
       ((uVar2 < _DAT_149e1dad0 || (_DAT_149e1dad0 + _DAT_149e1dac8 <= uVar2)))) {
      FUN_14005a140(&plStack_28);
      do {
        if (plStack_28 == (longlong *)0x0) {
LAB_140003bea:
          FUN_14005a120(&plStack_28);
LAB_140003bf4:
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        cVar5 = (**(code **)(*plStack_28 + 200))(plStack_28,uVar2);
        plVar6 = plStack_28;
        if (cVar5 != '\0') {
          FUN_14005a120(&plStack_28);
          if (plVar6 != (longlong *)0x0) goto code_r0x000140093420;
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

