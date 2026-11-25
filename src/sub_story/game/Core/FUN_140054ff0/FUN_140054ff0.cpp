// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140054ff0  size: 478 bytes
// Name:    FUN_140054ff0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144e7cd20
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140054ff0(longlong param_1,undefined4 param_2)

{
  byte *pbVar1;
  byte bVar2;
  longlong *plVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  bool bVar8;
  undefined4 uVar9;
  undefined8 uStack_58;
  longlong lStack_50;
  longlong alStack_48 [4];
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  
  if (((*(longlong *)(param_1 + 0x28) == 0) && (*(longlong *)(param_1 + 0x20) != 0)) &&
     (bVar2 = *(byte *)(*(longlong *)(param_1 + 0x20) + 0x84), (bVar2 & 8) == 0)) {
    uStack_58 = 0;
    alStack_48[1] = 0xffffffff42c80000;
    uVar5 = *(byte *)(param_1 + 0x30) & 0xf;
    lStack_50 = (ulonglong)uVar5 << 0x21;
    alStack_48[2] = 0;
    if (((bVar2 & 0x40) == 0) && ((1 << uVar5 & 0x759eU) != 0)) {
      uStack_18 = _DAT_149f36140;
      uStack_10 = uRam0000000149f36148;
      uStack_28 = _DAT_149f36130;
      uStack_20 = uRam0000000149f36138;
      alStack_48[0] = param_1;
      alStack_48[3] = lStack_50;
      uVar9 = FUN_144e7cd20(alStack_48,param_1,&uStack_58,0,_DAT_149f36128,_DAT_149f3612c,&uStack_28
                            ,&uStack_18,_DAT_149f36150,param_2,0,0);
      lVar6 = _DAT_149f160c8;
      uVar5 = _DAT_149f160c4;
      do {
        if (uVar5 == _DAT_149f160c0) {
          return;
        }
        LOCK();
        bVar8 = uVar5 != _DAT_149f160c4;
        uVar4 = uVar5 + 1;
        if (bVar8) {
          uVar5 = _DAT_149f160c4;
          uVar4 = _DAT_149f160c4;
        }
        _DAT_149f160c4 = uVar4;
        UNLOCK();
      } while (bVar8);
      uVar7 = (ulonglong)uVar5;
      if (_DAT_149f160c8 == 0) {
        lVar6 = 0;
      }
      else {
        *(undefined8 *)(_DAT_149f160c8 + uVar7 * 0x18) = 0;
        *(undefined8 *)(lVar6 + 8 + uVar7 * 0x18) = 0x1ffff;
        pbVar1 = (byte *)(lVar6 + 0x10 + uVar7 * 0x18);
        *pbVar1 = *pbVar1 & 0xfe;
        lVar6 = _DAT_149f160c8;
      }
      if (uVar5 != _DAT_149f160c0) {
        *(longlong *)(lVar6 + uVar7 * 0x18) = param_1;
        plVar3 = *(longlong **)((ulonglong)*(byte *)(param_1 + 0x30) * 8 + 0x14abbe7c0);
        uVar5 = (uint)((ulonglong)(param_1 - *plVar3) / (ulonglong)*(uint *)(plVar3 + 1)) & 0x1ffff;
        *(uint *)(lVar6 + 8 + uVar7 * 0x18) =
             (*(uint *)(plVar3[5] + (ulonglong)uVar5 * 4) & 0x7fe0000) << 5 |
             (*(byte *)(param_1 + 0x30) & 0x1f) << 0x11 | uVar5;
        *(undefined4 *)(lVar6 + 0xc + uVar7 * 0x18) = uVar9;
      }
    }
  }
  return;
}

