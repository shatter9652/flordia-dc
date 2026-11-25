// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140117bb0  size: 214 bytes
// Name:    FUN_140117bb0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144f924c0, FUN_1413c72a0, FUN_140cb6b30, FUN_144f862f0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140117bb0(longlong *param_1)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  char cVar3;
  longlong lVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  
  lVar1 = *param_1;
  if (*(short *)(lVar1 + 0xc0) == 3) {
    cVar3 = FUN_144f924c0(param_1);
    if (cVar3 != '\0') {
      lVar4 = func_0x000144e59150(*(undefined4 *)(lVar1 + 0x9c));
      if ((*(byte *)(lVar4 + 0x10) & 2) == 0) {
        cVar3 = FUN_144f862f0();
        uVar5 = 8;
        if (cVar3 != '\0') {
          uVar5 = 0x50;
        }
        if (_DAT_14926abc8 < uVar5) {
          auVar6._0_12_ = ZEXT812(0);
          auVar6._12_4_ = 0;
          auVar2 = vmaxss_avx(auVar6,ZEXT416((uint)(_DAT_14926abb8 + _DAT_145fc6f48)));
          _DAT_14926abb8 = auVar2._0_4_;
          if (0.0 <= _DAT_14926abbc) {
            auVar2 = vmaxss_avx(auVar6,ZEXT416((uint)(_DAT_14926abbc + _DAT_145fc6f48)));
            _DAT_14926abbc = auVar2._0_4_;
          }
          FUN_1413c72a0(lVar1,5);
          FUN_140cb6b30(param_1);
          *(undefined1 *)(param_1 + 1) = 1;
          _DAT_14926abc8 = _DAT_14926abc8 + 1;
        }
      }
      else {
        FUN_140cb6b30(param_1);
        *(undefined1 *)(param_1 + 1) = 3;
      }
    }
  }
  else {
    *(undefined1 *)(param_1 + 1) = 2;
  }
  return;
}

