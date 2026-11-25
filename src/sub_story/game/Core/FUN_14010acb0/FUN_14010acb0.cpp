// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14010acb0  size: 112 bytes
// Name:    FUN_14010acb0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144fb2690, FUN_144ffb390
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_14010acb0(longlong param_1)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  undefined1 auVar3 [16];
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  char cVar7;
  int iVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  undefined1 auVar15 [16];
  
  uVar9 = (ulonglong)*(byte *)(param_1 + 0xc0 + (ulonglong)DAT_149fee6b8);
  if ((uVar9 != 0xff) && (lVar11 = *(longlong *)(param_1 + 0x10 + uVar9 * 8), lVar11 != 0)) {
    cVar7 = FUN_144ffb390(lVar11,0,0x655615b7);
    if (cVar7 != '\0') {
      iVar8 = FUN_144fb2690(lVar11,0,0x655615b7);
      if (iVar8 != 0) {
        lVar2 = *(longlong *)(lVar11 + 0x28);
        uVar13 = 0xffffffff;
        if (*(int *)(lVar11 + 0x20) != 0) {
          uVar14 = 0x97aece;
          auVar15[8] = 0x49;
          auVar15._0_8_ = 0x4949494949494949;
          auVar15[9] = 0x49;
          auVar15[10] = 0x49;
          auVar15[0xb] = 0x49;
          auVar15[0xc] = 0x49;
          auVar15[0xd] = 0x49;
          auVar15[0xe] = 0x49;
          auVar15[0xf] = 0x49;
          while( true ) {
            uVar14 = uVar14 & *(int *)(lVar11 + 0x20) - 1U;
            auVar1 = *(undefined1 (*) [16])(lVar2 + (ulonglong)uVar14 * 0x290);
            auVar3 = vpcmpeqb_avx(auVar1,auVar15);
            uVar4 = (ushort)(SUB161(auVar3 >> 7,0) & 1) | (ushort)(SUB161(auVar3 >> 0xf,0) & 1) << 1
                    | (ushort)(SUB161(auVar3 >> 0x17,0) & 1) << 2 |
                    (ushort)(SUB161(auVar3 >> 0x1f,0) & 1) << 3 |
                    (ushort)(SUB161(auVar3 >> 0x27,0) & 1) << 4 |
                    (ushort)(SUB161(auVar3 >> 0x2f,0) & 1) << 5 |
                    (ushort)(SUB161(auVar3 >> 0x37,0) & 1) << 6 |
                    (ushort)(SUB161(auVar3 >> 0x3f,0) & 1) << 7 |
                    (ushort)(SUB161(auVar3 >> 0x47,0) & 1) << 8 |
                    (ushort)(SUB161(auVar3 >> 0x4f,0) & 1) << 9 |
                    (ushort)(SUB161(auVar3 >> 0x57,0) & 1) << 10 |
                    (ushort)(SUB161(auVar3 >> 0x5f,0) & 1) << 0xb |
                    (ushort)(SUB161(auVar3 >> 0x67,0) & 1) << 0xc |
                    (ushort)(SUB161(auVar3 >> 0x6f,0) & 1) << 0xd |
                    (ushort)(SUB161(auVar3 >> 0x77,0) & 1) << 0xe |
                    (ushort)(byte)(auVar3[0xf] >> 7) << 0xf;
            if (uVar4 != 0) {
              uVar12 = (uint)uVar4;
              do {
                uVar5 = 0;
                for (uVar6 = uVar12; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
                  uVar5 = uVar5 + 1;
                }
                if (*(int *)((ulonglong)uVar14 * 0x290 + lVar2 + 0x10 + (ulonglong)uVar5 * 0x28) ==
                    0x655615b7) {
                  uVar13 = uVar5 | uVar14 << 4;
                  goto code_r0x000144fb2104;
                }
                uVar12 = uVar12 - 1 & uVar12;
              } while (uVar12 != 0);
            }
            auVar1 = vpsignb_avx(auVar1,auVar1);
            if ((((((((((((((((SUB161(auVar1 >> 7,0) & 1) != 0 || (SUB161(auVar1 >> 0xf,0) & 1) != 0
                             ) || (SUB161(auVar1 >> 0x17,0) & 1) != 0) ||
                           (SUB161(auVar1 >> 0x1f,0) & 1) != 0) ||
                          (SUB161(auVar1 >> 0x27,0) & 1) != 0) ||
                         (SUB161(auVar1 >> 0x2f,0) & 1) != 0) || (SUB161(auVar1 >> 0x37,0) & 1) != 0
                        ) || (SUB161(auVar1 >> 0x3f,0) & 1) != 0) ||
                      (SUB161(auVar1 >> 0x47,0) & 1) != 0) || (SUB161(auVar1 >> 0x4f,0) & 1) != 0)
                    || (SUB161(auVar1 >> 0x57,0) & 1) != 0) || (SUB161(auVar1 >> 0x5f,0) & 1) != 0)
                  || (SUB161(auVar1 >> 0x67,0) & 1) != 0) || (SUB161(auVar1 >> 0x6f,0) & 1) != 0) ||
                (SUB161(auVar1 >> 0x77,0) & 1) != 0) || auVar1[0xf] < '\0') break;
            uVar14 = uVar14 + 1;
          }
        }
code_r0x000144fb2104:
        lVar11 = lVar2 + (ulonglong)(uVar13 >> 4) * 0x290 + 0x10 + (ulonglong)(uVar13 & 0xf) * 0x28;
        if (uVar13 == 0xffffffff) {
          lVar11 = 0;
        }
        lVar11 = lVar11 + 8;
        if (uVar13 == 0xffffffff) {
          lVar11 = 0;
        }
        puVar10 = (undefined8 *)FUN_144eb0b10(lVar11,0);
        return *puVar10;
      }
    }
  }
  return 0;
}

