// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140035cd0  size: 114 bytes
// Name:    FUN_140035cd0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Removing unreachable block (ram,0x000144e39e44) */
/* WARNING: Removing unreachable block (ram,0x0001408cf6a9) */
/* WARNING: Removing unreachable block (ram,0x000144e39dde) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140035cd0(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  longlong lVar3;
  char cVar4;
  longlong unaff_GS_OFFSET;
  undefined **ppuStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined1 **ppuStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined1 *puStack_30;
  undefined *puStack_28;
  undefined *puStack_20;
  undefined *puStack_18;
  
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    puStack_30 = (undefined1 *)0x140035d40;
    func_0x0001455db994();
  }
  puStack_30 = (undefined1 *)0x140035cf5;
  cVar4 = func_0x000140035d50();
  lVar3 = _DAT_1478a9a40;
  puVar2 = *(undefined **)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x12a8);
  if (cVar4 != '\0') {
    ppuStack_70 = &puStack_20;
    puStack_18 = (undefined *)_DAT_1478a9a40;
    ppuStack_50 = &puStack_30;
    puStack_28 = (undefined *)_DAT_1478a9a40;
    pcStack_68 = FUN_144fe9d30;
    puStack_60 = &UNK_1408d04c0;
    puStack_58 = &SUB_140004380;
    pcStack_48 = (code *)&UNK_144e89130;
    puStack_40 = &UNK_1408d04c0;
    puStack_38 = &SUB_140004380;
    puStack_30 = puVar2;
    puStack_20 = puVar2;
    FUN_1408cf800(&ppuStack_70);
    puVar2[0x121a4] = 1;
    FUN_144e39e60(puVar2,lVar3);
    LOCK();
    uVar1 = *(undefined8 *)(lVar3 + 0x20);
    *(undefined8 *)(lVar3 + 0x20) = 2;
    UNLOCK();
    if ((int)uVar1 == 1) {
      *(undefined8 *)(lVar3 + 0x20) = 0;
    }
    *(undefined8 *)(lVar3 + 0x28) = 0;
    **(longlong **)(puVar2 + 0x12770) = lVar3;
    *(longlong *)(puVar2 + 0x12770) = lVar3 + 0x28;
    return;
  }
  ppuStack_50 = (undefined1 **)&stack0xfffffffffffffff8;
  puStack_30 = &stack0xfffffffffffffff0;
  pcStack_48 = FUN_142495870;
  puStack_40 = &UNK_1401167b0;
  puStack_38 = &SUB_140004380;
  puStack_28 = &UNK_142495950;
  puStack_20 = &UNK_1401167b0;
  puStack_18 = &SUB_140004380;
  FUN_1408cf800(&ppuStack_50);
  return;
}

