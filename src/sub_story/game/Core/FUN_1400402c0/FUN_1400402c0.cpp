// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400402c0  size: 407 bytes
// Name:    FUN_1400402c0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144efbdc0, FUN_145567ab0, FUN_145567a10, FUN_144ebd630, FUN_144efbd20
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400402c0(longlong param_1,longlong *param_2,undefined8 param_3,undefined4 param_4,
                  uint param_5,undefined8 param_6,uint param_7,undefined4 param_8,undefined1 param_9
                  )

{
  ushort uVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  int iVar8;
  longlong *plStack_60;
  uint uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  int iStack_4c;
  undefined4 uStack_48;
  
  lVar2 = *param_2;
  if ((*(byte *)(lVar2 + 0x88) & 2) != 0) {
    if (*(longlong *)(lVar2 + 0x68) == 0) {
      FUN_144efbd20(*(undefined8 *)(lVar2 + 0x78),(ulonglong)*(uint *)(lVar2 + 8) << 4,0x10);
      lVar2 = *param_2;
      lVar6 = *(longlong *)(lVar2 + 0x80);
      if (lVar6 == 0) {
        lVar6 = *(longlong *)(lVar2 + 0x78);
      }
      FUN_144efbdc0(lVar6,(ulonglong)*(uint *)(lVar2 + 8) << 4,0x10);
    }
    else {
      FUN_145567a10();
      FUN_145567ab0(*(undefined8 *)(*param_2 + 0x68));
    }
    if ((param_7 < 4) &&
       (plVar3 = *(longlong **)(param_1 + 0x50 + (ulonglong)param_7 * 8), plVar3 != (longlong *)0x0)
       ) {
      uVar4 = *(undefined8 *)(param_1 + 0x10);
      uVar5 = func_0x000144e65310(param_1 + 0x20,param_7);
      if ((0xff < (uVar5 & param_5)) &&
         (((byte)((byte)param_5 & (byte)uVar5) != 0 &&
          (uVar1 = *(ushort *)(plVar3 + 1), (ulonglong)uVar1 != 0)))) {
        uVar7 = 0;
        iVar8 = 0;
        do {
          lVar2 = *(longlong *)(*plVar3 + uVar7 * 8);
          if (lVar2 != 0) {
            uStack_58 = param_7;
            plStack_60 = param_2;
            uStack_54 = param_4;
            uStack_50 = func_0x00014013ef90(param_4,param_8);
            uStack_48 = 0;
            iStack_4c = iVar8;
            FUN_144ebd630(lVar2,uVar4,&plStack_60,param_3,param_5,param_9,&param_6);
            iVar8 = iVar8 + (uint)*(ushort *)(lVar2 + 0x36);
          }
          uVar7 = uVar7 + 1;
        } while (uVar1 != uVar7);
      }
    }
  }
  return;
}

