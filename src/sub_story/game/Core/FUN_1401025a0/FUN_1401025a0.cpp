// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401025a0  size: 645 bytes
// Name:    FUN_1401025a0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144e6b090, FUN_140a28030, FUN_140102c90, FUN_1401031f0, FUN_140102ed0, FUN_140fd4d50, FUN_140369a50
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401025a0(void)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  char cVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong unaff_GS_OFFSET;
  
  plVar4 = _DAT_14751f5b0;
  if (((DAT_149feffb1 == '\0') && (*(float *)(*_DAT_14751f5b0 + 500) <= 0.0)) &&
     ((_DAT_14751f5b0[1] == 0 || (*(float *)(_DAT_14751f5b0[1] + 500) <= 0.0)))) {
    return;
  }
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    func_0x0001455db994();
  }
  plVar2 = *(longlong **)(unaff_GS_OFFSET + 0x58);
  plVar1 = (longlong *)(*plVar2 + 0x12a8);
  lVar9 = FUN_144e6b090(*plVar1);
  if (*(char *)(plVar2[__tls_index] + 8) == '\0') {
    func_0x0001455db994();
  }
  FUN_140369a50(*plVar1,0x16);
  func_0x000144fa7a70(*(undefined8 *)(lVar9 + 8),0x37);
  plVar2 = _DAT_14751f5b0;
  if (*(char *)(*_DAT_14751f5b0 + 0x1fb) == '\x01') {
    FUN_1401031f0(*_DAT_14751f5b0,lVar9);
  }
  lVar3 = plVar2[1];
  if ((lVar3 != 0) && (*(char *)(lVar3 + 0x1fb) == '\x01')) {
    FUN_1401031f0(lVar3,lVar9);
  }
  plVar5 = _DAT_14751f5b0;
  uVar10 = CONCAT71((int7)((ulonglong)plVar2 >> 8),(char)_DAT_14751f5b0[2]);
  uVar7 = func_0x0001400c71d0(uVar10 & 0xffffffff);
  uVar8 = func_0x000145471e90(uVar10 & 0xffffffff);
  lVar3 = *plVar5;
  if ((*(byte *)((longlong)plVar5 + 0x14) & 1) != 0) {
    FUN_140102c90(lVar3,lVar9,uVar7,uVar8,*(undefined1 *)((longlong)plVar5 + 0x1d),0);
  }
  if ((plVar5[1] != 0) && ((*(byte *)((longlong)plVar5 + 0x14) & 2) != 0)) {
    FUN_140102c90(plVar5[1],lVar9,uVar7,uVar8,*(undefined1 *)((longlong)plVar5 + 0x1d),lVar3);
  }
  func_0x000144fa7a90(*(undefined8 *)(lVar9 + 8));
  cVar6 = func_0x0001403c97d0((char)plVar4[2]);
  if (cVar6 == '\0') {
    FUN_140fd4d50(0);
  }
  FUN_140a28030();
  func_0x000144fa7a70(*(undefined8 *)(lVar9 + 8),0x37);
  plVar4 = _DAT_14751f5b0;
  lVar3 = _DAT_14751f5b0[2];
  uVar7 = func_0x0001400c71d0((char)lVar3);
  uVar8 = func_0x000145471e90((char)lVar3);
  lVar3 = *plVar4;
  if ((*(byte *)((longlong)plVar4 + 0x14) & 1) != 0) {
    FUN_140102ed0(lVar3,lVar9,uVar7,uVar8,*(undefined1 *)((longlong)plVar4 + 0x1d),0);
  }
  if ((plVar4[1] != 0) && ((*(byte *)((longlong)plVar4 + 0x14) & 2) != 0)) {
    FUN_140102ed0(plVar4[1],lVar9,uVar7,uVar8,*(undefined1 *)((longlong)plVar4 + 0x1d),lVar3);
  }
  func_0x000144fa7a90(*(undefined8 *)(lVar9 + 8));
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    func_0x0001455db994();
  }
  lVar9 = *plVar1;
  FUN_1450403a0();
  *(undefined4 *)(lVar9 + 8) = 0x17;
  lVar9 = *(longlong *)(lVar9 + 0x12188);
  if (lVar9 != 0) {
    *(undefined4 *)(lVar9 + 8) = 0x17;
  }
  return;
}

