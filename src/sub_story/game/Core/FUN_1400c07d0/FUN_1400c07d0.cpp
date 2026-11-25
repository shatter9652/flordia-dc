// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400c07d0  size: 189 bytes
// Name:    FUN_1400c07d0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144e90590, FUN_144e90390, FUN_140058310
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400c07d0(longlong *param_1)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  float fVar4;
  uint uVar5;
  longlong *plVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lStack_38;
  undefined8 uStack_30;
  longlong lStack_28;
  code *pcStack_20;
  longlong lStack_18;
  
  uStack_30 = uStack_30 & 0xffffffffffffff;
  lStack_18 = param_1[2];
  lStack_28 = *param_1;
  pcStack_20 = (code *)param_1[1];
  plVar6 = (longlong *)FUN_140058310(&lStack_28,(int)param_1[3],(longlong)&uStack_30 + 7,0,0,0);
  if (plVar6 != (longlong *)0x0) {
    FUN_144e90590(plVar6,param_1[4],(int)param_1[5],0,0);
    func_0x000140b6c670(plVar6,param_1 + 6);
    FUN_144e90390(plVar6,0xbc55b778,(int)param_1[0xe]);
    FUN_144e90390(plVar6,0x6b1f31c7,*(undefined4 *)((longlong)param_1 + 0x74));
    FUN_144e90390(plVar6,0xf66d3b99,(int)param_1[0xf]);
    if (uStack_30._7_1_ == '\x01') {
      FUN_1450a73a0(plVar6,1);
      if (lRam000000014a942bb0 != 0 || lRam000000014a942ba0 != 0) {
        lStack_38 = lRam000000014a942ba0;
        uStack_30 = uRam000000014a942ba8;
        lStack_28 = lRam000000014a942bb0;
        pcStack_20 = pcRam000000014a942bb8;
        (*pcRam000000014a942bb8)(&lStack_38,plVar6);
      }
      *(undefined4 *)((longlong)plVar6 + 0x2a4) = 0;
      func_0x000144ad8960(plVar6);
      *(undefined4 *)(plVar6 + 0x56) = 0;
      *(undefined1 *)((longlong)plVar6 + 0x2c3) = 1;
      *(byte *)(plVar6 + 0x78) = *(byte *)(plVar6 + 0x78) | 4;
      fVar1 = *(float *)(*plVar6 + 0x80);
      uVar8 = (int)plVar6[0x54] * 0x19660d + 0xe60f1cae;
      uVar5 = (int)plVar6[0x54] * 0x17385ca9 + 0x9ec2baa1;
      uVar5 = (uVar5 >> 0x10 ^ uVar5) * 0x19660d + (uVar8 >> 0x10 ^ uVar8);
      fVar1 = ((*(float *)(*plVar6 + 0x84) - fVar1) *
               ((float)(uVar5 >> 9 ^ uVar5 >> 0x19 | 0x3f800000) + _DAT_145fc6f48) + fVar1) *
              *(float *)((longlong)plVar6 + 0x364);
      *(float *)(plVar6 + 0x6c) = fVar1;
      *(undefined4 *)((longlong)plVar6 + 0xc3c) = 0;
      fVar4 = _DAT_145fc6ed8;
      if ((*(uint *)(plVar6 + 0x7d) & 1) != 0) {
        fVar2 = *(float *)(plVar6 + 0x55);
        *(float *)(plVar6 + 0x55) = fVar2 * *(float *)(plVar6 + 0x7b);
        *(float *)((longlong)plVar6 + 0x2ac) = fVar4 / (fVar2 * *(float *)(plVar6 + 0x7b));
      }
      if ((*(uint *)(plVar6 + 0x7d) & 2) != 0) {
        *(float *)(plVar6 + 0x6c) = fVar1 * *(float *)((longlong)plVar6 + 0x3dc);
      }
      FUN_1450ec380(plVar6);
      lVar7 = *plVar6;
      if (*(short *)(lVar7 + 0x40) != 0) {
        uVar9 = 0;
        do {
          lVar3 = *(longlong *)(*(longlong *)(lVar7 + 0x38) + uVar9 * 8);
          if ((*(int *)(lVar3 + 0xc) == 0) && (lVar3 = *(longlong *)(lVar3 + 0x58), lVar3 != 0)) {
            FUN_1453d0400(lVar3 + 0x1e0);
            lVar7 = *plVar6;
          }
          uVar9 = uVar9 + 1;
        } while (uVar9 < *(ushort *)(lVar7 + 0x40));
      }
      return;
    }
  }
  return;
}

