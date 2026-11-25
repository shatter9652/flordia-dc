// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140015520  size: 156 bytes
// Name:    FUN_140015520
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1403c9430
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Possible PIC construction at 0x000140015596: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000140003bda: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001400155b5: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000140003bdf) */
/* WARNING: Removing unreachable block (ram,0x0001400155ba) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140015520(ulonglong param_1)

{
  longlong lVar1;
  code *pcVar2;
  longlong *plVar3;
  char cVar4;
  longlong *plVar5;
  ulonglong uVar6;
  undefined8 unaff_RBX;
  ulonglong unaff_RSI;
  undefined8 unaff_RDI;
  longlong unaff_GS_OFFSET;
  undefined8 auStack_40 [6];
  
  if (param_1 == 0) {
    return;
  }
  *(undefined4 *)(param_1 + 0x134) = 0;
  if (*(longlong *)(param_1 + 0x138) != 0) {
    auStack_40[0] = 0x1400155b3;
    func_0x000144d9c130();
  }
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined4 *)(param_1 + 0x124) = 0;
  if (*(ulonglong *)(param_1 + 0x128) == 0) {
    *(undefined4 *)(param_1 + 0x120) = 0;
    *(undefined8 *)(param_1 + 0x128) = 0;
    auStack_40[0] = 0x14001558a;
    FUN_1403c9430(param_1 + 0x30);
    *(undefined4 *)(param_1 + 0x24) = 0;
    uVar6 = param_1;
    if (*(ulonglong *)(param_1 + 0x28) != 0) {
      register0x00000020 = (BADSPACEBASE *)auStack_40;
      auStack_40[0] = 0x14001559b;
      uVar6 = *(ulonglong *)(param_1 + 0x28);
      unaff_RSI = param_1;
      unaff_RDI = 0;
    }
  }
  else {
    register0x00000020 = (BADSPACEBASE *)auStack_40;
    auStack_40[0] = 0x1400155ba;
    uVar6 = *(ulonglong *)(param_1 + 0x128);
    unaff_RSI = param_1;
    unaff_RDI = 0;
  }
  *(ulonglong *)((longlong)register0x00000020 + -8) = unaff_RSI;
  *(undefined8 *)((longlong)register0x00000020 + -0x10) = unaff_RDI;
  *(undefined8 *)((longlong)register0x00000020 + -0x18) = unaff_RBX;
  if (uVar6 != 0) {
    if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8)
                 + 8) == '\0') {
      *(undefined8 *)((longlong)register0x00000020 + -0x50) = 0x140003ae4;
      func_0x0001455db994();
    }
    plVar3 = _DAT_14aad45b0;
    lVar1 = **(longlong **)(unaff_GS_OFFSET + 0x58);
    plVar5 = *(longlong **)(lVar1 + 0x13a8);
    if (plVar5 == (longlong *)0x0) {
      if (*(char *)(*(longlong *)
                     (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8) ==
          '\0') {
        *(undefined8 *)((longlong)register0x00000020 + -0x50) = 0x140003b50;
        func_0x0001455db994();
      }
      *(longlong **)(lVar1 + 0x13a8) = plVar3;
      plVar5 = plVar3;
    }
    pcVar2 = *(code **)(*plVar5 + 200);
    *(undefined8 *)((longlong)register0x00000020 + -0x50) = 0x140003b0b;
    cVar4 = (*pcVar2)(plVar5,uVar6);
    if (cVar4 != '\0') {
code_r0x000140093420:
      if (uVar6 == 0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x00014009342c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar5 + 0x10))();
      return;
    }
    if (((uVar6 < _DAT_149e1dac0) || (_DAT_149e1dac0 + _DAT_149e1dac8 <= uVar6)) &&
       ((uVar6 < _DAT_149e1dad0 || (_DAT_149e1dad0 + _DAT_149e1dac8 <= uVar6)))) {
      *(undefined8 *)((longlong)register0x00000020 + -0x50) = 0x140003b96;
      FUN_14005a140((undefined8 *)((longlong)register0x00000020 + -0x28));
      plVar5 = *(longlong **)((longlong)register0x00000020 + -0x28);
      do {
        if (plVar5 == (longlong *)0x0) {
LAB_140003bea:
          *(undefined8 *)((longlong)register0x00000020 + -0x50) = 0x140003bf4;
          FUN_14005a120((undefined1 *)((longlong)register0x00000020 + -0x28));
LAB_140003bf4:
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pcVar2 = *(code **)(*plVar5 + 200);
        *(undefined8 *)((longlong)register0x00000020 + -0x50) = 0x140003baa;
        cVar4 = (*pcVar2)(plVar5,uVar6);
        plVar5 = *(longlong **)((longlong)register0x00000020 + -0x28);
        if (cVar4 != '\0') {
          *(undefined8 *)((longlong)register0x00000020 + -0x50) = 0x140003bcf;
          FUN_14005a120((undefined1 *)((longlong)register0x00000020 + -0x28));
          if (plVar5 == (longlong *)0x0) goto LAB_140003bf4;
          *(undefined8 *)((longlong)register0x00000020 + -0x50) = 0x140003bdf;
          goto code_r0x000140093420;
        }
        if (plVar5 == *(longlong **)((longlong)register0x00000020 + -0x20)) {
          *(undefined8 *)((longlong)register0x00000020 + -0x28) = 0;
          goto LAB_140003bea;
        }
        plVar5 = (longlong *)plVar5[1];
        *(longlong **)((longlong)register0x00000020 + -0x28) = plVar5;
      } while( true );
    }
  }
  return;
}

