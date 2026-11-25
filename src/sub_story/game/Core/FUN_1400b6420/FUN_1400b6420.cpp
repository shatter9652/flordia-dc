// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400b6420  size: 181 bytes
// Name:    FUN_1400b6420
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14374a3f0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_1400b6420(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  ushort uVar6;
  ulonglong uVar7;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  if ((*(byte *)(param_1 + 0x34) & 0x10) != 0) {
    lVar1 = *(longlong *)(*(longlong *)(param_2 + 8) + 0x10);
    uVar6 = *(ushort *)(lVar1 + 0x18);
    if (uVar6 != 0) {
      uVar7 = 0;
      do {
        plVar2 = *(longlong **)(*(longlong *)(lVar1 + 0x10) + uVar7 * 8);
        iVar5 = func_0x000145f407d0(*(undefined8 *)(*plVar2 + 0xd08),&UNK_14677b5a9);
        if (iVar5 == 0) {
          lVar3 = *(longlong *)(param_1 + 0x20);
          uStack_68 = *(undefined8 *)(lVar3 + 0x30);
          uStack_60 = *(undefined8 *)(lVar3 + 0x38);
          uStack_58 = *(undefined8 *)(lVar3 + 0x40);
          uStack_50 = *(undefined8 *)(lVar3 + 0x48);
          cVar4 = FUN_14374a3f0(&uStack_68,param_2,plVar2);
          if (cVar4 != '\0') {
            return 1;
          }
          uVar6 = *(ushort *)(lVar1 + 0x18);
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < uVar6);
    }
  }
  return 0;
}

