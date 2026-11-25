// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401180c0  size: 59 bytes
// Name:    FUN_1401180c0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14535b5c0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1401180c0(undefined8 param_1,short param_2,undefined1 (*param_3) [16])

{
  undefined4 uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 (*pauVar7) [16];
  undefined1 auVar8 [16];
  
  lVar6 = FUN_14535b5c0();
  pauVar7 = (undefined1 (*) [16])
            func_0x000144d9d700(*(undefined8 *)
                                 (*(longlong *)(*(longlong *)(lVar6 + 0x38) + 0x110) + 0x90),
                                (int)param_2);
  auVar2 = pauVar7[2];
  uVar1 = *(undefined4 *)(pauVar7[1] + 0xc);
  auVar8._4_4_ = uVar1;
  auVar8._0_4_ = uVar1;
  auVar8._8_4_ = uVar1;
  auVar8._12_4_ = uVar1;
  uVar4 = *(undefined8 *)pauVar7[1];
  uVar5 = *(undefined8 *)(pauVar7[1] + 8);
  auVar3 = vshufps_avx(auVar2,*pauVar7,0x33);
  *param_3 = *pauVar7;
  *(undefined8 *)param_3[1] = uVar4;
  *(undefined8 *)(param_3[1] + 8) = uVar5;
  param_3[2] = auVar2;
  auVar2 = vshufps_avx(auVar3,auVar3,0xe2);
  auVar2 = vunpcklps_avx(auVar2,auVar8);
  param_3[3] = auVar2;
  return;
}

