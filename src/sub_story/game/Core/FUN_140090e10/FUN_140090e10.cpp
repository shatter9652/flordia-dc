// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140090e10  size: 390 bytes
// Name:    FUN_140090e10
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144eba870, FUN_140091450, FUN_140091250, FUN_144e3f230, FUN_144f1b6c0, FUN_140090fe0, FUN_140091160
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140090e10(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  char cVar6;
  byte bVar7;
  undefined4 uVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lStack_48;
  
  lVar9 = *(longlong *)(param_1 + 0xa0);
  if ((lVar9 != 0) && (plVar4 = *(longlong **)(param_1 + 0x18), plVar4 != (longlong *)0x0)) {
    uVar8 = func_0x000144eba840(plVar4[0xb]);
    lVar9 = FUN_144eba870(*(undefined4 *)(lVar9 + 0x48),*(undefined8 *)(lVar9 + 0x50),uVar8);
    if ((lVar9 != 0) &&
       ((*(int *)(param_1 + 0xd8) == 0 ||
        (cVar6 = FUN_144e3f230(*(int *)(param_1 + 0xd8),*(undefined4 *)(lVar9 + 0x10)),
        cVar6 == '\0')))) {
      *(undefined4 *)(param_1 + 0xd8) = _DAT_14abbef40;
      lVar5 = *(longlong *)(*(longlong *)(*plVar4 + 8) + 0x50);
      *(undefined4 *)(param_1 + 0xac) = 0;
      *(undefined4 *)(param_1 + 0xbc) = 0;
      *(undefined4 *)(param_1 + 0xcc) = 0;
      *(undefined4 *)(param_1 + 0xfc) = 0;
      uVar1 = *(uint *)(lVar9 + 4);
      if (((ulonglong)uVar1 != 0) && (lVar5 != 0)) {
        lVar9 = *(longlong *)(lVar9 + 8);
        lVar11 = 0;
        do {
          uVar2 = *(uint *)(lVar9 + lVar11);
          if (uVar2 != 0x1ffff) {
            uVar3 = *(uint *)(_DAT_14ab7f648[5] + (ulonglong)(uVar2 & 0x1ffff) * 4);
            if (((((uVar2 ^ uVar3) < 0x20000) &&
                 ((uVar3 & *(uint *)(_DAT_14ab7f648 + 6)) == *(uint *)(_DAT_14ab7f648 + 6))) &&
                (lVar12 = (ulonglong)((uVar2 & 0x1ffff) * (int)_DAT_14ab7f648[1]) + *_DAT_14ab7f648,
                *_DAT_14ab7f648 != 0)) &&
               (lStack_48 = lVar12, cVar6 = FUN_144f1b6c0(lVar5,lVar12), cVar6 != '\0')) {
              if ((*(char *)(lVar5 + 0x41) == '\x01') && (-1 < *(int *)(lVar12 + 0x70))) {
                FUN_140091450(lVar12);
              }
              if (DAT_14a9ec598 != '\0') {
                FUN_140091250(param_1,lVar12);
              }
              cVar6 = FUN_140090fe0(lVar12);
              bVar7 = func_0x000140090fa0(lVar12);
              uVar10 = (ulonglong)bVar7 << 4 | 0xa8;
              if (cVar6 != '\0') {
                uVar10 = 200;
              }
              FUN_140091160(uVar10 + param_1,&lStack_48);
            }
          }
          lVar11 = lVar11 + 4;
        } while ((ulonglong)uVar1 << 2 != lVar11);
      }
    }
  }
  return;
}

