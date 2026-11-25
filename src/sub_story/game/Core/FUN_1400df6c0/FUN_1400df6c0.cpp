// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400df6c0  size: 362 bytes
// Name:    FUN_1400df6c0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144e63cf0, FUN_145012860, FUN_1450128a0, FUN_14540f230
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


float FUN_1400df6c0(longlong param_1,longlong param_2,float param_3,float param_4)

{
  undefined8 uVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  float fVar7;
  undefined1 auVar8 [64];
  undefined1 auStack_a8 [8];
  float fStack_a0;
  undefined *puStack_98;
  float fStack_90;
  undefined4 uStack_8c;
  undefined1 auStack_78 [8];
  float fStack_70;
  undefined1 auVar6 [64];
  
  uVar2 = FUN_1450128a0(**(undefined8 **)(param_2 + 0x3b30),4);
  FUN_145012860(&puStack_98,param_2,uVar2,0);
  puStack_98 = &UNK_14669fee0;
  lVar4 = *(longlong *)(CONCAT44(uStack_8c,fStack_90) + 0x3b30);
  iVar3 = func_0x0001450141d0(&puStack_98);
  uVar2 = func_0x00014001bd40(*(undefined8 *)(*(longlong *)(lVar4 + 0x10) + 0x80),
                              *(undefined4 *)(&UNK_14669fed0 + (longlong)iVar3 * 4));
  uVar2 = (**(code **)(*(longlong *)CONCAT44(uStack_8c,fStack_90) + 0xf0))
                    ((longlong *)CONCAT44(uStack_8c,fStack_90),uVar2);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  func_0x000144e1ecd0(uVar1,auStack_78,uVar2);
  func_0x000144e1ecd0(uVar1,auStack_a8,*(undefined4 *)(param_1 + 0x168));
  fVar7 = (fStack_a0 - fStack_70) + *(float *)(param_1 + 0x350);
  auVar5._0_12_ = ZEXT812(0);
  auVar5._12_4_ = 0;
  auVar6 = ZEXT1664(auVar5);
  auVar5 = vmaxss_avx(ZEXT416((uint)fVar7),auVar5);
  auVar8 = ZEXT1664(auVar5);
  lVar4 = FUN_144e63cf0(fVar7,*(undefined4 *)(*(longlong *)(param_1 + 0x2f8) + 0x9c));
  fVar7 = auVar8._0_4_ + *(float *)(lVar4 + 0x28);
  FUN_14540f230(param_2,0,&puStack_98);
  auVar5 = vmaxss_avx(ZEXT416((uint)(param_4 - param_3)),auVar6._0_16_);
  auVar5 = vminss_avx(auVar5,ZEXT416((uint)(fVar7 + fStack_90)));
  return auVar5._0_4_ + param_3;
}

