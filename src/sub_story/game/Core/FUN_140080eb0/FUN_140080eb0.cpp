// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140080eb0  size: 215 bytes
// Name:    FUN_140080eb0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144ef60c0, FUN_144ef6160, FUN_144dd7510, FUN_145226d60, FUN_144ef3e20
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


ulonglong FUN_140080eb0(ulonglong param_1,longlong *param_2)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined7 uVar6;
  
  param_1 = param_1 & 0xfffffffffffffff0;
  cVar2 = FUN_144ef6160(param_1);
  if (cVar2 == '\0') {
    cVar2 = FUN_144ef60c0(param_1);
    if (cVar2 != '\0') goto LAB_140080edd;
  }
  else {
LAB_140080edd:
    lVar3 = FUN_144dd7510(*(undefined4 *)(param_1 + 0x9c));
    if (lVar3 != 0) {
      uVar5 = 0;
      if ((6 < *(byte *)(lVar3 + 0xfa)) || ((0x62U >> (*(byte *)(lVar3 + 0xfa) & 0x1f) & 1) == 0))
      goto LAB_140080f79;
      lVar3 = FUN_144ef3e20(param_2);
      if (lVar3 != 0) {
        uVar1 = *(uint *)(lVar3 + 0x9c);
        uVar5 = (ulonglong)uVar1;
        cVar2 = func_0x000144e238f0(uVar5);
        if (cVar2 == '\0') {
          cVar2 = FUN_145226d60(uVar1);
          if (cVar2 == '\0') goto LAB_140080f77;
        }
      }
      lVar4 = (**(code **)(*param_2 + 0x10))(param_2);
      if ((lVar4 == 0) || (*(char *)(lVar4 + 0x30) != '\x02')) {
        uVar5 = CONCAT71((int7)(uVar5 >> 8),1);
        if (lVar3 == 0) goto LAB_140080f79;
        lVar4 = FUN_144dd7510(*(undefined4 *)(lVar3 + 0x9c));
        if (lVar4 == 0) goto LAB_140080f79;
      }
      uVar6 = (undefined7)(uVar5 >> 8);
      uVar5 = CONCAT71(uVar6,1);
      if (*(byte *)(lVar4 + 0xfa) < 7) {
        uVar5 = CONCAT71(uVar6,0x1d >> (*(byte *)(lVar4 + 0xfa) & 0x1f));
      }
      goto LAB_140080f79;
    }
  }
LAB_140080f77:
  uVar5 = 0;
LAB_140080f79:
  return uVar5 & 0xffffffffffffff01;
}

