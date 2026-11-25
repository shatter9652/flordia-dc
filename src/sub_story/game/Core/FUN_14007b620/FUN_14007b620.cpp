// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14007b620  size: 334 bytes
// Name:    FUN_14007b620
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_14007b620(longlong param_1,float param_2,float param_3,undefined1 param_4,char param_5)

{
  float fVar1;
  byte bVar2;
  undefined1 auVar3 [16];
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  float *pfVar7;
  uint uVar8;
  uint uVar9;
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  
  uVar9 = *(uint *)(param_1 + 0xd4);
  lVar6 = *(longlong *)(param_1 + 0xd8);
  lVar5 = func_0x00014007b7b0(uVar9,lVar6,param_2);
  uVar10 = extraout_XMM0_Qa;
  if (lVar5 == 0) {
    if (uVar9 == *(uint *)(param_1 + 0xd0)) {
      uVar8 = 1;
      if (1 < uVar9) {
        uVar8 = uVar9 >> 1;
      }
      lVar6 = func_0x000144d9c140(4,(ulonglong)(uVar8 + uVar9) * 0x2c);
      if ((ulonglong)*(uint *)(param_1 + 0xd4) != 0) {
        func_0x000145f40560(lVar6,*(undefined8 *)(param_1 + 0xd8),
                            (ulonglong)*(uint *)(param_1 + 0xd4) * 0x2c);
      }
      if (*(longlong *)(param_1 + 0xd8) != 0) {
        func_0x000144d9c130();
      }
      *(longlong *)(param_1 + 0xd8) = lVar6;
      *(uint *)(param_1 + 0xd0) = uVar8 + uVar9;
      uVar9 = *(uint *)(param_1 + 0xd4);
    }
    *(uint *)(param_1 + 0xd4) = uVar9 + 1;
    pfVar7 = (float *)((ulonglong)uVar9 * 0x2c + lVar6);
    if (lVar6 != 0) {
      func_0x00014007b770(pfVar7);
    }
    uVar4 = _DAT_145fc6ed8;
    pfVar7[7] = 0.0;
    pfVar7[9] = param_2;
    pfVar7[8] = param_3;
    *(undefined1 *)(pfVar7 + 10) = param_4;
    uVar10 = func_0x00014007b780(pfVar7,uVar4,uVar4,0,0x3f800000);
    if (param_5 != '\0') {
      auVar11._0_12_ = ZEXT812(0);
      auVar11._12_4_ = 0;
      bVar2 = *(byte *)(pfVar7 + 6);
      if ((bVar2 & 1) == 0) {
        return 0;
      }
      if ((bVar2 & 2) == 0) {
        fVar1 = pfVar7[4];
        auVar3 = vminss_avx(auVar11,ZEXT416((uint)(fVar1 + *pfVar7)));
        auVar12 = vmaxss_avx(auVar11,ZEXT416((uint)(fVar1 - pfVar7[1])));
        auVar11 = vcmpss_avx(ZEXT816(0),ZEXT416((uint)(0.0 - fVar1)),2);
        auVar11 = vblendvps_avx(auVar12,auVar3,auVar11);
        uVar10 = auVar11._0_8_;
        if ((bVar2 & 4) != 0) {
          auVar12 = ZEXT416((uint)pfVar7[2]);
          if (auVar11._0_4_ <= pfVar7[2]) {
            auVar12 = auVar11;
          }
          auVar11 = vcmpss_avx(auVar11,ZEXT416((uint)pfVar7[3]),1);
          auVar11 = vblendvps_avx(auVar12,ZEXT416((uint)pfVar7[3]),auVar11);
          uVar10 = auVar11._0_8_;
        }
        pfVar7[4] = (float)uVar10;
        return uVar10;
      }
      pfVar7[4] = 0.0;
      *(byte *)(pfVar7 + 6) = bVar2 & 0xfd;
      return 0;
    }
  }
  return uVar10;
}

