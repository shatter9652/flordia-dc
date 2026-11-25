// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14000f250  size: 1283 bytes
// Name:    FUN_14000f250
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144dcb4a0, FUN_144ff0470, FUN_144dcaca0, FUN_144dcb210, FUN_144dcac30, FUN_144dcb020, FUN_144de2e90, FUN_144dcaec0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14000f250(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  undefined4 uVar5;
  char cVar6;
  longlong *plVar7;
  longlong lVar8;
  int iStack_ec;
  undefined *puStack_e8;
  undefined7 uStack_e0;
  undefined1 uStack_d9;
  undefined7 uStack_d8;
  undefined *puStack_d0;
  undefined7 uStack_c8;
  undefined1 uStack_c1;
  undefined7 uStack_c0;
  undefined *puStack_b8;
  undefined7 uStack_b0;
  undefined1 uStack_a9;
  undefined7 uStack_a8;
  undefined *puStack_a0;
  undefined7 uStack_98;
  undefined1 uStack_91;
  undefined7 uStack_90;
  undefined *puStack_88;
  undefined7 uStack_80;
  undefined1 uStack_79;
  undefined7 uStack_78;
  undefined *puStack_70;
  undefined7 uStack_68;
  undefined1 uStack_61;
  undefined7 uStack_60;
  undefined *puStack_58;
  undefined7 uStack_50;
  undefined1 uStack_49;
  undefined7 uStack_48;
  
  lVar8 = 0;
  plVar7 = (longlong *)0x149ce15a0;
  iStack_ec = 0;
  do {
    lVar2 = *plVar7;
    if (lVar2 != 0) {
      lVar3 = *(longlong *)(_DAT_14a924088 + 0x28);
      lVar1 = lVar3 + lVar8;
      uVar5 = func_0x0001455cbfe0(lVar2);
      cVar6 = *(char *)(lVar2 + 0x5bc);
      if (cVar6 == '\x03') {
        if (*(int *)(lVar3 + 0x5b0 + lVar8) == 3) {
          FUN_144ff0470(lVar1);
          *(undefined1 *)(lVar2 + 0x5bc) = 0;
          if ((*(byte *)(lVar2 + 0x5b9) & 8) != 0) {
            FUN_144de2e90(uVar5);
          }
          goto LAB_14000f720;
        }
        if ((*(byte *)(lVar2 + 0x5b9) & 4) != 0) goto LAB_14000f315;
        goto LAB_14000f3bd;
      }
      bVar4 = *(byte *)(lVar2 + 0x5b9);
      if ((bVar4 & 4) == 0) {
        if (cVar6 == '\x01') goto LAB_14000f332;
      }
      else {
LAB_14000f315:
        func_0x0001455947a0(lVar1);
        bVar4 = *(byte *)(lVar2 + 0x5b9) & 0xfb;
        *(byte *)(lVar2 + 0x5b9) = bVar4;
        *(undefined1 *)(lVar2 + 0x5bc) = 1;
LAB_14000f332:
        cVar6 = '\x01';
        if (*(int *)(lVar3 + 0x5b0 + lVar8) == 1) {
          cVar6 = '\x02';
          *(undefined1 *)(lVar2 + 0x5bc) = 2;
        }
      }
      if (((bVar4 & 8) == 0) || (1 < (byte)(cVar6 - 1U))) {
        if (cVar6 != '\0') {
          if (cVar6 == '\x02') {
            if (*(int *)(lVar3 + 0x5b0 + lVar8) == 3) {
              FUN_144ff0470(lVar1);
              goto LAB_14000f385;
            }
          }
          else if (cVar6 == '\x04') goto LAB_14000f36b;
          goto LAB_14000f3bd;
        }
      }
      else {
        *(byte *)(lVar2 + 0x5b9) = bVar4 & 0xfb;
        func_0x0001455947b0(lVar1);
        *(undefined1 *)(lVar2 + 0x5bc) = 4;
LAB_14000f36b:
        if (*(int *)(lVar3 + 0x5b0 + lVar8) == 3) {
          FUN_144ff0470(lVar1);
          FUN_144de2e90(uVar5);
LAB_14000f385:
          *(undefined1 *)(lVar2 + 0x5bc) = 0;
        }
        else {
LAB_14000f3bd:
          func_0x000144dcabb0(lVar1);
          if ((DAT_149ce1d9c != '\x01') || ((*(byte *)(lVar2 + 0x5b9) & 1) == 0)) {
            if ((~*(ushort *)(lVar2 + 0x3c0) & 0x7fff) != 0) {
              FUN_144dcaca0(lVar1,*(undefined4 *)(lVar2 + 0x3c0),lVar2);
            }
            if ((~*(ushort *)(lVar2 + 0x3c4) & 0x7fff) != 0) {
              FUN_144dcaca0(lVar1,*(undefined4 *)(lVar2 + 0x3c4),lVar2 + 0x40);
            }
            if ((~*(ushort *)(lVar2 + 0x3c8) & 0x7fff) != 0) {
              FUN_144dcaca0(lVar1,*(undefined4 *)(lVar2 + 0x3c8),lVar2 + 0x80);
            }
            if ((~*(ushort *)(lVar2 + 0x3cc) & 0x7fff) != 0) {
              FUN_144dcaca0(lVar1,*(undefined4 *)(lVar2 + 0x3cc),lVar2 + 0xc0);
            }
            if ((~*(ushort *)(lVar2 + 0x3d0) & 0x7fff) != 0) {
              FUN_144dcaca0(lVar1,*(undefined4 *)(lVar2 + 0x3d0),lVar2 + 0x100);
            }
            if ((~*(ushort *)(lVar2 + 0x3d4) & 0x7fff) != 0) {
              FUN_144dcaca0(lVar1,*(undefined4 *)(lVar2 + 0x3d4),lVar2 + 0x140);
            }
            if ((~*(ushort *)(lVar2 + 0x3d8) & 0x7fff) != 0) {
              FUN_144dcaca0(lVar1,*(undefined4 *)(lVar2 + 0x3d8),lVar2 + 0x180);
            }
            if ((~*(ushort *)(lVar2 + 0x3dc) & 0x7fff) != 0) {
              FUN_144dcaca0(lVar1,*(undefined4 *)(lVar2 + 0x3dc),lVar2 + 0x1c0);
            }
            if ((~*(ushort *)(lVar2 + 0x3e0) & 0x7fff) != 0) {
              FUN_144dcaca0(lVar1,*(undefined4 *)(lVar2 + 0x3e0),lVar2 + 0x200);
            }
            if ((~*(ushort *)(lVar2 + 0x3e4) & 0x7fff) != 0) {
              FUN_144dcaca0(lVar1,*(undefined4 *)(lVar2 + 0x3e4),lVar2 + 0x240);
            }
            if ((~*(ushort *)(lVar2 + 1000) & 0x7fff) != 0) {
              FUN_144dcaca0(lVar1,*(undefined4 *)(lVar2 + 1000),lVar2 + 0x280);
            }
            if ((~*(ushort *)(lVar2 + 0x3ec) & 0x7fff) != 0) {
              FUN_144dcaca0(lVar1,*(undefined4 *)(lVar2 + 0x3ec),lVar2 + 0x2c0);
            }
            if ((~*(ushort *)(lVar2 + 0x3f0) & 0x7fff) != 0) {
              FUN_144dcaca0(lVar1,*(undefined4 *)(lVar2 + 0x3f0),lVar2 + 0x300);
            }
            if ((~*(ushort *)(lVar2 + 0x3f4) & 0x7fff) != 0) {
              FUN_144dcaca0(lVar1,*(undefined4 *)(lVar2 + 0x3f4),lVar2 + 0x340);
            }
            if ((~*(ushort *)(lVar2 + 0x3f8) & 0x7fff) != 0) {
              FUN_144dcaca0(lVar1,*(undefined4 *)(lVar2 + 0x3f8),lVar2 + 0x380);
            }
          }
          puStack_e8 = &UNK_146682388;
          uStack_d8 = (undefined7)((ulonglong)*(undefined8 *)(lVar2 + 0x467) >> 8);
          uStack_e0 = (undefined7)*(undefined8 *)(lVar2 + 0x460);
          uStack_d9 = (undefined1)((ulonglong)*(undefined8 *)(lVar2 + 0x460) >> 0x38);
          puStack_d0 = &UNK_146682388;
          uStack_c0 = (undefined7)((ulonglong)*(undefined8 *)(lVar2 + 0x47f) >> 8);
          uStack_c8 = (undefined7)*(undefined8 *)(lVar2 + 0x478);
          uStack_c1 = (undefined1)((ulonglong)*(undefined8 *)(lVar2 + 0x478) >> 0x38);
          puStack_b8 = &UNK_146682388;
          uStack_a8 = (undefined7)((ulonglong)*(undefined8 *)(lVar2 + 0x497) >> 8);
          uStack_b0 = (undefined7)*(undefined8 *)(lVar2 + 0x490);
          uStack_a9 = (undefined1)((ulonglong)*(undefined8 *)(lVar2 + 0x490) >> 0x38);
          puStack_a0 = &UNK_146682388;
          uStack_90 = (undefined7)((ulonglong)*(undefined8 *)(lVar2 + 0x4af) >> 8);
          uStack_98 = (undefined7)*(undefined8 *)(lVar2 + 0x4a8);
          uStack_91 = (undefined1)((ulonglong)*(undefined8 *)(lVar2 + 0x4a8) >> 0x38);
          puStack_88 = &UNK_146682388;
          uStack_78 = (undefined7)((ulonglong)*(undefined8 *)(lVar2 + 0x4c7) >> 8);
          uStack_80 = (undefined7)*(undefined8 *)(lVar2 + 0x4c0);
          uStack_79 = (undefined1)((ulonglong)*(undefined8 *)(lVar2 + 0x4c0) >> 0x38);
          puStack_70 = &UNK_146682388;
          uStack_60 = (undefined7)((ulonglong)*(undefined8 *)(lVar2 + 0x4df) >> 8);
          uStack_68 = (undefined7)*(undefined8 *)(lVar2 + 0x4d8);
          uStack_61 = (undefined1)((ulonglong)*(undefined8 *)(lVar2 + 0x4d8) >> 0x38);
          puStack_58 = &UNK_146682388;
          uStack_48 = (undefined7)((ulonglong)*(undefined8 *)(lVar2 + 0x4f7) >> 8);
          uStack_50 = (undefined7)*(undefined8 *)(lVar2 + 0x4f0);
          uStack_49 = (undefined1)((ulonglong)*(undefined8 *)(lVar2 + 0x4f0) >> 0x38);
          FUN_144dcb4a0(lVar1,&puStack_e8);
          FUN_144dcaec0(lVar1,lVar2 + 0x3fc);
          FUN_144dcb020(lVar1,lVar2 + 0x424);
          FUN_144dcb210(lVar1,lVar2 + 0x510);
          FUN_144dcac30(lVar1,lVar2 + 0x5a0);
        }
      }
      iStack_ec = iStack_ec + 1;
    }
LAB_14000f720:
    lVar8 = lVar8 + 0x600;
    plVar7 = plVar7 + 1;
    if (lVar8 == 0x5fa00) {
      _DAT_149ce111c = iStack_ec;
      return;
    }
  } while( true );
}

