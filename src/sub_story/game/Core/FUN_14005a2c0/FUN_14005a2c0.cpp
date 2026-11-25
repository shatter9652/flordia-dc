// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14005a2c0  size: 420 bytes
// Name:    FUN_14005a2c0
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

void FUN_14005a2c0(uint param_1)

{
  code *pcVar1;
  ushort uVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong *plVar5;
  char cVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  uint uVar11;
  longlong *unaff_RSI;
  ulonglong uVar12;
  longlong *unaff_R12;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  longlong unaff_GS_OFFSET;
  undefined1 auVar17 [16];
  
  uVar4 = _DAT_1499a6af0;
  uVar11 = _DAT_1499a6ae8;
  uVar16 = (ulonglong)_DAT_1499a6ae8;
  if (param_1 < 0x11) {
    param_1 = 0x10;
  }
  uVar7 = func_0x000145503b80(param_1,0x57);
  lVar8 = func_0x000144d9c140();
  _DAT_1499a6ae8 = uVar7;
  _DAT_1499a6af0 = lVar8;
  if ((ulonglong)uVar7 != 0) {
    auVar17[1] = DAT_1461595c5;
    auVar17[0] = DAT_1461595c5;
    auVar17[2] = DAT_1461595c5;
    auVar17[3] = DAT_1461595c5;
    auVar17[4] = DAT_1461595c5;
    auVar17[5] = DAT_1461595c5;
    auVar17[6] = DAT_1461595c5;
    auVar17[7] = DAT_1461595c5;
    auVar17[8] = DAT_1461595c5;
    auVar17[9] = DAT_1461595c5;
    auVar17[10] = DAT_1461595c5;
    auVar17[0xb] = DAT_1461595c5;
    auVar17[0xc] = DAT_1461595c5;
    auVar17[0xd] = DAT_1461595c5;
    auVar17[0xe] = DAT_1461595c5;
    auVar17[0xf] = DAT_1461595c5;
    lVar9 = 0;
    do {
      *(undefined1 (*) [16])(lVar8 + lVar9) = auVar17;
      lVar9 = lVar9 + 0x110;
    } while ((ulonglong)uVar7 * 0x110 - lVar9 != 0);
  }
  if (uVar11 != 0) {
    uVar12 = uVar4;
    do {
      lVar9 = 0;
      do {
        if (!SBORROW1('\0',*(char *)(uVar12 + lVar9))) {
          uVar13 = *(ulonglong *)(uVar12 + 0x10 + lVar9 * 0x10);
          uVar13 = (uVar13 >> 0x21 ^ uVar13) * -0xae502812aa7333;
          uVar13 = (uVar13 >> 0x21 ^ uVar13) * -0x3b314601e57a13ad;
          uVar13 = uVar13 >> 0x21 ^ uVar13;
          uVar15 = (ulonglong)((uint)(uVar13 >> 7) & 0x1ffffff & uVar7 - 1);
          lVar14 = uVar15 * 0x110;
          auVar17 = vpsignb_avx(*(undefined1 (*) [16])(lVar8 + lVar14),
                                *(undefined1 (*) [16])(lVar8 + lVar14));
          uVar2 = (ushort)(SUB161(auVar17 >> 7,0) & 1) | (ushort)(SUB161(auVar17 >> 0xf,0) & 1) << 1
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
          uVar11 = (uint)uVar2;
          if (uVar2 == 0) {
            do {
              uVar15 = (ulonglong)((int)uVar15 + 1U & uVar7 - 1);
              lVar14 = uVar15 * 0x110;
              auVar17 = vpsignb_avx(*(undefined1 (*) [16])(lVar8 + lVar14),
                                    *(undefined1 (*) [16])(lVar8 + lVar14));
              uVar11 = (uint)(ushort)((ushort)(SUB161(auVar17 >> 7,0) & 1) |
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
            } while (uVar11 == 0);
          }
          uVar3 = 0;
          for (; (uVar11 & 1) == 0; uVar11 = uVar11 >> 1 | 0x80000000) {
            uVar3 = uVar3 + 1;
          }
          *(byte *)(lVar14 + lVar8 + (ulonglong)uVar3) = (byte)uVar13 & 0x7f;
          *(undefined1 (*) [16])(lVar14 + lVar8 + 0x10 + (ulonglong)(uVar3 << 4)) =
               *(undefined1 (*) [16])(lVar9 * 0x10 + uVar12 + 0x10);
          *(undefined1 *)(uVar12 + lVar9) = 0x80;
        }
        lVar9 = lVar9 + 1;
      } while (lVar9 != 0x10);
      uVar12 = uVar12 + 0x110;
    } while (uVar12 != uVar16 * 0x110 + uVar4);
  }
  if (uVar4 == 0) {
    return;
  }
  if (uVar4 != 0) {
    if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8)
                 + 8) == '\0') {
      func_0x0001455db994();
    }
    plVar5 = _DAT_14aad45b0;
    lVar8 = **(longlong **)(unaff_GS_OFFSET + 0x58);
    plVar10 = *(longlong **)(lVar8 + 0x13a8);
    if (plVar10 == (longlong *)0x0) {
      if (*(char *)(*(longlong *)
                     (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8) ==
          '\0') {
        func_0x0001455db994();
      }
      *(longlong **)(lVar8 + 0x13a8) = plVar5;
      plVar10 = plVar5;
    }
    cVar6 = (**(code **)(*plVar10 + 200))(plVar10,uVar4);
    if (cVar6 != '\0') {
code_r0x000140093420:
      if (uVar4 == 0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x00014009342c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar10 + 0x10))();
      return;
    }
    if (((uVar4 < _DAT_149e1dac0) || (_DAT_149e1dac0 + _DAT_149e1dac8 <= uVar4)) &&
       ((uVar4 < _DAT_149e1dad0 || (_DAT_149e1dad0 + _DAT_149e1dac8 <= uVar4)))) {
      FUN_14005a140(&stack0xffffffffffffffd8);
      for (plVar10 = unaff_RSI; plVar10 != (longlong *)0x0; plVar10 = (longlong *)plVar10[1]) {
        cVar6 = (**(code **)(*plVar10 + 200))(plVar10,uVar4);
        if (cVar6 != '\0') {
          FUN_14005a120(&stack0xffffffffffffffd8);
          if (plVar10 != (longlong *)0x0) goto code_r0x000140093420;
          goto LAB_140003bf4;
        }
        if (plVar10 == unaff_R12) break;
      }
      FUN_14005a120(&stack0xffffffffffffffd8);
LAB_140003bf4:
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

