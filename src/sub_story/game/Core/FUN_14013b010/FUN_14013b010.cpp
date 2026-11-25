// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14013b010  size: 710 bytes
// Name:    FUN_14013b010
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144e98b20, FUN_144f99dc0, FUN_14526c780, FUN_142d9bbd0, FUN_144f515e0, FUN_1455db8cc, FUN_144f99da0, FUN_1450e1440, FUN_1455db934, FUN_143af35c0, FUN_140332520, FUN_143af3670, FUN_1455c4580
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14013b010(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  undefined1 *puVar8;
  undefined1 uVar9;
  longlong unaff_GS_OFFSET;
  undefined8 **ppuStack_80;
  undefined4 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined1 uStack_64;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    func_0x0001455db994();
    puVar8 = (undefined1 *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x138b);
    uVar9 = *puVar8;
    if (*(char *)((*(longlong **)(unaff_GS_OFFSET + 0x58))[__tls_index] + 8) == '\0') {
      func_0x0001455db994();
    }
  }
  else {
    puVar8 = (undefined1 *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x138b);
    uVar9 = *puVar8;
  }
  *puVar8 = 1;
  *(undefined4 *)(param_1 + 0x30c) = 0;
  *(byte *)(param_1 + 0x224) =
       *(byte *)(param_1 + 0x224) & 0xcf | *(byte *)(param_1 + 0x224) * '\x02' & 0x20;
  uVar7 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffff0;
  if ((*(longlong *)(uVar7 + 0x38) != 0) &&
     ((*(byte *)(*(longlong *)(uVar7 + 0x38) + 0x1e) & 0x40) != 0)) {
    uVar6 = *(undefined4 *)(uVar7 + 0x9c);
    lVar3 = func_0x000144eb0080(uVar6);
    if ((lVar3 != 0) &&
       (((*(char *)(lVar3 + 99) != '\0' && (uVar4 = FUN_144f515e0(uVar7), uVar4 == uVar7)) &&
        (lVar3 = FUN_144f99da0(uVar6), lVar3 != 0)))) {
      do {
        if (*(char *)(lVar3 + 0x30) == '\x03') {
          lVar5 = func_0x000144e23bb0(*(undefined4 *)(lVar3 + 0x9c));
          if ((*(int *)(*(longlong *)
                         (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 4) <
               _DAT_14ab767b8) && (FUN_1455db8cc(&DAT_14ab767b8), _DAT_14ab767b8 == -1)) {
            _DAT_14ab767a0 = 0;
            FUN_1450e1440(0x14ab767a8,0);
            FUN_1455db934(&DAT_14ab767b8);
          }
          uStack_50 = _DAT_14ab767b0;
          uStack_60 = _DAT_14ab767a0;
          uStack_58 = uRam000000014ab767a8;
          uStack_78 = 5;
          uStack_68 = 0;
          uStack_64 = 0;
          uStack_70 = 0xffffffff00000000;
          uStack_48 = 0;
          ppuStack_80 = &ppuStack_80;
          func_0x0001451eda70(&ppuStack_80);
          if (((lVar5 != 0) && (cVar2 = FUN_142d9bbd0(lVar5), cVar2 != '\0')) &&
             ((cVar2 = FUN_140332520(lVar3,&ppuStack_80), cVar2 != '\0' &&
              (lVar5 = func_0x0001450f21c0(*(undefined4 *)(lVar3 + 0x9c)), lVar5 != 0)))) {
            uVar1 = *(undefined8 *)(lVar5 + 0x28);
            cVar2 = func_0x000144ead4e0(*(undefined8 *)(lVar5 + 8),uVar1);
            if (cVar2 == '\0') {
              func_0x0001453f8770(uVar1,0x14ab440c8);
            }
          }
        }
        lVar3 = FUN_144f99dc0(*(undefined4 *)(lVar3 + 0x9c));
      } while (lVar3 != 0);
    }
  }
  uVar6 = *(undefined4 *)(uVar7 + 0x9c);
  cVar2 = func_0x0001451a3890(uVar6);
  if (((cVar2 != '\0') && (cVar2 = func_0x0001400b4620(uVar6), cVar2 == '\0')) &&
     (lVar3 = func_0x0001450da490(uVar6), (*(byte *)(lVar3 + 0x10) & 4) != 0)) {
    FUN_143af35c0(param_1);
    uVar6 = *(undefined4 *)(uVar7 + 0x9c);
  }
  cVar2 = FUN_14526c780(uVar6);
  if (cVar2 != '\0') {
    FUN_143af3670(param_1);
  }
  FUN_1455c4580(param_1);
  FUN_144e98b20(param_1);
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    func_0x0001455db994();
  }
  *puVar8 = uVar9;
  return;
}

