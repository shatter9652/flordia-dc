// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400262f0  size: 592 bytes
// Name:    FUN_1400262f0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1455940b0, FUN_144f84200, FUN_144375750
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Possible PIC construction at 0x000140003bda: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000140003bdf) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400262f0(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined1 (*pauVar2) [16];
  uint uVar3;
  ulonglong uVar4;
  code *pcVar5;
  ushort uVar6;
  longlong *plVar7;
  char cVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong *plVar13;
  uint uVar14;
  longlong lVar15;
  longlong *unaff_RSI;
  uint uVar16;
  longlong *unaff_R12;
  longlong unaff_GS_OFFSET;
  undefined1 auVar17 [16];
  undefined1 auVar18 [64];
  ulonglong uStack_70;
  
  uVar4 = *(ulonglong *)(param_1 + 2);
  uVar3 = *param_1;
  uVar9 = 0x10;
  if (0x10 < param_2) {
    uVar9 = (ulonglong)param_2;
  }
  uVar9 = (uVar9 * 100 + 0x56) / 0x57 - 1;
  uVar9 = uVar9 >> 1 | uVar9;
  uVar9 = uVar9 >> 2 | uVar9;
  uVar9 = uVar9 >> 4 | uVar9;
  uVar9 = uVar9 >> 8 | uVar9;
  uVar9 = (uVar9 >> 0x10 | uVar9) + 1 >> 4;
  lVar15 = uVar9 * 0x490;
  lVar10 = func_0x000144d9c140(0x10,lVar15);
  auVar17[1] = DAT_146159679;
  auVar17[0] = DAT_146159679;
  auVar17[2] = DAT_146159679;
  auVar17[3] = DAT_146159679;
  auVar17[4] = DAT_146159679;
  auVar17[5] = DAT_146159679;
  auVar17[6] = DAT_146159679;
  auVar17[7] = DAT_146159679;
  auVar17[8] = DAT_146159679;
  auVar17[9] = DAT_146159679;
  auVar17[10] = DAT_146159679;
  auVar17[0xb] = DAT_146159679;
  auVar17[0xc] = DAT_146159679;
  auVar17[0xd] = DAT_146159679;
  auVar17[0xe] = DAT_146159679;
  auVar17[0xf] = DAT_146159679;
  lVar12 = 0;
  *(longlong *)(param_1 + 2) = lVar10;
  *param_1 = (uint)uVar9;
  do {
    *(undefined1 (*) [16])(lVar10 + lVar12) = auVar17;
    lVar12 = lVar12 + 0x490;
  } while (lVar15 - lVar12 != 0);
  if ((ulonglong)uVar3 != 0) {
    auVar18 = ZEXT1264(ZEXT812(0));
    uStack_70 = uVar4;
    do {
      lVar10 = 0;
      do {
        if (!SBORROW1('\0',*(char *)(uStack_70 + lVar10))) {
          uVar9 = *(ulonglong *)(uStack_70 + 0x10 + lVar10 * 0x48);
          uVar9 = (uVar9 >> 0x21 ^ uVar9) * -0xae502812aa7333;
          uVar9 = (uVar9 >> 0x21 ^ uVar9) * -0x3b314601e57a13ad;
          uVar9 = uVar9 >> 0x21 ^ uVar9;
          uVar14 = (uint)(uVar9 >> 7) & 0x1ffffff;
          while( true ) {
            uVar14 = uVar14 & *param_1 - 1;
            lVar12 = (ulonglong)uVar14 * 0x490;
            auVar17 = *(undefined1 (*) [16])(*(longlong *)(param_1 + 2) + lVar12);
            auVar17 = vpsignb_avx(auVar17,auVar17);
            uVar6 = (ushort)(SUB161(auVar17 >> 7,0) & 1) |
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
                    (ushort)(byte)(auVar17[0xf] >> 7) << 0xf;
            if (uVar6 != 0) break;
            uVar14 = uVar14 + 1;
          }
          lVar12 = *(longlong *)(param_1 + 2) + lVar12;
          puVar1 = (undefined8 *)(uStack_70 + 0x10 + lVar10 * 0x48);
          uVar14 = 0;
          for (uVar16 = (uint)uVar6; (uVar16 & 1) == 0; uVar16 = uVar16 >> 1 | 0x80000000) {
            uVar14 = uVar14 + 1;
          }
          uVar11 = (ulonglong)uVar14;
          *(byte *)(lVar12 + uVar11) = (byte)uVar9 & 0x7f;
          pauVar2 = (undefined1 (*) [16])(lVar12 + 0x18 + uVar11 * 0x48);
          *(undefined8 *)(pauVar2[-1] + 8) = *puVar1;
          *pauVar2 = auVar18._0_16_;
          FUN_144375750(pauVar2,puVar1 + 1);
          *(undefined4 *)(pauVar2[1] + 8) = *(undefined4 *)(puVar1 + 4);
          *(undefined8 *)pauVar2[1] = puVar1[3];
          func_0x0001447b3f90(lVar12 + 0x38 + uVar11 * 0x48,puVar1 + 5);
          *(undefined1 *)(uStack_70 + lVar10) = 0x80;
          FUN_144f84200(puVar1 + 5);
          FUN_1455940b0(puVar1 + 1);
        }
        lVar10 = lVar10 + 1;
      } while (lVar10 != 0x10);
      uStack_70 = uStack_70 + 0x490;
    } while (uStack_70 != (ulonglong)uVar3 * 0x490 + uVar4);
  }
  if (uVar4 == 0) {
    return;
  }
  if (uVar4 != 0) {
    if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8)
                 + 8) == '\0') {
      func_0x0001455db994();
    }
    plVar7 = _DAT_14aad45b0;
    lVar10 = **(longlong **)(unaff_GS_OFFSET + 0x58);
    plVar13 = *(longlong **)(lVar10 + 0x13a8);
    if (plVar13 == (longlong *)0x0) {
      if (*(char *)(*(longlong *)
                     (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8) ==
          '\0') {
        func_0x0001455db994();
      }
      *(longlong **)(lVar10 + 0x13a8) = plVar7;
      plVar13 = plVar7;
    }
    cVar8 = (**(code **)(*plVar13 + 200))(plVar13,uVar4);
    if (cVar8 != '\0') {
code_r0x000140093420:
      if (uVar4 == 0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x00014009342c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar13 + 0x10))();
      return;
    }
    if (((uVar4 < _DAT_149e1dac0) || (_DAT_149e1dac0 + _DAT_149e1dac8 <= uVar4)) &&
       ((uVar4 < _DAT_149e1dad0 || (_DAT_149e1dad0 + _DAT_149e1dac8 <= uVar4)))) {
      FUN_14005a140(&stack0xffffffffffffffd8);
      for (plVar13 = unaff_RSI; plVar13 != (longlong *)0x0; plVar13 = (longlong *)plVar13[1]) {
        cVar8 = (**(code **)(*plVar13 + 200))(plVar13,uVar4);
        if (cVar8 != '\0') {
          FUN_14005a120(&stack0xffffffffffffffd8);
          if (plVar13 != (longlong *)0x0) goto code_r0x000140093420;
          goto LAB_140003bf4;
        }
        if (plVar13 == unaff_R12) break;
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

