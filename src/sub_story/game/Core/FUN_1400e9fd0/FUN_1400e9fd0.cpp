// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400e9fd0  size: 235 bytes
// Name:    FUN_1400e9fd0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Possible PIC construction at 0x0001400ea006: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000140003bda: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000140003bdf) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400e9fd0(longlong param_1)

{
  longlong lVar1;
  code *pcVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  longlong *plVar6;
  ulonglong uVar7;
  undefined8 unaff_RBX;
  longlong unaff_RSI;
  undefined8 unaff_RDI;
  longlong lVar8;
  longlong lVar9;
  longlong unaff_GS_OFFSET;
  undefined8 auStack_50 [6];
  
  if (*(char *)(param_1 + 0xea) != '\x01') {
    return;
  }
  if (*(int *)(param_1 + 0xd0) == 0xc) {
code_r0x0001400e9ffa:
    uVar7 = *(ulonglong *)(param_1 + 0xc0);
    if (uVar7 != 0) {
      register0x00000020 = (BADSPACEBASE *)auStack_50;
      auStack_50[0] = 0x1400ea00b;
      unaff_RSI = param_1;
      goto FUN_140003ab0;
    }
  }
  else {
    switch(*(int *)(param_1 + 0xd0)) {
    case 0:
    case 1:
    case 2:
    case 4:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 0xb:
      goto code_r0x0001400e9ffa;
    case 3:
      lVar1 = *(longlong *)(param_1 + 0xc0);
      if (lVar1 != 0) {
        lVar8 = lVar1 + -0x10;
        if (*(longlong *)(lVar1 + -0x10) != 0) {
          lVar9 = *(longlong *)(lVar1 + -0x10) * 0x170;
          do {
            lVar3 = *(longlong *)(lVar1 + -0x30 + lVar9);
            if (lVar3 != 0) {
              auStack_50[0] = 0x1400ea06a;
              FUN_14017dc60(lVar3,1);
            }
            lVar9 = lVar9 + -0x170;
          } while (lVar9 != 0);
        }
code_r0x0001400ea0ae:
        auStack_50[0] = 0x1400ea0b6;
        func_0x000140108890(lVar8);
      }
      break;
    case 5:
      lVar1 = *(longlong *)(param_1 + 0xc0);
      if (lVar1 != 0) {
        lVar8 = lVar1 + -0x10;
        if (*(longlong *)(lVar1 + -0x10) != 0) {
          lVar9 = *(longlong *)(lVar1 + -0x10) * 0xf0;
          do {
            auStack_50[0] = 0x1400ea0a5;
            FUN_1400e9fd0(lVar1 + -0xf0 + lVar9);
            lVar9 = lVar9 + -0xf0;
          } while (lVar9 != 0);
        }
        goto code_r0x0001400ea0ae;
      }
    }
  }
  uVar7 = *(ulonglong *)(param_1 + 0xd8);
  if (uVar7 == 0) {
    return;
  }
FUN_140003ab0:
  *(longlong *)((longlong)register0x00000020 + -8) = unaff_RSI;
  *(undefined8 *)((longlong)register0x00000020 + -0x10) = unaff_RDI;
  *(undefined8 *)((longlong)register0x00000020 + -0x18) = unaff_RBX;
  if (uVar7 != 0) {
    if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8)
                 + 8) == '\0') {
      *(undefined8 *)((longlong)register0x00000020 + -0x50) = 0x140003ae4;
      func_0x0001455db994();
    }
    plVar4 = _DAT_14aad45b0;
    lVar1 = **(longlong **)(unaff_GS_OFFSET + 0x58);
    plVar6 = *(longlong **)(lVar1 + 0x13a8);
    if (plVar6 == (longlong *)0x0) {
      if (*(char *)(*(longlong *)
                     (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8) ==
          '\0') {
        *(undefined8 *)((longlong)register0x00000020 + -0x50) = 0x140003b50;
        func_0x0001455db994();
      }
      *(longlong **)(lVar1 + 0x13a8) = plVar4;
      plVar6 = plVar4;
    }
    pcVar2 = *(code **)(*plVar6 + 200);
    *(undefined8 *)((longlong)register0x00000020 + -0x50) = 0x140003b0b;
    cVar5 = (*pcVar2)(plVar6,uVar7);
    if (cVar5 != '\0') {
code_r0x000140093420:
      if (uVar7 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014009342c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar6 + 0x10))();
        return;
      }
      return;
    }
    if (((uVar7 < _DAT_149e1dac0) || (_DAT_149e1dac0 + _DAT_149e1dac8 <= uVar7)) &&
       ((uVar7 < _DAT_149e1dad0 || (_DAT_149e1dad0 + _DAT_149e1dac8 <= uVar7)))) {
      *(undefined8 *)((longlong)register0x00000020 + -0x50) = 0x140003b96;
      FUN_14005a140((undefined8 *)((longlong)register0x00000020 + -0x28));
      plVar6 = *(longlong **)((longlong)register0x00000020 + -0x28);
      do {
        if (plVar6 == (longlong *)0x0) {
LAB_140003bea:
          *(undefined8 *)((longlong)register0x00000020 + -0x50) = 0x140003bf4;
          FUN_14005a120((undefined1 *)((longlong)register0x00000020 + -0x28));
LAB_140003bf4:
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pcVar2 = *(code **)(*plVar6 + 200);
        *(undefined8 *)((longlong)register0x00000020 + -0x50) = 0x140003baa;
        cVar5 = (*pcVar2)(plVar6,uVar7);
        plVar6 = *(longlong **)((longlong)register0x00000020 + -0x28);
        if (cVar5 != '\0') {
          *(undefined8 *)((longlong)register0x00000020 + -0x50) = 0x140003bcf;
          FUN_14005a120((undefined1 *)((longlong)register0x00000020 + -0x28));
          if (plVar6 == (longlong *)0x0) goto LAB_140003bf4;
          *(undefined8 *)((longlong)register0x00000020 + -0x50) = 0x140003bdf;
          goto code_r0x000140093420;
        }
        if (plVar6 == *(longlong **)((longlong)register0x00000020 + -0x20)) {
          *(undefined8 *)((longlong)register0x00000020 + -0x28) = 0;
          goto LAB_140003bea;
        }
        plVar6 = (longlong *)plVar6[1];
        *(longlong **)((longlong)register0x00000020 + -0x28) = plVar6;
      } while( true );
    }
  }
  return;
}

