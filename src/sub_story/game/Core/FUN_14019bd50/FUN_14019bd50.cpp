// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14019bd50  size: 431 bytes
// Name:    FUN_14019bd50
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_141414990, FUN_14033c5e0, FUN_140191410, FUN_1451f53e0, FUN_1451f5410, FUN_1451f54f0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14019bd50(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uStack_6f0;
  undefined1 *puStack_6e8;
  undefined8 uStack_6e0;
  undefined1 auStack_6d8 [1688];
  
  if ((byte)(*(char *)(param_2 + 0xfa) - 5U) < 2) {
    cVar3 = FUN_140191410(*(undefined4 *)(param_2 + 0x9c));
    if (cVar3 != '\0') {
      func_0x00014505a930(param_1,0xe,1);
    }
    lVar5 = func_0x000144ebbf10(*(undefined4 *)(param_2 + 0x9c));
    if (lVar5 != 0) {
      FUN_1451f54f0(auStack_6d8,param_3,0);
      uStack_6e0 = 0;
      puStack_6e8 = auStack_6d8;
      FUN_14033c5e0(&puStack_6e8);
      if (puStack_6e8 != (undefined1 *)0x0) {
        do {
          puVar2 = puStack_6e8;
          uVar1 = *(undefined4 *)(puStack_6e8 + 0x664);
          lVar6 = FUN_1451f53e0(uVar1);
          if (lVar6 == 0) {
            lVar6 = func_0x00014507deb0(uVar1);
            cVar3 = *(byte *)(lVar6 + 0x155) == 0xf || (*(byte *)(lVar6 + 0x155) & 0xfe) == 6;
          }
          else {
            cVar3 = *(char *)(lVar6 + 0x30);
          }
          if (((cVar3 == '\x01') && (iVar4 = *(int *)(lVar5 + 0x2c4), 0 < iVar4)) &&
             (lVar6 = *(longlong *)(lVar5 + 0x2c8), lVar6 != 0)) {
            lVar7 = 1;
            lVar8 = 0;
            while( true ) {
              if (lVar6 != 0) {
                func_0x000144e3ba40(*(undefined8 *)(puVar2 + 0x650),&uStack_6f0);
                cVar3 = FUN_141414990(lVar6 + lVar8,param_2,uStack_6f0);
                if (cVar3 != '\0') {
                  func_0x00014505a930(param_1,0xe,1);
                  FUN_1451f5410(auStack_6d8);
                  return;
                }
                iVar4 = *(int *)(lVar5 + 0x2c4);
              }
              if (iVar4 <= lVar7) break;
              lVar6 = *(longlong *)(lVar5 + 0x2c8);
              lVar7 = lVar7 + 1;
              lVar8 = lVar8 + 0x540;
            }
          }
          FUN_14033c5e0(&puStack_6e8);
        } while (puStack_6e8 != (undefined1 *)0x0);
      }
      FUN_1451f5410(auStack_6d8);
      func_0x00014505a930(param_1,0xe,0);
    }
  }
  return;
}

