// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401b4500  size: 484 bytes
// Name:    FUN_1401b4500
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1401b4790, FUN_1401bb320, FUN_1401b4ab0, FUN_1401b4b20, FUN_1401b4750, FUN_1401b47c0, FUN_1420cc4e0, FUN_1401b4980, FUN_140459510, FUN_1450778c0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_1401b4500(longlong param_1,longlong *param_2)

{
  int iVar1;
  char cVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined4 uVar8;
  undefined1 auVar9 [16];
  longlong *plStack_38;
  
  if (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x28 + (ulonglong)*(uint *)(param_2 + 1) * 0x30)
      != 0) {
    func_0x0001401b4700(param_2,*(longlong *)(param_1 + 0x10) + 0x20 +
                                (ulonglong)*(uint *)(param_2 + 1) * 0x30);
  }
  cVar2 = func_0x000145077f30(*(undefined8 *)(*param_2 + 0x20));
  if (cVar2 == '\0') {
    plVar3 = (longlong *)FUN_1401b4750();
  }
  else {
    plVar3 = (longlong *)FUN_1401bb320(param_2);
  }
  uVar4 = FUN_1450778c0(param_2);
  plStack_38 = plVar3;
  if (plVar3 != (longlong *)0x0) {
    cVar2 = func_0x000145077f30(*(undefined8 *)(*param_2 + 0x20));
    if ((cVar2 != '\0') ||
       (cVar2 = func_0x0001401b46f0(*(undefined8 *)(*param_2 + 0x20)), cVar2 != '\0')) {
      plVar6 = (longlong *)FUN_1401b4980(uVar4,*(undefined8 *)(param_2[3] + 0x18));
      cVar2 = FUN_1401b4ab0(plVar6 + 6,param_2,plVar3);
      if (cVar2 != '\0') {
        plStack_38 = plVar6;
        (**(code **)(*plVar6 + 0x68))(plVar6,_DAT_145fc6ed8);
      }
    }
    uVar5 = (**(code **)(*plVar3 + 200))(plVar3);
    FUN_1401b47c0(uVar4,param_2,&plStack_38,uVar5);
    if (plStack_38 != (longlong *)0x0) {
      iVar1 = (int)param_2[7];
      if (iVar1 != 1) {
        if ((iVar1 != 0) && (iVar1 != 3)) {
          return plStack_38;
        }
        plVar3 = (longlong *)FUN_1401b4790(uVar4,plStack_38);
        *(byte *)(plVar3 + 10) = *(byte *)(plVar3 + 10) | 2;
        FUN_140459510(plVar3,*(undefined8 *)(param_2[3] + 0x18));
        FUN_1401b4b20(plVar3,iVar1 == 3);
        return plVar3;
      }
      plVar3 = (longlong *)FUN_1401b4790(uVar4,plStack_38);
      if (plVar3 != (longlong *)0x0) {
        return plVar3;
      }
    }
  }
  if (*(longlong *)(*(longlong *)(param_1 + 0x10) + (ulonglong)*(uint *)(param_2 + 1) * 0x30) != 0)
  {
    lVar7 = (ulonglong)*(uint *)(param_2 + 1) * 0x60;
    auVar9._4_4_ = _DAT_145fc6f50;
    auVar9._0_4_ = _DAT_145fc6f50;
    auVar9._8_4_ = _DAT_145fc6f50;
    auVar9._12_4_ = _DAT_145fc6f50;
    auVar9 = vcmpps_avx(auVar9,*(undefined1 (*) [16])(*(longlong *)(param_1 + 0x60) + 0x50 + lVar7),
                        0);
    uVar8 = vmovmskps_avx(auVar9);
    if ((~(byte)uVar8 & 7) != 0) {
      plVar3 = (longlong *)
               FUN_1420cc4e0(*(longlong *)(param_1 + 0x60) + lVar7,uVar4,
                             *(undefined8 *)(*param_2 + 0x20));
      *(undefined4 *)(*(longlong *)(param_1 + 0x60) + 8 + (ulonglong)*(uint *)(param_2 + 1) * 0x60)
           = 1;
      return plVar3;
    }
  }
  return (longlong *)0x0;
}

