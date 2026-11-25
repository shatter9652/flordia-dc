// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140119df0  size: 369 bytes
// Name:    FUN_140119df0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140119df0(longlong param_1,char param_2)

{
  undefined8 uVar1;
  ushort uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  uint uVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  
  lVar9 = *(longlong *)(param_1 + 0x12640);
  if ((lVar9 == 0) && (lVar9 = *(longlong *)(param_1 + 0x12680), lVar9 == 0)) {
    auVar10._0_12_ = ZEXT812(0);
    auVar10._12_4_ = 0;
    uVar6 = 0;
    iVar8 = 0;
    *(undefined1 (*) [16])(param_1 + 0x126e4) = auVar10;
  }
  else {
    auVar11._4_4_ = _DAT_145fc6ed8;
    auVar11._0_4_ = _DAT_145fc6ed8;
    auVar11._8_4_ = _DAT_145fc6ed8;
    auVar11._12_4_ = _DAT_145fc6ed8;
    uVar2 = *(ushort *)(*(longlong *)(lVar9 + 8) + 0x3a);
    uVar6 = (uint)(*(ushort *)(*(longlong *)(lVar9 + 8) + 0x38) >>
                  (*(byte *)(lVar9 + 0x12) >> 1 & 0xf));
    uVar6 = uVar6 + (uVar6 == 0);
    *(uint *)(param_1 + 0x126e4) = uVar6;
    uVar7 = (uint)(uVar2 >> (*(byte *)(lVar9 + 0x12) >> 1 & 0xf));
    iVar8 = uVar7 + (uVar7 == 0);
    *(int *)(param_1 + 0x126e8) = iVar8;
    auVar10 = vcvtdq2ps_avx(ZEXT416(uVar6));
    auVar10 = vdivps_avx(auVar11,auVar10);
    uVar1 = vmovlps_avx(auVar10);
    *(undefined8 *)(param_1 + 0x126ec) = uVar1;
  }
  if (param_2 != '\0') {
    auVar5._4_4_ = (float)iVar8;
    auVar5._0_4_ = (float)uVar6;
    auVar5._8_8_ = 0;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = _DAT_146159bc0 ^ *(ulonglong *)(param_1 + 0x12348);
    auVar10 = vpor_avx(auVar3,auVar5 << 0x40 ^ *(undefined1 (*) [16])(param_1 + 0x12338));
    if (auVar10 != (undefined1  [16])0x0) {
      *(ulonglong *)(param_1 + 0x12348) = _DAT_146159bc0;
      *(undefined8 *)(param_1 + 0x12338) = 0;
      *(ulonglong *)(param_1 + 0x12340) = CONCAT44((float)iVar8,(float)uVar6);
      auVar4._8_8_ = 0;
      auVar4._0_8_ = *(ulonglong *)(param_1 + 0x12348) ^ *(ulonglong *)(param_1 + 0x123c8);
      auVar10 = vpor_avx(auVar4,*(undefined1 (*) [16])(param_1 + 0x12338) ^
                                *(undefined1 (*) [16])(param_1 + 0x123b8));
      *(ulonglong *)(param_1 + 0x12520) =
           (ulonglong)((uint)(auVar10 != (undefined1  [16])0x0) << 0x1b) |
           *(ulonglong *)(param_1 + 0x12520) & 0xfffffffff7ffffff;
    }
  }
  return;
}

