// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140116330  size: 290 bytes
// Name:    FUN_140116330
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144debee0, FUN_144debd70, FUN_144d9e2f0, FUN_1401164a0, FUN_140116470
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140116330(longlong *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [64];
  uint uStack_34;
  undefined8 auStack_30 [3];
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  
  if ((*(uint *)((longlong)param_1 + 0x1c) & 0xfffffffe) != 2) {
    uStack_34 = 0;
    if (param_2 == 0) {
      if (*(char *)((longlong)param_1 + 0x3e) != '\0') {
        *(undefined4 *)((longlong)param_1 + 0x1c) = 3;
        return;
      }
      uVar4 = FUN_144d9e2f0(param_1[4],0x10c68c3c);
      func_0x000144debac0(auStack_30,uVar4);
      cVar1 = FUN_144debd70(auStack_30[0]);
      if (cVar1 == '\0') {
        iVar2 = (**(code **)(*param_1 + 0x10))(param_1);
        if (iVar2 == 0) {
          auVar8 = ZEXT864(0);
        }
        else {
          uVar5 = 0;
          auVar8 = ZEXT864(0);
          do {
            auVar6._0_8_ = FUN_1401164a0(param_1,uVar5,0);
            auVar6._8_8_ = extraout_XMM0_Qb;
            auVar7 = vmaxss_avx(auVar8._0_16_,auVar6);
            auVar8 = ZEXT1664(auVar7);
            uVar5 = uVar5 + 1;
            uVar3 = (**(code **)(*param_1 + 0x10))(param_1);
          } while (uVar5 < uVar3);
        }
      }
      else {
        FUN_144debee0(auStack_30[0],&uStack_34);
        auVar8 = ZEXT464(uStack_34);
      }
    }
    else {
      iVar2 = (**(code **)(*param_1 + 0x10))(param_1);
      auVar8 = ZEXT1264(ZEXT812(0));
      if (iVar2 != 0) {
        uVar5 = 0;
        do {
          auVar7._0_8_ = FUN_1401164a0(param_1,uVar5,1);
          auVar7._8_8_ = extraout_XMM0_Qb_00;
          auVar7 = vmaxss_avx(auVar8._0_16_,auVar7);
          auVar8 = ZEXT1664(auVar7);
          uVar5 = uVar5 + 1;
          uVar3 = (**(code **)(*param_1 + 0x10))(param_1);
        } while (uVar5 < uVar3);
      }
    }
    uVar4 = func_0x000144eb7f90((longlong)param_1 + 0xc);
    FUN_140116470((longlong)param_1 + 0xc,auVar8._0_8_,uVar4);
  }
  return;
}

