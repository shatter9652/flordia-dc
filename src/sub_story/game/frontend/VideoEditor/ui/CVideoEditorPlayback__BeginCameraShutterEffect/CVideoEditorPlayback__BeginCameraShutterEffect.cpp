// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1422b9980  size: 401 bytes
// Name:    CVideoEditorPlayback::BeginCameraShutterEffect
// Subsystem: core
// Class:   CVideoEditorPlayback
//
// Evidence:
//   GTAVSRC: CVideoEditorPlayback::BeginCameraShutterEffect  (game/frontend/VideoEditor/ui/Playback.cpp)
//   literal: Phone_SoundSet_Default
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1443dd870
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"
#include "gta6decomp/CVideoEditorPlayback.h"


/* WARNING: Removing unreachable block (ram,0x00014076c153) */
/* WARNING: Removing unreachable block (ram,0x00014076bfe6) */
/* WARNING: Removing unreachable block (ram,0x00014076bdeb) */
/* WARNING: Removing unreachable block (ram,0x00014076be09) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong CVideoEditorPlayback__BeginCameraShutterEffect(longlong *param_1,float param_2)

{
  byte *pbVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  float fVar8;
  
  param_2 = param_2 - *(float *)((longlong)param_1 + 0x25c);
  *(undefined4 *)((longlong)param_1 + 0x25c) = 0;
  uVar2 = *(uint *)(param_1 + 0x46);
  if (uVar2 == 0) {
    iVar5 = -1;
  }
  else {
    iVar4 = *(int *)((longlong)param_1 + 0x22c) + 1;
    iVar5 = 0;
    if (iVar4 != 0x10) {
      iVar5 = iVar4;
    }
    iVar5 = *(int *)((longlong)param_1 + (longlong)iVar5 * 4 + 0x1e8);
  }
  fVar8 = *(float *)(param_1 + 0x4c);
  if (param_2 <= fVar8) {
    *(float *)(param_1 + 0x4c) = fVar8 - param_2;
    return (ulonglong)uVar2;
  }
  iVar4 = *(int *)((longlong)param_1 + 0x264);
  uVar7 = _DAT_146df5b88;
  do {
    param_2 = param_2 - fVar8;
    uVar7 = (uVar7 & 0xffffffff) * 0x5cdcfaa7 + (uVar7 >> 0x20);
    fVar8 = (*(float *)((longlong)param_1 + 0x254) - *(float *)(param_1 + 0x4b)) * _DAT_14615a2ac *
            (float)((uint)uVar7 & 0x7fff) + *(float *)(param_1 + 0x4b);
    if (iVar5 + -1 == iVar4) {
      *(int *)((longlong)param_1 + 0x264) = iVar5;
      _DAT_146df5b88 = (uVar7 & 0xffffffff) * 0x5cdcfaa7 + (uVar7 >> 0x20);
      uVar6 = (uint)_DAT_146df5b88 & 0x7fff;
      uVar7 = (ulonglong)uVar6;
      *(float *)((longlong)param_1 + 0x25c) =
           (float)uVar6 * _DAT_14615a2ac *
           (*(float *)(param_1 + 0x4a) - *(float *)((longlong)param_1 + 0x24c)) +
           *(float *)((longlong)param_1 + 0x24c);
      *(uint *)(param_1 + 0x46) = uVar2 - 1;
      iVar4 = *(int *)((longlong)param_1 + 0x22c) + 1;
      iVar5 = 0;
      if (iVar4 != 0x10) {
        iVar5 = iVar4;
      }
      *(int *)((longlong)param_1 + 0x22c) = iVar5;
      goto LAB_1422b9ad3;
    }
    iVar4 = iVar4 + 1;
  } while (fVar8 < param_2);
  *(int *)((longlong)param_1 + 0x264) = iVar4;
  _DAT_146df5b88 = uVar7;
LAB_1422b9ad3:
  *(float *)(param_1 + 0x4c) = fVar8 - param_2;
  if ((char)param_1[0x49] == '\x01') {
    FUN_1443dd870(0x8869c087,&UNK_14677a662,CONCAT71((int7)(uVar7 >> 8),1));
  }
  if ((~*(uint *)((longlong)param_1 + 0x14c) & 0x20) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014076be06. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar7 = (**(code **)(*param_1 + 0x1b8))(param_1,0x20);
    return uVar7;
  }
  *(uint *)((longlong)param_1 + 0x14c) = *(uint *)((longlong)param_1 + 0x14c) | 0x20;
  uVar7 = FUN_14076bde0(param_1,0x20);
  if (param_1[0xe] != 0) {
    lVar3 = func_0x00014076bf70(param_1);
    if (*(uint *)(param_1 + 0x26) < *(uint *)(lVar3 + 0x12e4)) {
      pbVar1 = (byte *)(*(longlong *)(lVar3 + 0x12f8) + (ulonglong)*(uint *)(param_1 + 0x26));
      *pbVar1 = *pbVar1 | 2;
    }
    return CONCAT17(2,(int7)lVar3);
  }
  return uVar7;
}

