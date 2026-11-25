// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14010ac60  size: 69 bytes
// Name:    FUN_14010ac60
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14010acb0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_14010ac60(longlong param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  undefined1 auVar15 [16];
  
  lVar10 = *(longlong *)
            (param_1 + 0x10 + (ulonglong)*(byte *)(param_1 + 0xc0 + (ulonglong)DAT_14a952378) * 8);
  lVar8 = FUN_14010acb0(*(undefined8 *)(lVar10 + 8));
  if ((lVar8 != 0) && ((*(uint *)(lVar10 + 0x90) & 1) != 0)) {
    return lVar8;
  }
  if ((*(byte *)(lVar10 + 0x90) & 1) != 0) {
    uVar11 = (ulonglong)*(byte *)(*(longlong *)(lVar10 + 8) + 0xc0 + (ulonglong)DAT_149fee6b8);
    if ((((uVar11 != 0xff) &&
         (lVar8 = *(longlong *)(*(longlong *)(lVar10 + 8) + 0x10 + uVar11 * 8), lVar8 != 0)) &&
        (cVar6 = FUN_144ffb390(lVar8,0,0x1fbfb701), cVar6 != '\0')) &&
       (iVar7 = FUN_144fb2690(lVar8,0,0x1fbfb701), iVar7 != 0)) {
      lVar10 = *(longlong *)(lVar8 + 0x28);
      uVar13 = 0xffffffff;
      if (*(int *)(lVar8 + 0x20) != 0) {
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
          uVar14 = uVar14 & *(int *)(lVar8 + 0x20) - 1U;
          auVar1 = *(undefined1 (*) [16])(lVar10 + (ulonglong)uVar14 * 0x290);
          auVar2 = vpcmpeqb_avx(auVar1,auVar15);
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
              if (*(int *)((ulonglong)uVar14 * 0x290 + lVar10 + 0x10 + (ulonglong)uVar4 * 0x28) ==
                  0x1fbfb701) {
                uVar13 = uVar4 | uVar14 << 4;
                goto code_r0x000144eb0aa4;
              }
              uVar12 = uVar12 - 1 & uVar12;
            } while (uVar12 != 0);
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
          uVar14 = uVar14 + 1;
        }
      }
code_r0x000144eb0aa4:
      if (uVar13 == 0xffffffff) {
        lVar10 = 0;
      }
      else {
        lVar10 = lVar10 + (ulonglong)(uVar13 >> 4) * 0x290 + (ulonglong)(uVar13 & 0xf) * 0x28 + 0x18
        ;
      }
      plVar9 = (longlong *)FUN_144eb0b10(lVar10,0);
      return *plVar9;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014048a164. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar10 = (**(code **)(*_DAT_14a9b1b48 + 0x218))(_DAT_14a9b1b48,lVar10);
  return lVar10;
}

