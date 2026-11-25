// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140153070  size: 226 bytes
// Name:    FUN_140153070
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Possible PIC construction at 0x0001401530a9: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001401531c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001401531e6: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000140153234: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000140003bda: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00014015314b: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000140003bdf) */
/* WARNING: Removing unreachable block (ram,0x0001401531eb) */
/* WARNING: Removing unreachable block (ram,0x000140153150) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140153070(undefined8 *param_1)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong unaff_RBX;
  ulonglong uVar10;
  undefined8 *unaff_RSI;
  ulonglong unaff_RDI;
  ulonglong uVar11;
  longlong unaff_GS_OFFSET;
  undefined1 auVar12 [16];
  undefined *apuStack_40 [5];
  
  LOCK();
  iVar6 = *(int *)(param_1 + 0xc);
  if (iVar6 == 0) {
    *(int *)(param_1 + 0xc) = 1;
    iVar6 = 0;
  }
  UNLOCK();
  if (iVar6 == 1) {
    uVar9 = 8;
    do {
      for (uVar1 = 0; uVar1 < uVar9; uVar1 = uVar1 + 1) {
      }
      LOCK();
      iVar6 = *(int *)(param_1 + 0xc);
      if (iVar6 == 0) {
        *(int *)(param_1 + 0xc) = 1;
        iVar6 = 0;
      }
      UNLOCK();
      uVar9 = uVar9 << (uVar9 < 0x400);
    } while (iVar6 == 1);
  }
  *(undefined2 *)(param_1 + 0x1e) = 0xffff;
  param_1[0x1f] = 0;
  if (param_1[0x20] == 0) {
    param_1[0x20] = 0;
    *(undefined4 *)(param_1 + 0x21) = 0;
    *(undefined1 *)(param_1 + 0x22) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    if ((*(short *)((longlong)param_1 + 0x122) != 0) && (param_1[0x23] != 0)) {
      apuStack_40[0] = (undefined *)0x1401530ec;
      func_0x000144d9c130();
    }
    if ((*(short *)((longlong)param_1 + 0x10a) == 0) || (uVar8 = param_1[0x20], uVar8 == 0)) {
      *param_1 = &UNK_14650f7a0;
      if ((param_1[0x1b] != 0) && (*(int *)((longlong)param_1 + 0x84) != -1)) {
        apuStack_40[0] = &UNK_140153193;
        FUN_1409fd2e0(param_1[0x1b],*(int *)((longlong)param_1 + 0x84),param_1);
      }
      auVar12._0_12_ = ZEXT812(0);
      auVar12._12_4_ = 0;
      *(undefined1 (*) [16])(param_1 + 4) = auVar12;
      uVar10 = unaff_RBX;
      uVar11 = unaff_RDI;
      if (*(ushort *)(param_1 + 0xb) != 0) {
        uVar10 = 0;
        do {
          uVar11 = *(ulonglong *)(param_1[10] + uVar10 * 8);
          if (uVar11 != 0) {
            unaff_RBX = uVar10;
            unaff_RDI = uVar11;
            if ((*(short *)(uVar11 + 0x22) == 0) || (*(ulonglong *)(uVar11 + 0x18) == 0)) {
              if ((*(short *)(uVar11 + 0x12) != 0) && (*(longlong *)(uVar11 + 8) != 0)) {
                apuStack_40[0] = &UNK_1401531de;
                func_0x000144d9c130();
              }
              register0x00000020 = (BADSPACEBASE *)apuStack_40;
              apuStack_40[0] = &UNK_1401531eb;
              uVar8 = uVar11;
              unaff_RSI = param_1;
            }
            else {
              register0x00000020 = (BADSPACEBASE *)apuStack_40;
              apuStack_40[0] = &UNK_1401531c9;
              uVar8 = *(ulonglong *)(uVar11 + 0x18);
              unaff_RSI = param_1;
            }
            goto FUN_140003ab0;
          }
          uVar10 = uVar10 + 1;
        } while (uVar10 < *(ushort *)(param_1 + 0xb));
      }
      *(undefined2 *)(param_1 + 0xb) = 0;
      *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
      if (param_1[0xe] != 0) {
        apuStack_40[0] = &UNK_140153215;
        func_0x000144d9c130();
      }
      *(undefined4 *)(param_1 + 0xd) = 0;
      param_1[0xe] = 0;
      if ((*(short *)((longlong)param_1 + 0x5a) == 0) || (uVar8 = param_1[10], uVar8 == 0)) {
        if ((*(short *)((longlong)param_1 + 0x4a) != 0) && (param_1[8] != 0)) {
          apuStack_40[0] = &UNK_14015324e;
          func_0x000144d9c130();
        }
        if ((*(short *)((longlong)param_1 + 0x3a) == 0) || (uVar8 = param_1[6], uVar8 == 0)) {
          return;
        }
      }
      else {
        register0x00000020 = (BADSPACEBASE *)apuStack_40;
        apuStack_40[0] = &UNK_140153239;
        unaff_RBX = uVar10;
        unaff_RSI = param_1;
        unaff_RDI = uVar11;
      }
    }
    else {
      register0x00000020 = (BADSPACEBASE *)apuStack_40;
      apuStack_40[0] = (undefined *)0x140153150;
      unaff_RSI = param_1;
    }
  }
  else {
    register0x00000020 = (BADSPACEBASE *)apuStack_40;
    apuStack_40[0] = (undefined *)0x1401530ae;
    uVar8 = param_1[0x20];
    unaff_RSI = param_1;
  }
FUN_140003ab0:
  *(undefined8 **)((longlong)register0x00000020 + -8) = unaff_RSI;
  *(ulonglong *)((longlong)register0x00000020 + -0x10) = unaff_RDI;
  *(ulonglong *)((longlong)register0x00000020 + -0x18) = unaff_RBX;
  if (uVar8 != 0) {
    if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8)
                 + 8) == '\0') {
      *(undefined8 *)((longlong)register0x00000020 + -0x50) = 0x140003ae4;
      func_0x0001455db994();
    }
    plVar4 = _DAT_14aad45b0;
    lVar2 = **(longlong **)(unaff_GS_OFFSET + 0x58);
    plVar7 = *(longlong **)(lVar2 + 0x13a8);
    if (plVar7 == (longlong *)0x0) {
      if (*(char *)(*(longlong *)
                     (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8) ==
          '\0') {
        *(undefined8 *)((longlong)register0x00000020 + -0x50) = 0x140003b50;
        func_0x0001455db994();
      }
      *(longlong **)(lVar2 + 0x13a8) = plVar4;
      plVar7 = plVar4;
    }
    pcVar3 = *(code **)(*plVar7 + 200);
    *(undefined8 *)((longlong)register0x00000020 + -0x50) = 0x140003b0b;
    cVar5 = (*pcVar3)(plVar7,uVar8);
    if (cVar5 != '\0') {
code_r0x000140093420:
      if (uVar8 == 0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x00014009342c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar7 + 0x10))();
      return;
    }
    if (((uVar8 < _DAT_149e1dac0) || (_DAT_149e1dac0 + _DAT_149e1dac8 <= uVar8)) &&
       ((uVar8 < _DAT_149e1dad0 || (_DAT_149e1dad0 + _DAT_149e1dac8 <= uVar8)))) {
      *(undefined8 *)((longlong)register0x00000020 + -0x50) = 0x140003b96;
      FUN_14005a140((undefined8 *)((longlong)register0x00000020 + -0x28));
      plVar7 = *(longlong **)((longlong)register0x00000020 + -0x28);
      do {
        if (plVar7 == (longlong *)0x0) {
LAB_140003bea:
          *(undefined8 *)((longlong)register0x00000020 + -0x50) = 0x140003bf4;
          FUN_14005a120((undefined1 *)((longlong)register0x00000020 + -0x28));
LAB_140003bf4:
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pcVar3 = *(code **)(*plVar7 + 200);
        *(undefined8 *)((longlong)register0x00000020 + -0x50) = 0x140003baa;
        cVar5 = (*pcVar3)(plVar7,uVar8);
        plVar7 = *(longlong **)((longlong)register0x00000020 + -0x28);
        if (cVar5 != '\0') {
          *(undefined8 *)((longlong)register0x00000020 + -0x50) = 0x140003bcf;
          FUN_14005a120((undefined1 *)((longlong)register0x00000020 + -0x28));
          if (plVar7 == (longlong *)0x0) goto LAB_140003bf4;
          *(undefined8 *)((longlong)register0x00000020 + -0x50) = 0x140003bdf;
          goto code_r0x000140093420;
        }
        if (plVar7 == *(longlong **)((longlong)register0x00000020 + -0x20)) {
          *(undefined8 *)((longlong)register0x00000020 + -0x28) = 0;
          goto LAB_140003bea;
        }
        plVar7 = (longlong *)plVar7[1];
        *(longlong **)((longlong)register0x00000020 + -0x28) = plVar7;
      } while( true );
    }
  }
  return;
}

