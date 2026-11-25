// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140037de0  size: 242 bytes
// Name:    FUN_140037de0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140004b40
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_140037de0(uint param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined8 uVar8;
  byte bVar9;
  undefined1 auVar11 [16];
  byte bVar10;
  
  FUN_140004b40(0x14928d860);
  if (_DAT_14928d840 != 0) {
    uVar6 = (param_1 >> 0x10 ^ param_1) * -0x7a143595;
    uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
    uVar6 = uVar6 >> 0x10 ^ uVar6;
    uVar7 = uVar6 >> 7;
    bVar10 = (byte)uVar6;
    bVar9 = bVar10 & 0x7f;
    auVar11._0_8_ =
         CONCAT17(bVar10,CONCAT16(bVar10,CONCAT15(bVar10,CONCAT14(bVar10,CONCAT13(bVar10,CONCAT12(
                                                  bVar10,CONCAT11(bVar10,bVar10))))))) &
         0x7f7f7f7f7f7f7f7f;
    auVar11[8] = bVar9;
    auVar11[9] = bVar9;
    auVar11[10] = bVar9;
    auVar11[0xb] = bVar9;
    auVar11[0xc] = bVar9;
    auVar11[0xd] = bVar9;
    auVar11[0xe] = bVar9;
    auVar11[0xf] = bVar9;
    while( true ) {
      uVar7 = uVar7 & _DAT_14928d840 - 1U;
      auVar1 = *(undefined1 (*) [16])(_DAT_14928d848 + (ulonglong)uVar7 * 0x110);
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
        uVar6 = (uint)uVar3;
        do {
          uVar4 = 0;
          for (uVar5 = uVar6; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
            uVar4 = uVar4 + 1;
          }
          if (*(uint *)((ulonglong)uVar7 * 0x110 + _DAT_14928d848 + 0x10 + (ulonglong)(uVar4 << 4))
              == param_1) {
            uVar6 = uVar7 << 4 | uVar4;
            if (uVar6 == 0xffffffff) goto LAB_140037ec7;
            uVar8 = *(undefined8 *)
                     ((ulonglong)((uVar4 & 0xf) << 4) + 0x18 +
                     _DAT_14928d848 + (ulonglong)(uVar6 >> 4) * 0x110);
            goto LAB_140037e9d;
          }
          uVar6 = uVar6 - 1 & uVar6;
        } while (uVar6 != 0);
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
      uVar7 = uVar7 + 1;
    }
  }
LAB_140037ec7:
  uVar8 = 0;
LAB_140037e9d:
  func_0x000144d9dab0(0x14928d860);
  return uVar8;
}

