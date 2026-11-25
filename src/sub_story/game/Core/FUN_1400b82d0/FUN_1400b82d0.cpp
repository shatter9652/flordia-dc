// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400b82d0  size: 284 bytes
// Name:    FUN_1400b82d0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1400b8000, FUN_1400b83f0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


bool FUN_1400b82d0(char param_1,longlong *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  undefined *puVar5;
  longlong lVar6;
  undefined4 uVar7;
  int iVar8;
  float fStack_78;
  float fStack_74;
  undefined8 uStack_70;
  undefined8 uStack_40;
  
  (**(code **)(*param_2 + 0x208))(param_2,&fStack_78);
  uStack_40 = uStack_70;
  uVar2 = FUN_1400b83f0();
  func_0x000140ac04e0(&fStack_78);
  iVar8 = (int)fStack_78;
  func_0x000140ac04e0(&fStack_78);
  iVar3 = (int)fStack_74;
  puVar5 = &UNK_146787ea4;
  iVar1 = -iVar8;
  if (-1 < iVar8) {
    iVar1 = iVar8 + 1;
  }
  uVar7 = 0x77;
  if (-1 < iVar8) {
    uVar7 = 0x65;
  }
  iVar8 = -iVar3;
  if (-1 < iVar3) {
    iVar8 = iVar3 + 1;
  }
  if (param_1 == '\0') {
    puVar5 = &UNK_146787fac;
  }
  FUN_1400b8000(&fStack_78,puVar5,(iVar3 >> 0x1f) * -5 + 0x6e,iVar8,uVar7,iVar1,uVar2);
  if (param_2[4] == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = *(longlong *)(param_2[4] + 0x60);
  }
  lVar4 = func_0x000144f66800(5,&fStack_78);
  return lVar6 == lVar4;
}

