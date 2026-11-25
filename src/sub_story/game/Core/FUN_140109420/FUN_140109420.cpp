// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140109420  size: 122 bytes
// Name:    FUN_140109420
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144fb0380
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Possible PIC construction at 0x000140003bda: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000140003bdf) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140109420(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  code *pcVar4;
  longlong *plVar5;
  char cVar6;
  longlong *plVar7;
  longlong unaff_GS_OFFSET;
  longlong *plStack_28;
  longlong *plStack_20;
  
  if (*(longlong *)(param_1 + 0x1a8) != 0) {
    FUN_144fb0380();
    *(undefined8 *)(param_1 + 0x1a8) = 0;
  }
  puVar2 = *(undefined8 **)(param_1 + 0x1b0);
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
    *(undefined8 *)(param_1 + 0x1b0) = 0;
  }
  *(undefined **)(param_1 + 0x180) = &UNK_1466d12f8;
  if ((*(short *)(param_1 + 0x19a) == 0) || (uVar3 = *(ulonglong *)(param_1 + 400), uVar3 == 0)) {
    return;
  }
  if (uVar3 != 0) {
    if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8)
                 + 8) == '\0') {
      func_0x0001455db994();
    }
    plVar5 = _DAT_14aad45b0;
    lVar1 = **(longlong **)(unaff_GS_OFFSET + 0x58);
    plVar7 = *(longlong **)(lVar1 + 0x13a8);
    if (plVar7 == (longlong *)0x0) {
      if (*(char *)(*(longlong *)
                     (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8) ==
          '\0') {
        func_0x0001455db994();
      }
      *(longlong **)(lVar1 + 0x13a8) = plVar5;
      plVar7 = plVar5;
    }
    cVar6 = (**(code **)(*plVar7 + 200))(plVar7,uVar3);
    if (cVar6 != '\0') {
code_r0x000140093420:
      if (uVar3 == 0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x00014009342c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar7 + 0x10))();
      return;
    }
    if (((uVar3 < _DAT_149e1dac0) || (_DAT_149e1dac0 + _DAT_149e1dac8 <= uVar3)) &&
       ((uVar3 < _DAT_149e1dad0 || (_DAT_149e1dad0 + _DAT_149e1dac8 <= uVar3)))) {
      FUN_14005a140(&plStack_28);
      do {
        if (plStack_28 == (longlong *)0x0) {
LAB_140003bea:
          FUN_14005a120(&plStack_28);
LAB_140003bf4:
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        cVar6 = (**(code **)(*plStack_28 + 200))(plStack_28,uVar3);
        plVar7 = plStack_28;
        if (cVar6 != '\0') {
          FUN_14005a120(&plStack_28);
          if (plVar7 != (longlong *)0x0) goto code_r0x000140093420;
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

