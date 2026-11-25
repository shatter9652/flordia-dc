// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140086d80  size: 526 bytes
// Name:    FUN_140086d80
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1450385b0, FUN_144d9d7a0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


ulonglong FUN_140086d80(ulonglong param_1,char param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  
  lVar7 = *(longlong *)(param_1 + 0x28);
  if (lVar7 == 0) {
LAB_140086e6f:
    uVar8 = 0;
  }
  else {
    uVar8 = param_1;
    if (*(char *)(param_1 + 0x30) == '\x02') {
      uVar1 = *(undefined4 *)(param_1 + 0x9c);
      lVar9 = func_0x000144e681d0(uVar1);
      if (((lVar9 == 0) || (*(int *)(lVar9 + 0x304) == 0)) ||
         ((*(char *)(lVar9 + 0x169) != '\x01' ||
          ((lVar9 = func_0x000144e34680(uVar1), lVar9 == 0 || (*(longlong *)(lVar9 + 0x10) == 0)))))
         ) goto LAB_140086e6f;
      cVar4 = FUN_1450385b0();
      if (cVar4 == '\0') {
        iVar6 = func_0x0001452f8e30(*(undefined4 *)(lVar7 + 0x854),*(undefined2 *)(lVar7 + 0xb14),1)
        ;
        if (iVar6 == 0 || param_2 != '\0') {
          if (iVar6 != 0) goto LAB_140086dc8;
          goto LAB_140086e6f;
        }
      }
      else if (param_2 != '\0') goto LAB_140086dc8;
      uVar8 = *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x2a0);
      cVar4 = func_0x000140452090(uVar8);
      if (cVar4 != '\0') {
        uVar8 = (ulonglong)*(uint *)(param_1 + 0x9c);
        lVar7 = func_0x000144e2a2d0(uVar8);
        if ((((lVar7 == 0) || (lVar7 = *(longlong *)(lVar7 + 0x30), lVar7 == 0)) ||
            (*(int *)(lVar7 + 0x408) == 0)) || (*(int *)(lVar7 + 0x40c) == 0)) goto LAB_140086e6f;
      }
    }
    else if (*(char *)(param_1 + 0x30) == '\x04') {
      if ((*(char *)(lVar7 + 0x138) == '\x11') && (*(char *)(lVar7 + 0xa60) != '\0'))
      goto LAB_140086e6f;
      if ((~*(uint *)(param_1 + 0xa4) & 0x7ffe) != 0) {
        uVar8 = (ulonglong)*(uint *)(param_1 + 0xa0);
        cVar4 = FUN_144d9d7a0(uVar8);
        if ((cVar4 == '\0') && (uVar8 = param_1, *(longlong *)(param_1 + 0x80) != 0)) {
          uVar8 = (ulonglong)*(uint *)(param_1 + 0x9c);
          lVar7 = func_0x000145162130(uVar8);
          if (lVar7 != 0) {
            if ((*(byte *)(lVar7 + 0x59) & 4) == 0) goto LAB_140086e6f;
            uVar8 = *(ulonglong *)(lVar7 + 0x18) | *(ulonglong *)(lVar7 + 0x10) |
                    *(ulonglong *)(lVar7 + 0x20);
            if (((uVar8 != 0) && ((*(byte *)(lVar7 + 0x58) & 1) == 0)) &&
               ((ulonglong)*(uint *)(lVar7 + 0x3c) != 0)) {
              lVar9 = 0;
              do {
                lVar2 = *(longlong *)(*(longlong *)(lVar7 + 0x40) + lVar9);
                if ((*(longlong *)(lVar2 + 0x28) == 0) &&
                   (plVar3 = *(longlong **)((ulonglong)*(byte *)(lVar2 + 0x30) * 8 + 0x14abbe7c0),
                   uVar8 = 0,
                   uVar5 = (uint)((ulonglong)(lVar2 - *plVar3) / (ulonglong)*(uint *)(plVar3 + 1)),
                   (*(uint *)(*(longlong *)((ulonglong)*(byte *)(lVar2 + 0x30) * 0x10 + 0x14ab75fb0)
                             + (ulonglong)((uVar5 & 0x3fffffff) >> 3) * 4) >> ((uVar5 & 7) << 2) & 1
                   ) != 0)) goto LAB_140086e71;
                lVar9 = lVar9 + 8;
              } while ((ulonglong)*(uint *)(lVar7 + 0x3c) << 3 != lVar9);
            }
          }
        }
      }
    }
LAB_140086dc8:
    uVar8 = CONCAT71((int7)(uVar8 >> 8),1);
  }
LAB_140086e71:
  return uVar8 & 0xffffffff;
}

