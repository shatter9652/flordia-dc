// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14018aa50  size: 220 bytes
// Name:    FUN_14018aa50
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144de6230, FUN_145044e70, FUN_144dd9c70
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_14018aa50(longlong param_1)

{
  undefined1 auVar1 [16];
  char cVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined1 auVar8 [16];
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  
  auVar1 = *(undefined1 (*) [16])(param_1 + 0x70);
  auVar8 = vpunpckhwd_avx(auVar1,auVar1);
  auVar8 = vpsrad_avx(auVar8,0x10);
  auVar8 = vcvtdq2ps_avx(auVar8);
  auVar8 = vshufpd_avx(auVar8,auVar8,3);
  fStack_38 = auVar8._0_4_ * _DAT_146159c90 + auVar1._0_4_;
  fStack_34 = auVar8._4_4_ * _UNK_146159c94 + auVar1._4_4_;
  fStack_30 = auVar8._8_4_ * _UNK_146159c98 + auVar1._8_4_;
  fStack_2c = auVar8._12_4_ * _UNK_146159c9c + auVar1._12_4_;
  uVar7 = FUN_145044e70(&fStack_38,_DAT_145fc6f48,_DAT_145fc6f48);
  plVar3 = (longlong *)FUN_144de6230(*(undefined4 *)(param_1 + 0x9c));
  if (((plVar3 != (longlong *)0x0) && ((char)plVar3[6] == '\x03')) &&
     (plVar4 = (longlong *)(**(code **)(*plVar3 + 0x160))(plVar3), plVar4 != (longlong *)0x0)) {
    uVar5 = (**(code **)(*plVar4 + 0x160))(plVar4);
    lVar6 = FUN_144dd9c70(uVar5,0xf48be66a);
    if ((lVar6 != 0) && ((*(ushort *)(*(longlong *)(lVar6 + 0x48) + 0x1e) & 0xc) == 8)) {
      if (((*(byte *)(plVar4 + 0x24) & 1) == 0) &&
         (cVar2 = func_0x000144da28f0(*(undefined4 *)((longlong)plVar3 + 0x9c)), cVar2 == '\0')) {
        return uVar7;
      }
      uVar7 = (ulonglong)_DAT_145fc6ed8;
    }
  }
  return uVar7;
}

