// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140073760  size: 302 bytes
// Name:    FUN_140073760
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145335be0, FUN_144e8b4f0, FUN_144edafe0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140073760(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  longlong lStack_98;
  uint uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  if ((*(byte *)(param_1 + 0x10) & 8) == 0) {
    plVar2 = (longlong *)func_0x000145310cd0(*(undefined8 *)(param_1 + 8));
    (**(code **)(*plVar2 + 0x238))(plVar2,&uStack_68);
    uStack_88 = uStack_58;
    uStack_80 = uStack_50;
    uStack_78 = uStack_68;
    uStack_70 = uStack_60;
    uVar5 = FUN_144edafe0();
    lVar3 = func_0x000144e8f430(plVar2[4] + 0x10,_DAT_1499f775c);
    if (lVar3 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = (longlong)*(int *)(lVar3 + 0x14);
    }
    lVar1 = plVar2[6];
    func_0x000144f2b0e0(&uStack_a8);
    FUN_145335be0(&lStack_98,plVar2);
    if ((ulonglong)uStack_90 != 0) {
      uVar4 = 0;
      do {
        uStack_b8 = uStack_a8;
        uStack_b0 = uStack_a0;
        FUN_144e8b4f0(*(undefined8 *)(param_1 + 8),*(undefined1 *)(param_1 + 0x10),
                      *(undefined8 *)(lStack_98 + uVar4 * 8),uVar4 & 0xffffffff,&uStack_b8,
                      (int)uVar5,(char)lVar1 == '\f',(char)lVar1 == '\r',(longlong)uVar4 < lVar3);
        uVar4 = uVar4 + 1;
      } while (uStack_90 != uVar4);
    }
  }
  return;
}

