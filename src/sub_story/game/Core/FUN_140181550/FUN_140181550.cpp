// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140181550  size: 204 bytes
// Name:    FUN_140181550
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144569fc0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140181550(longlong param_1,undefined1 (*param_2) [16])

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (*(char *)(param_1 + 0x428) == '\x01') {
    lVar5 = *(longlong *)(param_1 + 0x420);
    lVar4 = *(longlong *)(param_1 + 0x410) * 0x20;
    auVar2 = vmovlhps_avx(*(undefined1 (*) [16])(lVar5 + -0x20 + lVar4),*param_2);
    auVar1 = vblendps_avx(*param_2,*(undefined1 (*) [16])(lVar5 + -0x10 + lVar4),3);
    *(undefined1 (*) [16])(lVar5 + -0x20 + lVar4) = auVar2;
    *(undefined1 (*) [16])(lVar5 + -0x10 + lVar4) = auVar1;
    uVar3 = 0;
  }
  else {
    lVar5 = *(longlong *)(param_1 + 0x410);
    if (lVar5 == *(longlong *)(param_1 + 0x418)) {
      FUN_144569fc0(param_1,lVar5 * 2);
      lVar5 = *(longlong *)(param_1 + 0x410);
    }
    lVar4 = *(longlong *)(param_1 + 0x420);
    *(longlong *)(param_1 + 0x410) = lVar5 + 1;
    lVar5 = lVar5 * 0x20;
    uVar3 = 1;
    auVar1 = *param_2;
    auVar2 = vblendps_avx(auVar1,*(undefined1 (*) [16])(lVar4 + lVar5),0xc);
    *(undefined1 (*) [16])(lVar4 + lVar5) = auVar2;
    auVar1 = vunpckhpd_avx(auVar1,*(undefined1 (*) [16])(lVar4 + 0x10 + lVar5));
    *(undefined1 (*) [16])(lVar4 + 0x10 + lVar5) = auVar1;
  }
  *(undefined1 *)(param_1 + 0x428) = uVar3;
  return;
}

