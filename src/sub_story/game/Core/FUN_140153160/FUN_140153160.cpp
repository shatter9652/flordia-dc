// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140153160  size: 275 bytes
// Name:    FUN_140153160
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1409fd2e0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Possible PIC construction at 0x0001401531c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001401531e6: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000140153234: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000140003bda: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001401531eb) */
/* WARNING: Removing unreachable block (ram,0x000140003bdf) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140153160(undefined8 *param_1)

{
  longlong lVar1;
  code *pcVar2;
  longlong *plVar3;
  char cVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong unaff_RBX;
  ulonglong uVar7;
  undefined8 *unaff_RSI;
  ulonglong unaff_RDI;
  ulonglong uVar8;
  longlong unaff_GS_OFFSET;
  undefined1 auVar9 [16];
  undefined8 auStack_40 [5];
  
  *param_1 = &UNK_14650f7a0;
  if ((param_1[0x1b] != 0) && (*(int *)((longlong)param_1 + 0x84) != -1)) {
    auStack_40[0] = 0x140153193;
    FUN_1409fd2e0(param_1[0x1b],*(int *)((longlong)param_1 + 0x84),param_1);
  }
  auVar9._0_12_ = ZEXT812(0);
  auVar9._12_4_ = 0;
  *(undefined1 (*) [16])(param_1 + 4) = auVar9;
  uVar7 = unaff_RBX;
  uVar8 = unaff_RDI;
  if (*(ushort *)(param_1 + 0xb) != 0) {
    uVar7 = 0;
    do {
      uVar8 = *(ulonglong *)(param_1[10] + uVar7 * 8);
      if (uVar8 != 0) {
        unaff_RBX = uVar7;
        unaff_RDI = uVar8;
        if ((*(short *)(uVar8 + 0x22) == 0) || (*(ulonglong *)(uVar8 + 0x18) == 0)) {
          if ((*(short *)(uVar8 + 0x12) != 0) && (*(longlong *)(uVar8 + 8) != 0)) {
            auStack_40[0] = 0x1401531de;
            func_0x000144d9c130();
          }
          register0x00000020 = (BADSPACEBASE *)auStack_40;
          auStack_40[0] = 0x1401531eb;
          uVar6 = uVar8;
          unaff_RSI = param_1;
        }
        else {
          register0x00000020 = (BADSPACEBASE *)auStack_40;
          auStack_40[0] = 0x1401531c9;
          uVar6 = *(ulonglong *)(uVar8 + 0x18);
          unaff_RSI = param_1;
        }
        goto FUN_140003ab0;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < *(ushort *)(param_1 + 0xb));
  }
  *(undefined2 *)(param_1 + 0xb) = 0;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  if (param_1[0xe] != 0) {
    auStack_40[0] = 0x140153215;
    func_0x000144d9c130();
  }
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[0xe] = 0;
  if ((*(short *)((longlong)param_1 + 0x5a) == 0) || (uVar6 = param_1[10], uVar6 == 0)) {
    if ((*(short *)((longlong)param_1 + 0x4a) != 0) && (param_1[8] != 0)) {
      auStack_40[0] = 0x14015324e;
      func_0x000144d9c130();
    }
    if ((*(short *)((longlong)param_1 + 0x3a) == 0) || (uVar6 = param_1[6], uVar6 == 0)) {
      return;
    }
  }
  else {
    register0x00000020 = (BADSPACEBASE *)auStack_40;
    auStack_40[0] = 0x140153239;
    unaff_RBX = uVar7;
    unaff_RSI = param_1;
    unaff_RDI = uVar8;
  }
FUN_140003ab0:
  *(undefined8 **)((longlong)register0x00000020 + -8) = unaff_RSI;
  *(ulonglong *)((longlong)register0x00000020 + -0x10) = unaff_RDI;
  *(ulonglong *)((longlong)register0x00000020 + -0x18) = unaff_RBX;
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

