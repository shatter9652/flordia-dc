// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14006dc20  size: 574 bytes
// Name:    FUN_14006dc20
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1401086b0, FUN_144e9b660
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_14006dc20(longlong param_1,longlong *param_2)

{
  ushort uVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uStack_88;
  uint uStack_80;
  undefined4 auStack_78 [2];
  undefined8 uStack_70;
  ulonglong uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  uint uStack_48;
  undefined8 uStack_44;
  undefined4 uStack_3c;
  longlong *plStack_38;
  
  uVar1 = *(ushort *)(param_1 + 0xe);
  uVar3 = (*(ushort *)(param_1 + 0xc) & 0xfff) * *(int *)(param_1 + 8);
  if (((uVar1 & 4) != 0) || (uVar7 = uVar3, (uVar1 & 3) != 0)) {
    uVar7 = uVar3 + 0xf & 0xfffffff0;
  }
  uVar8 = (ulonglong)uVar7;
  auStack_78[0] = 1;
  uStack_48 = ((uint)uVar1 << 0xd | (uint)(uVar1 >> 5)) & 0x20004;
  uStack_70 = 0;
  uStack_60 = 0x1000100000001;
  uStack_58 = _DAT_14615c080;
  uStack_50 = _DAT_14615c080;
  uStack_44 = 0;
  uStack_3c = 0;
  uStack_68 = uVar8;
  if ((param_2 == (longlong *)0x0) || (uVar4 = param_2[2], uVar4 == 0)) {
    uVar4 = func_0x000142474690(*(byte *)(param_1 + 0x10) >> 3 & 3,*(byte *)(param_1 + 0x10) & 3,
                                uVar3,0x10);
    if (uVar4 != 0) {
      *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) | 4;
      if ((param_2 != (longlong *)0x0) && (*param_2 != 0)) {
        func_0x000145f40560(uVar4,*param_2,param_2[1]);
      }
      goto LAB_14006dd10;
    }
LAB_14006de1f:
    uVar5 = 0;
  }
  else {
LAB_14006dd10:
    puVar6 = (undefined8 *)(param_1 + 0x20);
    cVar2 = func_0x0001455ac2b0(param_1);
    if (cVar2 == '\0') {
      *puVar6 = 0;
    }
    else {
      uVar5 = uVar4;
      if ((_DAT_149e1dac0 <= uVar4) && (uVar4 < _DAT_149e1dac8 + _DAT_149e1dac0)) {
        uVar5 = (uVar4 - _DAT_149e1dac0) + _DAT_149e1dad0;
      }
      uVar3 = (**(code **)(*_DAT_1475df048 + 0x428))
                        (_DAT_1475df048,uVar5,auStack_78,0xffffffff,0,&UNK_1463fa690,puVar6);
      puVar6 = (undefined8 *)(ulonglong)uVar3;
      FUN_144e9b660(uVar3);
      if ((int)uVar3 < 0) {
        if ((*(ushort *)(param_1 + 0x10) & 4) != 0) {
          FUN_1401086b0(*(ushort *)(param_1 + 0x10) & 0xff03,uVar4);
        }
        goto LAB_14006de1f;
      }
    }
    *(ulonglong *)(param_1 + 0x18) = uVar4;
    if ((_DAT_149e1dac0 <= uVar4) && (uVar4 < _DAT_149e1dac8 + _DAT_149e1dac0)) {
      uVar4 = (uVar4 - _DAT_149e1dac0) + _DAT_149e1dad0;
    }
    uVar5 = CONCAT71((int7)((ulonglong)puVar6 >> 8),1);
    *(ulonglong *)(param_1 + 0x38) = uVar4;
    if ((uVar1 & 4) != 0) {
      uStack_88 = uVar4;
      uStack_80 = uVar7;
      func_0x00014006de60(&plStack_38);
      *(longlong **)(param_1 + 0x38) = plStack_38;
      if ((char)_DAT_148759d00[3] == '\0') {
        *plStack_38 = uVar4 + 0x10000000000000;
        plStack_38[1] = uVar8 + 0xf >> 4 | 0x2403c00000000;
      }
      else {
        (**(code **)(*_DAT_148759d00 + 0x88))(_DAT_148759d00,&uStack_88);
      }
    }
  }
  return uVar5 & 0xffffffff;
}

