// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400bee20  size: 413 bytes
// Name:    FUN_1400bee20
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1438a5ec0, FUN_1438a4b50, FUN_144dda310, FUN_145583830
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_1400bee20(longlong *param_1,longlong param_2,undefined4 *param_3,longlong *param_4,
             undefined8 *param_5,undefined4 param_6)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  char cVar6;
  longlong lStack_d8;
  longlong lStack_d0;
  longlong lStack_c8;
  longlong lStack_c0;
  longlong lStack_b8;
  longlong lStack_b0;
  longlong lStack_a8;
  longlong lStack_a0;
  longlong lStack_98;
  char cStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  lVar4 = (**(code **)(*param_1 + 0x88))(param_1,param_6);
  cVar6 = (char)param_1[8];
  lStack_98 = lVar4;
  cStack_90 = cVar6;
  iVar2 = FUN_144dda310(param_1);
  if ((iVar2 == 0) && ((*(byte *)(param_2 + 0xb17) & 0x40) != 0)) {
    iVar2 = 1;
    FUN_145583830(&lStack_d8,param_1,1);
    lVar4 = lStack_d8;
    cVar6 = (char)lStack_d0;
  }
  if ((_DAT_14908f6f0 != 0) && (cVar1 = FUN_1438a4b50(*param_3,param_2), cVar1 != '\0')) {
    FUN_145583830(&lStack_d8,param_1,iVar2 + _DAT_14908f6f0);
    lVar4 = lStack_d8;
    cVar6 = (char)lStack_d0;
  }
  uVar3 = func_0x000144e51b80(param_2);
  if (lVar4 != 0) {
    lStack_d8 = *param_4;
    lStack_d0 = param_4[1];
    lStack_c8 = param_4[2];
    lStack_c0 = param_4[3];
    lStack_b8 = param_4[4];
    lStack_b0 = param_4[5];
    lStack_a8 = param_4[6];
    lStack_a0 = param_4[7];
    uStack_88 = *param_5;
    uStack_80 = param_5[1];
    uStack_78 = param_5[2];
    uStack_70 = param_5[3];
    uStack_68 = param_5[4];
    uStack_60 = param_5[5];
    uStack_58 = param_5[6];
    uStack_50 = param_5[7];
    if (-1 < cVar6) {
      cVar1 = (**(code **)(*param_1 + 0x118))(param_1,param_6);
      if (cVar1 != '\0') {
        (**(code **)(*param_1 + 0x18))(param_1,&lStack_d8,&uStack_88,param_6);
        uVar3 = func_0x000144e51980(param_3[6],uVar3);
        uVar5 = FUN_1438a5ec0(param_1,param_1 + 0x24,param_2,lVar4,param_3,&lStack_d8,&uStack_88,
                              (int)cVar6,uVar3);
        return uVar5;
      }
    }
  }
  return 0;
}

