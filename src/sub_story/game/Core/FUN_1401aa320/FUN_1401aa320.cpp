// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401aa320  size: 521 bytes
// Name:    FUN_1401aa320
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1401abb30, FUN_1400825f0, FUN_1401aa530, FUN_1401aa610
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1401aa320(longlong param_1,ulonglong param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  byte bVar6;
  ulonglong unaff_RBX;
  uint7 uVar7;
  uint uVar8;
  longlong lVar9;
  
  if (*(int *)(param_1 + 0x74) < _DAT_1499aab1c) {
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x20) + (param_2 & 0xffffffff) * 8);
    uVar1 = *(uint *)(lVar3 + 0x20);
    if (uVar1 == 0x1ffff) {
LAB_1401aa4f9:
      lVar9 = 0;
    }
    else {
      uVar8 = *(uint *)(_DAT_14abb6918[5] + (ulonglong)(uVar1 & 0x1ffff) * 4);
      if ((~uVar8 & *(uint *)(_DAT_14abb6918 + 6)) != 0) goto LAB_1401aa4f9;
      uVar8 = uVar8 & 0x7fe0000;
      if ((uVar8 != (uVar1 & 0xfffe0000)) || (*_DAT_14abb6918 == 0)) goto LAB_1401aa4f9;
      lVar9 = *_DAT_14abb6918 + (ulonglong)((uVar1 & 0x1ffff) * (int)_DAT_14abb6918[1]);
      uVar2 = *(uint *)(lVar9 + 0x9c);
      unaff_RBX = (ulonglong)uVar2;
      cVar4 = func_0x000144f80780(unaff_RBX,uVar1 & 0xfffe0000,uVar8,0);
      uVar7 = (uint7)(uint3)(uVar2 >> 8);
      if (cVar4 == '\0') {
        lVar5 = func_0x000144ef6280();
        if (lVar5 != 0) {
          bVar6 = 0;
          goto LAB_1401aa3db;
        }
      }
      else {
        lVar5 = func_0x000144eda820(unaff_RBX);
        uVar1 = *(uint *)(lVar5 + 0x10);
        lVar5 = func_0x000144ef6280(uVar2);
        if (lVar5 == 0) {
          if ((uVar1 >> 0x18 & 1) != 0) {
            unaff_RBX = CONCAT71(uVar7,1);
            goto LAB_1401aa482;
          }
        }
        else {
          bVar6 = (byte)(uVar1 >> 0x18) & 1;
LAB_1401aa3db:
          unaff_RBX = CONCAT71(uVar7,1);
          if (((((*(byte *)(lVar5 + 0x74) & 0x10) != 0) || ((*(byte *)(lVar5 + 0x100) & 0x10) != 0))
              || ((*(byte *)(lVar5 + 0x85) & 0x80) != 0)) ||
             (*(char *)(lVar5 + 0x111) < '\0' || bVar6 != 0)) goto LAB_1401aa482;
        }
      }
    }
    bVar6 = *(byte *)(lVar3 + 0x91);
    unaff_RBX = CONCAT71((int7)(unaff_RBX >> 8),1);
    if (((bVar6 & 8) != 0) || (cVar4 = FUN_1401aa530(lVar3), cVar4 != '\0')) goto LAB_1401aa482;
    if (((uint)(_DAT_14abbef40 - *(int *)(lVar3 + 0x7c)) <
         (uint)(longlong)(_DAT_1499aab14 * _DAT_146159c28)) ||
       (((bVar6 & 0x40) == 0 || (*(byte *)(lVar3 + 0x92) & 2) == 0 ||
        (cVar4 = FUN_1401abb30(lVar9), cVar4 == '\0')))) {
      cVar4 = FUN_1400825f0(lVar9);
      if (cVar4 == '\0') {
        cVar4 = func_0x0001401a7fc0(*(undefined1 *)(param_1 + 0xe7),*(undefined1 *)(param_1 + 0xe8))
        ;
        if (cVar4 != '\0') goto LAB_1401aa462;
      }
      else if (*(char *)(param_1 + 0xe8) == '\x01') {
LAB_1401aa462:
        if ((*(byte *)(lVar3 + 0x91) & 0x40) == 0) goto LAB_1401aa4e4;
      }
      cVar4 = FUN_1401aa610(lVar3);
      if (cVar4 == '\0') {
        if ((*(byte *)(lVar3 + 0x92) & 2) == 0) goto LAB_1401aa482;
        bVar6 = *(byte *)(lVar3 + 0x91);
      }
      else if (((*(byte *)(lVar3 + 0x92) & 2) == 0) ||
              (bVar6 = *(byte *)(lVar3 + 0x91), (bVar6 & 0x40) == 0)) goto LAB_1401aa482;
      if ((((bVar6 & 0x60) != 0) || (*(float *)(lVar3 + 0x48) != 0.0)) ||
         (NAN(*(float *)(lVar3 + 0x48)))) goto LAB_1401aa482;
    }
  }
LAB_1401aa4e4:
  unaff_RBX = 0;
LAB_1401aa482:
  return unaff_RBX & 0xffffffff;
}

