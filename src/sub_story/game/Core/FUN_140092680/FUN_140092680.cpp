// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140092680  size: 207 bytes
// Name:    FUN_140092680
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144d9daf0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140092680(undefined8 param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar2 = func_0x000140019d80(param_1,param_3);
  func_0x000144debac0(&uStack_28,uVar2);
  cVar1 = func_0x000144d9db40(uStack_28);
  if (cVar1 != '\0') {
    lVar3 = FUN_144d9daf0(uStack_28);
    lVar4 = 0;
    if (*(longlong *)(lVar3 + 0x18) != 1) {
      lVar4 = *(longlong *)(lVar3 + 0x18) + 0x18 + lVar3;
    }
    lVar4 = func_0x000144dec6d0(lVar4,param_2);
    if (lVar4 != 0) {
      return;
    }
  }
  if (param_3 != -0xf9baa1) {
    uVar2 = func_0x000140019d80(param_1,0xff06455f);
    func_0x000144debac0(&uStack_30,uVar2);
    cVar1 = func_0x000144d9db40(uStack_30);
    if (cVar1 != '\0') {
      lVar3 = FUN_144d9daf0(uStack_30);
      lVar4 = 0;
      if (*(longlong *)(lVar3 + 0x18) != 1) {
        lVar4 = *(longlong *)(lVar3 + 0x18) + 0x18 + lVar3;
      }
      lVar4 = func_0x000144dec6d0(lVar4,param_2);
      if (lVar4 != 0) {
        return;
      }
    }
  }
  func_0x000140019d90(param_1,param_2);
  return;
}

