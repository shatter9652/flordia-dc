// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400598b0  size: 395 bytes
// Name:    FUN_1400598b0
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

void FUN_1400598b0(uint *param_1,uint param_2)

{
  uint uVar1;
  ulonglong uVar2;
  code *pcVar3;
  ushort uVar4;
  uint uVar5;
  longlong *plVar6;
  char cVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  ulonglong uVar12;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar13;
  uint uVar14;
  ulonglong uVar15;
  longlong unaff_GS_OFFSET;
  undefined1 auVar16 [16];
  
  uVar2 = *(ulonglong *)(param_1 + 2);
  uVar1 = *param_1;
  uVar8 = 0x10;
  if (0x10 < param_2) {
    uVar8 = param_2;
  }
  uVar8 = func_0x000145503b80(uVar8,0x57);
  lVar13 = (ulonglong)uVar8 * 0x90;
  lVar9 = func_0x000144d9c140(0x10,lVar13);
  *(longlong *)(param_1 + 2) = lVar9;
  *param_1 = uVar8;
  if ((ulonglong)uVar8 != 0) {
    auVar16[1] = DAT_146159284;
    auVar16[0] = DAT_146159284;
    auVar16[2] = DAT_146159284;
    auVar16[3] = DAT_146159284;
    auVar16[4] = DAT_146159284;
    auVar16[5] = DAT_146159284;
    auVar16[6] = DAT_146159284;
    auVar16[7] = DAT_146159284;
    auVar16[8] = DAT_146159284;
    auVar16[9] = DAT_146159284;
    auVar16[10] = DAT_146159284;
    auVar16[0xb] = DAT_146159284;
    auVar16[0xc] = DAT_146159284;
    auVar16[0xd] = DAT_146159284;
    auVar16[0xe] = DAT_146159284;
    auVar16[0xf] = DAT_146159284;
    lVar10 = 0;
    do {
      *(undefined1 (*) [16])(lVar9 + lVar10) = auVar16;
      lVar10 = lVar10 + 0x90;
    } while (lVar13 != lVar10);
  }
  if (uVar1 != 0) {
    uVar12 = uVar2;
    do {
      lVar13 = 0;
      do {
        if (!SBORROW1('\0',*(char *)(uVar12 + lVar13))) {
          uVar8 = *(uint *)(uVar12 + 0x10 + lVar13 * 8);
          lVar9 = *(longlong *)(param_1 + 2);
          uVar8 = (uVar8 >> 0x10 ^ uVar8) * -0x7a143595;
          uVar14 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
          uVar14 = uVar14 >> 0x10 ^ uVar14;
          uVar15 = (ulonglong)(uVar14 >> 7 & *param_1 - 1);
          lVar10 = uVar15 * 0x90;
          auVar16 = vpsignb_avx(*(undefined1 (*) [16])(lVar9 + lVar10),
                                *(undefined1 (*) [16])(lVar9 + lVar10));
          uVar4 = (ushort)(SUB161(auVar16 >> 7,0) & 1) | (ushort)(SUB161(auVar16 >> 0xf,0) & 1) << 1
                  | (ushort)(SUB161(auVar16 >> 0x17,0) & 1) << 2 |
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
          uVar8 = (uint)uVar4;
          if (uVar4 == 0) {
            do {
              uVar15 = (ulonglong)((int)uVar15 + 1U & *param_1 - 1);
              lVar10 = uVar15 * 0x90;
              auVar16 = vpsignb_avx(*(undefined1 (*) [16])(lVar9 + lVar10),
                                    *(undefined1 (*) [16])(lVar9 + lVar10));
              uVar8 = (uint)(ushort)((ushort)(SUB161(auVar16 >> 7,0) & 1) |
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
                                    (ushort)(byte)(auVar16[0xf] >> 7) << 0xf);
            } while (uVar8 == 0);
          }
          uVar5 = 0;
          for (; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
            uVar5 = uVar5 + 1;
          }
          *(byte *)(lVar9 + lVar10 + (ulonglong)uVar5) = (byte)uVar14 & 0x7f;
          *(undefined8 *)(lVar9 + lVar10 + 0x10 + (ulonglong)uVar5 * 8) =
               *(undefined8 *)(uVar12 + 0x10 + lVar13 * 8);
          *(undefined1 *)(uVar12 + lVar13) = 0x80;
        }
        lVar13 = lVar13 + 1;
      } while (lVar13 != 0x10);
      uVar12 = uVar12 + 0x90;
    } while (uVar12 != (ulonglong)uVar1 * 0x90 + uVar2);
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
    lVar13 = **(longlong **)(unaff_GS_OFFSET + 0x58);
    plVar11 = *(longlong **)(lVar13 + 0x13a8);
    if (plVar11 == (longlong *)0x0) {
      if (*(char *)(*(longlong *)
                     (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8) ==
          '\0') {
        func_0x0001455db994();
      }
      *(longlong **)(lVar13 + 0x13a8) = plVar6;
      plVar11 = plVar6;
    }
    cVar7 = (**(code **)(*plVar11 + 200))(plVar11,uVar2);
    if (cVar7 != '\0') {
code_r0x000140093420:
      if (uVar2 == 0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x00014009342c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar11 + 0x10))();
      return;
    }
    if (((uVar2 < _DAT_149e1dac0) || (_DAT_149e1dac0 + _DAT_149e1dac8 <= uVar2)) &&
       ((uVar2 < _DAT_149e1dad0 || (_DAT_149e1dad0 + _DAT_149e1dac8 <= uVar2)))) {
      FUN_14005a140(&stack0xffffffffffffffd8);
      for (plVar11 = unaff_RDI; plVar11 != (longlong *)0x0; plVar11 = (longlong *)plVar11[1]) {
        cVar7 = (**(code **)(*plVar11 + 200))(plVar11,uVar2);
        if (cVar7 != '\0') {
          FUN_14005a120(&stack0xffffffffffffffd8);
          if (plVar11 != (longlong *)0x0) goto code_r0x000140093420;
          goto LAB_140003bf4;
        }
        if (plVar11 == unaff_RSI) break;
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

