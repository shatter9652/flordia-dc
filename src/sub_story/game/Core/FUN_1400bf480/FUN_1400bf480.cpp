// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400bf480  size: 795 bytes
// Name:    FUN_1400bf480
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1452afc90, FUN_1400bf7a0, FUN_1400bf940, FUN_1400bf970, FUN_144f93d60, FUN_1404a0470
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_1400bf480(void)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong unaff_GS_OFFSET;
  undefined8 uVar7;
  undefined8 uVar8;
  ushort uStack_68a;
  undefined1 auStack_688 [32];
  undefined8 uStack_668;
  undefined8 uStack_660;
  undefined8 uStack_658;
  undefined1 uStack_650;
  undefined1 auStack_64c [12];
  undefined4 uStack_640;
  undefined4 uStack_63c;
  undefined4 uStack_638;
  undefined4 uStack_634;
  undefined4 uStack_630;
  undefined4 uStack_62c;
  undefined8 uStack_628;
  undefined1 auStack_468 [32];
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined1 uStack_430;
  undefined1 auStack_42c [12];
  undefined4 uStack_420;
  undefined4 uStack_41c;
  undefined4 uStack_418;
  undefined4 uStack_414;
  undefined4 uStack_410;
  undefined4 uStack_40c;
  undefined8 uStack_408;
  undefined1 auStack_248 [32];
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined1 uStack_210;
  undefined1 auStack_20c [12];
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined8 uStack_1e8;
  
  auStack_248 = ZEXT1232(ZEXT812(0));
  uStack_228 = _DAT_14a15dff0;
  uStack_220 = uRam000000014a15dff8;
  uStack_218 = 0;
  uStack_210 = 0;
  uVar7 = _DAT_14a15dff0;
  uVar8 = uRam000000014a15dff8;
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    func_0x0001455db994();
  }
  auStack_20c = ZEXT812(0);
  uStack_1f0 = 0x6d;
  uStack_1fc = 0;
  uStack_1f4 = 0;
  uStack_200 = 0;
  uStack_1f8 = 0x40000000;
  uStack_1ec = 2;
  uStack_1e8 = _DAT_14ab77628;
  lVar4 = FUN_1452afc90();
  iVar3 = _DAT_14a1e8a1c;
  uVar6 = CONCAT62((int6)((ulonglong)auStack_20c >> 0x10),0x100);
  _DAT_14a1e8a1c = 0;
  uStack_68a = 0x100;
  if (lVar4 != 0) {
    lVar5 = FUN_144f93d60(*(undefined4 *)(lVar4 + 0x24),*(undefined8 *)(lVar4 + 0x28),0xbe);
    _DAT_14a1e8a1c = *(int *)(lVar4 + 0x14);
    if ((_DAT_14a1e8a1c != 0) && (iVar3 != _DAT_14a1e8a1c)) {
      _DAT_14a1e8aa4 = _DAT_14abbef40;
    }
    if (lVar5 != 0) {
      lVar4 = func_0x000144e29fa0(lVar5);
      FUN_1404a0470(*(undefined4 *)(lVar4 + 8),&uStack_68a);
      uVar6 = (ulonglong)uStack_68a;
    }
  }
  bVar1 = FUN_1400bf7a0(0x14a1e8a18,uVar6 & 0xffffffff,_DAT_14a1e8a14,_DAT_14a1e8a10);
  uStack_68a = 0x100;
  _DAT_14a1e8a6c = 0;
  auStack_468 = ZEXT1232(ZEXT812(0));
  uStack_438 = 0;
  uStack_430 = 0;
  uStack_448 = uVar7;
  uStack_440 = uVar8;
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    func_0x0001455db994();
  }
  auStack_42c = ZEXT812(0);
  uStack_410 = 0x6d;
  uStack_41c = 0;
  uStack_414 = 0;
  uStack_420 = 0;
  uStack_418 = 0x80000000;
  uStack_40c = 2;
  uStack_408 = _DAT_14ab77634;
  lVar4 = FUN_1452afc90();
  uVar6 = CONCAT62((int6)((ulonglong)auStack_42c >> 0x10),0x100);
  if (lVar4 != 0) {
    lVar5 = FUN_144f93d60(*(undefined4 *)(lVar4 + 0x24),*(undefined8 *)(lVar4 + 0x28),0xbf);
    _DAT_14a1e8a6c = *(undefined4 *)(lVar4 + 0x14);
    if (lVar5 != 0) {
      lVar4 = func_0x00014001cef0(lVar5);
      FUN_1404a0470(*(undefined4 *)(lVar4 + 8),&uStack_68a);
      uVar6 = (ulonglong)uStack_68a;
    }
  }
  bVar2 = FUN_1400bf7a0(0x14a1e8a68,uVar6 & 0xffffffff,_DAT_14a1e8a14,_DAT_14a1e8a10);
  _DAT_14a1e8a44 = 0;
  auStack_688 = ZEXT1232(ZEXT812(0));
  uStack_658 = 0;
  uStack_650 = 0;
  uStack_668 = uVar7;
  uStack_660 = uVar8;
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    func_0x0001455db994();
  }
  auStack_64c = ZEXT812(0);
  uStack_630 = 0x6d;
  uStack_63c = 0;
  uStack_634 = 0;
  uStack_640 = 0;
  uStack_638 = 0x400000;
  uStack_62c = 2;
  uStack_628 = _DAT_14ab775c8;
  lVar4 = FUN_1452afc90();
  if (lVar4 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(lVar4 + 0x14);
  }
  if (iVar3 != _DAT_14a1e8aa0) {
    _DAT_14a1e8aa0 = iVar3;
    _DAT_146ab6580 = FUN_1400bf940();
    FUN_1400bf970(0);
  }
  return bVar1 | bVar2;
}

