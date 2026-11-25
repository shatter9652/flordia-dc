// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14001c990  size: 672 bytes
// Name:    FUN_14001c990
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144f84200, FUN_144bb7860, FUN_14535e670, FUN_145647140, FUN_14521d420, FUN_1447b2d20, FUN_1447b26b0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14001c990(undefined4 param_1,longlong param_2,undefined1 *param_3,undefined8 *param_4,
                  longlong param_5,undefined4 param_6,undefined8 param_7,ulonglong *param_8)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  ulonglong *puVar10;
  undefined1 auVar11 [16];
  undefined8 auStack_150 [3];
  undefined1 uStack_138;
  undefined8 uStack_130;
  undefined1 auStack_128 [8];
  undefined1 auStack_120 [72];
  undefined1 auStack_d8 [16];
  undefined8 uStack_c8;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined1 *puStack_88;
  uint uStack_80;
  undefined4 uStack_78;
  uint uStack_74;
  undefined1 *puStack_70;
  ulonglong uStack_68;
  undefined1 *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  longlong lStack_48;
  
  lVar3 = *(longlong *)
           (param_2 + 0x10 + (ulonglong)*(byte *)(param_2 + 0xc0 + (ulonglong)DAT_14a95df40) * 8);
  if (*(int *)(lVar3 + 0x9c) == 0) {
    auStack_150[0] = 0x14001c9df;
    func_0x0001404f9e40(param_2,param_1);
  }
  auStack_150[0] = 0x14001c9f7;
  func_0x000144f92480(auStack_120);
  auStack_150[0] = 0x14001ca03;
  func_0x000144e3f570(auStack_d8);
  if (param_3 == (undefined1 *)0x0) {
    uStack_138 = 1;
    FUN_14521d420(auStack_d8,auStack_120,0,0);
    uStack_c8 = *(undefined8 *)(param_2 + 0xa8);
    param_3 = auStack_d8;
  }
  uStack_68 = 0;
  puStack_60 = (undefined1 *)0x0;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_74 = 0;
  puVar10 = param_8;
  if (param_8 == (ulonglong *)0x0) {
    puVar10 = &uStack_68;
  }
  uVar4 = *(undefined4 *)(param_4 + 1);
  uStack_130 = 0x14001ca71;
  lVar2 = FUN_145647140();
  lVar2 = -lVar2;
  puStack_70 = auStack_128 + lVar2;
  uStack_98 = *param_4;
  uStack_90 = uVar4;
  uStack_78 = uVar4;
  lStack_48 = lVar3;
  *(undefined8 *)((longlong)auStack_150 + lVar2) = 0x14001caad;
  FUN_1447b26b0(lVar3,&uStack_98,&uStack_78,param_6);
  uVar1 = uStack_74;
  puVar9 = auStack_128 + lVar2;
  puVar8 = auStack_128 + lVar2;
  if ((ulonglong)uStack_74 == 0) {
    if (*(int *)(param_5 + 8) == 0) goto LAB_14001cbff;
    if (param_8 == (ulonglong *)0x0) {
      *(undefined8 *)(auStack_128 + lVar2 + -8) = 0x14001cb84;
      lVar3 = FUN_145647140();
      puVar8 = auStack_128 + -lVar3 + lVar2;
      puStack_60 = auStack_128 + -lVar3 + lVar2;
      uStack_68 = uStack_68 & 0xffffffff00000000;
    }
  }
  else {
    puVar8 = auStack_128 + lVar2;
    if (param_8 == (ulonglong *)0x0) {
      uVar6 = 1;
      if (0xd < uStack_74) {
        uVar6 = ((ulonglong)uStack_74 * 100 + 0x56) / 0x57 - 1;
        uVar6 = uVar6 >> 1 | uVar6;
        uVar6 = uVar6 >> 2 | uVar6;
        uVar6 = uVar6 >> 4 | uVar6;
        uVar6 = uVar6 >> 8 | uVar6;
        uVar6 = uVar6 >> 0x10 | uVar6;
        uVar6 = (uVar6 >> 0x20 | uVar6) + 1 >> 4;
      }
      lVar5 = uVar6 * 0x510;
      *(undefined8 *)(auStack_128 + lVar2 + -8) = 0x14001cb3c;
      lVar3 = FUN_145647140();
      lVar3 = -lVar3;
      puVar8 = auStack_128 + lVar3 + lVar2;
      puStack_60 = auStack_128 + lVar3 + lVar2;
      auVar11[1] = DAT_14615967a;
      auVar11[0] = DAT_14615967a;
      auVar11[2] = DAT_14615967a;
      auVar11[3] = DAT_14615967a;
      auVar11[4] = DAT_14615967a;
      auVar11[5] = DAT_14615967a;
      auVar11[6] = DAT_14615967a;
      auVar11[7] = DAT_14615967a;
      auVar11[8] = DAT_14615967a;
      auVar11[9] = DAT_14615967a;
      auVar11[10] = DAT_14615967a;
      auVar11[0xb] = DAT_14615967a;
      auVar11[0xc] = DAT_14615967a;
      auVar11[0xd] = DAT_14615967a;
      auVar11[0xe] = DAT_14615967a;
      auVar11[0xf] = DAT_14615967a;
      uStack_68 = CONCAT44(uStack_68._4_4_,(int)uVar6);
      lVar7 = 0;
      do {
        *(undefined1 (*) [16])(auStack_128 + lVar7 + lVar3 + lVar2) = auVar11;
        lVar7 = lVar7 + 0x510;
      } while (lVar5 != lVar7);
    }
  }
  puVar9 = puStack_70;
  puStack_88 = puStack_70;
  uStack_80 = uVar1;
  *(undefined1 ***)(puVar8 + -0x10) = &puStack_88;
  *(undefined8 *)(puVar8 + -0x38) = 0x14001cbc1;
  FUN_14535e670(param_2,param_3,param_6,puVar10);
  *(uint *)(puVar8 + -0x10) = uVar1;
  *(undefined1 **)(puVar8 + -0x18) = puVar9;
  *(ulonglong **)(puVar8 + -0x20) = puVar10;
  *(undefined8 *)(puVar8 + -0x48) = 0x14001cbe8;
  FUN_144bb7860(param_2,param_3,param_6,param_7);
  lVar3 = lStack_48;
  *(undefined8 *)(puVar8 + -0x28) = 0x14001cbfb;
  FUN_1447b2d20(lVar3,param_6,&uStack_78);
  puVar9 = puVar8;
LAB_14001cbff:
  *(undefined8 *)(puVar9 + -0x28) = 0x14001cc0c;
  FUN_144f84200(&uStack_68);
  *(undefined8 *)(puVar9 + -0x28) = 0x14001cc15;
  func_0x000144e3f350(auStack_d8);
  *(undefined8 *)(puVar9 + -0x28) = 0x14001cc1e;
  func_0x00014521d280(auStack_120);
  return;
}

