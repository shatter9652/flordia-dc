// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140084350  size: 452 bytes
// Name:    FUN_140084350
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144efb370, FUN_1400825f0, FUN_145073ad0, FUN_140890a40, FUN_1450c5670
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140084350(longlong param_1,longlong param_2,byte *param_3)

{
  longlong *plVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 uVar6;
  
  if (*(char *)(param_1 + 0x30) == '\x03') {
    uVar6 = *(undefined4 *)(param_1 + 0x9c);
    lVar4 = func_0x000144dd7540(uVar6);
    if ((((lVar4 != 0) && ((*(byte *)(lVar4 + 0x10) & 0x20) != 0)) &&
        (*(longlong *)(lVar4 + 0x898) != 0)) && (cVar2 = func_0x000144e52860(uVar6), cVar2 == '\0'))
    {
      param_3[4] = param_3[4] | 0x40;
    }
    if ((0x1cU >> (*(uint *)(param_2 + 0x30) & 0x1f) & 1) != 0) {
      if (((char)*(uint *)(param_2 + 0x30) == '\x03') &&
         (cVar2 = FUN_1400825f0(param_1), cVar2 != '\0')) {
        uVar6 = *(undefined4 *)(param_2 + 0x9c);
        cVar2 = func_0x000144e238f0(uVar6);
        if ((cVar2 != '\0') && (cVar2 = FUN_144efb370(uVar6), cVar2 != '\0')) {
          param_3[2] = param_3[2] | 1;
        }
      }
      cVar2 = func_0x000144da28f0(*(undefined4 *)(param_1 + 0x9c));
      if (cVar2 != '\0') {
        param_3[4] = param_3[4] | 1;
        cVar2 = FUN_145073ad0(1,1,0);
        if (cVar2 == '\0') {
          if ((*param_3 & 0x40) != 0) {
            return;
          }
          plVar1 = *(longlong **)((ulonglong)*(byte *)(param_2 + 0x30) * 8 + 0x14abbe7c0);
          uVar3 = (uint)((ulonglong)(param_2 - *plVar1) / (ulonglong)*(uint *)(plVar1 + 1));
          if ((*(uint *)(*(longlong *)((ulonglong)*(byte *)(param_2 + 0x30) * 0x10 + 0x14ab75fb0) +
                        (ulonglong)((uVar3 & 0x3fffffff) >> 3) * 4) >> ((uVar3 & 7) << 2) & 1) == 0)
          {
            return;
          }
          uVar6 = *(undefined4 *)(param_1 + 0x9c);
          lVar4 = func_0x000144da6540(uVar6);
          if (((lVar4 != 0) && (*(longlong *)(lVar4 + 0x10b8) != 0)) &&
             ((*(byte *)(*(longlong *)(lVar4 + 0x10b8) + 0x14) & 1) != 0)) {
            return;
          }
        }
        else {
          uVar6 = *(undefined4 *)(param_1 + 0x9c);
        }
        lVar4 = func_0x0001450bd950(uVar6);
        lVar5 = func_0x000144dd7540(uVar6);
        if (((lVar4 != 0) && (*(char *)(lVar4 + 0x2d5) == '\x01')) &&
           (cVar2 = FUN_145073ad0(1,1,0), cVar2 == '\0')) {
          lVar4 = func_0x000145073c10();
          cVar2 = FUN_140890a40(*(undefined8 *)(lVar4 + 0x910));
          if (cVar2 == '\0') {
            lVar4 = func_0x000145073c10();
            cVar2 = FUN_1450c5670(*(undefined8 *)(lVar4 + 0x910));
            if (lVar5 == 0) {
              return;
            }
            if (cVar2 == '\0') {
              return;
            }
            lVar4 = *(longlong *)(lVar5 + 0x898);
            if (lVar4 == 0) {
              return;
            }
            lVar5 = func_0x000145073c10();
            if (*(longlong *)(lVar5 + 0x2a0) != lVar4) {
              return;
            }
          }
        }
        param_3[3] = param_3[3] | 0x80;
      }
    }
  }
  return;
}

