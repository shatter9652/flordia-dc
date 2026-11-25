// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140168e20  size: 415 bytes
// Name:    FUN_140168e20
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

void FUN_140168e20(uint *param_1,uint param_2)

{
  uint uVar1;
  ulonglong uVar2;
  code *pcVar3;
  ushort uVar4;
  uint uVar5;
  longlong *plVar6;
  char cVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  uint uVar12;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar14;
  uint uVar15;
  ulonglong uVar16;
  longlong unaff_GS_OFFSET;
  undefined1 auVar17 [16];
  ulonglong uVar13;
  
  uVar2 = *(ulonglong *)(param_1 + 2);
  uVar1 = *param_1;
  uVar8 = 0x10;
  if (0x10 < param_2) {
    uVar8 = (ulonglong)param_2;
  }
  uVar8 = (uVar8 * 100 + 0x56) / 0x57 - 1;
  uVar8 = uVar8 >> 1 | uVar8;
  uVar8 = uVar8 >> 2 | uVar8;
  uVar8 = uVar8 >> 4 | uVar8;
  uVar8 = uVar8 >> 8 | uVar8;
  uVar8 = (uVar8 >> 0x10 | uVar8) + 1;
  lVar14 = (uVar8 & 0xfffffffffffffff0) * 5;
  lVar9 = func_0x000144d9c140(0x10,lVar14);
  auVar17[1] = DAT_14615928f;
  auVar17[0] = DAT_14615928f;
  auVar17[2] = DAT_14615928f;
  auVar17[3] = DAT_14615928f;
  auVar17[4] = DAT_14615928f;
  auVar17[5] = DAT_14615928f;
  auVar17[6] = DAT_14615928f;
  auVar17[7] = DAT_14615928f;
  auVar17[8] = DAT_14615928f;
  auVar17[9] = DAT_14615928f;
  auVar17[10] = DAT_14615928f;
  auVar17[0xb] = DAT_14615928f;
  auVar17[0xc] = DAT_14615928f;
  auVar17[0xd] = DAT_14615928f;
  auVar17[0xe] = DAT_14615928f;
  auVar17[0xf] = DAT_14615928f;
  lVar11 = 0;
  *(longlong *)(param_1 + 2) = lVar9;
  *param_1 = (uint)(uVar8 >> 4);
  do {
    *(undefined1 (*) [16])(lVar9 + lVar11) = auVar17;
    lVar11 = lVar11 + 0x50;
  } while (lVar14 != lVar11);
  if ((ulonglong)uVar1 != 0) {
    uVar8 = uVar2;
    do {
      lVar14 = 0;
      do {
        if (!SBORROW1('\0',*(char *)(uVar8 + lVar14))) {
          lVar9 = *(longlong *)(param_1 + 2);
          uVar15 = *(uint *)(uVar8 + 0x10 + lVar14 * 4) & 0x3fffff;
          if (uVar15 == 0x3fffff) {
            uVar15 = 0xffffffff;
          }
          uVar12 = uVar15 >> 7 & *param_1 - 1;
          uVar13 = (ulonglong)uVar12;
          uVar16 = (ulonglong)(uVar12 * 0x50);
          auVar17 = vpsignb_avx(*(undefined1 (*) [16])(lVar9 + uVar16),
                                *(undefined1 (*) [16])(lVar9 + uVar16));
          uVar4 = (ushort)(SUB161(auVar17 >> 7,0) & 1) | (ushort)(SUB161(auVar17 >> 0xf,0) & 1) << 1
                  | (ushort)(SUB161(auVar17 >> 0x17,0) & 1) << 2 |
                  (ushort)(SUB161(auVar17 >> 0x1f,0) & 1) << 3 |
                  (ushort)(SUB161(auVar17 >> 0x27,0) & 1) << 4 |
                  (ushort)(SUB161(auVar17 >> 0x2f,0) & 1) << 5 |
                  (ushort)(SUB161(auVar17 >> 0x37,0) & 1) << 6 |
                  (ushort)(SUB161(auVar17 >> 0x3f,0) & 1) << 7 |
                  (ushort)(SUB161(auVar17 >> 0x47,0) & 1) << 8 |
                  (ushort)(SUB161(auVar17 >> 0x4f,0) & 1) << 9 |
                  (ushort)(SUB161(auVar17 >> 0x57,0) & 1) << 10 |
                  (ushort)(SUB161(auVar17 >> 0x5f,0) & 1) << 0xb |
                  (ushort)(SUB161(auVar17 >> 0x67,0) & 1) << 0xc |
                  (ushort)(SUB161(auVar17 >> 0x6f,0) & 1) << 0xd |
                  (ushort)(SUB161(auVar17 >> 0x77,0) & 1) << 0xe |
                  (ushort)(byte)(auVar17[0xf] >> 7) << 0xf;
          uVar12 = (uint)uVar4;
          if (uVar4 == 0) {
            do {
              uVar13 = (ulonglong)((int)uVar13 + 1U & *param_1 - 1);
              uVar16 = uVar13 * 0x50;
              auVar17 = vpsignb_avx(*(undefined1 (*) [16])(lVar9 + uVar16),
                                    *(undefined1 (*) [16])(lVar9 + uVar16));
              uVar12 = (uint)(ushort)((ushort)(SUB161(auVar17 >> 7,0) & 1) |
                                      (ushort)(SUB161(auVar17 >> 0xf,0) & 1) << 1 |
                                      (ushort)(SUB161(auVar17 >> 0x17,0) & 1) << 2 |
                                      (ushort)(SUB161(auVar17 >> 0x1f,0) & 1) << 3 |
                                      (ushort)(SUB161(auVar17 >> 0x27,0) & 1) << 4 |
                                      (ushort)(SUB161(auVar17 >> 0x2f,0) & 1) << 5 |
                                      (ushort)(SUB161(auVar17 >> 0x37,0) & 1) << 6 |
                                      (ushort)(SUB161(auVar17 >> 0x3f,0) & 1) << 7 |
                                      (ushort)(SUB161(auVar17 >> 0x47,0) & 1) << 8 |
                                      (ushort)(SUB161(auVar17 >> 0x4f,0) & 1) << 9 |
                                      (ushort)(SUB161(auVar17 >> 0x57,0) & 1) << 10 |
                                      (ushort)(SUB161(auVar17 >> 0x5f,0) & 1) << 0xb |
                                      (ushort)(SUB161(auVar17 >> 0x67,0) & 1) << 0xc |
                                      (ushort)(SUB161(auVar17 >> 0x6f,0) & 1) << 0xd |
                                      (ushort)(SUB161(auVar17 >> 0x77,0) & 1) << 0xe |
                                     (ushort)(byte)(auVar17[0xf] >> 7) << 0xf);
            } while (uVar12 == 0);
          }
          uVar5 = 0;
          for (; (uVar12 & 1) == 0; uVar12 = uVar12 >> 1 | 0x80000000) {
            uVar5 = uVar5 + 1;
          }
          *(byte *)(lVar9 + uVar16 + (ulonglong)uVar5) = (byte)uVar15 & 0x7f;
          *(undefined4 *)(lVar9 + uVar16 + 0x10 + (ulonglong)uVar5 * 4) =
               *(undefined4 *)(uVar8 + 0x10 + lVar14 * 4);
          *(undefined1 *)(uVar8 + lVar14) = 0x80;
        }
        lVar14 = lVar14 + 1;
      } while (lVar14 != 0x10);
      uVar8 = uVar8 + 0x50;
    } while (uVar8 != (ulonglong)uVar1 * 0x50 + uVar2);
  }
  if (uVar2 == 0) {
    return;
  }
  if (uVar2 != 0) {
    if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8)
                 + 8) == '\0') {
      func_0x0001455db994();
    }
    plVar6 = _DAT_14aad45b0;
    lVar14 = **(longlong **)(unaff_GS_OFFSET + 0x58);
    plVar10 = *(longlong **)(lVar14 + 0x13a8);
    if (plVar10 == (longlong *)0x0) {
      if (*(char *)(*(longlong *)
                     (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8) ==
          '\0') {
        func_0x0001455db994();
      }
      *(longlong **)(lVar14 + 0x13a8) = plVar6;
      plVar10 = plVar6;
    }
    cVar7 = (**(code **)(*plVar10 + 200))(plVar10,uVar2);
    if (cVar7 != '\0') {
code_r0x000140093420:
      if (uVar2 == 0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x00014009342c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar10 + 0x10))();
      return;
    }
    if (((uVar2 < _DAT_149e1dac0) || (_DAT_149e1dac0 + _DAT_149e1dac8 <= uVar2)) &&
       ((uVar2 < _DAT_149e1dad0 || (_DAT_149e1dad0 + _DAT_149e1dac8 <= uVar2)))) {
      FUN_14005a140(&stack0xffffffffffffffd8);
      for (plVar10 = unaff_RDI; plVar10 != (longlong *)0x0; plVar10 = (longlong *)plVar10[1]) {
        cVar7 = (**(code **)(*plVar10 + 200))(plVar10,uVar2);
        if (cVar7 != '\0') {
          FUN_14005a120(&stack0xffffffffffffffd8);
          if (plVar10 != (longlong *)0x0) goto code_r0x000140093420;
          goto LAB_140003bf4;
        }
        if (plVar10 == unaff_RSI) break;
      }
      FUN_14005a120(&stack0xffffffffffffffd8);
LAB_140003bf4:
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}

