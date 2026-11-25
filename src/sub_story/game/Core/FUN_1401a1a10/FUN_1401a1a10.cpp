// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401a1a10  size: 29 bytes
// Name:    FUN_1401a1a10
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_1401a1a10(void)

{
  undefined1 auVar1 [16];
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  undefined1 auVar8 [16];
  
  cVar5 = func_0x000145069df0();
  if (cVar5 == '\0') {
    return 0;
  }
  auVar8[1] = UNK_1461592fc;
  auVar8[0] = UNK_1461592fc;
  auVar8[2] = UNK_1461592fc;
  auVar8[3] = UNK_1461592fc;
  auVar8[4] = UNK_1461592fc;
  auVar8[5] = UNK_1461592fc;
  auVar8[6] = UNK_1461592fc;
  auVar8[7] = UNK_1461592fc;
  auVar8[8] = UNK_1461592fc;
  auVar8[9] = UNK_1461592fc;
  auVar8[10] = UNK_1461592fc;
  auVar8[0xb] = UNK_1461592fc;
  auVar8[0xc] = UNK_1461592fc;
  auVar8[0xd] = UNK_1461592fc;
  auVar8[0xe] = UNK_1461592fc;
  auVar8[0xf] = UNK_1461592fc;
  uVar6 = 0x17e6289;
  do {
    uVar6 = uVar6 & iRam000000014ab83cb8 - 1U;
    auVar1 = vpcmpeqb_avx(auVar8,*(undefined1 (*) [16])
                                  (lRam000000014ab83cc0 + (ulonglong)uVar6 * 0x110));
    uVar2 = (ushort)(SUB161(auVar1 >> 7,0) & 1) | (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
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
            (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe | (ushort)(byte)(auVar1[0xf] >> 7) << 0xf;
    if (uVar2 != 0) {
      uVar7 = (uint)uVar2;
      do {
        uVar3 = 0;
        for (uVar4 = uVar7; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
          uVar3 = uVar3 + 1;
        }
        if (*(int *)((ulonglong)uVar6 * 0x110 + lRam000000014ab83cc0 + 0x10 +
                    (ulonglong)(uVar3 << 4)) == -0x40cebb60) {
          return *(undefined8 *)
                  ((ulonglong)((uVar3 & 0xf) << 4) + 0x18 +
                  lRam000000014ab83cc0 + (ulonglong)((uVar6 << 4 | uVar3) >> 4) * 0x110);
        }
        uVar7 = uVar7 - 1 & uVar7;
      } while (uVar7 != 0);
    }
    uVar6 = uVar6 + 1;
  } while( true );
}

