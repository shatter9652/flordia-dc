// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 145a50380  size: 64 bytes
// Name:    phMaterialMgrGta::LoadGtaMtlFile
// Subsystem: physics
// Class:   phMaterialMgrGta
//
// Evidence:
//   GTAVSRC: phMaterialMgrGta::LoadGtaMtlFile  (game/physics/gtaMaterialManager.cpp)
//   literal: common:/data/materials
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144ec6720, FUN_140643cd0, FUN_140715f40, FUN_145a503c0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"
#include "gta6decomp/phMaterialMgrGta.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void phMaterialMgrGta__LoadGtaMtlFile(void)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint uVar5;
  longlong unaff_GS_OFFSET;
  
  FUN_144ec6720();
  uVar4 = FUN_140643cd0();
  FUN_140715f40(uVar4,&UNK_14677bda8);
  FUN_145a503c0(_DAT_14abcd240);
  uVar4 = FUN_140643cd0();
  func_0x000140704900(uVar4);
  plVar2 = *(longlong **)(unaff_GS_OFFSET + 0x58);
  lVar3 = *plVar2;
  uVar5 = *(int *)(lVar3 + 0x500) - 1;
  *(uint *)(lVar3 + 0x500) = uVar5;
  uVar4 = *(undefined8 *)(lVar3 + 0x480 + (ulonglong)uVar5 * 8);
  if (*(char *)(plVar2[__tls_index] + 8) == '\0') {
    func_0x0001455db994();
  }
  *(undefined8 *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x13a8) = uVar4;
  piVar1 = (int *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x874);
  *piVar1 = *piVar1 + -1;
  return;
}

