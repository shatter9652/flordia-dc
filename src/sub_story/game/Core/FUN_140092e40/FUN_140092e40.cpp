// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140092e40  size: 122 bytes
// Name:    FUN_140092e40
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140092ec0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


ulonglong FUN_140092e40(longlong param_1,uint param_2,int param_3)

{
  longlong *plVar1;
  char cVar2;
  undefined4 uVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined4 auStack_28 [2];
  undefined8 uStack_20;
  
  plVar1 = *(longlong **)(param_1 + 0x18);
  uVar7 = (ulonglong)param_2;
  if (param_2 - 4 < 7) {
code_r0x000140092e55:
    func_0x0001403df4b0((longlong)&uStack_20 + 4,param_3);
    uVar7 = FUN_140092ec0(plVar1,uVar7,uStack_20._4_4_);
  }
  else {
    switch(uVar7) {
    case 0:
    case 1:
    case 2:
      uVar7 = 1;
      break;
    case 3:
      if (param_3 == -0x218132af) {
        uVar7 = 1;
      }
      else {
        lVar5 = (**(code **)(*plVar1 + 0x40))();
        uVar7 = 0;
        if ((param_3 != 0) && (lVar5 != 0)) {
          uVar6 = (**(code **)(*plVar1 + 0x40))(plVar1);
          lVar5 = FUN_140266500(uVar6,param_3);
          uVar7 = (ulonglong)(lVar5 != 0);
        }
      }
      return uVar7;
    default:
      uVar7 = 0;
      break;
    case 0xe:
    case 0xf:
    case 0x10:
    case 0x11:
    case 0x12:
    case 0x13:
    case 0x14:
      goto code_r0x000140092e55;
    case 0x1c:
    case 0x1d:
    case 0x1e:
    case 0x1f:
    case 0x20:
    case 0x21:
    case 0x22:
      auStack_28[0] = 0;
      uStack_20 = 0;
      FUN_144370000(auStack_28,param_3,param_1,1);
      uVar6 = uStack_20;
      uVar3 = auStack_28[0];
      cVar2 = func_0x00014505bd10(auStack_28[0],uStack_20);
      if (cVar2 == '\0') {
        return 0;
      }
      uVar3 = FUN_144e0b0e0(uVar3,uVar6);
      if ((param_2 < 0x1d) && (uVar8 = 1, (0x10200400U >> (param_2 & 0x1f) & 1) != 0))
      goto code_r0x00014505bdbf;
      uVar8 = 0;
      switch(uVar3) {
      case 0:
        if (param_2 < 0x21) {
          uVar8 = 0x100900040;
code_r0x00014505bd7c:
          uVar8 = uVar8 >> (uVar7 & 0x3f);
          goto code_r0x00014505bdbf;
        }
        break;
      case 1:
        if (param_2 < 0x1e) {
          uVar4 = 0x20408020;
code_r0x00014505bd8d:
          uVar8 = (ulonglong)(uVar4 >> (param_2 & 0x1f));
          goto code_r0x00014505bdbf;
        }
        break;
      case 2:
        if (param_2 < 0x1f) {
          uVar4 = 0x41010010;
          goto code_r0x00014505bd8d;
        }
        break;
      case 3:
        if (param_2 < 0x20) {
          uVar4 = 0x82020080;
          goto code_r0x00014505bd8d;
        }
        break;
      default:
        goto code_r0x00014505bdbf;
      case 5:
      case 6:
        if (param_2 < 0x23) {
          uVar8 = 0x404080200;
          goto code_r0x00014505bd7c;
        }
        break;
      case 8:
      case 9:
        if (param_2 < 0x22) {
          uVar8 = 0x208040100;
          goto code_r0x00014505bd7c;
        }
      }
      uVar8 = 0;
code_r0x00014505bdbf:
      return uVar8 & 0xffffffffffffff01;
    }
  }
  return uVar7;
}

