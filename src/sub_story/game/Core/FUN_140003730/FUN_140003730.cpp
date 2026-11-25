// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140003730  size: 476 bytes
// Name:    FUN_140003730
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1450e13f0, FUN_140407090, FUN_144eaa5a0, FUN_14575cd50, FUN_141138050, FUN_1436226c0, FUN_14361f960
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140003730(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined1 auStack_208 [380];
  undefined4 uStack_8c;
  longlong lStack_88;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong lStack_68;
  
  if (param_2 == 0) {
    return;
  }
  if (*(longlong *)(param_2 + 0xb0) == 0) {
    return;
  }
  FUN_1436226c0();
  lVar3 = *(longlong *)(param_2 + 0xb0);
  if (*(char *)(lVar3 + 0x7d) != '\x01') goto LAB_1400038bc;
  uVar1 = *(undefined4 *)(*(longlong *)(param_1 + 0x150) + 0x9c);
  lVar4 = func_0x0001451cada0(uVar1);
  lVar5 = func_0x0001450e1520(uVar1);
  if (lVar5 == 0 || lVar4 == 0) goto LAB_1400038bc;
  if ((*(longlong *)(lVar5 + 0x90) == 0) ||
     (uVar2 = *(uint *)(*(longlong *)(lVar5 + 0x90) + 0x18), uVar2 == 0x1ffff)) {
LAB_1400037b8:
    uVar6 = 0;
  }
  else {
    uVar7 = *(uint *)(_DAT_14abbe2e8[5] + (ulonglong)(uVar2 & 0x1ffff) * 4);
    if (((~uVar7 & *(uint *)(_DAT_14abbe2e8 + 6)) != 0) ||
       ((uVar7 = uVar7 & 0x7fe0000, uVar7 != (uVar2 & 0xfffe0000) ||
        (lVar5 = *_DAT_14abbe2e8, lVar5 == 0)))) goto LAB_1400037b8;
    uVar6 = FUN_144eaa5a0(*(undefined4 *)
                           (lVar5 + 0x9c + (ulonglong)((uVar2 & 0x1ffff) * (int)_DAT_14abbe2e8[1])),
                          lVar5,uVar7,0);
  }
  FUN_1450e13f0(auStack_208,uVar6,0);
  FUN_141138050(auStack_208);
  uStack_6c = 0;
  if (lStack_68 != 0) {
    func_0x000144d9c130();
  }
  uStack_70 = 0;
  lStack_68 = 0;
  uStack_8c = 0;
  if (lStack_88 != 0) {
    func_0x000144d9c130();
  }
  FUN_140407090(lVar4 + 0x1410,1,1);
LAB_1400038bc:
  func_0x00014361f9b0(param_1,lVar3);
  if (*(char *)(lVar3 + 0x8c) == '\x01') {
    lVar4 = func_0x000144e74830();
    func_0x0001456d93e0(1,*(undefined4 *)(lVar3 + 0x90),
                        *(undefined4 *)(*(longlong *)(lVar4 + 0x10) + 0x88),
                        *(undefined4 *)(*(longlong *)(lVar4 + 0x10) + 0x7c),0);
  }
  FUN_14575cd50(param_1);
  FUN_14361f960(lVar3);
  return;
}

