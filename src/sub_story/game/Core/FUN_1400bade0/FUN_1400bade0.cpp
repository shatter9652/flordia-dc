// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400bade0  size: 438 bytes
// Name:    FUN_1400bade0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Possible PIC construction at 0x000140003bda: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001400baf8f: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000140003bdf) */
/* WARNING: Removing unreachable block (ram,0x0001400baf94) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400bade0(uint param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  ushort uVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong *plVar6;
  char cVar7;
  uint uVar8;
  longlong lVar9;
  undefined4 *puVar10;
  uint uVar11;
  longlong *plVar12;
  longlong lVar13;
  ulonglong uVar14;
  undefined8 unaff_RBX;
  ulonglong unaff_RSI;
  ulonglong unaff_RDI;
  longlong lVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  longlong unaff_GS_OFFSET;
  undefined1 auVar18 [16];
  undefined8 auStack_60 [6];
  
  uVar5 = _DAT_14876fc60;
  uVar11 = _DAT_14876fc58;
  uVar17 = (ulonglong)_DAT_14876fc58;
  if (param_1 < 0x11) {
    param_1 = 0x10;
  }
  auStack_60[0] = 0x1400bae0d;
  uVar8 = func_0x000145503b80(param_1,0x57);
  lVar15 = (ulonglong)uVar8 * 0x110;
  auStack_60[0] = 0x1400bae27;
  lVar9 = func_0x000144d9c140(0x10,lVar15);
  _DAT_14876fc58 = uVar8;
  _DAT_14876fc60 = lVar9;
  if ((ulonglong)uVar8 != 0) {
    auVar18[1] = DAT_146159402;
    auVar18[0] = DAT_146159402;
    auVar18[2] = DAT_146159402;
    auVar18[3] = DAT_146159402;
    auVar18[4] = DAT_146159402;
    auVar18[5] = DAT_146159402;
    auVar18[6] = DAT_146159402;
    auVar18[7] = DAT_146159402;
    auVar18[8] = DAT_146159402;
    auVar18[9] = DAT_146159402;
    auVar18[10] = DAT_146159402;
    auVar18[0xb] = DAT_146159402;
    auVar18[0xc] = DAT_146159402;
    auVar18[0xd] = DAT_146159402;
    auVar18[0xe] = DAT_146159402;
    auVar18[0xf] = DAT_146159402;
    lVar13 = 0;
    do {
      *(undefined1 (*) [16])(lVar9 + lVar13) = auVar18;
      lVar13 = lVar13 + 0x110;
    } while (lVar15 - lVar13 != 0);
  }
  if (uVar11 != 0) {
    uVar16 = uVar17 * 0x110 + uVar5;
    uVar17 = uVar5;
    do {
      lVar9 = 0;
      do {
        if (!SBORROW1('\0',*(char *)(uVar17 + lVar9))) {
          uVar11 = *(uint *)(uVar17 + 0x10 + lVar9 * 0x10);
          uVar11 = (uVar11 >> 0x10 ^ uVar11) * -0x7a143595;
          uVar8 = (uVar11 >> 0xd ^ uVar11) * -0x3d4d51cb;
          uVar8 = uVar8 >> 0x10 ^ uVar8;
          uVar14 = (ulonglong)(uVar8 >> 7 & _DAT_14876fc58 - 1);
          lVar15 = uVar14 * 0x110;
          auVar18 = vpsignb_avx(*(undefined1 (*) [16])(_DAT_14876fc60 + lVar15),
                                *(undefined1 (*) [16])(_DAT_14876fc60 + lVar15));
          uVar3 = (ushort)(SUB161(auVar18 >> 7,0) & 1) | (ushort)(SUB161(auVar18 >> 0xf,0) & 1) << 1
                  | (ushort)(SUB161(auVar18 >> 0x17,0) & 1) << 2 |
                  (ushort)(SUB161(auVar18 >> 0x1f,0) & 1) << 3 |
                  (ushort)(SUB161(auVar18 >> 0x27,0) & 1) << 4 |
                  (ushort)(SUB161(auVar18 >> 0x2f,0) & 1) << 5 |
                  (ushort)(SUB161(auVar18 >> 0x37,0) & 1) << 6 |
                  (ushort)(SUB161(auVar18 >> 0x3f,0) & 1) << 7 |
                  (ushort)(SUB161(auVar18 >> 0x47,0) & 1) << 8 |
                  (ushort)(SUB161(auVar18 >> 0x4f,0) & 1) << 9 |
                  (ushort)(SUB161(auVar18 >> 0x57,0) & 1) << 10 |
                  (ushort)(SUB161(auVar18 >> 0x5f,0) & 1) << 0xb |
                  (ushort)(SUB161(auVar18 >> 0x67,0) & 1) << 0xc |
                  (ushort)(SUB161(auVar18 >> 0x6f,0) & 1) << 0xd |
                  (ushort)(SUB161(auVar18 >> 0x77,0) & 1) << 0xe |
                  (ushort)(byte)(auVar18[0xf] >> 7) << 0xf;
          uVar11 = (uint)uVar3;
          if (uVar3 == 0) {
            do {
              uVar14 = (ulonglong)((int)uVar14 + 1U & _DAT_14876fc58 - 1);
              lVar15 = uVar14 * 0x110;
              auVar18 = vpsignb_avx(*(undefined1 (*) [16])(_DAT_14876fc60 + lVar15),
                                    *(undefined1 (*) [16])(_DAT_14876fc60 + lVar15));
              uVar11 = (uint)(ushort)((ushort)(SUB161(auVar18 >> 7,0) & 1) |
                                      (ushort)(SUB161(auVar18 >> 0xf,0) & 1) << 1 |
                                      (ushort)(SUB161(auVar18 >> 0x17,0) & 1) << 2 |
                                      (ushort)(SUB161(auVar18 >> 0x1f,0) & 1) << 3 |
                                      (ushort)(SUB161(auVar18 >> 0x27,0) & 1) << 4 |
                                      (ushort)(SUB161(auVar18 >> 0x2f,0) & 1) << 5 |
                                      (ushort)(SUB161(auVar18 >> 0x37,0) & 1) << 6 |
                                      (ushort)(SUB161(auVar18 >> 0x3f,0) & 1) << 7 |
                                      (ushort)(SUB161(auVar18 >> 0x47,0) & 1) << 8 |
                                      (ushort)(SUB161(auVar18 >> 0x4f,0) & 1) << 9 |
                                      (ushort)(SUB161(auVar18 >> 0x57,0) & 1) << 10 |
                                      (ushort)(SUB161(auVar18 >> 0x5f,0) & 1) << 0xb |
                                      (ushort)(SUB161(auVar18 >> 0x67,0) & 1) << 0xc |
                                      (ushort)(SUB161(auVar18 >> 0x6f,0) & 1) << 0xd |
                                      (ushort)(SUB161(auVar18 >> 0x77,0) & 1) << 0xe |
                                     (ushort)(byte)(auVar18[0xf] >> 7) << 0xf);
            } while (uVar11 == 0);
          }
          lVar15 = _DAT_14876fc60 + lVar15;
          uVar4 = 0;
          for (; (uVar11 & 1) == 0; uVar11 = uVar11 >> 1 | 0x80000000) {
            uVar4 = uVar4 + 1;
          }
          puVar10 = (undefined4 *)(lVar9 * 0x10 + uVar17 + 0x10);
          *(byte *)(lVar15 + (ulonglong)uVar4) = (byte)uVar8 & 0x7f;
          *(undefined4 *)(lVar15 + 0x10 + (ulonglong)(uVar4 << 4)) = *puVar10;
          uVar2 = *(undefined8 *)(puVar10 + 2);
          *(undefined8 *)(puVar10 + 2) = 0;
          *(undefined8 *)(lVar15 + 0x18 + (ulonglong)(uVar4 << 4)) = uVar2;
          *(undefined1 *)(uVar17 + lVar9) = 0x80;
          if (*(ulonglong *)(puVar10 + 2) != 0) {
            register0x00000020 = (BADSPACEBASE *)auStack_60;
            auStack_60[0] = 0x1400baf94;
            uVar17 = *(ulonglong *)(puVar10 + 2);
            unaff_RBX = 0;
            unaff_RSI = uVar5;
            unaff_RDI = uVar16;
            goto FUN_140003ab0;
          }
        }
        lVar9 = lVar9 + 1;
      } while (lVar9 != 0x10);
      uVar17 = uVar17 + 0x110;
    } while (uVar17 != uVar16);
  }
  uVar17 = uVar5;
  if (uVar5 == 0) {
    return;
  }
FUN_140003ab0:
  *(ulonglong *)((longlong)register0x00000020 + -8) = unaff_RSI;
  *(ulonglong *)((longlong)register0x00000020 + -0x10) = unaff_RDI;
  *(undefined8 *)((longlong)register0x00000020 + -0x18) = unaff_RBX;
  if (uVar17 != 0) {
    if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8)
                 + 8) == '\0') {
      *(undefined8 *)((longlong)register0x00000020 + -0x50) = 0x140003ae4;
      func_0x0001455db994();
    }
    plVar6 = _DAT_14aad45b0;
    lVar9 = **(longlong **)(unaff_GS_OFFSET + 0x58);
    plVar12 = *(longlong **)(lVar9 + 0x13a8);
    if (plVar12 == (longlong *)0x0) {
      if (*(char *)(*(longlong *)
                     (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8) ==
          '\0') {
        *(undefined8 *)((longlong)register0x00000020 + -0x50) = 0x140003b50;
        func_0x0001455db994();
      }
      *(longlong **)(lVar9 + 0x13a8) = plVar6;
      plVar12 = plVar6;
    }
    pcVar1 = *(code **)(*plVar12 + 200);
    *(undefined8 *)((longlong)register0x00000020 + -0x50) = 0x140003b0b;
    cVar7 = (*pcVar1)(plVar12,uVar17);
    if (cVar7 != '\0') {
code_r0x000140093420:
      if (uVar17 == 0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x00014009342c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar12 + 0x10))();
      return;
    }
    if (((uVar17 < _DAT_149e1dac0) || (_DAT_149e1dac0 + _DAT_149e1dac8 <= uVar17)) &&
       ((uVar17 < _DAT_149e1dad0 || (_DAT_149e1dad0 + _DAT_149e1dac8 <= uVar17)))) {
      *(undefined8 *)((longlong)register0x00000020 + -0x50) = 0x140003b96;
      FUN_14005a140((undefined8 *)((longlong)register0x00000020 + -0x28));
      plVar12 = *(longlong **)((longlong)register0x00000020 + -0x28);
      do {
        if (plVar12 == (longlong *)0x0) {
LAB_140003bea:
          *(undefined8 *)((longlong)register0x00000020 + -0x50) = 0x140003bf4;
          FUN_14005a120((undefined1 *)((longlong)register0x00000020 + -0x28));
LAB_140003bf4:
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pcVar1 = *(code **)(*plVar12 + 200);
        *(undefined8 *)((longlong)register0x00000020 + -0x50) = 0x140003baa;
        cVar7 = (*pcVar1)(plVar12,uVar17);
        plVar12 = *(longlong **)((longlong)register0x00000020 + -0x28);
        if (cVar7 != '\0') {
          *(undefined8 *)((longlong)register0x00000020 + -0x50) = 0x140003bcf;
          FUN_14005a120((undefined1 *)((longlong)register0x00000020 + -0x28));
          if (plVar12 == (longlong *)0x0) goto LAB_140003bf4;
          *(undefined8 *)((longlong)register0x00000020 + -0x50) = 0x140003bdf;
          goto code_r0x000140093420;
        }
        if (plVar12 == *(longlong **)((longlong)register0x00000020 + -0x20)) {
          *(undefined8 *)((longlong)register0x00000020 + -0x28) = 0;
          goto LAB_140003bea;
        }
        plVar12 = (longlong *)plVar12[1];
        *(longlong **)((longlong)register0x00000020 + -0x28) = plVar12;
      } while( true );
    }
  }
  return;
}

