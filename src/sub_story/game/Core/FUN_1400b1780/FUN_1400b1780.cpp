// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400b1780  size: 323 bytes
// Name:    FUN_1400b1780
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1402e5b80
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400b1780(longlong param_1)

{
  byte bVar1;
  uint uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong unaff_GS_OFFSET;
  uint auStack_58 [2];
  undefined8 uStack_50;
  undefined8 uStack_48;
  uint uStack_40;
  uint *puStack_38;
  code *pcStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  
  if ((*(longlong *)(param_1 + 0x20) != 0) &&
     (lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x348), lVar4 != 0)) {
    puVar3 = (undefined8 *)func_0x0001401ec990();
    lVar4 = *(longlong *)(*(longlong *)(lVar4 + -8) + 0x10);
    lVar4 = func_0x000140dfa990(*(undefined4 *)(lVar4 + 0x60),*(undefined8 *)(lVar4 + 0x68),puVar3);
    if (lVar4 != 0) {
      if (*(char *)(*(longlong *)
                     (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8) ==
          '\0') {
        func_0x0001455db994();
      }
      bVar1 = *(byte *)(param_1 + 0x2c);
      uVar2 = *(uint *)(lVar4 + 0x60);
      if (*(longlong *)(param_1 + 0x20) == 0) {
        auStack_58[0] = 0x1ffff;
      }
      else {
        auStack_58[0] =
             (uint)((ulonglong)(*(longlong *)(param_1 + 0x20) - *_DAT_14abbe940) /
                   (ulonglong)*(uint *)(_DAT_14abbe940 + 1)) & 0x1ffff;
        auStack_58[0] =
             *(uint *)(_DAT_14abbe940[5] + (ulonglong)auStack_58[0] * 4) & 0xfffe0000 |
             auStack_58[0];
      }
      uStack_50 = *puVar3;
      uStack_48 = puVar3[1];
      if (*(char *)(*(longlong *)
                     (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8) ==
          '\0') {
        func_0x0001455db994();
      }
      puStack_38 = auStack_58;
      pcStack_30 = FUN_1425337e0;
      pcStack_28 = FUN_142533890;
      puStack_20 = &SUB_140004380;
      uStack_40 = (uVar2 & 0xfffffffd) + (bVar1 >> 2 & 1) * 2 ^ (-(bVar1 & 1) ^ uVar2) & 4;
      FUN_1402e5b80(4);
    }
  }
  return;
}

