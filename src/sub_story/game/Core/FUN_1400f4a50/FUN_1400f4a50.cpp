// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400f4a50  size: 205 bytes
// Name:    FUN_1400f4a50
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14537ee10, FUN_144deba10, FUN_1403ca850
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


longlong FUN_1400f4a50(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined1 *param_4
                      ,undefined1 param_5)

{
  char cVar1;
  longlong lVar2;
  undefined8 unaff_RBP;
  undefined1 uStack_2a;
  undefined1 uStack_29;
  
  lVar2 = func_0x000144db6740(param_1,param_2,*param_3,*(undefined4 *)(param_3 + 4));
  if (lVar2 != 0) {
    func_0x0001455cb9c0(lVar2);
    func_0x000145243810(lVar2,param_3);
    cVar1 = FUN_14537ee10(lVar2,CONCAT71((int7)((ulonglong)unaff_RBP >> 8),param_5) & 0xffffffff);
    if (cVar1 != '\0') {
      func_0x000144fd18a0(*(undefined1 *)(lVar2 + 0x249),&uStack_29);
      func_0x000144fd18a0(*(undefined1 *)(lVar2 + 0x248),&uStack_2a);
      cVar1 = FUN_144deba10(*param_4,uStack_2a,uStack_29);
      if (cVar1 != '\0') {
        func_0x000144e7cb80(lVar2,0);
        if (*(int *)(lVar2 + 0x1c) != 2) {
          return lVar2;
        }
        cVar1 = func_0x0001401b4dc0(2,*(undefined1 *)(lVar2 + 0x3f));
        if (cVar1 != '\0') {
          return lVar2;
        }
        FUN_1403ca850(lVar2,0);
        return lVar2;
      }
    }
    func_0x000144e7cb80(lVar2,1);
  }
  return lVar2;
}

