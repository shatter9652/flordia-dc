// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14012ae30  size: 430 bytes
// Name:    FUN_14012ae30
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144fdafd0, FUN_1418d8b20, FUN_144fdb1c0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


longlong FUN_14012ae30(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  undefined8 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined4 *puVar8;
  
  auVar4 = vcmpps_avx(*(undefined1 (*) [16])(param_1 + 0x40),*(undefined1 (*) [16])(param_2 + 0x40),
                      0);
  uVar6 = vmovmskps_avx(auVar4);
  if ((~(byte)uVar6 & 7) != 0) {
    uVar5 = *(undefined8 *)(param_2 + 0x48);
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_1 + 0x48) = uVar5;
  }
  FUN_144fdafd0(param_1 + 0x50,param_2 + 0x50);
  if ((((*(longlong *)(param_2 + 0x78) != *(longlong *)(param_1 + 0x78)) ||
       (*(short *)(param_2 + 0x80) != *(short *)(param_1 + 0x80))) ||
      (*(char *)(param_2 + 0x82) != *(char *)(param_1 + 0x82))) ||
     (*(char *)(param_2 + 0x83) != *(char *)(param_1 + 0x83))) {
    uVar5 = *(undefined8 *)(param_2 + 0x80);
    *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_2 + 0x78);
    *(undefined8 *)(param_1 + 0x80) = uVar5;
  }
  if (*(int *)(param_2 + 0x98) != *(int *)(param_1 + 0x98)) {
    *(int *)(param_1 + 0x98) = *(int *)(param_2 + 0x98);
  }
  if (*(char *)(param_2 + 0xb0) != *(char *)(param_1 + 0xb0)) {
    *(char *)(param_1 + 0xb0) = *(char *)(param_2 + 0xb0);
  }
  if (*(char *)(param_1 + 200) != *(char *)(param_2 + 200)) {
    *(char *)(param_1 + 200) = *(char *)(param_2 + 200);
  }
  if (*(int *)(param_2 + 0xe0) != *(int *)(param_1 + 0xe0)) {
    *(int *)(param_1 + 0xe0) = *(int *)(param_2 + 0xe0);
  }
  if (param_1 != param_2) {
    FUN_144fdb1c0(param_1 + 0xe8,*(undefined8 *)(param_2 + 0xf0));
    *(undefined4 *)(param_1 + 0xfc) = 0;
    uVar1 = *(uint *)(param_2 + 0xfc);
    if ((ulonglong)uVar1 != 0) {
      lVar2 = *(longlong *)(param_2 + 0x100);
      FUN_1418d8b20(param_1 + 0xf8);
      lVar3 = *(longlong *)(param_1 + 0x100);
      lVar7 = 0;
      do {
        puVar8 = (undefined4 *)(lVar3 + lVar7);
        if (puVar8 != (undefined4 *)0x0) {
          *puVar8 = *(undefined4 *)(lVar2 + lVar7);
        }
        lVar7 = lVar7 + 4;
      } while ((ulonglong)uVar1 << 2 != lVar7);
      *(uint *)(param_1 + 0xfc) = uVar1;
    }
  }
  *(undefined1 *)(param_1 + 0x110) = *(undefined1 *)(param_2 + 0x110);
  *(undefined8 *)(param_1 + 0x108) = *(undefined8 *)(param_2 + 0x108);
  return param_1;
}

