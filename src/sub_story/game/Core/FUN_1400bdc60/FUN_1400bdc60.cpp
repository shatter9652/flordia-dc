// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400bdc60  size: 120 bytes
// Name:    FUN_1400bdc60
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1401bb6d0, FUN_144f21630
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


ulonglong FUN_1400bdc60(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  char cVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong *plVar9;
  bool bVar10;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 uStack_20;
  
  uStack_24 = 0x275822c4;
  FUN_1401bb6d0(param_3,&uStack_24,0);
  uVar6 = uStack_20;
  uVar1 = (uint)uStack_20;
  cVar2 = func_0x000144f21790(uStack_20 & 0xffffffff);
  if (cVar2 == '\0') {
    uVar6 = FUN_144f21630(&uStack_24,*(undefined8 *)(*param_1 + 0x2a0),param_2,(longlong)param_1 + 9
                         );
    return uVar6;
  }
  uVar4 = uStack_20._4_4_;
  if (0x22 < uVar1) {
    return 0;
  }
  uVar8 = uVar6 & 0xffffffff;
  plVar9 = *(longlong **)(*(longlong *)(*param_1 + 0x298) + 0x18);
  switch(uVar8) {
  case 0:
  case 1:
  case 2:
  case 0xd:
    return 1;
  case 3:
    if (uStack_20._4_4_ == 0xde7ecd51) {
      uVar6 = 1;
    }
    else {
      lVar7 = (**(code **)(*plVar9 + 0x40))();
      uVar6 = 0;
      if ((uStack_20._4_4_ != 0) && (lVar7 != 0)) {
        uVar5 = (**(code **)(*plVar9 + 0x40))(plVar9);
        lVar7 = FUN_140266500(uVar5,uStack_20._4_4_);
        uVar6 = (ulonglong)(lVar7 != 0);
      }
    }
    return uVar6;
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
    uStack_28 = 0;
    uStack_20 = 0;
    FUN_140092f40(&uStack_28,uVar4,plVar9);
    uVar5 = uStack_20;
    uVar3 = uStack_28;
    cVar2 = func_0x00014505bd10(uStack_28,uStack_20);
    if (cVar2 == '\0') {
      return 0;
    }
    uVar3 = FUN_144e0b0e0(uVar3,uVar5);
    break;
  case 0xb:
  case 0xc:
    lVar7 = (**(code **)(*plVar9 + 0x18))();
    if (((lVar7 != 0) &&
        (uVar6 = (ulonglong)*(byte *)(lVar7 + 0xc0 + (ulonglong)DAT_14a952378), uVar6 != 0xff)) &&
       (lVar7 = *(longlong *)(lVar7 + 0x10 + uVar6 * 8), lVar7 != 0)) {
      plVar9 = (longlong *)(lVar7 + 0x20);
      if (plVar9 == (longlong *)0x0) {
        uVar6 = 0;
      }
      else {
        lVar7 = *plVar9;
        bVar10 = true;
        if (*(char *)(lVar7 + 0x79) == -1) {
          bVar10 = *(char *)(lVar7 + 0x7e) != -1;
        }
        uVar6 = (ulonglong)(byte)(uStack_20._4_4_ < 2 & bVar10);
      }
      return uVar6;
    }
  default:
    return 0;
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x20:
  case 0x21:
  case 0x22:
    uStack_28 = 0;
    uStack_20 = 0;
    FUN_144370000(&uStack_28,uVar4,*(longlong *)(*param_1 + 0x298),
                  CONCAT71((int7)((ulonglong)(&UNK_146766d60 + *(int *)(&UNK_146766d60 + uVar8 * 4))
                                 >> 8),1));
    uVar5 = uStack_20;
    uVar3 = uStack_28;
    cVar2 = func_0x00014505bd10(uStack_28,uStack_20);
    if (cVar2 == '\0') {
      return 0;
    }
    uVar3 = FUN_144e0b0e0(uVar3,uVar5);
  }
  if ((uVar1 < 0x1d) && (uVar8 = 1, (0x10200400U >> (uVar1 & 0x1f) & 1) != 0))
  goto code_r0x00014505bdbf;
  uVar8 = 0;
  switch(uVar3) {
  case 0:
    if (uVar1 < 0x21) {
      uVar8 = 0x100900040;
code_r0x00014505bd7c:
      uVar8 = uVar8 >> (uVar6 & 0x3f);
      goto code_r0x00014505bdbf;
    }
    break;
  case 1:
    if (uVar1 < 0x1e) {
      uVar4 = 0x20408020;
code_r0x00014505bd8d:
      uVar8 = (ulonglong)(uVar4 >> (uVar1 & 0x1f));
      goto code_r0x00014505bdbf;
    }
    break;
  case 2:
    if (uVar1 < 0x1f) {
      uVar4 = 0x41010010;
      goto code_r0x00014505bd8d;
    }
    break;
  case 3:
    if (uVar1 < 0x20) {
      uVar4 = 0x82020080;
      goto code_r0x00014505bd8d;
    }
    break;
  default:
    goto code_r0x00014505bdbf;
  case 5:
  case 6:
    if (uVar1 < 0x23) {
      uVar8 = 0x404080200;
      goto code_r0x00014505bd7c;
    }
    break;
  case 8:
  case 9:
    if (uVar1 < 0x22) {
      uVar8 = 0x208040100;
      goto code_r0x00014505bd7c;
    }
  }
  uVar8 = 0;
code_r0x00014505bdbf:
  return uVar8 & 0xffffffffffffff01;
}

