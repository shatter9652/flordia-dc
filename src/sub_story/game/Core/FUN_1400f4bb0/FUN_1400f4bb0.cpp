// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400f4bb0  size: 1146 bytes
// Name:    FUN_1400f4bb0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144f85f50, FUN_1400f4b50, FUN_145316d80, FUN_14517d7a0, FUN_140752a40, FUN_14207bf20, FUN_1454e3820, FUN_1452a1d80, FUN_144f86050
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_1400f4bb0(longlong param_1,int *param_2)

{
  undefined1 auVar1 [16];
  int iVar2;
  int iVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  ushort uVar6;
  uint uVar7;
  char cVar8;
  byte bVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  undefined8 uVar14;
  ulonglong uVar15;
  longlong lVar16;
  undefined8 *puVar17;
  longlong lVar18;
  uint uVar19;
  uint uVar20;
  undefined8 *puVar21;
  bool bVar22;
  byte bVar23;
  undefined1 auVar24 [16];
  char cStack_75;
  uint uStack_74;
  longlong lStack_70;
  uint uStack_64;
  char cStack_60;
  
  cVar8 = FUN_144f85f50(param_1 + 0xd0);
  if (cVar8 == '\0') {
    return 0;
  }
  iVar2 = *param_2;
  iVar3 = param_2[1];
  lVar12 = FUN_14517d7a0(*(undefined4 *)(param_1 + 0x110),*(undefined8 *)(param_1 + 0x118),iVar2,
                         iVar3);
  if (lVar12 != 0) {
    return 0;
  }
  cVar8 = func_0x0001455c4d00(*(undefined4 *)(param_1 + 0x138),*(undefined8 *)(param_1 + 0x140),
                              iVar2,iVar3);
  if (cVar8 != '\0') {
    return 0;
  }
  lVar12 = FUN_1452a1d80(param_2);
  if (lVar12 == 0) {
    if (((*(char *)(param_1 + 0x188) == '\0') && (*(float *)(param_1 + 0xec) == 0.0)) &&
       (!NAN(*(float *)(param_1 + 0xec)))) {
      return 0;
    }
    FUN_140752a40(param_2);
    *(undefined1 *)(param_1 + 0x172) = 1;
    return 0;
  }
  if (*(int *)(param_1 + 0x104) == *(int *)(param_1 + 0x100)) {
    return 0;
  }
  cStack_75 = '\0';
  uVar15 = (ulonglong)*(uint *)(param_1 + 0x124);
  if (uVar15 != 0) {
    lVar18 = *(longlong *)(param_1 + 0x128);
    if (*param_2 == 0x7fffffff) {
      lVar16 = uVar15 << 3;
      do {
        lVar13 = *(longlong *)(lVar18 + -8 + lVar16);
        if (*(int *)(lVar13 + 0x40) == 0x7fffffff) goto LAB_1400f4d2c;
        lVar16 = lVar16 + -8;
      } while (lVar16 != 0);
    }
    else {
      lVar16 = uVar15 << 3;
      do {
        lVar13 = *(longlong *)(lVar18 + -8 + lVar16);
        if ((*(int *)(lVar13 + 0x40) == *param_2 && *(int *)(lVar13 + 0x40) != 0x7fffffff) &&
           (*(int *)(lVar13 + 0x44) == param_2[1])) goto LAB_1400f4d2c;
        lVar16 = lVar16 + -8;
      } while (lVar16 != 0);
    }
  }
  lVar13 = FUN_145316d80(param_1,lVar12,&cStack_75);
  if (lVar13 == 0) {
    if (cStack_75 == '\x01') {
      *(undefined1 *)(param_1 + 0x171) = 1;
      return 1;
    }
    if (*(uint *)(param_1 + 0x13c) == (uint)(*(int *)(param_1 + 0x138) * 0x570) / 100) {
      return 1;
    }
    uVar20 = (uint)*(ushort *)(param_2 + 1) | *param_2 << 0x10;
    if (*param_2 == 0x7fffffff) {
      uVar20 = 0x7fffffff;
    }
    uStack_74 = uVar20;
    FUN_1454e3820(param_1 + 0x138,&lStack_70);
    if (cStack_60 != '\x01') {
      return 1;
    }
    *(uint *)((ulonglong)(uStack_64 >> 4) * 0x50 + lStack_70 + 0x10 +
             (ulonglong)(uStack_64 & 0xf) * 4) = uVar20;
    return 1;
  }
LAB_1400f4d6b:
  uVar20 = *(uint *)(param_1 + 0x104);
  if (((uVar20 == 0 && *(char *)(param_1 + 0x174) == '\0') && (*(int *)(lVar13 + 0x4c) != 0)) &&
     ((lVar12 = *(longlong *)(*(longlong *)(lVar13 + 0x50) + 8), lVar12 != 0 &&
      (((*(int *)(lVar12 + 0x24) != 0 && (**(longlong **)(lVar12 + 0x28) != 0)) &&
       (lVar12 = *(longlong *)(**(longlong **)(lVar12 + 0x28) + 0x50), lVar12 != 0)))))) {
    bVar9 = func_0x0001453807b0(*(undefined4 *)(lVar12 + 0x58));
    *(byte *)(param_1 + 0x173) = bVar9 ^ 1;
    *(undefined1 *)(param_1 + 0x174) = 1;
  }
  *(uint *)(param_1 + 0x104) = uVar20 + 1;
  *(longlong *)(*(longlong *)(param_1 + 0x108) + (ulonglong)uVar20 * 8) = lVar13;
  uVar20 = (uint)*(ushort *)(param_2 + 1) | *param_2 << 0x10;
  if (*param_2 == 0x7fffffff) {
    uVar20 = 0x7fffffff;
  }
  uVar10 = (uVar20 >> 0x10 ^ uVar20) * -0x7a143595;
  uVar11 = (uVar10 >> 0xd ^ uVar10) * -0x3d4d51cb;
  uVar11 = uVar11 >> 0x10 ^ uVar11;
  uVar10 = uVar11 >> 7;
  bVar9 = (byte)uVar11;
  bVar23 = bVar9 & 0x7f;
  auVar24._0_8_ =
       CONCAT17(bVar9,CONCAT16(bVar9,CONCAT15(bVar9,CONCAT14(bVar9,CONCAT13(bVar9,CONCAT12(bVar9,
                                                  CONCAT11(bVar9,bVar9))))))) & 0x7f7f7f7f7f7f7f7f;
  auVar24[8] = bVar23;
  auVar24[9] = bVar23;
  auVar24[10] = bVar23;
  auVar24[0xb] = bVar23;
  auVar24[0xc] = bVar23;
  auVar24[0xd] = bVar23;
  auVar24[0xe] = bVar23;
  auVar24[0xf] = bVar23;
  iVar2 = *(int *)(param_1 + 0x110);
  if (iVar2 != 0) {
    lVar12 = *(longlong *)(param_1 + 0x118);
    while( true ) {
      uVar10 = uVar10 & iVar2 - 1U;
      auVar1 = *(undefined1 (*) [16])(lVar12 + (ulonglong)uVar10 * 0x110);
      lVar18 = lVar12 + (ulonglong)uVar10 * 0x110;
      auVar5 = vpcmpeqb_avx(auVar1,auVar24);
      uVar6 = (ushort)(SUB161(auVar5 >> 7,0) & 1) | (ushort)(SUB161(auVar5 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar5 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar5 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar5 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar5 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar5 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar5 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar5 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar5 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar5 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar5 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(auVar5 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(auVar5 >> 0x6f,0) & 1) << 0xd |
              (ushort)(SUB161(auVar5 >> 0x77,0) & 1) << 0xe |
              (ushort)(byte)(auVar5[0xf] >> 7) << 0xf;
      if (uVar6 != 0) {
        uVar11 = (uint)uVar6;
        do {
          uVar19 = 0;
          for (uVar7 = uVar11; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
            uVar19 = uVar19 + 1;
          }
          if (*(uint *)(lVar18 + 0x10 + (ulonglong)(uVar19 << 4)) == uVar20) {
            uVar19 = uVar19 | uVar10 << 4;
            if (uVar19 == iVar2 * 0x10) goto LAB_1400f4f52;
            goto LAB_1400f4ff7;
          }
          uVar11 = uVar11 - 1 & uVar11;
        } while (uVar11 != 0);
      }
      auVar1 = vpsignb_avx(auVar1,auVar1);
      uVar6 = (ushort)(SUB161(auVar1 >> 7,0) & 1) | (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar1 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar1 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar1 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar1 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar1 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar1 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar1 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar1 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar1 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar1 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(auVar1 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(auVar1 >> 0x6f,0) & 1) << 0xd |
              (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe |
              (ushort)(byte)(auVar1[0xf] >> 7) << 0xf;
      if (uVar6 != 0) break;
      uVar10 = uVar10 + 1;
    }
    if (*(uint *)(param_1 + 0x114) != (uint)(iVar2 * 0x570) / 100) {
      uVar11 = 0;
      for (uVar19 = (uint)uVar6; (uVar19 & 1) == 0; uVar19 = uVar19 >> 1 | 0x80000000) {
        uVar11 = uVar11 + 1;
      }
      *(byte *)(lVar18 + (ulonglong)uVar11) = bVar23;
      *(int *)(param_1 + 0x114) = *(int *)(param_1 + 0x114) + 1;
      uVar11 = uVar10 << 4 | uVar11;
      uVar19 = *(int *)(param_1 + 0x110) << 4;
      uVar10 = uVar11;
      while ((uVar11 != uVar19 &&
             (uVar10 = uVar11,
             SBORROW1('\0',*(char *)((ulonglong)(uVar11 & 0xf) +
                                    (ulonglong)(uVar11 >> 4) * 0x110 +
                                    *(longlong *)(param_1 + 0x118)))))) {
        uVar11 = uVar11 + 1;
        uVar10 = uVar19;
      }
      uVar15 = (ulonglong)((uVar10 & 0xf) << 4);
      lVar12 = (ulonglong)(uVar10 >> 4) * 0x110;
      lVar18 = *(longlong *)(param_1 + 0x118) + lVar12;
      *(uint *)(uVar15 + 0x10 + lVar18) = uVar20;
      *(longlong *)(uVar15 + 0x18 + lVar18) = lVar13;
LAB_1400f4f52:
      FUN_1400f4b50(lVar13,CONCAT71((int7)((ulonglong)lVar12 >> 8),1));
      FUN_144f86050(lVar13);
      return 1;
    }
  }
  pcVar4 = (code *)swi(3);
  uVar14 = (*pcVar4)();
  return uVar14;
LAB_1400f4d2c:
  FUN_14207bf20(lVar13);
  puVar21 = (undefined8 *)(lVar18 + lVar16 + -8);
  uVar20 = *(int *)(param_1 + 0x124) - 1;
  puVar17 = (undefined8 *)((ulonglong)uVar20 * 8 + *(longlong *)(param_1 + 0x128));
  if (puVar17 != puVar21) {
    *puVar21 = *puVar17;
    uVar20 = *(int *)(param_1 + 0x124) - 1;
  }
  *(uint *)(param_1 + 0x124) = uVar20;
  goto LAB_1400f4d6b;
  while (bVar22 = iVar2 * 0x10 - 1U != uVar19, uVar19 = uVar19 + 1, bVar22) {
LAB_1400f4ff7:
    if (!SBORROW1('\0',*(char *)((ulonglong)(uVar19 & 0xf) +
                                (ulonglong)(uVar19 >> 4) * 0x110 + lVar12))) break;
  }
  goto LAB_1400f4f52;
}

