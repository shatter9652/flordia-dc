// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400aec80  size: 399 bytes
// Name:    FUN_1400aec80
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14190f1d0, FUN_14133b300, FUN_14068de80, FUN_141276fa0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_1400aec80(longlong param_1,longlong param_2,undefined8 *param_3)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  bool bVar8;
  longlong lStack_1a8;
  undefined8 *puStack_1a0;
  undefined1 auStack_198 [32];
  undefined1 auStack_178 [32];
  longlong *plStack_158;
  code *pcStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  longlong *plStack_138;
  code *pcStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  longlong lStack_118;
  undefined8 *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined1 auStack_c8 [168];
  
  FUN_14068de80(auStack_c8,0x3fffff,4);
  cVar3 = FUN_14133b300(*(undefined4 *)(param_2 + 0x88),auStack_c8);
  if ((cVar3 != '\0') &&
     (puVar4 = (undefined8 *)FUN_14190f1d0(param_1,0,param_2), puVar4 != (undefined8 *)0x0)) {
    plStack_138 = &lStack_1a8;
    plStack_158 = &lStack_118;
    pcStack_130 = FUN_142e7c070;
    puStack_128 = &UNK_1408d04c0;
    auStack_198 = ZEXT1232(ZEXT812(0));
    uStack_108 = 0;
    puStack_120 = &SUB_140004380;
    uStack_f8 = *param_3;
    uStack_f0 = param_3[1];
    uStack_e8 = param_3[2];
    uStack_e0 = param_3[3];
    uStack_d8 = param_3[4];
    uStack_d0 = param_3[5];
    pcStack_150 = FUN_142e7c110;
    puStack_148 = &UNK_1424eb140;
    puStack_140 = &SUB_140004380;
    lStack_1a8 = param_1;
    puStack_1a0 = puVar4;
    auStack_178 = auStack_198;
    lStack_118 = param_1;
    puStack_110 = puVar4;
    uVar5 = FUN_141276fa0(auStack_c8,&plStack_158,&plStack_138,auStack_198,auStack_178);
    if ((int)uVar5 != -1) {
      return uVar5;
    }
    (**(code **)*puVar4)(puVar4);
    iVar1 = *(int *)(param_1 + 0x58);
    uVar2 = *(uint *)(param_1 + 100);
    uVar6 = *(ulonglong *)(param_1 + 0x50);
    do {
      *(short *)puVar4 = (short)(uVar6 >> 0x20);
      LOCK();
      uVar7 = *(ulonglong *)(param_1 + 0x50);
      bVar8 = uVar6 == uVar7;
      if (bVar8) {
        *(ulonglong *)(param_1 + 0x50) =
             (ulonglong)((int)uVar6 + 1) |
             (uVar6 & 0xffff000000000000 |
             ((ulonglong)(uint)((int)puVar4 - iVar1) / (ulonglong)uVar2 & 0xffff) << 0x20) +
             0x1000000000000;
        uVar7 = uVar6;
      }
      UNLOCK();
      uVar6 = uVar7;
    } while (!bVar8);
  }
  return 0xffffffff;
}

