// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140129050  size: 295 bytes
// Name:    FUN_140129050
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1450e0910, FUN_140019720, FUN_1401880c0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140129050(longlong param_1)

{
  int *piVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  char cVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  float fVar9;
  undefined1 auVar10 [16];
  undefined1 extraout_var [56];
  undefined1 auVar11 [16];
  undefined1 auVar12 [64];
  
  lVar3 = *(longlong *)(param_1 + 0x50);
  if (lVar3 == 0) {
    return;
  }
  puVar8 = *(undefined8 **)(param_1 + 0x60);
  if ((*(byte *)(lVar3 + 0x22c) & 8) != 0) {
    if (puVar8 != (undefined8 *)0x0) {
      puVar4 = (undefined8 *)puVar8[3];
      LOCK();
      piVar1 = (int *)(puVar8 + 2);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar8)(puVar8,1);
      }
      if (puVar4 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(puVar4 + 2);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puVar4)(puVar4,1);
        }
      }
      *(undefined8 *)(param_1 + 0x60) = 0;
    }
    FUN_1450e0910();
    *(undefined8 *)(param_1 + 0x7c) = 0;
    FUN_140019720(param_1 + 0x68,0);
    *(uint *)(param_1 + 0x94) = *(uint *)(param_1 + 0x94) & 0xfffffffc | 2;
    *(undefined8 *)(param_1 + 0x84) = 0;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    return;
  }
  if (puVar8 == (undefined8 *)0x0) {
    return;
  }
  *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_1 + 0x7c);
  auVar12._0_8_ = FUN_1401880c0(lVar3,0xc152e4fc,0);
  auVar12._8_56_ = extraout_var;
  auVar11._0_12_ = ZEXT812(0);
  auVar11._12_4_ = 0;
  auVar11 = vmaxss_avx(auVar12._0_16_,auVar11);
  *(int *)(param_1 + 0x7c) = auVar11._0_4_;
  func_0x000140b9df60(lVar3,0xe71bd32a,puVar8);
  if ((*(byte *)(param_1 + 0x90) & 1) != 0) {
    return;
  }
  if (*(float *)(param_1 + 0x7c) < _DAT_145fc6ed8) {
    return;
  }
  lVar3 = *(longlong *)(param_1 + 0x50);
  puVar8 = *(undefined8 **)(param_1 + 0x60);
  if (puVar8 == (undefined8 *)0x0 || lVar3 == 0) goto code_r0x000143c7f2d3;
  lVar6 = *(longlong *)(param_1 + 0x70);
  fVar9 = (float)(*(uint *)(param_1 + 0x78) & _DAT_145fc6f4c);
  auVar11 = vcmpss_avx(ZEXT416(_DAT_145fc6f00),ZEXT416((uint)fVar9),2);
  auVar10 = vcmpss_avx(ZEXT416((uint)fVar9),ZEXT416(_DAT_146159c28),0);
  auVar12 = ZEXT1664(CONCAT412(~auVar10._12_4_ &
                               auVar11._12_4_ & SUB124(SUB6012((undefined1  [60])0x0,0),8),
                               CONCAT84(0,~auVar10._0_4_ &
                                          auVar11._0_4_ & (uint)(_DAT_145fc6ed8 / fVar9))));
  if (lVar6 == 0) {
    func_0x000140b9df60(lVar3,0xe71bd32a,0);
    func_0x0001402f0750(*(undefined8 *)(param_1 + 0x50),0xb9933991);
    func_0x00014042fa70(*(undefined8 *)(param_1 + 0x50),0xdb0b92d5,auVar12._0_8_);
  }
  else {
    uVar2 = *(undefined4 *)(lVar6 + 0x9c);
    cVar5 = FUN_144f399e0(uVar2);
    if (cVar5 != '\0') {
      cVar5 = *(char *)(lVar6 + 0x30);
      if (cVar5 == '\x02') {
        lVar6 = func_0x000144db6340(uVar2);
        if (((*(byte *)(lVar6 + 0x6a0) & 4) == 0) &&
           (lVar6 = func_0x00014066f0d0(uVar2), lVar6 != 0)) {
          uVar7 = func_0x000144f124c0(*(undefined8 *)(lVar6 + 0x30),0);
code_r0x000143c7f29d:
          func_0x0001431b1b80(uVar7,lVar3,auVar12._0_8_,0);
          func_0x000140e0dae0(uVar7,*(undefined8 *)(param_1 + 0x50),auVar12._0_8_,0);
        }
      }
      else if (cVar5 == '\x04') {
        cVar5 = FUN_1450712c0(uVar2);
        if (cVar5 != '\0') {
          uVar7 = FUN_1454e2570(uVar2);
          goto code_r0x000143c7f29d;
        }
      }
      else if (((cVar5 == '\x03') &&
               (lVar6 = func_0x000144e59150(uVar2), (*(byte *)(lVar6 + 0x10) & 2) == 0)) &&
              (lVar6 = func_0x000144f12500(uVar2), lVar6 != 0)) {
        uVar7 = func_0x000144f124c0(*(undefined8 *)(lVar6 + 0x30),0);
        func_0x0001431b0870(uVar7,lVar3,auVar12._0_8_);
        FUN_140b9dd00(uVar7,*(undefined8 *)(param_1 + 0x50),auVar12._0_8_);
        FUN_1431b0830(uVar7,*(undefined8 *)(param_1 + 0x50),auVar12._0_8_);
      }
      FUN_140019720(param_1 + 0x68,0);
    }
  }
  puVar8 = *(undefined8 **)(param_1 + 0x60);
code_r0x000143c7f2d3:
  if (puVar8 != (undefined8 *)0x0) {
    puVar4 = (undefined8 *)puVar8[3];
    LOCK();
    piVar1 = (int *)(puVar8 + 2);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar8)(puVar8,1);
    }
    if (puVar4 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar4 + 2);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar4)(puVar4,1);
      }
    }
    *(undefined8 *)(param_1 + 0x60) = 0;
  }
  auVar10._0_12_ = ZEXT812(0);
  auVar10._12_4_ = 0;
  *(undefined1 (*) [16])(param_1 + 0x7c) = auVar10;
  *(uint *)(param_1 + 0x94) = *(uint *)(param_1 + 0x94) & 0xfffffffc | 2;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  return;
}

