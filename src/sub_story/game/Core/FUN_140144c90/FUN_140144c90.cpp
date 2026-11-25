// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140144c90  size: 78 bytes
// Name:    FUN_140144c90
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_141e3b580, FUN_141f8ae80
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Possible PIC construction at 0x000140003bda: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000140003bdf) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140144c90(undefined8 param_1)

{
  longlong lVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  longlong *plVar4;
  undefined8 uVar5;
  char cVar6;
  longlong *plVar7;
  longlong unaff_GS_OFFSET;
  undefined1 auStack_28 [16];
  
  auStack_28._0_12_ = ZEXT812(0);
  auStack_28._12_4_ = 0;
  FUN_141e3b580(0,auStack_28);
  if (auStack_28._4_4_ != 0) {
    FUN_141f8ae80(param_1,auStack_28);
  }
  uVar5 = auStack_28._8_8_;
  if (auStack_28._8_8_ == 0) {
    return;
  }
  if (auStack_28._8_8_ != 0) {
    if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8)
                 + 8) == '\0') {
      func_0x0001455db994();
    }
    plVar4 = _DAT_14aad45b0;
    lVar1 = **(longlong **)(unaff_GS_OFFSET + 0x58);
    plVar7 = *(longlong **)(lVar1 + 0x13a8);
    if (plVar7 == (longlong *)0x0) {
      if (*(char *)(*(longlong *)
                     (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8) ==
          '\0') {
        func_0x0001455db994();
      }
      *(longlong **)(lVar1 + 0x13a8) = plVar4;
      plVar7 = plVar4;
    }
    cVar6 = (**(code **)(*plVar7 + 200))(plVar7,uVar5);
    if (cVar6 != '\0') {
code_r0x000140093420:
      if (uVar5 == 0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x00014009342c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar7 + 0x10))();
      return;
    }
    if ((((ulonglong)uVar5 < _DAT_149e1dac0) ||
        (_DAT_149e1dac0 + _DAT_149e1dac8 <= (ulonglong)uVar5)) &&
       (((ulonglong)uVar5 < _DAT_149e1dad0 || (_DAT_149e1dad0 + _DAT_149e1dac8 <= (ulonglong)uVar5))
       )) {
      FUN_14005a140(auStack_28);
      plVar7 = (longlong *)auStack_28._0_8_;
      do {
        if (plVar7 == (longlong *)0x0) {
LAB_140003bea:
          FUN_14005a120(auStack_28);
LAB_140003bf4:
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        cVar6 = (**(code **)(*plVar7 + 200))(plVar7,uVar5);
        plVar7 = (longlong *)auStack_28._0_8_;
        if (cVar6 != '\0') {
          FUN_14005a120(auStack_28);
          if (plVar7 != (longlong *)0x0) goto code_r0x000140093420;
          goto LAB_140003bf4;
        }
        if (auStack_28._0_8_ == auStack_28._8_8_) {
          auVar3._8_8_ = 0;
          auVar3._0_8_ = auStack_28._8_8_;
          auStack_28 = auVar3 << 0x40;
          goto LAB_140003bea;
        }
        plVar7 = *(longlong **)(auStack_28._0_8_ + 8);
        auStack_28._0_8_ = plVar7;
      } while( true );
    }
  }
  return;
}

