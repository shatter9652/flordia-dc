// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401774e0  size: 960 bytes
// Name:    FUN_1401774e0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1449b83e0, FUN_1449b8480, FUN_1401780c0, FUN_140177b60, FUN_140dbdf50, FUN_14548bea0, FUN_1401778b0, FUN_140177b20, FUN_140178100, FUN_14502ea60, FUN_140177a00, FUN_140177940, FUN_1449b8410, FUN_142e14ce0, FUN_14529f910, FUN_140dbe000, FUN_14270fb30, FUN_1450cb0e0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1401774e0(longlong param_1)

{
  longlong lVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  undefined8 uVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  undefined4 uVar10;
  undefined1 auStack_190 [56];
  undefined *apuStack_158 [32];
  longlong alStack_58 [6];
  
  func_0x000144ecf9d0();
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 == 0) {
    uVar5 = 1;
  }
  else {
    uVar5 = func_0x000144eb3550(*(undefined4 *)(lVar1 + 0x9c));
    func_0x00014505a930(uVar5,6,1);
    lVar6 = func_0x000144fe39f0(*(undefined4 *)(lVar1 + 0x9c));
    *(byte *)(lVar6 + 0x60) = *(byte *)(lVar6 + 0x60) | 2;
    lVar6 = func_0x000144fe39f0(*(undefined4 *)(lVar1 + 0x9c));
    bVar2 = func_0x0001401778a0(*(undefined4 *)(param_1 + 0x270));
    *(uint *)(lVar6 + 0x60) = (*(uint *)(lVar6 + 0x60) & 0xfffffffb) + (uint)(bVar2 ^ 1) * 4;
    iVar8 = _DAT_149fefbf8;
    uVar4 = func_0x000144dc06c0(_DAT_149fefbf8);
    if ((19999 < uVar4) && (cVar3 = FUN_140177940(param_1,lVar1), cVar3 != '\0')) {
      LOCK();
      bVar9 = iVar8 == _DAT_149fefbf8;
      if (bVar9) {
        _DAT_149fefbf8 = _DAT_14abbef40;
      }
      UNLOCK();
      if (bVar9) {
        FUN_140178100(*(undefined8 *)(param_1 + 0x10));
      }
    }
    iVar8 = _DAT_14abbef40;
    if (*(char *)(param_1 + 0x398) == '\x01') {
      if (*(char *)(param_1 + 0x399) == '\0') {
        iVar7 = *(int *)(param_1 + 0x390);
      }
      else {
        *(int *)(param_1 + 0x390) = _DAT_14abbef40;
        *(undefined1 *)(param_1 + 0x399) = 0;
        iVar7 = iVar8;
      }
      uVar10 = _DAT_149fefbf4;
      if (iVar7 + *(int *)(param_1 + 0x394) <= iVar8) {
        *(int *)(param_1 + 0x390) = iVar8;
        *(undefined4 *)(param_1 + 0x394) = uVar10;
        *(undefined1 *)(param_1 + 0x398) = 1;
        cVar3 = FUN_1401780c0(*(undefined4 *)(lVar1 + 0x9c));
        if (cVar3 != '\0') {
          uVar5 = func_0x000144dd0bd0(*(undefined4 *)(param_1 + 0x1f0));
          FUN_14270fb30(apuStack_158,lVar1,uVar5);
          FUN_140dbdf50(auStack_190);
          FUN_140dbe000(apuStack_158,auStack_190);
          apuStack_158[0] = &UNK_1467149b0;
          if (alStack_58[0] != 0) {
            FUN_1450cb0e0(alStack_58[0],alStack_58);
          }
          alStack_58[0] = 0;
          FUN_14529f910();
        }
      }
    }
    FUN_14502ea60(param_1,lVar1);
    uVar4 = *(uint *)(param_1 + 0x270);
    if ((((uVar4 >> 0xb & 1) == 0) && (*(char *)(param_1 + 0x268) == '\0')) &&
       (_DAT_146159bd4 < *(float *)(param_1 + 0xd8))) {
      lVar6 = FUN_14548bea0(*(undefined4 *)(lVar1 + 0x9c));
      uVar4 = uVar4 | (uint)(lVar6 != 0) << 0xb;
      *(uint *)(param_1 + 0x270) = uVar4;
      *(undefined1 *)(param_1 + 0x268) = 1;
    }
    iVar8 = _DAT_14abbef40;
    if (((uVar4 & 0x24000) == 0) && (1000 < (uint)(_DAT_14abbef40 - *(int *)(param_1 + 0x2d8)))) {
      uVar10 = *(undefined4 *)(lVar1 + 0x9c);
      cVar3 = FUN_140177b20(uVar4,*(undefined1 *)(param_1 + 0x2b4),uVar10);
      if (cVar3 != '\0') {
        lVar6 = func_0x000144e24670(uVar10);
        if (((lVar6 != 0) && (cVar3 = FUN_1449b83e0(uVar10), cVar3 != '\0')) &&
           ((-1 < (int)*(uint *)(lVar6 + 0x14) &&
            (*(uint *)(lVar6 + 0x14) = *(uint *)(lVar6 + 0x14) | 0x80000000,
            *(longlong *)(lVar6 + 0x30) != 0 || *(longlong *)(lVar6 + 0x20) != 0)))) {
          (**(code **)(lVar6 + 0x38))(lVar6 + 0x20,0x3f);
        }
        FUN_1449b8410(param_1,lVar1);
        if ((*(longlong *)(param_1 + 0x20) != 0 && *(int *)(param_1 + 0x68) != 0) &&
           ((*(uint *)(*(longlong *)(param_1 + 0x20) + 0xd0) & 0x7ff) == 0x1df)) {
          uVar10 = FUN_1449b8480(*(undefined4 *)(param_1 + 0x274),*(undefined4 *)(lVar1 + 0x9c),
                                 *(undefined1 *)(lVar1 + 0xfa));
          FUN_142e14ce0(lVar1,uVar10);
        }
        *(byte *)(param_1 + 0x272) = *(byte *)(param_1 + 0x272) & 0xfe;
        iVar8 = _DAT_14abbef40;
      }
      *(int *)(param_1 + 0x2d8) = iVar8;
    }
    FUN_140177a00(param_1,lVar1);
    uVar10 = FUN_1401778b0(*(undefined4 *)(lVar1 + 0x9c));
    *(undefined4 *)(param_1 + 0x2b8) = uVar10;
    cVar3 = FUN_140177b60(param_1);
    *(char *)(param_1 + 0x2b6) = cVar3;
    if ((cVar3 != '\0') && ((*(uint *)(param_1 + 0x140) >> 0x1c & 1) != 0)) {
      *(uint *)(param_1 + 0x140) = *(uint *)(param_1 + 0x140) & 0xefffffff;
    }
    uVar5 = 0;
    if ((4000 < (uint)(_DAT_14abbef40 - *(int *)(param_1 + 0x2c4))) &&
       ((*(uint *)(param_1 + 0x274) >> 0xe & 1) != 0)) {
      *(uint *)(param_1 + 0x274) = *(uint *)(param_1 + 0x274) & 0xffffbfff;
      if ((*(uint *)(param_1 + 0x140) >> 0x12 & 1) != 0) {
        *(uint *)(param_1 + 0x140) = *(uint *)(param_1 + 0x140) & 0xfffbffff;
        uVar5 = 0;
      }
    }
  }
  func_0x000144ecf9b0();
  return uVar5;
}

