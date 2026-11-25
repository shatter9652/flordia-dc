// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140109030  size: 100 bytes
// Name:    FUN_140109030
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1401090a0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Possible PIC construction at 0x000140109069: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000140003bda: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00014010906e) */
/* WARNING: Removing unreachable block (ram,0x000140003bdf) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140109030(undefined8 *param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  code *pcVar5;
  longlong *plVar6;
  char cVar7;
  longlong *plVar8;
  longlong unaff_GS_OFFSET;
  longlong *plStack_58;
  longlong *plStack_50;
  
  *param_1 = &UNK_1466d1590;
  FUN_1401090a0();
  puVar3 = (undefined8 *)param_1[10];
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar3 + 2);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  puVar3 = (undefined8 *)param_1[0xb];
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar3 + 2);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  uVar4 = param_1[9];
  if (uVar4 == 0) {
    return;
  }
  if (uVar4 != 0) {
    if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8)
                 + 8) == '\0') {
      func_0x0001455db994();
    }
    plVar6 = _DAT_14aad45b0;
    lVar2 = **(longlong **)(unaff_GS_OFFSET + 0x58);
    plVar8 = *(longlong **)(lVar2 + 0x13a8);
    if (plVar8 == (longlong *)0x0) {
      if (*(char *)(*(longlong *)
                     (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8) ==
          '\0') {
        func_0x0001455db994();
      }
      *(longlong **)(lVar2 + 0x13a8) = plVar6;
      plVar8 = plVar6;
    }
    cVar7 = (**(code **)(*plVar8 + 200))(plVar8,uVar4);
    if (cVar7 != '\0') {
code_r0x000140093420:
      if (uVar4 == 0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x00014009342c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar8 + 0x10))();
      return;
    }
    if (((uVar4 < _DAT_149e1dac0) || (_DAT_149e1dac0 + _DAT_149e1dac8 <= uVar4)) &&
       ((uVar4 < _DAT_149e1dad0 || (_DAT_149e1dad0 + _DAT_149e1dac8 <= uVar4)))) {
      FUN_14005a140(&plStack_58);
      do {
        if (plStack_58 == (longlong *)0x0) {
LAB_140003bea:
          FUN_14005a120(&plStack_58);
LAB_140003bf4:
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        cVar7 = (**(code **)(*plStack_58 + 200))(plStack_58,uVar4);
        plVar8 = plStack_58;
        if (cVar7 != '\0') {
          FUN_14005a120(&plStack_58);
          if (plVar8 != (longlong *)0x0) goto code_r0x000140093420;
          goto LAB_140003bf4;
        }
        if (plStack_58 == plStack_50) {
          plStack_58 = (longlong *)0x0;
          goto LAB_140003bea;
        }
        plStack_58 = (longlong *)plStack_58[1];
      } while( true );
    }
  }
  return;
}

