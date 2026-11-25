// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140048420  size: 388 bytes
// Name:    FUN_140048420
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144f3fde0, FUN_144e4c850, FUN_144e91330
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Removing unreachable block (ram,0x000144f3ff0e) */
/* WARNING: Removing unreachable block (ram,0x000144f3ff19) */
/* WARNING: Removing unreachable block (ram,0x000144f3ff1f) */
/* WARNING: Removing unreachable block (ram,0x000144f40457) */
/* WARNING: Removing unreachable block (ram,0x000144f40469) */
/* WARNING: Removing unreachable block (ram,0x000144f3ff2d) */
/* WARNING: Removing unreachable block (ram,0x000144f40186) */
/* WARNING: Removing unreachable block (ram,0x000144f3ff3e) */
/* WARNING: Removing unreachable block (ram,0x000144f3ff4e) */
/* WARNING: Removing unreachable block (ram,0x000144f3ff59) */
/* WARNING: Removing unreachable block (ram,0x000144f403a2) */
/* WARNING: Removing unreachable block (ram,0x000144f403b5) */
/* WARNING: Removing unreachable block (ram,0x000144f3ff62) */
/* WARNING: Removing unreachable block (ram,0x000144f3ffa6) */
/* WARNING: Removing unreachable block (ram,0x000144f3ffad) */
/* WARNING: Removing unreachable block (ram,0x000144f4040f) */
/* WARNING: Removing unreachable block (ram,0x000144f3ffb7) */
/* WARNING: Removing unreachable block (ram,0x000144f4021c) */
/* WARNING: Removing unreachable block (ram,0x000144f4048e) */
/* WARNING: Removing unreachable block (ram,0x000144f4022c) */
/* WARNING: Removing unreachable block (ram,0x000144f3ffd1) */
/* WARNING: Removing unreachable block (ram,0x000144f3ffd9) */
/* WARNING: Removing unreachable block (ram,0x000144f40479) */
/* WARNING: Removing unreachable block (ram,0x000144f3fff8) */
/* WARNING: Removing unreachable block (ram,0x000144f3fffd) */
/* WARNING: Removing unreachable block (ram,0x000144f4042e) */
/* WARNING: Removing unreachable block (ram,0x000144f40014) */
/* WARNING: Removing unreachable block (ram,0x000144f4001a) */
/* WARNING: Removing unreachable block (ram,0x000144f40021) */
/* WARNING: Removing unreachable block (ram,0x000144f40313) */
/* WARNING: Removing unreachable block (ram,0x000144f4002b) */
/* WARNING: Removing unreachable block (ram,0x000144f40439) */
/* WARNING: Removing unreachable block (ram,0x000144f40038) */
/* WARNING: Removing unreachable block (ram,0x000144f4003e) */
/* WARNING: Removing unreachable block (ram,0x000144f40418) */
/* WARNING: Removing unreachable block (ram,0x000144f4005c) */
/* WARNING: Removing unreachable block (ram,0x000144f40422) */
/* WARNING: Removing unreachable block (ram,0x000144f40063) */
/* WARNING: Removing unreachable block (ram,0x000144f4007f) */
/* WARNING: Removing unreachable block (ram,0x000144f40093) */
/* WARNING: Removing unreachable block (ram,0x000144f40481) */
/* WARNING: Removing unreachable block (ram,0x000144f400a0) */
/* WARNING: Removing unreachable block (ram,0x000144f400a9) */
/* WARNING: Removing unreachable block (ram,0x000144f400b4) */
/* WARNING: Removing unreachable block (ram,0x000144f40196) */
/* WARNING: Removing unreachable block (ram,0x000144f402e1) */
/* WARNING: Removing unreachable block (ram,0x000144f402ee) */
/* WARNING: Removing unreachable block (ram,0x000144f400be) */
/* WARNING: Removing unreachable block (ram,0x000144f401c2) */
/* WARNING: Removing unreachable block (ram,0x000144f400c5) */
/* WARNING: Removing unreachable block (ram,0x000144f400d2) */
/* WARNING: Removing unreachable block (ram,0x000144f400d9) */
/* WARNING: Removing unreachable block (ram,0x000144f402f3) */
/* WARNING: Removing unreachable block (ram,0x000144f400f0) */
/* WARNING: Removing unreachable block (ram,0x000144f401ce) */
/* WARNING: Removing unreachable block (ram,0x000144f40101) */
/* WARNING: Removing unreachable block (ram,0x000144f4010f) */
/* WARNING: Removing unreachable block (ram,0x000144f40117) */
/* WARNING: Removing unreachable block (ram,0x000144f40125) */
/* WARNING: Removing unreachable block (ram,0x000144f40138) */
/* WARNING: Removing unreachable block (ram,0x000144f40239) */
/* WARNING: Removing unreachable block (ram,0x000144f40288) */
/* WARNING: Removing unreachable block (ram,0x000144f40245) */
/* WARNING: Removing unreachable block (ram,0x000144f40148) */
/* WARNING: Removing unreachable block (ram,0x000144f40153) */
/* WARNING: Removing unreachable block (ram,0x000144f40444) */
/* WARNING: Removing unreachable block (ram,0x000144f4016b) */
/* WARNING: Removing unreachable block (ram,0x000144f40175) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_140048420(longlong *param_1,byte param_2)

{
  code *pcVar1;
  char cVar2;
  undefined4 uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  ushort uVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_138 [64];
  undefined1 auStack_f8 [8];
  undefined4 uStack_f0;
  byte bStack_7b;
  undefined1 auStack_78 [24];
  undefined8 uStack_60;
  
  if ((param_2 & 1) != 0) {
    uStack_60 = 0x14004846f;
    cVar2 = FUN_144f3fde0(param_1,1);
    if (cVar2 == '\0') {
      return false;
    }
    lVar5 = param_1[4];
    uStack_60 = 0x140048483;
    plVar4 = (longlong *)FUN_144e91330(lVar5);
    uStack_60 = 0x140048491;
    uVar3 = (**(code **)(*plVar4 + 0x40))(plVar4,0);
    uStack_60 = 0x14004849b;
    func_0x000144f40880(param_1,uVar3);
    uStack_60 = 0x1400484a9;
    uVar3 = (**(code **)(*plVar4 + 0x40))(plVar4,1);
    uStack_60 = 0x1400484b3;
    func_0x000144f40880(param_1,uVar3);
    uStack_60 = 0x1400484c1;
    uVar3 = (**(code **)(*plVar4 + 0x40))(plVar4,2);
    uStack_60 = 0x1400484cb;
    func_0x000144f40880(param_1,uVar3);
    uStack_60 = 0x1400484d9;
    uVar3 = (**(code **)(*plVar4 + 0x40))(plVar4,3);
    uStack_60 = 0x1400484e3;
    func_0x000144f40880(param_1,uVar3);
    uStack_60 = 0x1400484f3;
    lVar5 = FUN_144e4c850(*(undefined4 *)(lVar5 + 0x58),*(undefined1 *)(lVar5 + 0x84));
    if (lVar5 != 0) {
      lVar7 = *(longlong *)(lVar5 + 0x18);
      if (lVar7 != 0 && (ulonglong)*(ushort *)(lVar5 + 0xd8) != 0xffff) {
        lVar5 = (ulonglong)*(ushort *)(lVar5 + 0xd8) * 0x110;
        lVar9 = lVar7 + lVar5;
        uStack_60 = 0x140048534;
        uVar3 = (**(code **)(*(longlong *)(lVar7 + lVar5) + 0x40))(lVar9,0);
        uStack_60 = 0x14004853e;
        func_0x000144f40880(param_1,uVar3);
        uStack_60 = 0x14004854d;
        uVar3 = (**(code **)(*(longlong *)(lVar7 + lVar5) + 0x40))(lVar9,1);
        uStack_60 = 0x140048557;
        func_0x000144f40880(param_1,uVar3);
        uStack_60 = 0x140048566;
        uVar3 = (**(code **)(*(longlong *)(lVar7 + lVar5) + 0x40))(lVar9,2);
        uStack_60 = 0x140048570;
        func_0x000144f40880(param_1,uVar3);
        uStack_60 = 0x14004857f;
        uVar3 = (**(code **)(*(longlong *)(lVar7 + lVar5) + 0x40))(lVar9,3);
        uStack_60 = 0x140048589;
        func_0x000144f40880(param_1,uVar3);
      }
    }
    *(byte *)((longlong)param_1 + 0x35) = *(byte *)((longlong)param_1 + 0x35) | 4;
  }
  if (((param_2 & 2) != 0) && (param_1[5] != 0)) {
    lVar5 = param_1[4];
    if ((lVar5 == 0) || ((*(byte *)(lVar5 + 0x84) & 8) == 0)) {
      bVar10 = false;
    }
    else {
      if (param_1[5] != 0) {
        FUN_1400b44f0(param_1);
        uVar6 = func_0x000144e3bfa0(param_1);
        lVar7 = func_0x000144e8f430(uVar6,_DAT_14999af8c);
        if ((lVar7 != 0) && ((char)param_1[6] == '\f')) {
          FUN_1400b87b0(lVar7,param_1);
        }
        cVar2 = func_0x000144f404e0(param_1);
        if ((cVar2 == '\0') || (param_1[7] != 0)) {
          if (((char)param_1[6] == '\x04') &&
             ((((*(byte *)((longlong)param_1 + 0x37) & 0x10) == 0 && (param_1[7] == 0)) &&
              (lVar7 = func_0x000144dd11e0(*(undefined4 *)((longlong)param_1 + 0x9c)), lVar7 != 0)))
             ) {
            FUN_1400b9230(lVar7);
            FUN_14080a870(lVar7);
          }
        }
        else {
          (**(code **)(*param_1 + 0x298))(param_1);
          if (param_1[7] != 0) {
            (**(code **)(*param_1 + 0x2a0))(param_1);
          }
        }
        if ((*(byte *)(lVar5 + 0xba) & 0x80) == 0) {
          uVar8 = *(ushort *)(param_1 + 0x13);
          *(ushort *)(param_1 + 0x13) = uVar8 & 0xff7f;
          func_0x0001400b5ab0(uVar8 & 0xff7f,*(undefined4 *)((longlong)param_1 + 0xa4));
        }
        if (((*(ushort *)(param_1 + 0x13) & 0xc) != 0) && ((*(byte *)(lVar5 + 0xba) & 0xc) == 0)) {
          uVar8 = *(ushort *)(param_1 + 0x13) & 0xfff3;
          *(ushort *)(param_1 + 0x13) = uVar8;
          func_0x0001400b5ab0(uVar8,*(undefined4 *)((longlong)param_1 + 0xa4));
          *(byte *)(param_1[5] + 0x128) = *(byte *)(param_1[5] + 0x128) | 0x80;
        }
        if (((*(byte *)((longlong)param_1 + 0x31) & 8) == 0) &&
           ((*(ushort *)((longlong)param_1 + 0x96) & 0xf) == 6)) {
          *(byte *)((longlong)param_1 + 0x31) = *(byte *)((longlong)param_1 + 0x31) | 8;
          FUN_1400b8660(*(undefined4 *)(param_1[4] + 0x5c));
        }
        pcVar1 = (code *)**(undefined8 **)param_1[5];
        if (pcVar1 != (code *)&UNK_144e89130) {
          (*pcVar1)((undefined8 *)param_1[5],param_1);
        }
        if ((*(byte *)((longlong)param_1 + 0x34) & 0x40) != 0) {
          FUN_1400b6b50(param_1);
        }
        if (((((char)param_1[6] == '\x04') || ((char)param_1[6] == '\x01')) &&
            ((*(byte *)(lVar5 + 0x9d) & 2) != 0)) &&
           ((cVar2 = FUN_144e8f2f0(param_1,0x148ef9ae0), cVar2 == '\0' &&
            (cVar2 = FUN_1453472f0(param_1), cVar2 == '\0')))) {
          FUN_145224aa0(auStack_138,param_1);
          FUN_140ae4a50(auStack_f8);
          func_0x000145072400(auStack_78,auStack_138);
          uStack_f0 = 0;
          bStack_7b = bStack_7b | 0x10;
          FUN_1400b9980(auStack_f8);
        }
      }
      bVar10 = param_1[5] != 0;
    }
    return bVar10;
  }
  return (bool)(param_2 & 1);
}

