// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400bc0e0  size: 277 bytes
// Name:    FUN_1400bc0e0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Possible PIC construction at 0x000140003bda: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000140003bdf) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400bc0e0(ulonglong param_1)

{
  longlong lVar1;
  code *pcVar2;
  char cVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong unaff_GS_OFFSET;
  longlong *plStack_28;
  longlong *plStack_20;
  
  if (*(ulonglong *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x880) == param_1) {
    *(undefined8 *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x880) = 0;
  }
  else {
    plVar4 = (longlong *)func_0x000144fc99c0(0,1);
    plVar5 = (longlong *)func_0x000144fc99c0(0,3);
    cVar3 = (**(code **)(*plVar4 + 0xc0))(plVar4,param_1);
    if (cVar3 != '\0') {
      uVar6 = (**(code **)(*plVar4 + 0x108))(plVar4,param_1);
      cVar3 = (**(code **)(*plVar4 + 200))(plVar4,uVar6);
      if (cVar3 != '\0') {
        return;
      }
    }
    cVar3 = (**(code **)(*plVar5 + 0xc0))(plVar5,param_1);
    if (cVar3 != '\0') {
      uVar6 = (**(code **)(*plVar5 + 0x108))(plVar5,param_1);
      cVar3 = (**(code **)(*plVar5 + 200))(plVar5,uVar6);
      if (cVar3 != '\0') {
        return;
      }
    }
    if (param_1 < _DAT_149e1dac0 || _DAT_149e1dac0 + _DAT_149e1dac8 <= param_1) {
      if ((param_1 != 0) && (param_1 < _DAT_149e1dad0 || _DAT_149e1dac8 + _DAT_149e1dad0 <= param_1)
         ) {
        if (param_1 != 0) {
          if (*(char *)(*(longlong *)
                         (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8)
              == '\0') {
            func_0x0001455db994();
          }
          plVar5 = _DAT_14aad45b0;
          lVar1 = **(longlong **)(unaff_GS_OFFSET + 0x58);
          plVar4 = *(longlong **)(lVar1 + 0x13a8);
          if (plVar4 == (longlong *)0x0) {
            if (*(char *)(*(longlong *)
                           (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8)
                == '\0') {
              func_0x0001455db994();
            }
            *(longlong **)(lVar1 + 0x13a8) = plVar5;
            plVar4 = plVar5;
          }
          cVar3 = (**(code **)(*plVar4 + 200))(plVar4,param_1);
          if (cVar3 != '\0') {
code_r0x000140093420:
            if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014009342c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(*plVar4 + 0x10))();
              return;
            }
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
              cVar3 = (**(code **)(*plStack_28 + 200))(plStack_28,param_1);
              plVar4 = plStack_28;
              if (cVar3 != '\0') {
                FUN_14005a120(&plStack_28);
                if (plVar4 == (longlong *)0x0) goto LAB_140003bf4;
                goto code_r0x000140093420;
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
    }
  }
  return;
}

