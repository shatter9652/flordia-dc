// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140101150  size: 171 bytes
// Name:    FUN_140101150
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140101200, FUN_140101490
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


ulonglong FUN_140101150(longlong param_1,longlong param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 extraout_var [56];
  ulonglong uVar7;
  undefined1 auVar8 [64];
  
  auVar8 = ZEXT464(*(uint *)(param_1 + 0xb4));
  lVar5 = func_0x000144fa4640(*(undefined4 *)(param_1 + 0x58));
  if (lVar5 == 0) {
    return auVar8._0_8_;
  }
  if (auVar8._0_4_ < 0.0) {
    auVar8._0_8_ = FUN_140101490(*(undefined4 *)(param_2 + 0x9c),lVar5);
    auVar8._8_56_ = extraout_var;
    auVar8 = ZEXT1664(auVar8._0_16_);
  }
  if (*(char *)(lVar5 + 0x30) != '\x02') {
    return auVar8._0_8_;
  }
  cVar4 = FUN_140101200(*(undefined4 *)(lVar5 + 0x9c),0);
  if (cVar4 == '\0') {
    return auVar8._0_8_;
  }
  lVar6 = func_0x000144da6540(*(undefined4 *)(param_2 + 0x9c));
  uVar7 = auVar8._0_8_;
  if (lVar6 == 0) {
    return uVar7;
  }
  if (*(longlong *)(lVar6 + 0x10a0) == 0) {
    return uVar7;
  }
  iVar2 = *(int *)(*(longlong *)(lVar6 + 0x10a0) + 0x25c4);
  if (iVar2 == -1) {
    return uVar7;
  }
  lVar6 = *(longlong *)(lVar5 + 0x20);
  uVar3 = *(undefined4 *)(lVar6 + 0x5c);
  cVar4 = FUN_144fc6490(uVar3);
  if ((cVar4 != '\0') || (cVar4 = FUN_144fc64b0(uVar3), cVar4 != '\0')) {
    return (ulonglong)uRam0000000149e41e08;
  }
  bVar1 = *(byte *)(lVar5 + 0xfa);
  if ((byte)(bVar1 - 9) < 3) {
    cVar4 = func_0x000144e24560(lVar6,bVar1);
    if ((((iVar2 == -1) || (cVar4 == '\0')) ||
        (lVar5 = FUN_140565290(*(undefined4 *)(lVar5 + 0x9c),iVar2), lVar5 == 0)) &&
       (cVar4 = FUN_144dc0540(param_2,0), cVar4 == '\0')) {
      return (ulonglong)uRam0000000149e41e0c;
    }
  }
  else {
    cVar4 = FUN_145430cf0(lVar5,0x23);
    if (cVar4 != '\0') {
      return (ulonglong)uRam0000000149e41e18;
    }
    uVar3 = *(undefined4 *)(lVar5 + 0x9c);
    cVar4 = func_0x000140d65f10(uVar3);
    if (cVar4 != '\0') {
      return (ulonglong)uRam0000000149e41e1c;
    }
    if ((bVar1 < 7) && ((0x62U >> (bVar1 & 0x1f) & 1) != 0)) {
      return (ulonglong)uRam0000000149e41e10;
    }
    cVar4 = func_0x0001401781c0(*(undefined4 *)(lVar6 + 0x40c));
    if (cVar4 != '\0') {
      return (ulonglong)uRam0000000149e41e14;
    }
    cVar4 = FUN_140d65f20(uVar3,0x5f);
    if (cVar4 != '\0') {
      return (ulonglong)uRam0000000149e41e20;
    }
    lVar5 = func_0x000144da6540(*(undefined4 *)(param_2 + 0x9c));
    if (((lVar5 != 0) && (*(longlong *)(lVar5 + 0x10a0) != 0)) &&
       ((*(byte *)(*(longlong *)(lVar5 + 0x10a0) + 0x14) & 0x10) != 0)) {
      return (ulonglong)(uint)(fRam0000000149e41e04 + fRam0000000149e41e04);
    }
  }
  return (ulonglong)(uint)fRam0000000149e41e04;
}

