// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140120ce0  size: 228 bytes
// Name:    FUN_140120ce0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144e308e0, FUN_1422d37a0, FUN_1407f9310, FUN_1406991c0, FUN_14204f9b0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_140120ce0(void)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  longlong unaff_GS_OFFSET;
  
  uVar4 = (**(code **)(*_DAT_149ab39d8 + 0x30))();
  if ((char)uVar4 != '\0') {
    uVar4 = uVar4 & 0xffffffff;
    if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8)
                 + 8) == '\0') {
      func_0x0001455db994();
    }
    plVar2 = *(longlong **)(unaff_GS_OFFSET + 0x58);
    puVar1 = (undefined8 *)(*plVar2 + 0x12a8);
    uVar3 = *puVar1;
    func_0x00014249d0f0(1,uVar3,0x29a5ee15);
    if (*(char *)(plVar2[__tls_index] + 8) == '\0') {
      func_0x0001455db994();
    }
    func_0x00014031a6d0(*puVar1);
    func_0x00014047d030();
    FUN_1406991c0();
    FUN_1422d37a0();
    if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8)
                 + 8) == '\0') {
      func_0x0001455db994();
    }
    FUN_144e308e0(*puVar1,1);
    FUN_14204f9b0();
    FUN_1407f9310();
    func_0x00014249d1a0(uVar3,0x29a5ee15);
  }
  return uVar4;
}

