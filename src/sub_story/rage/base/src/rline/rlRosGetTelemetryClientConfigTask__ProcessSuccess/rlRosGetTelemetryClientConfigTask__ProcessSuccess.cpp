// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 143dc3990  size: 686 bytes
// Name:    rlRosGetTelemetryClientConfigTask::ProcessSuccess
// Subsystem: core
// Class:   rlRosGetTelemetryClientConfigTask
//
// Evidence:
//   GTAVSRC: rlRosGetTelemetryClientConfigTask::ProcessSuccess  (rage/base/src/rline/rltelemetry.cpp)
//   literal: IsTelemetryEnabled
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1402675a0, FUN_143dc1b20, FUN_145db2120, FUN_140004b40, FUN_14044fe00
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"
#include "gta6decomp/rlRosGetTelemetryClientConfigTask.h"


undefined8
rlRosGetTelemetryClientConfigTask__ProcessSuccess
          (longlong *param_1,undefined8 param_2,longlong param_3,undefined4 *param_4)

{
  longlong lVar1;
  uint3 uVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined *puVar10;
  undefined8 uVar11;
  
  lVar1 = param_1[0x4f2];
  FUN_140004b40(lVar1);
  if (param_3 == 0) {
    (**(code **)(*param_1 + 0x38))(param_1);
    uVar8 = (**(code **)(*param_1 + 0x40))(param_1);
LAB_143dc3a5d:
    FUN_1402675a0(uVar8,4);
    *param_4 = 0xfffffffe;
    func_0x000145db1be0(param_1[0x4f0]);
    lVar9 = param_1[0x4ef];
    puVar10 = &UNK_14678d1bb;
    uVar8 = 0;
    uVar11 = 0;
  }
  else {
    lVar9 = func_0x00014044fdf0(param_3,&UNK_146784951);
    if (lVar9 == 0) {
      (**(code **)(*param_1 + 0x38))(param_1);
      uVar8 = (**(code **)(*param_1 + 0x40))(param_1);
      goto LAB_143dc3a5d;
    }
    uVar7 = func_0x00014405d320(lVar9);
    lVar9 = func_0x00014044fdf0(param_3,&UNK_146780bce);
    if (lVar9 == 0) {
      puVar10 = (undefined *)0x0;
    }
    else {
      puVar10 = *(undefined **)(lVar9 + 8);
    }
    lVar9 = func_0x00014044fdf0(param_3,&UNK_146780bd7);
    if (lVar9 == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = *(undefined8 *)(lVar9 + 8);
    }
    uVar11 = 0;
    lVar9 = FUN_14044fe00(param_3,&UNK_14678138f,0);
    if (lVar9 != 0) {
      if (*(int *)(lVar9 + 0x58) == 0) {
        uVar11 = 0;
      }
      else {
        uVar11 = *(undefined8 *)(lVar9 + 0x50);
      }
    }
    bVar3 = func_0x000144f136c0(puVar10);
    bVar4 = func_0x000144f136c0(uVar8);
    bVar5 = func_0x000144f136c0(uVar11);
    FUN_145db2120(param_1[0x4ef],&UNK_14678d1bb,0);
    uVar2 = (uint3)((uint)uVar7 >> 8);
    if (((bVar3 & bVar4 & bVar5) != 0) || ((char)uVar7 != '\x01')) {
      FUN_143dc1b20(param_1[0x4f0]);
LAB_143dc3c09:
      uVar8 = CONCAT71((uint7)uVar2,1);
      goto LAB_143dc3a8c;
    }
    if (bVar3 != 0) {
      if (bVar4 != 0) {
        uVar8 = CONCAT71((uint7)uVar2,1);
        if (bVar5 != 0) goto LAB_143dc3a8c;
        uVar7 = func_0x000145f407f0(uVar11);
        cVar6 = func_0x000141d0d400(param_1[0x4f0],param_1[0x4f1],uVar11,uVar7);
        if (cVar6 != '\0') goto LAB_143dc3a8c;
        (**(code **)(*param_1 + 0x38))(param_1);
        uVar8 = (**(code **)(*param_1 + 0x40))(param_1);
        goto LAB_143dc3a5d;
      }
      FUN_145db2120(param_1[0x4ef],uVar8,0);
      goto LAB_143dc3c09;
    }
    lVar9 = param_1[0x4ef];
    uVar8 = CONCAT71((uint7)uVar2,1);
    uVar11 = 1;
  }
  FUN_145db2120(lVar9,puVar10,uVar11);
LAB_143dc3a8c:
  func_0x000144d9dab0(lVar1);
  return uVar8;
}

