// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14019d870  size: 369 bytes
// Name:    FUN_14019d870
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


bool FUN_14019d870(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  
  plVar1 = *(longlong **)(param_1 + 8);
  if (*(code **)(*plVar1 + 0x10) == (code *)&UNK_144e03640) {
    uVar5 = (uint)*(ushort *)((longlong)plVar1 + 0x1a);
  }
  else {
    uVar5 = (**(code **)(*plVar1 + 0x10))(plVar1);
  }
  bVar4 = true;
  if ((int)uVar5 < 1) {
    lVar2 = *(longlong *)(param_1 + 8);
    pcVar3 = *(code **)(*(longlong *)(lVar2 + 0x50) + 0x10);
    if (pcVar3 == (code *)&UNK_144e03640) {
      uVar5 = (uint)*(ushort *)(lVar2 + 0x6a);
    }
    else {
      uVar5 = (*pcVar3)(lVar2 + 0x50);
    }
    bVar4 = true;
    if ((int)uVar5 < 1) {
      lVar2 = *(longlong *)(param_1 + 8);
      pcVar3 = *(code **)(*(longlong *)(lVar2 + 0xa0) + 0x10);
      if (pcVar3 == (code *)&UNK_144e03640) {
        uVar5 = (uint)*(ushort *)(lVar2 + 0xba);
      }
      else {
        uVar5 = (*pcVar3)(lVar2 + 0xa0);
      }
      bVar4 = true;
      if ((int)uVar5 < 1) {
        lVar2 = *(longlong *)(param_1 + 8);
        pcVar3 = *(code **)(*(longlong *)(lVar2 + 0xf0) + 0x10);
        if (pcVar3 == (code *)&UNK_144e03640) {
          uVar5 = (uint)*(ushort *)(lVar2 + 0x10a);
        }
        else {
          uVar5 = (*pcVar3)(lVar2 + 0xf0);
        }
        bVar4 = true;
        if ((int)uVar5 < 1) {
          lVar2 = *(longlong *)(param_1 + 8);
          pcVar3 = *(code **)(*(longlong *)(lVar2 + 0x140) + 0x10);
          if (pcVar3 == (code *)&UNK_144e03640) {
            uVar5 = (uint)*(ushort *)(lVar2 + 0x15a);
          }
          else {
            uVar5 = (*pcVar3)(lVar2 + 0x140);
          }
          bVar4 = true;
          if ((int)uVar5 < 1) {
            lVar2 = *(longlong *)(param_1 + 8);
            pcVar3 = *(code **)(*(longlong *)(lVar2 + 400) + 0x10);
            if (pcVar3 == (code *)&UNK_144e03640) {
              uVar5 = (uint)*(ushort *)(lVar2 + 0x1aa);
            }
            else {
              uVar5 = (*pcVar3)(lVar2 + 400);
            }
            bVar4 = 0 < (int)uVar5;
          }
        }
      }
    }
  }
  return bVar4;
}

