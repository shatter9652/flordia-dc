// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140102430  size: 203 bytes
// Name:    FUN_140102430
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144fa4300
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


bool FUN_140102430(longlong param_1,longlong *param_2,float param_3)

{
  undefined1 auVar1 [16];
  char cVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auVar6 [16];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [16];
  undefined1 aauStack_38 [2] [16];
  
  if (param_2 != (longlong *)0x0) {
    iVar3 = FUN_144fa4300(param_2);
    if (iVar3 == 0) {
      param_3 = param_3 * param_3;
      (**(code **)(*param_2 + 0x138))(param_2,aauStack_38);
      uStack_58 = *(undefined8 *)(param_1 + 0x70);
      uStack_50 = *(undefined8 *)(param_1 + 0x78);
      func_0x000144dc3790(&uStack_58,auStack_48);
      auVar1 = vsubps_avx(aauStack_38[0],auStack_48);
      auVar6._0_4_ = auVar1._0_4_ * auVar1._0_4_;
      auVar6._4_4_ = auVar1._4_4_ * auVar1._4_4_;
      auVar6._8_4_ = auVar1._8_4_ * auVar1._8_4_;
      auVar6._12_4_ = auVar1._12_4_ * auVar1._12_4_;
      auVar1 = vhaddps_avx(auVar6,auVar6);
      return auVar1._0_4_ < param_3;
    }
    if ((ulonglong)*(uint *)((longlong)param_2 + 0x464) != 0) {
      param_3 = param_3 * param_3;
      plVar4 = param_2 + 0x8e;
      lVar5 = (ulonglong)*(uint *)((longlong)param_2 + 0x464) * 0x60;
      while ((cVar2 = func_0x000145311e80(plVar4), cVar2 == '\0' ||
             (param_3 <= *(float *)((longlong)plVar4 + 0x4c)))) {
        plVar4 = plVar4 + 0xc;
        lVar5 = lVar5 + -0x60;
        if (lVar5 == 0) {
          return false;
        }
      }
      return true;
    }
  }
  return false;
}

