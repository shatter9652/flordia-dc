// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400d2fc0  size: 792 bytes
// Name:    FUN_1400d2fc0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1400d36d0, FUN_1400df6c0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400d2fc0(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4,
                  longlong param_5,longlong param_6,float *param_7,int param_8,undefined1 param_9)

{
  byte bVar1;
  float fVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  longlong *plVar7;
  float fVar8;
  ulonglong uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [64];
  undefined1 auVar12 [64];
  undefined1 auStack_88 [16];
  undefined1 auStack_78 [16];
  
  if (*(char *)(param_4 + 0x110) < '\0') {
    plVar7 = *(longlong **)(param_4 + 0x18);
    iVar6 = *(int *)(param_4 + 0x20);
    iVar4 = func_0x000144e05fa0(plVar7[1]);
    auVar11 = ZEXT1264(ZEXT812(0));
    auVar10._0_12_ = ZEXT812(0);
    auVar10._12_4_ = 0;
    if (iVar6 != iVar4) {
      uVar5 = (**(code **)(*plVar7 + 0xf0))(plVar7,iVar6);
      (**(code **)(*plVar7 + 0x108))(plVar7,uVar5,auStack_88);
      auVar10 = auStack_78;
    }
    iVar6 = *(int *)(param_4 + 0x10);
    plVar7 = *(longlong **)(param_4 + 8);
  }
  else {
    plVar7 = *(longlong **)(param_4 + 0x138);
    iVar6 = *(int *)(param_4 + 0x140);
    iVar4 = func_0x000144e05fa0(plVar7[1]);
    auVar11 = ZEXT1264(ZEXT812(0));
    auVar10._0_12_ = ZEXT812(0);
    auVar10._12_4_ = 0;
    if (iVar6 != iVar4) {
      uVar5 = (**(code **)(*plVar7 + 0xf0))(plVar7,iVar6);
      (**(code **)(*plVar7 + 0x108))(plVar7,uVar5,auStack_88);
      auVar10 = auStack_78;
    }
    iVar6 = *(int *)(param_4 + 0x130);
    plVar7 = *(longlong **)(param_4 + 0x128);
  }
  auVar10 = vmovshdup_avx(auVar10);
  auVar12 = ZEXT1664(auVar10);
  iVar4 = func_0x000144e05fa0(plVar7[1]);
  if (iVar6 != iVar4) {
    uVar5 = (**(code **)(*plVar7 + 0xf0))(plVar7,iVar6);
    (**(code **)(*plVar7 + 0x108))(plVar7,uVar5,auStack_88);
    auVar11 = ZEXT1664(auStack_78);
  }
  if ((param_8 == 2) || ((*(byte *)(param_1 + 0xa8) & 2) == 0)) {
    fVar8 = *(float *)(param_5 + 8);
    fVar2 = fVar8 + *(float *)(param_3 + 0xd0);
    uVar9 = (ulonglong)(uint)fVar2;
    if (param_8 == 2) goto LAB_1400d316c;
  }
  else {
    bVar1 = *(byte *)(param_3 + 0x140);
    if (((((((bVar1 & 8) != 0) || ((*(byte *)(param_3 + 0x141) & 4) != 0)) ||
          (cVar3 = func_0x0001400ca280(param_3), cVar3 != '\0')) ||
         (((*(byte *)(param_3 + 0x14d) & 1) != 0 ||
          ((auVar10 = vmovshdup_avx(auVar11._0_16_), auVar10._0_4_ <= auVar12._0_4_ &&
           ((*(byte *)(param_3 + 0x14c) & 0x40) != 0)))))) ||
        ((*(byte *)(*(longlong *)(param_1 + 0x188) + 0x1a4) & 0x20) != 0)) ||
       ((((*(byte *)(*(longlong *)(param_1 + 0x188) + 0x354) & 0x20) != 0 ||
         (((bVar1 & 0x40) != 0 && ((*(byte *)(param_3 + 0xe1) & 0x20) == 0)))) ||
        (((*(byte *)(param_3 + 0x120) & 0x20) == 0 &&
         ((((*(byte *)(param_3 + 0xf0) & 1) != 0 && (*(char *)(param_3 + 0xe0) != '\x03')) &&
          (*(char *)(param_3 + 0xe0) != '\x01' && (*(byte *)(param_3 + 0x14d) & 8) == 0)))))))) {
      uVar9 = (ulonglong)(uint)(*(float *)(param_5 + 8) + *param_7);
      goto LAB_1400d316c;
    }
    fVar8 = *(float *)(param_5 + 8);
    fVar2 = fVar8 + *(float *)(param_3 + 0xd0);
  }
  uVar9 = (ulonglong)(uint)fVar2;
  if ((*(byte *)(param_3 + 0xe1) & 0x40) != 0) {
    if (*(float *)(param_6 + 8) - *(float *)(param_1 + 0x350) < fVar8) {
      uVar9 = (ulonglong)
              (uint)((fVar2 - *(float *)(param_6 + 8)) + *(float *)(param_1 + 0x350) + fVar8);
    }
  }
LAB_1400d316c:
  auVar10 = vminss_avx(ZEXT416(*(uint *)(param_4 + 0xf8)),ZEXT416(*(uint *)(param_4 + 0x218)));
  auVar11 = ZEXT1664(auVar10);
  uVar5 = auVar10._0_4_;
  if ((*(byte *)(param_3 + 0x14c) & 0x40) != 0) {
    uVar9 = FUN_1400df6c0(param_1,param_2,auVar10._0_8_);
    uVar5 = auVar11._0_4_;
  }
  FUN_1400d36d0(param_1,param_2,param_3,uVar9,uVar5,param_8,param_9);
  return;
}

