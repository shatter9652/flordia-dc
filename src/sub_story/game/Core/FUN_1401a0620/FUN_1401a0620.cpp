// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401a0620  size: 547 bytes
// Name:    FUN_1401a0620
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14019c270
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Possible PIC construction at 0x000140003bda: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000140003bdf) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401a0620(uint *param_1,uint param_2)

{
  uint uVar1;
  uint *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  code *pcVar5;
  ushort uVar6;
  uint uVar7;
  longlong *plVar8;
  char cVar9;
  uint uVar10;
  ulonglong uVar11;
  uint *puVar12;
  uint uVar13;
  longlong *plVar14;
  longlong lVar15;
  uint *puVar16;
  longlong *unaff_RSI;
  longlong lVar17;
  longlong *unaff_R12;
  ulonglong uVar18;
  longlong unaff_GS_OFFSET;
  undefined1 auVar19 [16];
  
  uVar1 = *param_1;
  puVar2 = *(uint **)(param_1 + 4);
  uVar11 = 0x10;
  if (0x10 < param_2) {
    uVar11 = (ulonglong)param_2;
  }
  uVar11 = (uVar11 * 100 + 0x56) / 0x57 - 1;
  uVar11 = uVar11 >> 1 | uVar11;
  uVar11 = uVar11 >> 2 | uVar11;
  uVar11 = uVar11 >> 4 | uVar11;
  uVar11 = uVar11 >> 8 | uVar11;
  uVar11 = uVar11 >> 0x10 | uVar11;
  uVar18 = uVar11 + 1 >> 4;
  if (uVar11 < 0x1f) {
    puVar12 = param_1 + 8;
    uVar10 = 1;
  }
  else {
    puVar12 = (uint *)func_0x000144d9c140(0x10,uVar18 * 0x110);
    uVar10 = (uint)uVar18;
  }
  auVar19[1] = DAT_14615971f;
  auVar19[0] = DAT_14615971f;
  auVar19[2] = DAT_14615971f;
  auVar19[3] = DAT_14615971f;
  auVar19[4] = DAT_14615971f;
  auVar19[5] = DAT_14615971f;
  auVar19[6] = DAT_14615971f;
  auVar19[7] = DAT_14615971f;
  auVar19[8] = DAT_14615971f;
  auVar19[9] = DAT_14615971f;
  auVar19[10] = DAT_14615971f;
  auVar19[0xb] = DAT_14615971f;
  auVar19[0xc] = DAT_14615971f;
  auVar19[0xd] = DAT_14615971f;
  auVar19[0xe] = DAT_14615971f;
  auVar19[0xf] = DAT_14615971f;
  *(uint **)(param_1 + 4) = puVar12;
  *param_1 = uVar10;
  lVar15 = 0;
  do {
    *(undefined1 (*) [16])((longlong)puVar12 + lVar15) = auVar19;
    lVar15 = lVar15 + 0x110;
  } while (uVar18 * 0x110 - lVar15 != 0);
  puVar12 = puVar2;
  if (uVar1 != 0) {
    do {
      lVar15 = 0;
      do {
        if (!SBORROW1('\0',*(char *)((longlong)puVar12 + lVar15))) {
          lVar3 = *(longlong *)(param_1 + 4);
          uVar10 = (puVar12[lVar15 * 4 + 4] >> 0x10 ^ puVar12[lVar15 * 4 + 4]) * -0x7a143595;
          uVar13 = (uVar10 >> 0xd ^ uVar10) * -0x3d4d51cb;
          uVar13 = uVar13 >> 0x10 ^ uVar13;
          uVar11 = (ulonglong)(uVar13 >> 7 & *param_1 - 1);
          lVar17 = uVar11 * 0x110;
          auVar19 = vpsignb_avx(*(undefined1 (*) [16])(lVar3 + lVar17),
                                *(undefined1 (*) [16])(lVar3 + lVar17));
          uVar6 = (ushort)(SUB161(auVar19 >> 7,0) & 1) | (ushort)(SUB161(auVar19 >> 0xf,0) & 1) << 1
                  | (ushort)(SUB161(auVar19 >> 0x17,0) & 1) << 2 |
                  (ushort)(SUB161(auVar19 >> 0x1f,0) & 1) << 3 |
                  (ushort)(SUB161(auVar19 >> 0x27,0) & 1) << 4 |
                  (ushort)(SUB161(auVar19 >> 0x2f,0) & 1) << 5 |
                  (ushort)(SUB161(auVar19 >> 0x37,0) & 1) << 6 |
                  (ushort)(SUB161(auVar19 >> 0x3f,0) & 1) << 7 |
                  (ushort)(SUB161(auVar19 >> 0x47,0) & 1) << 8 |
                  (ushort)(SUB161(auVar19 >> 0x4f,0) & 1) << 9 |
                  (ushort)(SUB161(auVar19 >> 0x57,0) & 1) << 10 |
                  (ushort)(SUB161(auVar19 >> 0x5f,0) & 1) << 0xb |
                  (ushort)(SUB161(auVar19 >> 0x67,0) & 1) << 0xc |
                  (ushort)(SUB161(auVar19 >> 0x6f,0) & 1) << 0xd |
                  (ushort)(SUB161(auVar19 >> 0x77,0) & 1) << 0xe |
                  (ushort)(byte)(auVar19[0xf] >> 7) << 0xf;
          uVar10 = (uint)uVar6;
          if (uVar6 == 0) {
            do {
              uVar11 = (ulonglong)((int)uVar11 + 1U & *param_1 - 1);
              lVar17 = uVar11 * 0x110;
              auVar19 = vpsignb_avx(*(undefined1 (*) [16])(lVar3 + lVar17),
                                    *(undefined1 (*) [16])(lVar3 + lVar17));
              uVar10 = (uint)(ushort)((ushort)(SUB161(auVar19 >> 7,0) & 1) |
                                      (ushort)(SUB161(auVar19 >> 0xf,0) & 1) << 1 |
                                      (ushort)(SUB161(auVar19 >> 0x17,0) & 1) << 2 |
                                      (ushort)(SUB161(auVar19 >> 0x1f,0) & 1) << 3 |
                                      (ushort)(SUB161(auVar19 >> 0x27,0) & 1) << 4 |
                                      (ushort)(SUB161(auVar19 >> 0x2f,0) & 1) << 5 |
                                      (ushort)(SUB161(auVar19 >> 0x37,0) & 1) << 6 |
                                      (ushort)(SUB161(auVar19 >> 0x3f,0) & 1) << 7 |
                                      (ushort)(SUB161(auVar19 >> 0x47,0) & 1) << 8 |
                                      (ushort)(SUB161(auVar19 >> 0x4f,0) & 1) << 9 |
                                      (ushort)(SUB161(auVar19 >> 0x57,0) & 1) << 10 |
                                      (ushort)(SUB161(auVar19 >> 0x5f,0) & 1) << 0xb |
                                      (ushort)(SUB161(auVar19 >> 0x67,0) & 1) << 0xc |
                                      (ushort)(SUB161(auVar19 >> 0x6f,0) & 1) << 0xd |
                                      (ushort)(SUB161(auVar19 >> 0x77,0) & 1) << 0xe |
                                     (ushort)(byte)(auVar19[0xf] >> 7) << 0xf);
            } while (uVar10 == 0);
          }
          uVar7 = 0;
          for (; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x80000000) {
            uVar7 = uVar7 + 1;
          }
          puVar16 = puVar12 + lVar15 * 4 + 4;
          *(byte *)(lVar3 + lVar17 + (ulonglong)uVar7) = (byte)uVar13 & 0x7f;
          lVar3 = lVar3 + lVar17 + 0x10 + (ulonglong)(uVar7 << 4);
          func_0x000144df8490(lVar3,*puVar16);
          uVar4 = *(undefined8 *)(puVar16 + 2);
          puVar16[2] = 0;
          puVar16[3] = 0;
          *(undefined8 *)(lVar3 + 8) = uVar4;
          *(undefined1 *)((longlong)puVar12 + lVar15) = 0x80;
          FUN_14019c270(*(undefined8 *)(puVar16 + 2));
        }
        lVar15 = lVar15 + 1;
      } while (lVar15 != 0x10);
      puVar12 = puVar12 + 0x44;
    } while (puVar12 != puVar2 + (ulonglong)uVar1 * 0x44);
  }
  if (puVar2 == (uint *)0x0 || param_1 + 8 == puVar2) {
    return;
  }
  if (puVar2 != (uint *)0x0) {
    if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8)
                 + 8) == '\0') {
      func_0x0001455db994();
    }
    plVar8 = _DAT_14aad45b0;
    lVar15 = **(longlong **)(unaff_GS_OFFSET + 0x58);
    plVar14 = *(longlong **)(lVar15 + 0x13a8);
    if (plVar14 == (longlong *)0x0) {
      if (*(char *)(*(longlong *)
                     (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8) ==
          '\0') {
        func_0x0001455db994();
      }
      *(longlong **)(lVar15 + 0x13a8) = plVar8;
      plVar14 = plVar8;
    }
    cVar9 = (**(code **)(*plVar14 + 200))(plVar14,puVar2);
    if (cVar9 != '\0') {
code_r0x000140093420:
      if (puVar2 == (uint *)0x0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x00014009342c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar14 + 0x10))();
      return;
    }
    if (((puVar2 < _DAT_149e1dac0) ||
        ((uint *)((longlong)_DAT_149e1dac0 + _DAT_149e1dac8) <= puVar2)) &&
       ((puVar2 < _DAT_149e1dad0 || ((uint *)((longlong)_DAT_149e1dad0 + _DAT_149e1dac8) <= puVar2))
       )) {
      FUN_14005a140(&stack0xffffffffffffffd8);
      for (plVar14 = unaff_RSI; plVar14 != (longlong *)0x0; plVar14 = (longlong *)plVar14[1]) {
        cVar9 = (**(code **)(*plVar14 + 200))(plVar14,puVar2);
        if (cVar9 != '\0') {
          FUN_14005a120(&stack0xffffffffffffffd8);
          if (plVar14 != (longlong *)0x0) goto code_r0x000140093420;
          goto LAB_140003bf4;
        }
        if (plVar14 == unaff_R12) break;
      }
      FUN_14005a120(&stack0xffffffffffffffd8);
LAB_140003bf4:
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  return;
}

