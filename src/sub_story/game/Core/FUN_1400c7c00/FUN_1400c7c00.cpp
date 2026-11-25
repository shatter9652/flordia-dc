// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400c7c00  size: 141 bytes
// Name:    FUN_1400c7c00
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144ffb390, FUN_144fb2690
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1400c7c00(longlong param_1)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  undefined1 auVar3 [16];
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  char cVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  longlong lVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  undefined1 auVar16 [16];
  
  if ((*(byte *)(param_1 + 0x90) & 1) != 0) {
    uVar12 = (ulonglong)*(byte *)(*(longlong *)(param_1 + 8) + 0xc0 + (ulonglong)DAT_149fee6b8);
    if ((((uVar12 != 0xff) &&
         (lVar11 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x10 + uVar12 * 8), lVar11 != 0)) &&
        (cVar7 = FUN_144ffb390(lVar11,0,0x1fbfb701), cVar7 != '\0')) &&
       (iVar8 = FUN_144fb2690(lVar11,0,0x1fbfb701), iVar8 != 0)) {
      lVar2 = *(longlong *)(lVar11 + 0x28);
      uVar14 = 0xffffffff;
      if (*(int *)(lVar11 + 0x20) != 0) {
        uVar15 = 0x3f5af3;
        auVar16[8] = 8;
        auVar16._0_8_ = 0x808080808080808;
        auVar16[9] = 8;
        auVar16[10] = 8;
        auVar16[0xb] = 8;
        auVar16[0xc] = 8;
        auVar16[0xd] = 8;
        auVar16[0xe] = 8;
        auVar16[0xf] = 8;
        while( true ) {
          uVar15 = uVar15 & *(int *)(lVar11 + 0x20) - 1U;
          auVar1 = *(undefined1 (*) [16])(lVar2 + (ulonglong)uVar15 * 0x290);
          auVar3 = vpcmpeqb_avx(auVar1,auVar16);
          uVar4 = (ushort)(SUB161(auVar3 >> 7,0) & 1) | (ushort)(SUB161(auVar3 >> 0xf,0) & 1) << 1 |
                  (ushort)(SUB161(auVar3 >> 0x17,0) & 1) << 2 |
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
            uVar13 = (uint)uVar4;
            do {
              uVar5 = 0;
              for (uVar6 = uVar13; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
                uVar5 = uVar5 + 1;
              }
              if (*(int *)((ulonglong)uVar15 * 0x290 + lVar2 + 0x10 + (ulonglong)uVar5 * 0x28) ==
                  0x1fbfb701) {
                uVar14 = uVar5 | uVar15 << 4;
                goto code_r0x000144eb0aa4;
              }
              uVar13 = uVar13 - 1 & uVar13;
            } while (uVar13 != 0);
          }
          auVar1 = vpsignb_avx(auVar1,auVar1);
          if ((((((((((((((((SUB161(auVar1 >> 7,0) & 1) != 0 || (SUB161(auVar1 >> 0xf,0) & 1) != 0)
                          || (SUB161(auVar1 >> 0x17,0) & 1) != 0) ||
                         (SUB161(auVar1 >> 0x1f,0) & 1) != 0) || (SUB161(auVar1 >> 0x27,0) & 1) != 0
                        ) || (SUB161(auVar1 >> 0x2f,0) & 1) != 0) ||
                      (SUB161(auVar1 >> 0x37,0) & 1) != 0) || (SUB161(auVar1 >> 0x3f,0) & 1) != 0)
                    || (SUB161(auVar1 >> 0x47,0) & 1) != 0) || (SUB161(auVar1 >> 0x4f,0) & 1) != 0)
                  || (SUB161(auVar1 >> 0x57,0) & 1) != 0) || (SUB161(auVar1 >> 0x5f,0) & 1) != 0) ||
                (SUB161(auVar1 >> 0x67,0) & 1) != 0) || (SUB161(auVar1 >> 0x6f,0) & 1) != 0) ||
              (SUB161(auVar1 >> 0x77,0) & 1) != 0) || auVar1[0xf] < '\0') break;
          uVar15 = uVar15 + 1;
        }
      }
code_r0x000144eb0aa4:
      if (uVar14 == 0xffffffff) {
        lVar11 = 0;
      }
      else {
        lVar11 = lVar2 + (ulonglong)(uVar14 >> 4) * 0x290 + (ulonglong)(uVar14 & 0xf) * 0x28 + 0x18;
      }
      puVar10 = (undefined8 *)FUN_144eb0b10(lVar11,0);
      return *puVar10;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014048a164. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar9 = (**(code **)(*_DAT_14a9b1b48 + 0x218))(_DAT_14a9b1b48,param_1);
  return uVar9;
}

