// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400c8100  size: 141 bytes
// Name:    FUN_1400c8100
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144ffb390, FUN_144fb2690
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1400c8100(longlong param_1)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  char cVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong lVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  
  if ((*(byte *)(param_1 + 0x90) & 1) != 0) {
    uVar11 = (ulonglong)*(byte *)(*(longlong *)(param_1 + 8) + 0xc0 + (ulonglong)DAT_149fee6b8);
    if ((((uVar11 != 0xff) &&
         (lVar10 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x10 + uVar11 * 8), lVar10 != 0)) &&
        (cVar6 = FUN_144ffb390(lVar10,0,0x85f0b99c), cVar6 != '\0')) &&
       (iVar7 = FUN_144fb2690(lVar10,0,0x85f0b99c), iVar7 != 0)) {
      lVar1 = *(longlong *)(lVar10 + 0x28);
      uVar13 = 0xffffffff;
      if (*(int *)(lVar10 + 0x20) != 0) {
        uVar14 = 0xe9e893;
        auVar16[8] = 0x57;
        auVar16._0_8_ = 0x5757575757575757;
        auVar16[9] = 0x57;
        auVar16[10] = 0x57;
        auVar16[0xb] = 0x57;
        auVar16[0xc] = 0x57;
        auVar16[0xd] = 0x57;
        auVar16[0xe] = 0x57;
        auVar16[0xf] = 0x57;
        while( true ) {
          uVar14 = uVar14 & *(int *)(lVar10 + 0x20) - 1U;
          auVar15 = *(undefined1 (*) [16])(lVar1 + (ulonglong)uVar14 * 0x290);
          auVar2 = vpcmpeqb_avx(auVar15,auVar16);
          uVar3 = (ushort)(SUB161(auVar2 >> 7,0) & 1) | (ushort)(SUB161(auVar2 >> 0xf,0) & 1) << 1 |
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
          if (uVar3 != 0) {
            uVar12 = (uint)uVar3;
            do {
              uVar4 = 0;
              for (uVar5 = uVar12; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
                uVar4 = uVar4 + 1;
              }
              if (*(int *)((ulonglong)uVar14 * 0x290 + lVar1 + 0x10 + (ulonglong)uVar4 * 0x28) ==
                  -0x7a0f4664) {
                uVar13 = uVar4 | uVar14 << 4;
                goto code_r0x000144fb2104;
              }
              uVar12 = uVar12 - 1 & uVar12;
            } while (uVar12 != 0);
          }
          auVar15 = vpsignb_avx(auVar15,auVar15);
          if ((((((((((((((((SUB161(auVar15 >> 7,0) & 1) != 0 || (SUB161(auVar15 >> 0xf,0) & 1) != 0
                           ) || (SUB161(auVar15 >> 0x17,0) & 1) != 0) ||
                         (SUB161(auVar15 >> 0x1f,0) & 1) != 0) ||
                        (SUB161(auVar15 >> 0x27,0) & 1) != 0) ||
                       (SUB161(auVar15 >> 0x2f,0) & 1) != 0) || (SUB161(auVar15 >> 0x37,0) & 1) != 0
                      ) || (SUB161(auVar15 >> 0x3f,0) & 1) != 0) ||
                    (SUB161(auVar15 >> 0x47,0) & 1) != 0) || (SUB161(auVar15 >> 0x4f,0) & 1) != 0)
                  || (SUB161(auVar15 >> 0x57,0) & 1) != 0) || (SUB161(auVar15 >> 0x5f,0) & 1) != 0)
                || (SUB161(auVar15 >> 0x67,0) & 1) != 0) || (SUB161(auVar15 >> 0x6f,0) & 1) != 0) ||
              (SUB161(auVar15 >> 0x77,0) & 1) != 0) || auVar15[0xf] < '\0') break;
          uVar14 = uVar14 + 1;
        }
      }
code_r0x000144fb2104:
      lVar10 = lVar1 + (ulonglong)(uVar13 >> 4) * 0x290 + 0x10 + (ulonglong)(uVar13 & 0xf) * 0x28;
      if (uVar13 == 0xffffffff) {
        lVar10 = 0;
      }
      lVar10 = lVar10 + 8;
      if (uVar13 == 0xffffffff) {
        lVar10 = 0;
      }
      puVar9 = (undefined8 *)FUN_144eb0b10(lVar10,0);
      return *puVar9;
    }
  }
  if ((*(byte *)(param_1 + 0x90) & 1) != 0) {
    uVar11 = (ulonglong)*(byte *)(*(longlong *)(param_1 + 8) + 0xc0 + (ulonglong)DAT_149fee6b8);
    if (((uVar11 != 0xff) &&
        (lVar10 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x10 + uVar11 * 8), lVar10 != 0)) &&
       ((cVar6 = FUN_144ffb390(lVar10,0,0x1fbfb701), cVar6 != '\0' &&
        (iVar7 = FUN_144fb2690(lVar10,0,0x1fbfb701), iVar7 != 0)))) {
      lVar1 = *(longlong *)(lVar10 + 0x28);
      uVar13 = 0xffffffff;
      if (*(int *)(lVar10 + 0x20) != 0) {
        uVar14 = 0x3f5af3;
        auVar15[8] = 8;
        auVar15._0_8_ = 0x808080808080808;
        auVar15[9] = 8;
        auVar15[10] = 8;
        auVar15[0xb] = 8;
        auVar15[0xc] = 8;
        auVar15[0xd] = 8;
        auVar15[0xe] = 8;
        auVar15[0xf] = 8;
        while( true ) {
          uVar14 = uVar14 & *(int *)(lVar10 + 0x20) - 1U;
          auVar16 = *(undefined1 (*) [16])(lVar1 + (ulonglong)uVar14 * 0x290);
          auVar2 = vpcmpeqb_avx(auVar16,auVar15);
          uVar3 = (ushort)(SUB161(auVar2 >> 7,0) & 1) | (ushort)(SUB161(auVar2 >> 0xf,0) & 1) << 1 |
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
          if (uVar3 != 0) {
            uVar12 = (uint)uVar3;
            do {
              uVar4 = 0;
              for (uVar5 = uVar12; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
                uVar4 = uVar4 + 1;
              }
              if (*(int *)((ulonglong)uVar14 * 0x290 + lVar1 + 0x10 + (ulonglong)uVar4 * 0x28) ==
                  0x1fbfb701) {
                uVar13 = uVar4 | uVar14 << 4;
                goto code_r0x000144eb0aa4;
              }
              uVar12 = uVar12 - 1 & uVar12;
            } while (uVar12 != 0);
          }
          auVar16 = vpsignb_avx(auVar16,auVar16);
          if ((((((((((((((((SUB161(auVar16 >> 7,0) & 1) != 0 || (SUB161(auVar16 >> 0xf,0) & 1) != 0
                           ) || (SUB161(auVar16 >> 0x17,0) & 1) != 0) ||
                         (SUB161(auVar16 >> 0x1f,0) & 1) != 0) ||
                        (SUB161(auVar16 >> 0x27,0) & 1) != 0) ||
                       (SUB161(auVar16 >> 0x2f,0) & 1) != 0) || (SUB161(auVar16 >> 0x37,0) & 1) != 0
                      ) || (SUB161(auVar16 >> 0x3f,0) & 1) != 0) ||
                    (SUB161(auVar16 >> 0x47,0) & 1) != 0) || (SUB161(auVar16 >> 0x4f,0) & 1) != 0)
                  || (SUB161(auVar16 >> 0x57,0) & 1) != 0) || (SUB161(auVar16 >> 0x5f,0) & 1) != 0)
                || (SUB161(auVar16 >> 0x67,0) & 1) != 0) || (SUB161(auVar16 >> 0x6f,0) & 1) != 0) ||
              (SUB161(auVar16 >> 0x77,0) & 1) != 0) || auVar16[0xf] < '\0') break;
          uVar14 = uVar14 + 1;
        }
      }
code_r0x000144eb0aa4:
      if (uVar13 == 0xffffffff) {
        lVar10 = 0;
      }
      else {
        lVar10 = lVar1 + (ulonglong)(uVar13 >> 4) * 0x290 + (ulonglong)(uVar13 & 0xf) * 0x28 + 0x18;
      }
      puVar9 = (undefined8 *)FUN_144eb0b10(lVar10,0);
      return *puVar9;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014048a164. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar8 = (**(code **)(*_DAT_14a9b1b48 + 0x218))(_DAT_14a9b1b48,param_1);
  return uVar8;
}

