// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140191ea0  size: 78 bytes
// Name:    FUN_140191ea0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1453f5f50, FUN_140192a50
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140191ea0(longlong param_1,undefined8 param_2)

{
  byte bVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined1 auStack_4e [14];
  undefined8 uStack_40;
  undefined1 uStack_38;
  byte bStack_32;
  
  cVar3 = (char)param_2;
  uStack_40 = 0x140191eb0;
  FUN_140192a50();
  if ((cVar3 == '\0') && (*(char *)(param_1 + 0x64d) == '\x01')) {
    uStack_40 = 0x140191ed4;
    uVar4 = func_0x000144da3240(*(undefined8 *)(param_1 + 0x40));
    uStack_40 = 0x140191edc;
    cVar3 = FUN_1453f5f50(uVar4);
    if (cVar3 == '\0') {
      FUN_1456aa6e0();
      lVar5 = func_0x000144da31b0(param_1 + 0x1c0);
      if ((lVar5 == 0) && (*(char *)(param_1 + 0xb00) == '\0')) {
        FUN_1452b3070(&uStack_3c8);
        bStack_32 = bStack_32 | 2;
        uStack_38 = 0;
        uStack_3c8 = *(undefined8 *)(param_1 + 0x170);
        uStack_3c0 = *(undefined8 *)(param_1 + 0x178);
        uVar6 = CONCAT71((int7)((ulonglong)param_2 >> 8),
                         *(undefined1 *)(*(longlong *)(param_1 + 0x40) + 0x680)) &
                0xffffffffffffff10;
        uVar7 = FUN_1451e3e90(0xe75ff683,CONCAT71((int7)(uVar6 >> 8),(byte)uVar6 >> 4));
        uStack_40 = CONCAT44(uVar7,(undefined4)uStack_40);
        plVar2 = *(longlong **)(param_1 + 0x40);
        bVar1 = *(byte *)(param_1 + 0x64e);
        lVar5 = (**(code **)(*plVar2 + 0x1e8))(plVar2);
        if (lVar5 == 0) {
          uVar4 = 0xffffffffffffffff;
        }
        else {
          lVar5 = (**(code **)(*plVar2 + 0x1e8))(plVar2);
          uVar4 = *(undefined8 *)(lVar5 + 0x18 + (ulonglong)bVar1 * 8);
        }
        FUN_1404a72c0(param_1,uVar4,param_1 + 0x1c0,&uStack_3c8,1);
        func_0x000144de1380(auStack_4e);
      }
      return;
    }
  }
  *(byte *)(param_1 + 0x570) = *(byte *)(param_1 + 0x570) | 2;
  return;
}

