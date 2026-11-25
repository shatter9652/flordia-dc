// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140176260  size: 428 bytes
// Name:    FUN_140176260
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14503cc20, FUN_1455bc8d0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_140176260(int *param_1,undefined8 *param_2)

{
  ushort uVar1;
  int *piVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  uint uVar6;
  longlong unaff_GS_OFFSET;
  bool bVar8;
  float fVar9;
  undefined1 auVar10 [16];
  ulonglong uVar7;
  
  cVar4 = FUN_14503cc20();
  if (cVar4 == '\0') {
    return 0;
  }
  if ((*(byte *)(param_1 + 6) & 1) == 0) {
    return 0;
  }
  if ((*(byte *)((longlong)param_1 + 9) & 0xf) == 0) {
    return 0;
  }
  cVar4 = func_0x000144e555e0();
  if (cVar4 != '\0') {
    *(byte *)((longlong)param_2 + 0x14) = *(byte *)((longlong)param_2 + 0x14) | 0x10;
    *param_2 = 0x148769ca8;
    return 1;
  }
  uVar6 = *param_1 - 0x16;
  uVar7 = (ulonglong)uVar6;
  if (uVar6 < 0x40) {
    if ((0x800000000400007fU >> (uVar7 & 0x3f) & 1) != 0) {
      *(byte *)((longlong)param_2 + 0x14) = *(byte *)((longlong)param_2 + 0x14) | 2;
      uVar5 = FUN_1455bc8d0();
      *param_2 = uVar5;
      *(byte *)((longlong)param_2 + 0x14) = *(byte *)((longlong)param_2 + 0x14) | 0x40;
      return 1;
    }
    if (uVar7 == 0x26) {
      *param_2 = 0x148528290;
      *(byte *)((longlong)param_2 + 0x14) = *(byte *)((longlong)param_2 + 0x14) | 0x28;
      return 1;
    }
    if (uVar7 == 0x3e) goto LAB_1401762e9;
  }
  if (*param_1 != 0x15) {
    return 0;
  }
LAB_1401762e9:
  *param_2 = 0x1484a3466;
  *(byte *)((longlong)param_2 + 0x14) = *(byte *)((longlong)param_2 + 0x14) | 0x44;
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    func_0x0001455db994();
    bVar8 = *(char *)(*(longlong *)
                       (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8) ==
            '\0';
  }
  else {
    bVar8 = false;
  }
  piVar2 = *(int **)((ulonglong)*(byte *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1294) * 8 +
                    0x1484a3420);
  fVar9 = _DAT_145fc6ed8;
  if (*piVar2 == 3) {
    fVar9 = (float)piVar2[1];
  }
  *(float *)(param_2 + 6) = fVar9;
  uVar1 = *(ushort *)((longlong)piVar2 + 0x11a);
  if (*(ushort *)(piVar2 + 0x46) < *(ushort *)((longlong)piVar2 + 0x11a)) {
    uVar1 = *(ushort *)(piVar2 + 0x46);
  }
  if (bVar8) {
    func_0x0001455db994();
    fVar9 = *(float *)(param_2 + 6);
  }
  fVar9 = fVar9 * _DAT_14615cb30;
  lVar3 = *(longlong *)(*(longlong *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x12a8) + 0x12680);
  uVar6 = (uint)(*(ushort *)(*(longlong *)(lVar3 + 8) + 0x3a) >>
                (*(byte *)(lVar3 + 0x12) >> 1 & 0xf));
  uVar6 = uVar6 + (uVar6 == 0);
  if (uVar1 < uVar6) {
    uVar6 = (uint)uVar1;
  }
  *(uint *)((longlong)param_2 + 0x34) = uVar6;
  auVar10._0_4_ = fVar9 / (float)uVar6;
  auVar10._4_12_ = SUB6012((undefined1  [60])0x0,0);
  auVar10 = vcvtps2ph_f16c(auVar10,3);
  *(short *)(param_2 + 7) = auVar10._0_2_;
  return 1;
}

