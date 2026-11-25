// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140047fb0  size: 165 bytes
// Name:    FUN_140047fb0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1406e7b40, FUN_140047f30, FUN_145411a60, FUN_140735f40
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140047fb0(longlong *param_1,undefined1 (*param_2) [16])

{
  longlong lVar1;
  undefined1 auVar2 [16];
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  undefined1 auStack_68 [16];
  longlong lStack_58;
  undefined1 auStack_50 [48];
  
  auVar2._0_12_ = ZEXT812(0);
  auVar2._12_4_ = 0;
  *param_2 = auVar2;
  lVar1 = (**(code **)(*param_1 + 0x78))();
  if (lVar1 != 0) {
    FUN_145411a60(auStack_68,lVar1);
    if ((lStack_58 != 0) && (lVar1 = *(longlong *)(lStack_58 + 0x90), lVar1 != 0)) {
      fVar3 = 0.0;
      fVar4 = 0.0;
      fVar5 = 0.0;
      fVar6 = 0.0;
      do {
        FUN_1406e7b40(auStack_50,*(undefined8 *)(lVar1 + 0x80));
        FUN_140047f30(&fStack_78,auStack_50,lVar1);
        fVar3 = fVar3 + fStack_78;
        fVar4 = fVar4 + fStack_74;
        fVar5 = fVar5 + fStack_70;
        fVar6 = fVar6 + fStack_6c;
        lVar1 = *(longlong *)(lVar1 + 0x98);
      } while (lVar1 != 0);
      *(float *)*param_2 = fVar3;
      *(float *)(*param_2 + 4) = fVar4;
      *(float *)(*param_2 + 8) = fVar5;
      *(float *)(*param_2 + 0xc) = fVar6;
    }
    FUN_140735f40(auStack_68);
  }
  return;
}

