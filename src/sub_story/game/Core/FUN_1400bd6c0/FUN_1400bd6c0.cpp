// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400bd6c0  size: 256 bytes
// Name:    FUN_1400bd6c0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400bd6c0(ulonglong param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  longlong *plVar2;
  ulonglong *puVar3;
  ulonglong uStack_40;
  longlong *plStack_38;
  ulonglong *puStack_30;
  longlong *plStack_28;
  ulonglong *puStack_20;
  byte bStack_18;
  
  if (param_2 != (ulonglong *)0x0) {
    puVar3 = (ulonglong *)0x0;
    do {
      if (param_2[3] < param_1) {
        puVar1 = (ulonglong *)(*param_2 & 0xfffffffffffffffe);
      }
      else {
        puVar1 = (ulonglong *)param_2[1];
        puVar3 = param_2;
      }
      param_2 = puVar1;
    } while (puVar1 != (ulonglong *)0x0);
    if ((puVar3 != (ulonglong *)0x0) && (puVar3[3] <= param_1)) {
      plVar2 = (longlong *)puVar3[4];
      puStack_30 = puVar3 + 4;
      plStack_28 = (longlong *)0x0;
      bStack_18 = 0xff;
      uStack_40 = puVar3[7];
      puVar3[7] = (ulonglong)&uStack_40;
      plStack_38 = plVar2;
      puStack_20 = puStack_30;
      if (plVar2 != (longlong *)0x0) {
        do {
          if (*plVar2 == 0) {
            (*(code *)plVar2[1])(0,param_1);
          }
          else {
            (*(code *)plVar2[1])(*plVar2,0,param_1);
          }
          if ((bStack_18 & 1) == 0) {
            bStack_18 = bStack_18 | 1;
            plVar2 = plStack_38;
          }
          else if (plStack_38 == (longlong *)0x0) {
            if (((ulonglong)puStack_30 & 1) == 0 || puStack_30 < (ulonglong *)0x2) {
              plVar2 = (longlong *)0x0;
            }
            else {
              puStack_30 = (ulonglong *)((ulonglong)puStack_30 & 0xfffffffffffffffe);
              plVar2 = (longlong *)*puStack_30;
              plStack_38 = plVar2;
            }
          }
          else {
            plVar2 = (longlong *)plStack_38[2];
            plStack_38 = plVar2;
          }
        } while (plVar2 != plStack_28);
        uStack_40 = *(ulonglong *)puVar3[7];
      }
      puVar3[7] = uStack_40;
    }
  }
  return;
}

