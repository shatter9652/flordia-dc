// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14019f780  size: 468 bytes
// Name:    FUN_14019f780
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

void FUN_14019f780(uint *param_1,uint param_2)

{
  uint uVar1;
  ulonglong uVar2;
  code *pcVar3;
  ushort uVar4;
  longlong *plVar5;
  char cVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *unaff_RSI;
  uint uVar12;
  longlong *unaff_R12;
  uint uVar13;
  ulonglong uVar14;
  longlong unaff_GS_OFFSET;
  undefined1 auVar15 [16];
  
  uVar2 = *(ulonglong *)(param_1 + 2);
  uVar1 = *param_1;
  uVar7 = 0x10;
  if (0x10 < param_2) {
    uVar7 = (ulonglong)param_2;
  }
  uVar7 = (uVar7 * 100 + 0x56) / 0x57 - 1;
  uVar7 = uVar7 >> 1 | uVar7;
  uVar7 = uVar7 >> 2 | uVar7;
  uVar7 = uVar7 >> 4 | uVar7;
  uVar7 = uVar7 >> 8 | uVar7;
  uVar7 = (uVar7 >> 0x10 | uVar7) + 1 >> 4;
  lVar11 = uVar7 * 0x210;
  lVar8 = func_0x000144d9c140(0x10,lVar11);
  auVar15[1] = DAT_146159678;
  auVar15[0] = DAT_146159678;
  auVar15[2] = DAT_146159678;
  auVar15[3] = DAT_146159678;
  auVar15[4] = DAT_146159678;
  auVar15[5] = DAT_146159678;
  auVar15[6] = DAT_146159678;
  auVar15[7] = DAT_146159678;
  auVar15[8] = DAT_146159678;
  auVar15[9] = DAT_146159678;
  auVar15[10] = DAT_146159678;
  auVar15[0xb] = DAT_146159678;
  auVar15[0xc] = DAT_146159678;
  auVar15[0xd] = DAT_146159678;
  auVar15[0xe] = DAT_146159678;
  auVar15[0xf] = DAT_146159678;
  lVar10 = 0;
  *(longlong *)(param_1 + 2) = lVar8;
  *param_1 = (uint)uVar7;
  do {
    *(undefined1 (*) [16])(lVar8 + lVar10) = auVar15;
    lVar10 = lVar10 + 0x210;
  } while (lVar11 - lVar10 != 0);
  if ((ulonglong)uVar1 != 0) {
    uVar7 = uVar2;
    do {
      lVar8 = 0;
      do {
        if (!SBORROW1('\0',*(char *)(uVar7 + lVar8))) {
          uVar14 = *(ulonglong *)(uVar7 + 0x10 + lVar8 * 0x20);
          uVar14 = (uVar14 >> 0x21 ^ uVar14) * -0xae502812aa7333;
          uVar14 = (uVar14 >> 0x21 ^ uVar14) * -0x3b314601e57a13ad;
          uVar14 = uVar14 >> 0x21 ^ uVar14;
          uVar12 = (uint)(uVar14 >> 7) & 0x1ffffff;
          while( true ) {
            uVar12 = uVar12 & *param_1 - 1;
            lVar10 = (ulonglong)uVar12 * 0x210;
            auVar15 = *(undefined1 (*) [16])(*(longlong *)(param_1 + 2) + lVar10);
            auVar15 = vpsignb_avx(auVar15,auVar15);
            uVar4 = (ushort)(SUB161(auVar15 >> 7,0) & 1) |
                    (ushort)(SUB161(auVar15 >> 0xf,0) & 1) << 1 |
                    (ushort)(SUB161(auVar15 >> 0x17,0) & 1) << 2 |
                    (ushort)(SUB161(auVar15 >> 0x1f,0) & 1) << 3 |
                    (ushort)(SUB161(auVar15 >> 0x27,0) & 1) << 4 |
                    (ushort)(SUB161(auVar15 >> 0x2f,0) & 1) << 5 |
                    (ushort)(SUB161(auVar15 >> 0x37,0) & 1) << 6 |
                    (ushort)(SUB161(auVar15 >> 0x3f,0) & 1) << 7 |
                    (ushort)(SUB161(auVar15 >> 0x47,0) & 1) << 8 |
                    (ushort)(SUB161(auVar15 >> 0x4f,0) & 1) << 9 |
                    (ushort)(SUB161(auVar15 >> 0x57,0) & 1) << 10 |
                    (ushort)(SUB161(auVar15 >> 0x5f,0) & 1) << 0xb |
                    (ushort)(SUB161(auVar15 >> 0x67,0) & 1) << 0xc |
                    (ushort)(SUB161(auVar15 >> 0x6f,0) & 1) << 0xd |
                    (ushort)(SUB161(auVar15 >> 0x77,0) & 1) << 0xe |
                    (ushort)(byte)(auVar15[0xf] >> 7) << 0xf;
            if (uVar4 != 0) break;
            uVar12 = uVar12 + 1;
          }
          lVar10 = *(longlong *)(param_1 + 2) + lVar10;
          uVar12 = 0;
          for (uVar13 = (uint)uVar4; (uVar13 & 1) == 0; uVar13 = uVar13 >> 1 | 0x80000000) {
            uVar12 = uVar12 + 1;
          }
          *(byte *)(lVar10 + (ulonglong)uVar12) = (byte)uVar14 & 0x7f;
          *(undefined1 (*) [32])(lVar10 + 0x10 + (ulonglong)(uVar12 << 5)) =
               *(undefined1 (*) [32])(lVar8 * 0x20 + uVar7 + 0x10);
          *(undefined1 *)(uVar7 + lVar8) = 0x80;
        }
        lVar8 = lVar8 + 1;
      } while (lVar8 != 0x10);
      uVar7 = uVar7 + 0x210;
    } while (uVar7 != (ulonglong)uVar1 * 0x210 + uVar2);
  }
  if (uVar2 == 0) {
    return;
  }
  if (uVar2 != 0) {
    if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8)
                 + 8) == '\0') {
      func_0x0001455db994();
    }
    plVar5 = _DAT_14aad45b0;
    lVar8 = **(longlong **)(unaff_GS_OFFSET + 0x58);
    plVar9 = *(longlong **)(lVar8 + 0x13a8);
    if (plVar9 == (longlong *)0x0) {
      if (*(char *)(*(longlong *)
                     (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8) ==
          '\0') {
        func_0x0001455db994();
      }
      *(longlong **)(lVar8 + 0x13a8) = plVar5;
      plVar9 = plVar5;
    }
    cVar6 = (**(code **)(*plVar9 + 200))(plVar9,uVar2);
    if (cVar6 != '\0') {
code_r0x000140093420:
      if (uVar2 == 0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x00014009342c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar9 + 0x10))();
      return;
    }
    if (((uVar2 < _DAT_149e1dac0) || (_DAT_149e1dac0 + _DAT_149e1dac8 <= uVar2)) &&
       ((uVar2 < _DAT_149e1dad0 || (_DAT_149e1dad0 + _DAT_149e1dac8 <= uVar2)))) {
      FUN_14005a140(&stack0xffffffffffffffd8);
      for (plVar9 = unaff_RSI; plVar9 != (longlong *)0x0; plVar9 = (longlong *)plVar9[1]) {
        cVar6 = (**(code **)(*plVar9 + 200))(plVar9,uVar2);
        if (cVar6 != '\0') {
          FUN_14005a120(&stack0xffffffffffffffd8);
          if (plVar9 != (longlong *)0x0) goto code_r0x000140093420;
          goto LAB_140003bf4;
        }
        if (plVar9 == unaff_R12) break;
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

