// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400fefa0  size: 507 bytes
// Name:    FUN_1400fefa0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1401ade30, FUN_145071950, FUN_1420427d0, FUN_144f9a230, FUN_144f9a210, FUN_145206b80, FUN_1436d9460, FUN_1436da310, FUN_1401ae630, FUN_1454cabc0, FUN_144f9fed0, FUN_1452e1b20, FUN_1401aec80, FUN_1453b0d10
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Possible PIC construction at 0x0001400ff090: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001400ff095) */
/* WARNING: Removing unreachable block (ram,0x0001400ff0b7) */
/* WARNING: Removing unreachable block (ram,0x0001400ff0e0) */
/* WARNING: Removing unreachable block (ram,0x0001400ff0ea) */
/* WARNING: Removing unreachable block (ram,0x0001400ff165) */
/* WARNING: Removing unreachable block (ram,0x0001401ae630) */
/* WARNING: Removing unreachable block (ram,0x0001401ae63f) */
/* WARNING: Removing unreachable block (ram,0x0001401ae652) */
/* WARNING: Removing unreachable block (ram,0x0001401ae655) */
/* WARNING: Removing unreachable block (ram,0x0001401ae65e) */
/* WARNING: Removing unreachable block (ram,0x0001401ae66a) */
/* WARNING: Removing unreachable block (ram,0x0001401ae67b) */
/* WARNING: Removing unreachable block (ram,0x000140509740) */
/* WARNING: Removing unreachable block (ram,0x0001401ae675) */
/* WARNING: Removing unreachable block (ram,0x0001400ff0ef) */
/* WARNING: Removing unreachable block (ram,0x0001400ff0f6) */
/* WARNING: Removing unreachable block (ram,0x0001400ff14e) */
/* WARNING: Removing unreachable block (ram,0x000145073d60) */
/* WARNING: Removing unreachable block (ram,0x00014507401b) */
/* WARNING: Removing unreachable block (ram,0x000145073e57) */
/* WARNING: Removing unreachable block (ram,0x000145073e6f) */
/* WARNING: Removing unreachable block (ram,0x000145073e7a) */
/* WARNING: Removing unreachable block (ram,0x000145074028) */
/* WARNING: Removing unreachable block (ram,0x000145073f07) */
/* WARNING: Removing unreachable block (ram,0x000145073f0c) */
/* WARNING: Removing unreachable block (ram,0x000145073f18) */
/* WARNING: Removing unreachable block (ram,0x000145074038) */
/* WARNING: Removing unreachable block (ram,0x000145073f38) */
/* WARNING: Removing unreachable block (ram,0x000145073f3d) */
/* WARNING: Removing unreachable block (ram,0x000145073f49) */
/* WARNING: Removing unreachable block (ram,0x000145073f7a) */
/* WARNING: Removing unreachable block (ram,0x000145073faa) */
/* WARNING: Removing unreachable block (ram,0x000145074073) */
/* WARNING: Removing unreachable block (ram,0x000145074081) */
/* WARNING: Removing unreachable block (ram,0x000145073fb8) */
/* WARNING: Removing unreachable block (ram,0x000145073fc8) */
/* WARNING: Removing unreachable block (ram,0x000145073fe7) */
/* WARNING: Removing unreachable block (ram,0x000145073ff1) */
/* WARNING: Removing unreachable block (ram,0x000145073f84) */
/* WARNING: Removing unreachable block (ram,0x000145074000) */
/* WARNING: Removing unreachable block (ram,0x000145074009) */
/* WARNING: Removing unreachable block (ram,0x000145073f8a) */
/* WARNING: Removing unreachable block (ram,0x000145073f91) */
/* WARNING: Removing unreachable block (ram,0x000145074048) */
/* WARNING: Removing unreachable block (ram,0x000145074052) */
/* WARNING: Removing unreachable block (ram,0x000145074065) */
/* WARNING: Removing unreachable block (ram,0x000145073f9f) */
/* WARNING: Removing unreachable block (ram,0x0001400ff0fb) */
/* WARNING: Removing unreachable block (ram,0x0001400ff122) */
/* WARNING: Removing unreachable block (ram,0x0001400ff128) */
/* WARNING: Removing unreachable block (ram,0x0001400ff137) */
/* WARNING: Removing unreachable block (ram,0x0001400ff141) */

void FUN_1400fefa0(longlong param_1,longlong param_2,undefined8 *param_3)

{
  uint *puVar1;
  char cVar2;
  undefined4 uVar3;
  
  cVar2 = FUN_144f9a230(param_2);
  if (cVar2 != '\0') {
    *(byte *)(param_2 + 0x8e) = *(byte *)(param_2 + 0x8e) | 1;
    if (*(longlong *)(param_2 + 0x250) != 0) {
      LOCK();
      puVar1 = (uint *)(*(longlong *)(param_2 + 0x250) + 0x148);
      *puVar1 = *puVar1 | 0x1000;
      UNLOCK();
    }
  }
  FUN_1454cabc0(param_2,param_3);
  uVar3 = FUN_1436d9460(param_1,param_2,param_3);
  FUN_1401ae630(param_2,uVar3);
  FUN_1453b0d10(param_2,param_3);
  func_0x0001414e7030(param_2);
  cVar2 = FUN_144f9fed0(param_2);
  if ((cVar2 != '\0') && (*(int *)(param_2 + 0x84) != 1)) {
    cVar2 = FUN_1420427d0(*(undefined4 *)(param_1 + 0x1adc),*param_3,param_2);
    if (cVar2 != '\0') {
      FUN_1401ae630(param_2);
    }
  }
  cVar2 = FUN_144f9fed0(param_2);
  if ((cVar2 == '\0') && (*(longlong *)(param_2 + 0x250) == 0)) {
    func_0x0001401ae770(param_2);
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_1436da310(param_1,param_2,param_3);
    func_0x0001401ae770(param_2,uVar3);
    uVar3 = FUN_145206b80(param_2,param_3);
  }
  *(undefined4 *)(param_2 + 0x80) = uVar3;
  return;
}

