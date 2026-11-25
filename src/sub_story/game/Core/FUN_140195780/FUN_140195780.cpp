// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140195780  size: 274 bytes
// Name:    FUN_140195780
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140058310, FUN_144e90590, FUN_144e90390
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140195780(longlong *param_1)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  float fVar5;
  uint uVar6;
  longlong *plVar7;
  longlong lVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined1 auVar11 [16];
  char cStack_39;
  longlong lStack_38;
  longlong lStack_30;
  longlong lStack_28;
  code *pcStack_20;
  longlong lStack_18;
  
  lStack_18 = param_1[2];
  lStack_28 = *param_1;
  pcStack_20 = (code *)param_1[1];
  plVar7 = (longlong *)FUN_140058310(&lStack_28,(int)param_1[3],&cStack_39,0,0,0);
  if (plVar7 != (longlong *)0x0) {
    FUN_144e90590(plVar7,param_1[4],(int)param_1[5],0,0);
    lStack_38 = param_1[6];
    lStack_30 = param_1[7];
    func_0x000140d507d0(plVar7);
    if ((char)param_1[10] == '\x01') {
      uVar6 = *(uint *)((longlong)plVar7 + 0x3bc) | 0x10002000;
    }
    else {
      uVar6 = *(uint *)((longlong)plVar7 + 0x3bc) & 0xefffdfff;
    }
    *(uint *)((longlong)plVar7 + 0x3bc) = uVar6;
    auVar11._0_12_ = ZEXT812(0);
    auVar11._12_4_ = 0;
    auVar4 = vminss_avx(ZEXT416(_DAT_146159c64),ZEXT416(*(uint *)((longlong)param_1 + 0x4c)));
    auVar11 = vcmpss_avx(ZEXT416(*(uint *)((longlong)param_1 + 0x4c)),auVar11,1);
    *(uint *)((longlong)plVar7 + 0x35c) = ~auVar11._0_4_ & auVar4._0_4_;
    FUN_144e90390(plVar7,0xb19506b0,(int)param_1[8]);
    FUN_144e90390(plVar7,0xfdafb23b,*(undefined4 *)((longlong)param_1 + 0x44));
    FUN_144e90390(plVar7,0x35369828,(int)param_1[9]);
    if (cStack_39 == '\x01') {
      FUN_1450a73a0(plVar7,1);
      if (lRam000000014a942bb0 != 0 || lRam000000014a942ba0 != 0) {
        lStack_38 = lRam000000014a942ba0;
        lStack_30 = lRam000000014a942ba8;
        lStack_28 = lRam000000014a942bb0;
        pcStack_20 = pcRam000000014a942bb8;
        (*pcRam000000014a942bb8)(&lStack_38,plVar7);
      }
      *(undefined4 *)((longlong)plVar7 + 0x2a4) = 0;
      func_0x000144ad8960(plVar7);
      *(undefined4 *)(plVar7 + 0x56) = 0;
      *(undefined1 *)((longlong)plVar7 + 0x2c3) = 1;
      *(byte *)(plVar7 + 0x78) = *(byte *)(plVar7 + 0x78) | 4;
      fVar1 = *(float *)(*plVar7 + 0x80);
      uVar9 = (int)plVar7[0x54] * 0x19660d + 0xe60f1cae;
      uVar6 = (int)plVar7[0x54] * 0x17385ca9 + 0x9ec2baa1;
      uVar6 = (uVar6 >> 0x10 ^ uVar6) * 0x19660d + (uVar9 >> 0x10 ^ uVar9);
      fVar1 = ((*(float *)(*plVar7 + 0x84) - fVar1) *
               ((float)(uVar6 >> 9 ^ uVar6 >> 0x19 | 0x3f800000) + _DAT_145fc6f48) + fVar1) *
              *(float *)((longlong)plVar7 + 0x364);
      *(float *)(plVar7 + 0x6c) = fVar1;
      *(undefined4 *)((longlong)plVar7 + 0xc3c) = 0;
      fVar5 = _DAT_145fc6ed8;
      if ((*(uint *)(plVar7 + 0x7d) & 1) != 0) {
        fVar2 = *(float *)(plVar7 + 0x55);
        *(float *)(plVar7 + 0x55) = fVar2 * *(float *)(plVar7 + 0x7b);
        *(float *)((longlong)plVar7 + 0x2ac) = fVar5 / (fVar2 * *(float *)(plVar7 + 0x7b));
      }
      if ((*(uint *)(plVar7 + 0x7d) & 2) != 0) {
        *(float *)(plVar7 + 0x6c) = fVar1 * *(float *)((longlong)plVar7 + 0x3dc);
      }
      FUN_1450ec380(plVar7);
      lVar8 = *plVar7;
      if (*(short *)(lVar8 + 0x40) != 0) {
        uVar10 = 0;
        do {
          lVar3 = *(longlong *)(*(longlong *)(lVar8 + 0x38) + uVar10 * 8);
          if ((*(int *)(lVar3 + 0xc) == 0) && (lVar3 = *(longlong *)(lVar3 + 0x58), lVar3 != 0)) {
            FUN_1453d0400(lVar3 + 0x1e0);
            lVar8 = *plVar7;
          }
          uVar10 = uVar10 + 1;
        } while (uVar10 < *(ushort *)(lVar8 + 0x40));
      }
      return;
    }
  }
  return;
}

