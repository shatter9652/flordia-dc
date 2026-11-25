// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14003db80  size: 1060 bytes
// Name:    FUN_14003db80
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_141feded0, FUN_1402e5b80
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14003db80(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  char cVar3;
  uint uVar4;
  uint uStack_44;
  uint *puStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  uVar4 = *(uint *)(param_1 + 0xfe0);
  if (uVar4 != 0x1ffff) {
    lVar2 = _DAT_1499a9fe0[5];
    uVar1 = *(uint *)(lVar2 + (ulonglong)(uVar4 & 0x1ffff) * 4);
    if ((((uVar4 ^ uVar1) < 0x20000) &&
        ((uVar1 & *(uint *)(_DAT_1499a9fe0 + 6)) == *(uint *)(_DAT_1499a9fe0 + 6))) &&
       (*_DAT_1499a9fe0 != 0)) {
      uVar1 = *(uint *)(_DAT_1499a9fe0 + 1);
      uVar4 = (uVar4 & 0x1ffff) * uVar1;
      cVar3 = FUN_141feded0(*(undefined8 *)(*_DAT_1499a9fe0 + 0x18 + (ulonglong)uVar4));
      if (cVar3 == '\0') {
        uStack_44 = uVar4 / uVar1 & 0x1ffff;
        uStack_44 = *(uint *)(lVar2 + (ulonglong)uStack_44 * 4) & 0xfffe0000 | uStack_44;
        puStack_40 = &uStack_44;
        pcStack_38 = FUN_1436e2560;
        puStack_30 = &UNK_1413b41f0;
        puStack_28 = &SUB_140004380;
        FUN_1402e5b80(4);
      }
    }
  }
  *(undefined4 *)(param_1 + 0xfe0) = 0x1ffff;
  uVar4 = *(uint *)(param_1 + 0xfe4);
  if (uVar4 != 0x1ffff) {
    lVar2 = _DAT_1499a9fe0[5];
    uVar1 = *(uint *)(lVar2 + (ulonglong)(uVar4 & 0x1ffff) * 4);
    if ((((uVar4 ^ uVar1) < 0x20000) &&
        ((uVar1 & *(uint *)(_DAT_1499a9fe0 + 6)) == *(uint *)(_DAT_1499a9fe0 + 6))) &&
       (*_DAT_1499a9fe0 != 0)) {
      uVar1 = *(uint *)(_DAT_1499a9fe0 + 1);
      uVar4 = (uVar4 & 0x1ffff) * uVar1;
      cVar3 = FUN_141feded0(*(undefined8 *)(*_DAT_1499a9fe0 + 0x18 + (ulonglong)uVar4));
      if (cVar3 == '\0') {
        uStack_44 = uVar4 / uVar1 & 0x1ffff;
        uStack_44 = *(uint *)(lVar2 + (ulonglong)uStack_44 * 4) & 0xfffe0000 | uStack_44;
        puStack_40 = &uStack_44;
        pcStack_38 = FUN_1436e2560;
        puStack_30 = &UNK_1413b41f0;
        puStack_28 = &SUB_140004380;
        FUN_1402e5b80(4);
      }
    }
  }
  *(undefined4 *)(param_1 + 0xfe4) = 0x1ffff;
  uVar4 = *(uint *)(param_1 + 0xfe8);
  if (uVar4 != 0x1ffff) {
    lVar2 = _DAT_1499a9fe0[5];
    uVar1 = *(uint *)(lVar2 + (ulonglong)(uVar4 & 0x1ffff) * 4);
    if ((((uVar4 ^ uVar1) < 0x20000) &&
        ((uVar1 & *(uint *)(_DAT_1499a9fe0 + 6)) == *(uint *)(_DAT_1499a9fe0 + 6))) &&
       (*_DAT_1499a9fe0 != 0)) {
      uVar1 = *(uint *)(_DAT_1499a9fe0 + 1);
      uVar4 = (uVar4 & 0x1ffff) * uVar1;
      cVar3 = FUN_141feded0(*(undefined8 *)(*_DAT_1499a9fe0 + 0x18 + (ulonglong)uVar4));
      if (cVar3 == '\0') {
        uStack_44 = uVar4 / uVar1 & 0x1ffff;
        uStack_44 = *(uint *)(lVar2 + (ulonglong)uStack_44 * 4) & 0xfffe0000 | uStack_44;
        puStack_40 = &uStack_44;
        pcStack_38 = FUN_1436e2560;
        puStack_30 = &UNK_1413b41f0;
        puStack_28 = &SUB_140004380;
        FUN_1402e5b80(4);
      }
    }
  }
  *(undefined4 *)(param_1 + 0xfe8) = 0x1ffff;
  uVar4 = *(uint *)(param_1 + 0xfec);
  if (uVar4 != 0x1ffff) {
    lVar2 = _DAT_1499a9fe0[5];
    uVar1 = *(uint *)(lVar2 + (ulonglong)(uVar4 & 0x1ffff) * 4);
    if ((((uVar4 ^ uVar1) < 0x20000) &&
        ((uVar1 & *(uint *)(_DAT_1499a9fe0 + 6)) == *(uint *)(_DAT_1499a9fe0 + 6))) &&
       (*_DAT_1499a9fe0 != 0)) {
      uVar1 = *(uint *)(_DAT_1499a9fe0 + 1);
      uVar4 = (uVar4 & 0x1ffff) * uVar1;
      cVar3 = FUN_141feded0(*(undefined8 *)(*_DAT_1499a9fe0 + 0x18 + (ulonglong)uVar4));
      if (cVar3 == '\0') {
        uStack_44 = uVar4 / uVar1 & 0x1ffff;
        uStack_44 = *(uint *)(lVar2 + (ulonglong)uStack_44 * 4) & 0xfffe0000 | uStack_44;
        puStack_40 = &uStack_44;
        pcStack_38 = FUN_1436e2560;
        puStack_30 = &UNK_1413b41f0;
        puStack_28 = &SUB_140004380;
        FUN_1402e5b80(4);
      }
    }
  }
  *(undefined4 *)(param_1 + 0xfec) = 0x1ffff;
  uVar4 = *(uint *)(param_1 + 0xff0);
  if (uVar4 != 0x1ffff) {
    lVar2 = _DAT_1499a9fe0[5];
    uVar1 = *(uint *)(lVar2 + (ulonglong)(uVar4 & 0x1ffff) * 4);
    if ((((uVar4 ^ uVar1) < 0x20000) &&
        ((uVar1 & *(uint *)(_DAT_1499a9fe0 + 6)) == *(uint *)(_DAT_1499a9fe0 + 6))) &&
       (*_DAT_1499a9fe0 != 0)) {
      uVar1 = *(uint *)(_DAT_1499a9fe0 + 1);
      uVar4 = (uVar4 & 0x1ffff) * uVar1;
      cVar3 = FUN_141feded0(*(undefined8 *)(*_DAT_1499a9fe0 + 0x18 + (ulonglong)uVar4));
      if (cVar3 == '\0') {
        uStack_44 = uVar4 / uVar1 & 0x1ffff;
        uStack_44 = *(uint *)(lVar2 + (ulonglong)uStack_44 * 4) & 0xfffe0000 | uStack_44;
        puStack_40 = &uStack_44;
        pcStack_38 = FUN_1436e2560;
        puStack_30 = &UNK_1413b41f0;
        puStack_28 = &SUB_140004380;
        FUN_1402e5b80(4);
      }
    }
  }
  *(undefined4 *)(param_1 + 0xff0) = 0x1ffff;
  return;
}

