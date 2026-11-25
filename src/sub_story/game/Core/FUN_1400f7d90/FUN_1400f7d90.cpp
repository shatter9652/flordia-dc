// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400f7d90  size: 299 bytes
// Name:    FUN_1400f7d90
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14588f860, FUN_144f90330, FUN_145c06bb0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Possible PIC construction at 0x000140003bda: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000140003bdf) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400f7d90(longlong param_1)

{
  longlong lVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined8 uVar5;
  longlong *plVar6;
  char cVar7;
  longlong *plVar8;
  longlong unaff_GS_OFFSET;
  undefined8 uStack_40;
  undefined1 auStack_38 [16];
  longlong *plStack_28;
  longlong *plStack_20;
  
  uVar5 = uRam0000000148527df8;
  *(undefined8 *)(param_1 + 0x7b0) = _DAT_148527df0;
  *(undefined8 *)(param_1 + 0x7b8) = uVar5;
  func_0x000144f2b0e0(&plStack_28);
  auVar3._8_8_ = uRam0000000148527df8;
  auVar3._0_8_ = _DAT_148527df0;
  auVar4._8_8_ = plStack_20;
  auVar4._0_8_ = plStack_28;
  auVar3 = vsubps_avx(auVar3,auVar4);
  *(undefined1 (*) [16])(param_1 + 0x7c0) = auVar3;
  func_0x000145f40560(param_1 + 2000,param_1 + 0x20,0x730);
  if (*(int *)(param_1 + 0x1200) == 0) {
    FUN_145c06bb0(param_1 + 0x1200,0x800);
  }
  *(undefined4 *)(param_1 + 0x1204) = 0;
  if (*(int *)(param_1 + 0x1210) == 0) {
    FUN_14588f860(param_1 + 0x1210,0x800);
  }
  *(undefined4 *)(param_1 + 0x1214) = 0;
  auStack_38._0_12_ = ZEXT812(0);
  auStack_38._12_4_ = 0;
  uStack_40 = 0;
  FUN_144f90330(param_1 + 0x1200,auStack_38,param_1 + 0x1210,0,0x800,&uStack_40,0,1,0x40a00000);
  uVar5 = auStack_38._8_8_;
  if (auStack_38._8_8_ == 0) {
    return;
  }
  if (auStack_38._8_8_ != 0) {
    if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8)
                 + 8) == '\0') {
      func_0x0001455db994();
    }
    plVar6 = _DAT_14aad45b0;
    lVar1 = **(longlong **)(unaff_GS_OFFSET + 0x58);
    plVar8 = *(longlong **)(lVar1 + 0x13a8);
    if (plVar8 == (longlong *)0x0) {
      if (*(char *)(*(longlong *)
                     (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8) ==
          '\0') {
        func_0x0001455db994();
      }
      *(longlong **)(lVar1 + 0x13a8) = plVar6;
      plVar8 = plVar6;
    }
    cVar7 = (**(code **)(*plVar8 + 200))(plVar8,uVar5);
    if (cVar7 != '\0') {
code_r0x000140093420:
      if (uVar5 == 0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x00014009342c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar8 + 0x10))();
      return;
    }
    if ((((ulonglong)uVar5 < _DAT_149e1dac0) ||
        (_DAT_149e1dac0 + _DAT_149e1dac8 <= (ulonglong)uVar5)) &&
       (((ulonglong)uVar5 < _DAT_149e1dad0 || (_DAT_149e1dad0 + _DAT_149e1dac8 <= (ulonglong)uVar5))
       )) {
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
        cVar7 = (**(code **)(*plStack_28 + 200))(plStack_28,uVar5);
        plVar8 = plStack_28;
        if (cVar7 != '\0') {
          FUN_14005a120(&plStack_28);
          if (plVar8 != (longlong *)0x0) goto code_r0x000140093420;
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

