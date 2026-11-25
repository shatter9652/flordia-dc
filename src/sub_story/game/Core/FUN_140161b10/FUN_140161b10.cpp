// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140161b10  size: 33 bytes
// Name:    FUN_140161b10
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1415af420
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Possible PIC construction at 0x000145522785: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001455227ef: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000140003bda: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000145522993: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000140003bdf) */
/* WARNING: Removing unreachable block (ram,0x0001455227f4) */
/* WARNING: Removing unreachable block (ram,0x000145522802) */
/* WARNING: Removing unreachable block (ram,0x000145522998) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140161b10(longlong param_1)

{
  longlong lVar1;
  code *pcVar2;
  longlong *plVar3;
  char cVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong *plVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  ulonglong unaff_RBX;
  uint uVar12;
  longlong unaff_RSI;
  longlong unaff_RDI;
  undefined4 *puVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong unaff_GS_OFFSET;
  undefined *apuStack_80 [6];
  ulonglong uStack_50;
  ulonglong uStack_48;
  
  FUN_1415af420();
  *(byte *)(param_1 + 0x84) = *(byte *)(param_1 + 0x84) | 1;
  lVar1 = param_1 + 0x18;
  apuStack_80[0] = &UNK_1455225df;
  FUN_140004b40(lVar1);
  if (0 < (longlong)*(int *)(param_1 + 0x40)) {
    lVar15 = 0;
    do {
      puVar13 = *(undefined4 **)(*(longlong *)(param_1 + 0x38) + lVar15 * 8);
      if (puVar13 != (undefined4 *)0x0) {
        uVar5 = 1;
        uVar12 = 0;
        uVar14 = 0;
        uStack_50 = 0;
        goto code_r0x00014552286c;
      }
      lVar15 = lVar15 + 1;
    } while (*(int *)(param_1 + 0x40) != lVar15);
  }
  apuStack_80[0] = &UNK_14552260c;
  func_0x000144d9dab0(lVar1);
  uStack_50 = 0;
  goto code_r0x000145522615;
code_r0x000145522806:
  *(undefined8 *)(*(longlong *)(param_1 + 0x38) + uVar14 * 8) = 0;
  uVar14 = uVar14 + 1;
  if ((uVar5 <= uVar14) || (iVar9 == 0)) goto code_r0x00014552281e;
  goto code_r0x000145522640;
code_r0x00014552286c:
  do {
    uVar8 = (ulonglong)uVar5;
    uVar6 = uStack_50;
    if (uVar12 == (uint)uVar14) {
      uVar11 = uVar12 >> 1;
      if (uVar12 < 2) {
        uVar11 = 1;
      }
      uVar14 = (ulonglong)(uVar11 + uVar12);
      apuStack_80[0] = &UNK_145522899;
      uVar6 = func_0x000144d9c140(4);
      if (uVar12 != 0) {
        apuStack_80[0] = &UNK_145522984;
        uStack_48 = uVar6;
        func_0x000145f40560(uVar6,uStack_50,(ulonglong)uVar12 * 4);
        uVar6 = uStack_48;
      }
      if (uStack_50 != 0) {
        register0x00000020 = (BADSPACEBASE *)apuStack_80;
        apuStack_80[0] = &UNK_145522998;
        uVar8 = uStack_50;
        unaff_RBX = uVar14;
        unaff_RSI = lVar1;
        unaff_RDI = param_1;
        uStack_48 = uVar6;
        goto FUN_140003ab0;
      }
    }
    *(undefined4 *)(uVar6 + (ulonglong)uVar12 * 4) = *puVar13;
    puVar13 = *(undefined4 **)(puVar13 + 0x38);
    if (puVar13 == (undefined4 *)0x0) {
      iVar9 = (int)lVar15 + 1;
      if (iVar9 < *(int *)(param_1 + 0x40)) {
        lVar10 = (longlong)iVar9;
        do {
          lVar15 = lVar10;
          lVar10 = lVar15 + 1;
          puVar13 = *(undefined4 **)(*(longlong *)(param_1 + 0x38) + -8 + lVar10 * 8);
          if (puVar13 != (undefined4 *)0x0) break;
        } while (lVar10 < *(int *)(param_1 + 0x40));
      }
    }
    uVar12 = uVar12 + 1;
    uVar5 = uVar5 + 1;
    uStack_50 = uVar6;
  } while (puVar13 != (undefined4 *)0x0);
  apuStack_80[0] = &UNK_145522919;
  func_0x000144d9dab0(lVar1);
  if (uVar12 != 0) {
    lVar15 = 0;
    do {
      apuStack_80[0] = &UNK_14552293c;
      FUN_1415af700(param_1);
      lVar15 = lVar15 + 4;
    } while (uVar8 << 2 != lVar15);
  }
code_r0x000145522615:
  apuStack_80[0] = &UNK_14552261d;
  FUN_140004b40(lVar1);
  uVar5 = *(uint *)(param_1 + 0x40);
  iVar9 = *(int *)(param_1 + 0x48);
  if (iVar9 != 0 && (ulonglong)uVar5 != 0) {
    uVar14 = 0;
code_r0x000145522640:
    uVar8 = *(ulonglong *)(*(longlong *)(param_1 + 0x38) + uVar14 * 8);
    if (uVar8 == 0) goto code_r0x000145522806;
    unaff_RBX = *(ulonglong *)(uVar8 + 0xe0);
    uVar14 = *(ulonglong *)(uVar8 + 200);
    uVar5 = *(uint *)(uVar8 + 0xc0);
    if ((ulonglong)uVar5 != 0) {
      lVar15 = 0;
      do {
        if (!SBORROW1('\0',*(char *)(uVar14 + lVar15))) {
          *(undefined1 *)(uVar14 + lVar15) = 0x80;
        }
        if (!SBORROW1('\0',*(char *)(uVar14 + 1 + lVar15))) {
          *(undefined1 *)(uVar14 + 1 + lVar15) = 0x80;
        }
        if (!SBORROW1('\0',*(char *)(uVar14 + 2 + lVar15))) {
          *(undefined1 *)(uVar14 + 2 + lVar15) = 0x80;
        }
        if (!SBORROW1('\0',*(char *)(uVar14 + 3 + lVar15))) {
          *(undefined1 *)(uVar14 + 3 + lVar15) = 0x80;
        }
        if (!SBORROW1('\0',*(char *)(uVar14 + 4 + lVar15))) {
          *(undefined1 *)(uVar14 + 4 + lVar15) = 0x80;
        }
        if (!SBORROW1('\0',*(char *)(uVar14 + 5 + lVar15))) {
          *(undefined1 *)(uVar14 + 5 + lVar15) = 0x80;
        }
        if (!SBORROW1('\0',*(char *)(uVar14 + 6 + lVar15))) {
          *(undefined1 *)(uVar14 + 6 + lVar15) = 0x80;
        }
        if (!SBORROW1('\0',*(char *)(uVar14 + 7 + lVar15))) {
          *(undefined1 *)(uVar14 + 7 + lVar15) = 0x80;
        }
        if (!SBORROW1('\0',*(char *)(uVar14 + 8 + lVar15))) {
          *(undefined1 *)(uVar14 + 8 + lVar15) = 0x80;
        }
        if (!SBORROW1('\0',*(char *)(uVar14 + 9 + lVar15))) {
          *(undefined1 *)(uVar14 + 9 + lVar15) = 0x80;
        }
        if (!SBORROW1('\0',*(char *)(uVar14 + 10 + lVar15))) {
          *(undefined1 *)(uVar14 + 10 + lVar15) = 0x80;
        }
        if (!SBORROW1('\0',*(char *)(uVar14 + 0xb + lVar15))) {
          *(undefined1 *)(uVar14 + 0xb + lVar15) = 0x80;
        }
        if (!SBORROW1('\0',*(char *)(uVar14 + 0xc + lVar15))) {
          *(undefined1 *)(uVar14 + 0xc + lVar15) = 0x80;
        }
        if (!SBORROW1('\0',*(char *)(uVar14 + 0xd + lVar15))) {
          *(undefined1 *)(uVar14 + 0xd + lVar15) = 0x80;
        }
        if (!SBORROW1('\0',*(char *)(uVar14 + 0xe + lVar15))) {
          *(undefined1 *)(uVar14 + 0xe + lVar15) = 0x80;
        }
        if (!SBORROW1('\0',*(char *)(uVar14 + 0xf + lVar15))) {
          *(undefined1 *)(uVar14 + 0xf + lVar15) = 0x80;
        }
        lVar15 = lVar15 + 0x50;
      } while ((ulonglong)uVar5 * 0x50 != lVar15);
      uVar14 = *(ulonglong *)(uVar8 + 200);
    }
    *(undefined4 *)(uVar8 + 0xc4) = 0;
    if (uVar14 == 0) {
      *(undefined4 *)(uVar8 + 0xc0) = 0;
      *(undefined8 *)(uVar8 + 200) = 0;
      if (*(int *)(uVar8 + 0x7c) != 0) {
        *(undefined4 *)(uVar8 + 0x7c) = 0;
      }
      *(undefined8 *)(uVar8 + 0x80) = 0;
      if (*(longlong *)(uVar8 + 0x88) != 0) {
        apuStack_80[0] = &UNK_1455227cb;
        func_0x000144d9c130();
      }
      *(undefined4 *)(uVar8 + 0x78) = 0;
      *(undefined8 *)(uVar8 + 0x88) = 0;
      apuStack_80[0] = &UNK_1455227e7;
      FUN_1403c9020(uVar8 + 0x60);
      register0x00000020 = (BADSPACEBASE *)apuStack_80;
      apuStack_80[0] = &UNK_1455227f4;
      unaff_RSI = lVar1;
      unaff_RDI = param_1;
    }
    else {
      register0x00000020 = (BADSPACEBASE *)apuStack_80;
      apuStack_80[0] = &UNK_14552278a;
      uVar8 = uVar14;
      unaff_RSI = lVar1;
      unaff_RDI = param_1;
    }
    goto FUN_140003ab0;
  }
code_r0x00014552281e:
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  apuStack_80[0] = &UNK_145522835;
  func_0x000144d9dab0(lVar1);
  uVar8 = uStack_50;
  if (uStack_50 == 0) {
    return;
  }
FUN_140003ab0:
  *(longlong *)((longlong)register0x00000020 + -8) = unaff_RSI;
  *(longlong *)((longlong)register0x00000020 + -0x10) = unaff_RDI;
  *(ulonglong *)((longlong)register0x00000020 + -0x18) = unaff_RBX;
  if (uVar8 != 0) {
    if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8)
                 + 8) == '\0') {
      *(undefined8 *)((longlong)register0x00000020 + -0x50) = 0x140003ae4;
      func_0x0001455db994();
    }
    plVar3 = _DAT_14aad45b0;
    lVar1 = **(longlong **)(unaff_GS_OFFSET + 0x58);
    plVar7 = *(longlong **)(lVar1 + 0x13a8);
    if (plVar7 == (longlong *)0x0) {
      if (*(char *)(*(longlong *)
                     (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8) ==
          '\0') {
        *(undefined8 *)((longlong)register0x00000020 + -0x50) = 0x140003b50;
        func_0x0001455db994();
      }
      *(longlong **)(lVar1 + 0x13a8) = plVar3;
      plVar7 = plVar3;
    }
    pcVar2 = *(code **)(*plVar7 + 200);
    *(undefined8 *)((longlong)register0x00000020 + -0x50) = 0x140003b0b;
    cVar4 = (*pcVar2)(plVar7,uVar8);
    if (cVar4 != '\0') {
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
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pcVar2 = *(code **)(*plVar7 + 200);
        *(undefined8 *)((longlong)register0x00000020 + -0x50) = 0x140003baa;
        cVar4 = (*pcVar2)(plVar7,uVar8);
        plVar7 = *(longlong **)((longlong)register0x00000020 + -0x28);
        if (cVar4 != '\0') {
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

