// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14011ad70  size: 664 bytes
// Name:    FUN_14011ad70
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144fd9d80, FUN_144fc9930
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14011ad70(uint *param_1,longlong param_2)

{
  undefined4 *puVar1;
  code *pcVar2;
  ushort uVar3;
  ulonglong uVar4;
  undefined1 (*pauVar5) [16];
  longlong lVar6;
  undefined1 (*pauVar7) [16];
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  undefined1 auVar15 [16];
  undefined8 uStack_40;
  
  uVar10 = *param_1;
  uVar11 = *(uint *)(param_2 + 4);
  uVar4 = (ulonglong)uVar11;
  if ((uVar10 * 0x570) / 100 < uVar11) {
    uVar14 = 1;
    if (0xd < uVar11) {
      uVar4 = (uVar4 * 100 + 0x56) / 0x57 - 1;
      uVar4 = uVar4 >> 1 | uVar4;
      uVar4 = uVar4 >> 2 | uVar4;
      uVar4 = uVar4 >> 4 | uVar4;
      uVar4 = uVar4 >> 8 | uVar4;
      uVar4 = uVar4 >> 0x10 | uVar4;
      uVar14 = (uint)((uVar4 >> 0x20 | uVar4) + 1 >> 4);
    }
    if (uVar10 < uVar14) {
      lVar6 = *(longlong *)(param_1 + 2);
      FUN_144fc9930(&uStack_40,0);
      if (lVar6 != 0) {
        func_0x000144d9c130(lVar6);
      }
      FUN_144fd9d80(uStack_40);
      param_1[2] = 0;
      param_1[3] = 0;
      *param_1 = 0;
      FUN_144fc9930(&uStack_40,0);
      pauVar5 = (undefined1 (*) [16])func_0x000144d9c140(0x10);
      FUN_144fd9d80(uStack_40);
      *(undefined1 (**) [16])(param_1 + 2) = pauVar5;
      if (pauVar5 == (undefined1 (*) [16])0x0) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      *param_1 = uVar14;
      uVar10 = uVar14;
    }
    else {
      pauVar5 = *(undefined1 (**) [16])(param_1 + 2);
    }
    auVar15[1] = DAT_1461590fd;
    auVar15[0] = DAT_1461590fd;
    auVar15[2] = DAT_1461590fd;
    auVar15[3] = DAT_1461590fd;
    auVar15[4] = DAT_1461590fd;
    auVar15[5] = DAT_1461590fd;
    auVar15[6] = DAT_1461590fd;
    auVar15[7] = DAT_1461590fd;
    auVar15[8] = DAT_1461590fd;
    auVar15[9] = DAT_1461590fd;
    auVar15[10] = DAT_1461590fd;
    auVar15[0xb] = DAT_1461590fd;
    auVar15[0xc] = DAT_1461590fd;
    auVar15[0xd] = DAT_1461590fd;
    auVar15[0xe] = DAT_1461590fd;
    auVar15[0xf] = DAT_1461590fd;
    pauVar7 = pauVar5 + (ulonglong)uVar10 * 0x1d;
    do {
      *pauVar5 = auVar15;
      pauVar5 = pauVar5 + 0x1d;
    } while (pauVar5 != pauVar7);
    uVar4 = (ulonglong)*(uint *)(param_2 + 4);
  }
  if ((int)uVar4 == 0) {
    uVar10 = 0;
  }
  else {
    lVar6 = *(longlong *)(param_2 + 8);
    do {
      lVar9 = 0;
      do {
        if (!SBORROW1('\0',*(char *)(lVar6 + lVar9))) {
          lVar13 = *(longlong *)(param_1 + 2);
          uVar10 = *(uint *)(lVar6 + 0x10 + lVar9 * 0x1c);
          uVar10 = (uVar10 >> 0x10 ^ uVar10) * -0x7a143595;
          uVar11 = (uVar10 >> 0xd ^ uVar10) * -0x3d4d51cb;
          uVar11 = uVar11 >> 0x10 ^ uVar11;
          uVar8 = (ulonglong)(uVar11 >> 7 & *param_1 - 1);
          lVar12 = uVar8 * 0x1d0;
          auVar15 = vpsignb_avx(*(undefined1 (*) [16])(lVar13 + lVar12),
                                *(undefined1 (*) [16])(lVar13 + lVar12));
          uVar3 = (ushort)(SUB161(auVar15 >> 7,0) & 1) | (ushort)(SUB161(auVar15 >> 0xf,0) & 1) << 1
                  | (ushort)(SUB161(auVar15 >> 0x17,0) & 1) << 2 |
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
          uVar10 = (uint)uVar3;
          if (uVar3 == 0) {
            do {
              uVar8 = (ulonglong)((int)uVar8 + 1U & *param_1 - 1);
              lVar12 = uVar8 * 0x1d0;
              auVar15 = vpsignb_avx(*(undefined1 (*) [16])(lVar13 + lVar12),
                                    *(undefined1 (*) [16])(lVar13 + lVar12));
              uVar10 = (uint)(ushort)((ushort)(SUB161(auVar15 >> 7,0) & 1) |
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
                                     (ushort)(byte)(auVar15[0xf] >> 7) << 0xf);
            } while (uVar10 == 0);
          }
          lVar13 = lVar13 + lVar12;
          uVar14 = 0;
          for (; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x80000000) {
            uVar14 = uVar14 + 1;
          }
          puVar1 = (undefined4 *)(lVar6 + 0x10 + lVar9 * 0x1c);
          uVar4 = (ulonglong)((int)uVar4 - 1);
          *(byte *)(lVar13 + (ulonglong)uVar14) = (byte)uVar11 & 0x7f;
          lVar12 = (ulonglong)uVar14 * 0x1c;
          *(undefined4 *)(lVar13 + 0x10 + lVar12) = *puVar1;
          *(undefined8 *)(lVar13 + 0x14 + lVar12) = *(undefined8 *)(puVar1 + 1);
          *(undefined4 *)(lVar13 + 0x1c + lVar12) = puVar1[3];
          *(undefined8 *)(lVar13 + 0x20 + lVar12) = *(undefined8 *)(puVar1 + 4);
          *(undefined4 *)(lVar13 + 0x28 + lVar12) = puVar1[6];
        }
        lVar9 = lVar9 + 1;
      } while (lVar9 != 0x10);
      lVar6 = lVar6 + 0x1d0;
    } while ((int)uVar4 != 0);
    uVar10 = *(uint *)(param_2 + 4);
  }
  param_1[1] = uVar10;
  return;
}

