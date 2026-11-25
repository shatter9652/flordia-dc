// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14006e3d0  size: 507 bytes
// Name:    FUN_14006e3d0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14006e3d0(int *param_1,longlong *param_2,ulonglong *param_3)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  int iVar3;
  ulonglong uVar4;
  code *pcVar5;
  undefined1 auVar6 [16];
  ushort uVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  byte bVar11;
  uint uVar13;
  longlong lVar14;
  uint uVar15;
  undefined1 auVar16 [16];
  byte bVar12;
  
  iVar3 = *param_1;
  if (iVar3 != 0) {
    uVar4 = *param_3;
    uVar10 = (uVar4 >> 0x21 ^ uVar4) * -0xae502812aa7333;
    lVar14 = (uVar10 >> 0x21 ^ uVar10) * -0x3b314601e57a13ad;
    uVar8 = (uint)((ulonglong)lVar14 >> 0x21) ^ (uint)lVar14;
    lVar14 = *(longlong *)(param_1 + 2);
    uVar9 = uVar8 >> 7;
    bVar12 = (byte)uVar8;
    bVar11 = bVar12 & 0x7f;
    auVar16._0_8_ =
         CONCAT17(bVar12,CONCAT16(bVar12,CONCAT15(bVar12,CONCAT14(bVar12,CONCAT13(bVar12,CONCAT12(
                                                  bVar12,CONCAT11(bVar12,bVar12))))))) &
         0x7f7f7f7f7f7f7f7f;
    auVar16[8] = bVar11;
    auVar16[9] = bVar11;
    auVar16[10] = bVar11;
    auVar16[0xb] = bVar11;
    auVar16[0xc] = bVar11;
    auVar16[0xd] = bVar11;
    auVar16[0xe] = bVar11;
    auVar16[0xf] = bVar11;
    while( true ) {
      uVar9 = uVar9 & iVar3 - 1U;
      auVar2 = *(undefined1 (*) [16])(lVar14 + (ulonglong)uVar9 * 0x710);
      lVar1 = lVar14 + (ulonglong)uVar9 * 0x710;
      auVar6 = vpcmpeqb_avx(auVar2,auVar16);
      uVar7 = (ushort)(SUB161(auVar6 >> 7,0) & 1) | (ushort)(SUB161(auVar6 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar6 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar6 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar6 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar6 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar6 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar6 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar6 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar6 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar6 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar6 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(auVar6 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(auVar6 >> 0x6f,0) & 1) << 0xd |
              (ushort)(SUB161(auVar6 >> 0x77,0) & 1) << 0xe |
              (ushort)(byte)(auVar6[0xf] >> 7) << 0xf;
      uVar8 = (uint)uVar7;
      if (uVar7 != 0) {
        do {
          uVar15 = 0;
          for (uVar13 = uVar8; (uVar13 & 1) == 0; uVar13 = uVar13 >> 1 | 0x80000000) {
            uVar15 = uVar15 + 1;
          }
          if (*(ulonglong *)(lVar1 + 0x10 + (ulonglong)uVar15 * 0x70) == uVar4) {
            uVar8 = iVar3 << 4;
            uVar15 = uVar15 | uVar9 << 4;
            while ((uVar9 = uVar8, uVar15 != uVar8 &&
                   (uVar9 = uVar15,
                   SBORROW1('\0',*(char *)((ulonglong)(uVar15 & 0xf) +
                                          (ulonglong)(uVar15 >> 4) * 0x710 + lVar14))))) {
              uVar15 = uVar15 + 1;
            }
            *(uint *)(param_2 + 1) = uVar8;
            *(uint *)((longlong)param_2 + 0xc) = uVar9;
            *(undefined1 *)(param_2 + 2) = 0;
            *param_2 = lVar14;
            return;
          }
          uVar8 = uVar8 - 1 & uVar8;
        } while (uVar8 != 0);
      }
      auVar2 = vpsignb_avx(auVar2,auVar2);
      uVar7 = (ushort)(SUB161(auVar2 >> 7,0) & 1) | (ushort)(SUB161(auVar2 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar2 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar2 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar2 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar2 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar2 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar2 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar2 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar2 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar2 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar2 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(auVar2 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(auVar2 >> 0x6f,0) & 1) << 0xd |
              (ushort)(SUB161(auVar2 >> 0x77,0) & 1) << 0xe |
              (ushort)(byte)(auVar2[0xf] >> 7) << 0xf;
      if (uVar7 != 0) break;
      uVar9 = uVar9 + 1;
    }
    uVar8 = (uint)(iVar3 * 0x570) / 100;
    if (param_1[1] != uVar8) {
      uVar15 = 0;
      for (uVar13 = (uint)uVar7; (uVar13 & 1) == 0; uVar13 = uVar13 >> 1 | 0x80000000) {
        uVar15 = uVar15 + 1;
      }
      *(byte *)(lVar1 + (ulonglong)uVar15) = bVar11;
      param_1[1] = param_1[1] + 1;
      uVar15 = uVar9 << 4 | uVar15;
      uVar13 = *param_1 << 4;
      uVar9 = uVar15;
      if (uVar15 != uVar13) {
        do {
          uVar9 = uVar15;
          if (!SBORROW1((byte)uVar8 ^ (byte)((uint)(iVar3 * 0x570) / 100),
                        *(char *)((ulonglong)(uVar15 & 0xf) +
                                 (ulonglong)(uVar15 >> 4) * 0x710 + *(longlong *)(param_1 + 2))))
          break;
          uVar15 = uVar15 + 1;
          uVar9 = uVar13;
        } while (uVar13 != uVar15);
      }
      *param_2 = *(longlong *)(param_1 + 2);
      *(uint *)(param_2 + 1) = uVar13;
      *(uint *)((longlong)param_2 + 0xc) = uVar9;
      *(undefined1 *)(param_2 + 2) = 1;
      return;
    }
  }
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

