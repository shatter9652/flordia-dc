// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140129e40  size: 275 bytes
// Name:    FUN_140129e40
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1455db8cc, FUN_14004a750, FUN_1455db934
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140129e40(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  int *piVar9;
  undefined8 unaff_RSI;
  undefined8 unaff_RDI;
  longlong unaff_GS_OFFSET;
  float fVar10;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined8 uStack_24;
  undefined8 uStack_1c;
  uint uStack_14;
  uint uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  uint uStack_4;
  
  uStack_8 = (undefined4)unaff_RSI;
  uStack_4 = (uint)((ulonglong)unaff_RSI >> 0x20);
  uStack_10 = (uint)unaff_RDI;
  uStack_c = (undefined4)((ulonglong)unaff_RDI >> 0x20);
  if (*(int *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 4
              ) < _DAT_1492e1154) {
    uStack_40 = 0x140129ee6;
    FUN_1455db8cc(&DAT_1492e1154);
    if (_DAT_1492e1154 == -1) {
      _DAT_1492e1118 = 0;
      uRam00000001492e111c = 0;
      _DAT_1492e1120 = 0;
      _DAT_1492e1124 = 0;
      _DAT_1492e1128 = 0xbf800000;
      _DAT_1492e114c = _DAT_1492e114c & 0xffffff00;
      _DAT_1492e1150 = _DAT_1492e1150 & 0xffffff00;
      uRam00000001492e1134 = 0;
      uRam00000001492e1138 = 0;
      uRam00000001492e113c = SUB128(ZEXT812(0),3);
      uRam00000001492e1144 = 0;
      uStack_40 = 0x140129f36;
      _DAT_1492e112c = _DAT_1492e1118;
      uRam00000001492e1130 = uRam00000001492e111c;
      FUN_1455db934(&DAT_1492e1154);
    }
  }
  _DAT_1492e1118 = -0x4ccfc2d3;
  uRam00000001492e111c = 0;
  _DAT_1492e1120 = 0;
  _DAT_1492e112c = 0x3dcccccd;
  _DAT_1492e1124 = (undefined4)_DAT_146159d80;
  _DAT_1492e1128 = (undefined4)((ulonglong)_DAT_146159d80 >> 0x20);
  uStack_40 = 0x140129eae;
  fVar10 = (float)FUN_14004a750(*(undefined4 *)(param_1 + 0xc4),*(undefined8 *)(param_1 + 200));
  uVar7 = uRam00000001492e113c;
  if (0.0 < fVar10) {
    if ((ulonglong)*(uint *)(param_2 + 0x24) != 0) {
      piVar9 = *(int **)(param_2 + 0x28);
      lVar8 = (ulonglong)*(uint *)(param_2 + 0x24) * 0x48;
      do {
        if (*piVar9 == _DAT_1492e1118) {
          uVar1 = CONCAT44(uRam00000001492e111c,_DAT_1492e1118);
          uVar2 = CONCAT44(_DAT_1492e1124,_DAT_1492e1120);
          uVar3 = CONCAT44(_DAT_1492e112c,_DAT_1492e1128);
          uVar4 = CONCAT44(uRam00000001492e1134,uRam00000001492e1130);
          uVar5 = CONCAT35(uRam00000001492e1149,uRam00000001492e1144);
          uVar6 = CONCAT44(_DAT_1492e1150,_DAT_1492e114c);
          *(ulonglong *)(piVar9 + 7) = CONCAT44(uRam00000001492e1138,uRam00000001492e1134);
          *(undefined8 *)(piVar9 + 9) = uVar7;
          *(undefined8 *)(piVar9 + 0xb) = uVar5;
          *(undefined8 *)(piVar9 + 0xd) = uVar6;
          *(undefined8 *)piVar9 = uVar1;
          *(undefined8 *)(piVar9 + 2) = uVar2;
          *(undefined8 *)(piVar9 + 4) = uVar3;
          *(undefined8 *)(piVar9 + 6) = uVar4;
          return;
        }
        piVar9 = piVar9 + 0x12;
        lVar8 = lVar8 + -0x48;
      } while (lVar8 != 0);
    }
    uStack_4 = uStack_4 & 0xff000000;
    uStack_c = 0;
    uStack_8 = 0;
    uStack_48 = CONCAT44(uRam00000001492e111c,_DAT_1492e1118);
    uStack_40 = CONCAT44(_DAT_1492e1124,_DAT_1492e1120);
    uStack_38 = CONCAT44(_DAT_1492e112c,_DAT_1492e1128);
    uStack_1c = CONCAT35(uRam00000001492e1149,uRam00000001492e1144);
    uStack_30 = uRam00000001492e1130;
    uStack_2c = uRam00000001492e1134;
    uStack_28 = uRam00000001492e1138;
    uStack_24 = uRam00000001492e113c;
    uStack_14 = _DAT_1492e114c;
    uStack_10 = _DAT_1492e1150;
    FUN_143808610(param_2,&uStack_48);
    return;
  }
  piVar9 = *(int **)(param_2 + 0x28);
  if (*(uint *)(param_2 + 0x24) != 0) {
    lVar8 = (ulonglong)*(uint *)(param_2 + 0x24) * 0x48;
    do {
      if (*piVar9 == -0x4ccfc2d3) {
        if ((char)piVar9[0xe] != '\0') {
          return;
        }
        if ((((piVar9[1] != 0) && (piVar9[0xf] != 0)) && (piVar9[1] != 2)) &&
           ((char)piVar9[0x11] != '\0')) {
          *(undefined1 *)((longlong)piVar9 + 0x46) = 1;
          return;
        }
        *(undefined1 *)((longlong)piVar9 + 0x45) = 1;
        return;
      }
      piVar9 = piVar9 + 0x12;
      lVar8 = lVar8 + -0x48;
    } while (lVar8 != 0);
  }
  return;
}

