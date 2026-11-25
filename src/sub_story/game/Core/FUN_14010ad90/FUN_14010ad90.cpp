// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14010ad90  size: 197 bytes
// Name:    FUN_14010ad90
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140b02e70
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_14010ad90(int param_1,longlong param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined1 auVar11 [16];
  
  uVar10 = 0xffffffff;
  if (param_1 != 0) {
    auVar11[1] = DAT_1461595b1;
    auVar11[0] = DAT_1461595b1;
    auVar11[2] = DAT_1461595b1;
    auVar11[3] = DAT_1461595b1;
    auVar11[4] = DAT_1461595b1;
    auVar11[5] = DAT_1461595b1;
    auVar11[6] = DAT_1461595b1;
    auVar11[7] = DAT_1461595b1;
    auVar11[8] = DAT_1461595b1;
    auVar11[9] = DAT_1461595b1;
    auVar11[10] = DAT_1461595b1;
    auVar11[0xb] = DAT_1461595b1;
    auVar11[0xc] = DAT_1461595b1;
    auVar11[0xd] = DAT_1461595b1;
    auVar11[0xe] = DAT_1461595b1;
    auVar11[0xf] = DAT_1461595b1;
    uVar8 = 0x97aece;
    while( true ) {
      uVar8 = uVar8 & param_1 - 1U;
      auVar1 = *(undefined1 (*) [16])(param_2 + (ulonglong)uVar8 * 0x210);
      auVar2 = vpcmpeqb_avx(auVar1,auVar11);
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
        uVar9 = (uint)uVar3;
        do {
          uVar4 = 0;
          for (uVar5 = uVar9; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
            uVar4 = uVar4 + 1;
          }
          if (*(int *)((ulonglong)uVar8 * 0x210 + param_2 + 0x10 + (ulonglong)(uVar4 << 5)) ==
              0x655615b7) {
            uVar10 = uVar4 | uVar8 << 4;
            goto LAB_14010adf6;
          }
          uVar9 = uVar9 - 1 & uVar9;
        } while (uVar9 != 0);
      }
      auVar1 = vpsignb_avx(auVar1,auVar1);
      if ((((((((((((((((SUB161(auVar1 >> 7,0) & 1) != 0 || (SUB161(auVar1 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar1 >> 0x17,0) & 1) != 0) || (SUB161(auVar1 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar1 >> 0x27,0) & 1) != 0) || (SUB161(auVar1 >> 0x2f,0) & 1) != 0)
                  || (SUB161(auVar1 >> 0x37,0) & 1) != 0) || (SUB161(auVar1 >> 0x3f,0) & 1) != 0) ||
                (SUB161(auVar1 >> 0x47,0) & 1) != 0) || (SUB161(auVar1 >> 0x4f,0) & 1) != 0) ||
              (SUB161(auVar1 >> 0x57,0) & 1) != 0) || (SUB161(auVar1 >> 0x5f,0) & 1) != 0) ||
            (SUB161(auVar1 >> 0x67,0) & 1) != 0) || (SUB161(auVar1 >> 0x6f,0) & 1) != 0) ||
          (SUB161(auVar1 >> 0x77,0) & 1) != 0) || auVar1[0xf] < '\0') break;
      uVar8 = uVar8 + 1;
    }
  }
LAB_14010adf6:
  lVar7 = (ulonglong)((uVar10 & 0xf) << 5) + 0x10 + param_2 + (ulonglong)(uVar10 >> 4) * 0x210;
  if (uVar10 == 0xffffffff) {
    lVar7 = 0;
  }
  lVar7 = lVar7 + 8;
  if (uVar10 == 0xffffffff) {
    lVar7 = 0;
  }
  puVar6 = (undefined8 *)FUN_140b02e70(lVar7);
  return *puVar6;
}

