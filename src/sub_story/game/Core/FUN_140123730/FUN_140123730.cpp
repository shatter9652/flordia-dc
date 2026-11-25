// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140123730  size: 544 bytes
// Name:    FUN_140123730
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_141f79130, FUN_1402e7220, FUN_140979650
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140123730(void)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  longlong unaff_GS_OFFSET;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  if (DAT_148d42b44 != '\0') {
    return;
  }
  if (_DAT_146b53610 == 0xffffffffffffffff) {
    cVar1 = func_0x000144e3ee00(_DAT_148d42b40);
    if (cVar1 == '\0') {
      return;
    }
    _DAT_148d42b48 = FUN_1402e7220(_DAT_148d42b40,0xc4a9c59f29bb24dd);
    _DAT_148d42b50 = (undefined8 *)func_0x000145cac460(_DAT_148d42b48);
    if (_DAT_148d42b50 != (undefined8 *)0x0) {
      if (*(char *)(*(longlong *)
                     (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8) ==
          '\0') {
        func_0x0001455db994();
      }
      puVar4 = _DAT_148d42b50;
      lVar2 = *(longlong *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x12a8);
      *(undefined1 *)(lVar2 + 0x121a4) = 1;
      FUN_140979650(lVar2,puVar4);
      uVar3 = (ulonglong)_DAT_14a9437ac;
      _DAT_146b53610 = uVar3;
      goto LAB_14012376b;
    }
  }
  if ((longlong)_DAT_146b53610 < 0) {
    return;
  }
  uVar3 = (ulonglong)_DAT_14a9437ac;
LAB_14012376b:
  if (_DAT_148d42b50 != (undefined8 *)0x0 && 2 < (longlong)(uVar3 - _DAT_146b53610)) {
    if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8)
                 + 8) == '\0') {
      func_0x0001455db994();
    }
    puVar4 = _DAT_148d42b50;
    *(undefined1 *)(*(longlong *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x12a8) + 0x121a4) = 1;
    if (*(short *)(puVar4 + 1) != 0) {
      uVar6 = 0;
      iVar8 = 0;
      do {
        if (*(short *)((longlong)puVar4 + 10) != 0) {
          uVar5 = 0;
          do {
            iVar7 = iVar8 + uVar5;
            (**(code **)*puVar4)(puVar4,&uStack_48,uVar6,uVar5,0,0,0,2,0);
            puVar4 = _DAT_148d42b50;
            uVar5 = uVar5 + 1;
            lVar2 = (longlong)iVar7 * 0x10;
            *(undefined8 *)(lVar2 + 0x148d42b60) = uStack_48;
            *(undefined8 *)(lVar2 + 0x148d42b68) = uStack_40;
          } while (uVar5 < *(ushort *)((longlong)puVar4 + 10));
          iVar8 = iVar8 + uVar5;
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < *(ushort *)(puVar4 + 1));
    }
    if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8)
                 + 8) == '\0') {
      func_0x0001455db994();
      puVar4 = _DAT_148d42b50;
    }
    FUN_141f79130();
    func_0x0001418ef680(puVar4);
    _DAT_148d42b50 = (undefined8 *)0x0;
    DAT_148d42b44 = '\x01';
  }
  return;
}

