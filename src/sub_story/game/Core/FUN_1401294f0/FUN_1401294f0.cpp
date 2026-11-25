// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401294f0  size: 959 bytes
// Name:    FUN_1401294f0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401294f0(longlong param_1,longlong *param_2,longlong param_3,undefined4 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  byte bVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  ulonglong uVar8;
  uint auStack_ec [5];
  undefined4 uStack_d8;
  undefined8 uStack_d4;
  undefined4 uStack_cc;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined1 auStack_94 [16];
  undefined4 uStack_84;
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined1 auStack_64 [16];
  undefined4 uStack_54;
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  
  uStack_cc = 0;
  uStack_d4 = 0;
  uStack_c8 = _DAT_146183e00;
  uStack_c0 = _UNK_146183e08;
  uStack_b8 = _UNK_146183e10;
  uStack_b0 = _UNK_146183e18;
  uStack_a8 = _DAT_146183e20;
  uStack_a0 = _UNK_146183e28;
  auStack_94 = ZEXT816(0) << 0x20;
  uStack_98 = 0x3f800000;
  uStack_84 = 0x3f800000;
  uStack_70 = vmovlps_avx(ZEXT416(_DAT_145fc6ed8));
  uStack_68 = 0x3f800000;
  uStack_54 = 0x3f800000;
  uStack_40 = vmovlps_avx(ZEXT416(_DAT_145fc6ed8));
  auStack_ec[4] =
       (uint)((ulonglong)
              (*(longlong *)(*(longlong *)(_DAT_14a92d668 + 0x28) + 0x18) - _DAT_14a943aa0) >> 5);
  uStack_d8 = (undefined4)
              ((ulonglong)
               (*(longlong *)(*(longlong *)(_DAT_14a92d678 + 0x28) + 0x18) - _DAT_14a943aa0) >> 5);
  auStack_80 = auStack_94;
  auStack_64 = auStack_94;
  auStack_50 = auStack_94;
  if (*(char *)(param_1 + 0x3104 + (ulonglong)*(byte *)(_DAT_14a943ab0 + 1) * 0x2d78) != '\x01') {
    auStack_ec[3] = 0;
    auStack_ec[1] = 0;
    auStack_ec[2] = 0;
    auStack_ec[0] = 1;
    (**(code **)(*param_2 + 0xb8))(param_2,_DAT_14a92d5c0,auStack_ec,0x10);
    lVar3 = *param_2;
    puVar7 = auStack_ec + 4;
    lVar1 = 0xa4;
    goto LAB_140129896;
  }
  lVar3 = param_1 + 0x390;
  if (*(int *)(param_1 + 0x3100 + (ulonglong)*(byte *)(_DAT_14a943ab0 + 1) * 0x2d78) != 0) {
    uVar5 = 0;
    do {
      lVar1 = func_0x0001455d99e0(lVar3,uVar5);
      if (lVar1 != 0) {
        func_0x0001455d9a10(lVar3,uVar5);
      }
      lVar1 = func_0x0001455d99e0(lVar3,uVar5);
      if (lVar1 != 0) {
        uVar2 = func_0x0001455d99e0(lVar3,uVar5);
        (**(code **)(*param_2 + 0x1a0))(param_2,uVar2,1);
      }
      lVar1 = func_0x0001455d9a10(lVar3,uVar5);
      if (lVar1 != 0) {
        uVar2 = func_0x0001455d9a10(lVar3,uVar5);
        (**(code **)(*param_2 + 0x1a0))(param_2,uVar2,1);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(uint *)(param_1 + 0x3100 + (ulonglong)*(byte *)(_DAT_14a943ab0 + 1) * 0x2d78)
            );
  }
  bVar4 = *(byte *)(_DAT_14a943ab0 + 1);
  if (*(int *)(param_1 + 0x3100 + (ulonglong)*(byte *)(_DAT_14a943ab0 + 1) * 0x2d78) == 0) {
    puVar7 = auStack_ec + 4;
    auStack_ec[0] = 1;
LAB_140129794:
    puVar6 = puVar7 + 0xe;
    uVar8 = 0;
    lVar3 = param_3 + 0xcd8 + (ulonglong)bVar4 * 0x1e0;
    do {
      if (uVar8 < *(uint *)(param_1 + 0x30ac + (ulonglong)*(byte *)(_DAT_14a943ab0 + 1) * 0x2d78)) {
        bVar4 = *(byte *)(uVar8 + (ulonglong)*(byte *)(_DAT_14a943ab0 + 1) * 0x2d78 +
                                  param_1 + 0x30b0);
      }
      else {
        bVar4 = 0;
      }
      lVar1 = (ulonglong)bVar4 * 0x20;
      *(undefined8 *)puVar6 = *(undefined8 *)(lVar3 + 0x18 + lVar1);
      if (((*(longlong *)(lVar3 + 8 + lVar1) != 0) && (*(int *)(lVar3 + 0x10 + lVar1) != 0)) &&
         (uVar5 = *(uint *)(lVar3 + lVar1 + 0x14), uVar5 != 0xffffffff)) {
        puVar6[-1] = uVar5;
      }
      uVar8 = uVar8 + 1;
      puVar6 = puVar6 + 0x29;
    } while (auStack_ec[0] != uVar8);
    lVar1 = (ulonglong)auStack_ec[0] * 0xa4;
  }
  else {
    auStack_ec[0] = *(uint *)(param_1 + 0x3100 + (ulonglong)bVar4 * 0x2d78);
    puVar7 = (uint *)(param_1 + 0x398 + (ulonglong)*(byte *)(_DAT_14a943ab0 + 1) * 0x2d78);
    bVar4 = *(byte *)(_DAT_14a943ab0 + 1);
    if (auStack_ec[0] != 0) goto LAB_140129794;
    auStack_ec[0] = 0;
    lVar1 = 0;
  }
  auStack_ec[3] = 0;
  auStack_ec[1] = 0;
  auStack_ec[2] = 0;
  (**(code **)(*param_2 + 0xb8))(param_2,_DAT_14a92d5c0,auStack_ec,0x10);
  lVar3 = *param_2;
LAB_140129896:
  (**(code **)(lVar3 + 0x110))(param_2,param_4,puVar7,lVar1,0xa4);
  return;
}

