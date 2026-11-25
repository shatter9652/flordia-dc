// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140049390  size: 395 bytes
// Name:    FUN_140049390
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

void FUN_140049390(uint param_1)

{
  undefined1 (*pauVar1) [16];
  code *pcVar2;
  ushort uVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong *plVar6;
  char cVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  uint uVar12;
  uint uVar13;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong lVar16;
  ulonglong uVar17;
  longlong unaff_GS_OFFSET;
  undefined1 auVar18 [16];
  
  uVar5 = _DAT_149ab7d88;
  uVar12 = _DAT_149ab7d80;
  uVar15 = (ulonglong)_DAT_149ab7d80;
  if (param_1 < 0x11) {
    param_1 = 0x10;
  }
  uVar8 = func_0x000145503b80(param_1,0x57);
  lVar9 = func_0x000144d9c140();
  _DAT_149ab7d80 = uVar8;
  _DAT_149ab7d88 = lVar9;
  if ((ulonglong)uVar8 != 0) {
    auVar18[1] = DAT_14615969c;
    auVar18[0] = DAT_14615969c;
    auVar18[2] = DAT_14615969c;
    auVar18[3] = DAT_14615969c;
    auVar18[4] = DAT_14615969c;
    auVar18[5] = DAT_14615969c;
    auVar18[6] = DAT_14615969c;
    auVar18[7] = DAT_14615969c;
    auVar18[8] = DAT_14615969c;
    auVar18[9] = DAT_14615969c;
    auVar18[10] = DAT_14615969c;
    auVar18[0xb] = DAT_14615969c;
    auVar18[0xc] = DAT_14615969c;
    auVar18[0xd] = DAT_14615969c;
    auVar18[0xe] = DAT_14615969c;
    auVar18[0xf] = DAT_14615969c;
    lVar10 = 0;
    do {
      *(undefined1 (*) [16])(lVar9 + lVar10) = auVar18;
      lVar10 = lVar10 + 400;
    } while ((ulonglong)uVar8 * 400 - lVar10 != 0);
  }
  if (uVar12 != 0) {
    uVar14 = uVar5;
    do {
      lVar10 = 0;
      do {
        if (!SBORROW1('\0',*(char *)(uVar14 + lVar10))) {
          uVar12 = *(uint *)(uVar14 + 0x10 + lVar10 * 0x18);
          uVar12 = (uVar12 >> 0x10 ^ uVar12) * -0x7a143595;
          uVar13 = (uVar12 >> 0xd ^ uVar12) * -0x3d4d51cb;
          uVar13 = uVar13 >> 0x10 ^ uVar13;
          uVar17 = (ulonglong)(uVar13 >> 7 & uVar8 - 1);
          lVar16 = uVar17 * 400;
          auVar18 = vpsignb_avx(*(undefined1 (*) [16])(lVar9 + lVar16),
                                *(undefined1 (*) [16])(lVar9 + lVar16));
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
          uVar12 = (uint)uVar3;
          if (uVar3 == 0) {
            do {
              uVar17 = (ulonglong)((int)uVar17 + 1U & uVar8 - 1);
              lVar16 = uVar17 * 400;
              auVar18 = vpsignb_avx(*(undefined1 (*) [16])(lVar9 + lVar16),
                                    *(undefined1 (*) [16])(lVar9 + lVar16));
              uVar12 = (uint)(ushort)((ushort)(SUB161(auVar18 >> 7,0) & 1) |
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
            } while (uVar12 == 0);
          }
          lVar16 = lVar16 + lVar9;
          uVar4 = 0;
          for (; (uVar12 & 1) == 0; uVar12 = uVar12 >> 1 | 0x80000000) {
            uVar4 = uVar4 + 1;
          }
          uVar17 = (ulonglong)uVar4;
          pauVar1 = (undefined1 (*) [16])(uVar14 + 0x10 + lVar10 * 0x18);
          *(byte *)(lVar16 + uVar17) = (byte)uVar13 & 0x7f;
          *(undefined8 *)(lVar16 + 0x20 + uVar17 * 0x18) = *(undefined8 *)pauVar1[1];
          *(undefined1 (*) [16])(lVar16 + 0x10 + uVar17 * 0x18) = *pauVar1;
          *(undefined1 *)(uVar14 + lVar10) = 0x80;
        }
        lVar10 = lVar10 + 1;
      } while (lVar10 != 0x10);
      uVar14 = uVar14 + 400;
    } while (uVar14 != uVar15 * 400 + uVar5);
  }
  if (uVar5 == 0) {
    return;
  }
  if (uVar5 != 0) {
    if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8)
                 + 8) == '\0') {
      func_0x0001455db994();
    }
    plVar6 = _DAT_14aad45b0;
    lVar9 = **(longlong **)(unaff_GS_OFFSET + 0x58);
    plVar11 = *(longlong **)(lVar9 + 0x13a8);
    if (plVar11 == (longlong *)0x0) {
      if (*(char *)(*(longlong *)
                     (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8) ==
          '\0') {
        func_0x0001455db994();
      }
      *(longlong **)(lVar9 + 0x13a8) = plVar6;
      plVar11 = plVar6;
    }
    cVar7 = (**(code **)(*plVar11 + 200))(plVar11,uVar5);
    if (cVar7 != '\0') {
code_r0x000140093420:
      if (uVar5 == 0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x00014009342c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar11 + 0x10))();
      return;
    }
    if (((uVar5 < _DAT_149e1dac0) || (_DAT_149e1dac0 + _DAT_149e1dac8 <= uVar5)) &&
       ((uVar5 < _DAT_149e1dad0 || (_DAT_149e1dad0 + _DAT_149e1dac8 <= uVar5)))) {
      FUN_14005a140(&stack0xffffffffffffffd8);
      for (plVar11 = unaff_RDI; plVar11 != (longlong *)0x0; plVar11 = (longlong *)plVar11[1]) {
        cVar7 = (**(code **)(*plVar11 + 200))(plVar11,uVar5);
        if (cVar7 != '\0') {
          FUN_14005a120(&stack0xffffffffffffffd8);
          if (plVar11 != (longlong *)0x0) goto code_r0x000140093420;
          goto LAB_140003bf4;
        }
        if (plVar11 == unaff_RSI) break;
      }
      FUN_14005a120(&stack0xffffffffffffffd8);
LAB_140003bf4:
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

