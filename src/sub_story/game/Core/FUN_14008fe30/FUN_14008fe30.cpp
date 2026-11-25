// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14008fe30  size: 414 bytes
// Name:    FUN_14008fe30
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144f39410, FUN_140a1fe20, FUN_1400b0760
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14008fe30(longlong param_1,longlong param_2,longlong *param_3,byte param_4,ushort *param_5)

{
  int iVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uStack_60;
  uint auStack_5c [7];
  
  if ((*(byte *)(param_1 + 0x127) & 3) != 0) {
    iVar1 = (int)param_3[1];
    uVar3 = func_0x0001450e52e0(*(undefined8 *)(_DAT_149c3b740 + 0x520),iVar1);
    uVar7 = FUN_144f39410(param_2);
    uVar4 = func_0x0001435a2600(iVar1,*(undefined1 *)(param_2 + 0x90));
    uVar5 = (**(code **)(*param_3 + 0x28))(param_3);
    bVar2 = (**(code **)(*param_3 + 0x20))(param_3);
    if ((iVar1 == 0x54) || (iVar1 == 0x15)) {
      if ((bVar2 & param_4) == 1) {
        bVar2 = (*(byte *)(param_1 + 0x368) & 2) == 0;
      }
      else {
        bVar2 = 0;
      }
    }
    auStack_5c[0] = 0;
    uStack_60 = 0xffffffff;
    FUN_1400b0760(auStack_5c,&uStack_60,*(undefined8 *)(param_1 + 8),
                  *(ushort *)(param_1 + 0x14) & 0x7fff,uVar3,*(byte *)(param_1 + 0x127) & 3,uVar7,
                  uVar5,bVar2,0x3f800000);
    FUN_140a1fe20(auStack_5c,&uStack_60,*(undefined8 *)(param_1 + 8),
                  *(ushort *)(param_1 + 0x14) & 0x7fff,iVar1,uVar3,bVar2,uVar4);
    uVar6 = 0xff;
    if ((int)uStack_60 < 0xff) {
      uVar6 = uStack_60;
    }
    *param_5 = (ushort)((uStack_60 != 0xffffffff) + 1 + (uint)(uStack_60 != 0xffffffff) <<
                       (auStack_5c[0] & 0x1f)) & 0x1f |
               (ushort)((uVar6 & 0xff) << 5) |
               *param_5 & 0x8000 | (ushort)(-1 < (int)uStack_60) << 0xd;
  }
  return;
}

