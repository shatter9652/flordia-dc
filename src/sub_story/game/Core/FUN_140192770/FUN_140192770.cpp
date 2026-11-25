// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140192770  size: 401 bytes
// Name:    FUN_140192770
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_142b7d450
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Possible PIC construction at 0x000140003bda: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000140003bdf) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140192770(uint *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  code *pcVar4;
  ushort uVar5;
  longlong *plVar6;
  char cVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined4 *puVar12;
  longlong lVar13;
  longlong *unaff_RSI;
  uint uVar14;
  uint uVar15;
  longlong *unaff_R12;
  longlong unaff_GS_OFFSET;
  undefined1 auVar16 [16];
  
  uVar3 = *(ulonglong *)(param_1 + 2);
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
  uVar8 = uVar8 >> 0x10 | uVar8;
  uVar8 = (uVar8 >> 0x20 | uVar8) + 1 >> 4;
  lVar13 = uVar8 * 0x690;
  lVar9 = func_0x000144d9c140(0x10,lVar13);
  auVar16[1] = DAT_146159185;
  auVar16[0] = DAT_146159185;
  auVar16[2] = DAT_146159185;
  auVar16[3] = DAT_146159185;
  auVar16[4] = DAT_146159185;
  auVar16[5] = DAT_146159185;
  auVar16[6] = DAT_146159185;
  auVar16[7] = DAT_146159185;
  auVar16[8] = DAT_146159185;
  auVar16[9] = DAT_146159185;
  auVar16[10] = DAT_146159185;
  auVar16[0xb] = DAT_146159185;
  auVar16[0xc] = DAT_146159185;
  auVar16[0xd] = DAT_146159185;
  auVar16[0xe] = DAT_146159185;
  auVar16[0xf] = DAT_146159185;
  lVar11 = 0;
  *(longlong *)(param_1 + 2) = lVar9;
  *param_1 = (uint)uVar8;
  do {
    *(undefined1 (*) [16])(lVar9 + lVar11) = auVar16;
    lVar11 = lVar11 + 0x690;
  } while (lVar13 - lVar11 != 0);
  if ((ulonglong)uVar1 != 0) {
    uVar8 = uVar3;
    do {
      lVar9 = 0;
      do {
        if (!SBORROW1('\0',*(char *)(uVar8 + lVar9))) {
          uVar2 = *(uint *)(uVar8 + 0x10 + lVar9 * 0x68);
          uVar14 = uVar2 >> 7;
          while( true ) {
            uVar14 = uVar14 & *param_1 - 1;
            lVar11 = (ulonglong)uVar14 * 0x690;
            auVar16 = *(undefined1 (*) [16])(*(longlong *)(param_1 + 2) + lVar11);
            auVar16 = vpsignb_avx(auVar16,auVar16);
            uVar5 = (ushort)(SUB161(auVar16 >> 7,0) & 1) |
                    (ushort)(SUB161(auVar16 >> 0xf,0) & 1) << 1 |
                    (ushort)(SUB161(auVar16 >> 0x17,0) & 1) << 2 |
                    (ushort)(SUB161(auVar16 >> 0x1f,0) & 1) << 3 |
                    (ushort)(SUB161(auVar16 >> 0x27,0) & 1) << 4 |
                    (ushort)(SUB161(auVar16 >> 0x2f,0) & 1) << 5 |
                    (ushort)(SUB161(auVar16 >> 0x37,0) & 1) << 6 |
                    (ushort)(SUB161(auVar16 >> 0x3f,0) & 1) << 7 |
                    (ushort)(SUB161(auVar16 >> 0x47,0) & 1) << 8 |
                    (ushort)(SUB161(auVar16 >> 0x4f,0) & 1) << 9 |
                    (ushort)(SUB161(auVar16 >> 0x57,0) & 1) << 10 |
                    (ushort)(SUB161(auVar16 >> 0x5f,0) & 1) << 0xb |
                    (ushort)(SUB161(auVar16 >> 0x67,0) & 1) << 0xc |
                    (ushort)(SUB161(auVar16 >> 0x6f,0) & 1) << 0xd |
                    (ushort)(SUB161(auVar16 >> 0x77,0) & 1) << 0xe |
                    (ushort)(byte)(auVar16[0xf] >> 7) << 0xf;
            if (uVar5 != 0) break;
            uVar14 = uVar14 + 1;
          }
          uVar14 = 0;
          for (uVar15 = (uint)uVar5; (uVar15 & 1) == 0; uVar15 = uVar15 >> 1 | 0x80000000) {
            uVar14 = uVar14 + 1;
          }
          lVar11 = *(longlong *)(param_1 + 2) + lVar11;
          puVar12 = (undefined4 *)(lVar9 * 0x68 + uVar8 + 0x10);
          *(byte *)(lVar11 + (ulonglong)uVar14) = (byte)uVar2 & 0x7f;
          lVar11 = lVar11 + 0x18 + (ulonglong)uVar14 * 0x68;
          *(undefined4 *)(lVar11 + -8) = *puVar12;
          FUN_142b7d450(lVar11,puVar12 + 2);
          *(undefined1 *)(uVar8 + lVar9) = 0x80;
        }
        lVar9 = lVar9 + 1;
      } while (lVar9 != 0x10);
      uVar8 = uVar8 + 0x690;
    } while (uVar8 != (ulonglong)uVar1 * 0x690 + uVar3);
  }
  if (uVar3 == 0) {
    return;
  }
  if (uVar3 != 0) {
    if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8)
                 + 8) == '\0') {
      func_0x0001455db994();
    }
    plVar6 = _DAT_14aad45b0;
    lVar9 = **(longlong **)(unaff_GS_OFFSET + 0x58);
    plVar10 = *(longlong **)(lVar9 + 0x13a8);
    if (plVar10 == (longlong *)0x0) {
      if (*(char *)(*(longlong *)
                     (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8) ==
          '\0') {
        func_0x0001455db994();
      }
      *(longlong **)(lVar9 + 0x13a8) = plVar6;
      plVar10 = plVar6;
    }
    cVar7 = (**(code **)(*plVar10 + 200))(plVar10,uVar3);
    if (cVar7 != '\0') {
code_r0x000140093420:
      if (uVar3 == 0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x00014009342c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar10 + 0x10))();
      return;
    }
    if (((uVar3 < _DAT_149e1dac0) || (_DAT_149e1dac0 + _DAT_149e1dac8 <= uVar3)) &&
       ((uVar3 < _DAT_149e1dad0 || (_DAT_149e1dad0 + _DAT_149e1dac8 <= uVar3)))) {
      FUN_14005a140(&stack0xffffffffffffffd8);
      for (plVar10 = unaff_RSI; plVar10 != (longlong *)0x0; plVar10 = (longlong *)plVar10[1]) {
        cVar7 = (**(code **)(*plVar10 + 200))(plVar10,uVar3);
        if (cVar7 != '\0') {
          FUN_14005a120(&stack0xffffffffffffffd8);
          if (plVar10 != (longlong *)0x0) goto code_r0x000140093420;
          goto LAB_140003bf4;
        }
        if (plVar10 == unaff_R12) break;
      }
      FUN_14005a120(&stack0xffffffffffffffd8);
LAB_140003bf4:
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  return;
}

