// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14006d810  size: 263 bytes
// Name:    FUN_14006d810
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14006d810(uint *param_1,uint param_2)

{
  longlong lVar1;
  code *pcVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar3 = func_0x000144d9c140(8,(ulonglong)param_2 * 0x78);
  if ((ulonglong)param_1[1] != 0) {
    lVar1 = *(longlong *)(param_1 + 2);
    lVar5 = (ulonglong)param_1[1] * 0x78;
    lVar4 = 0;
    do {
      if ((undefined1 *)(lVar3 + lVar4) != (undefined1 *)0x0) {
        *(undefined1 *)(lVar3 + lVar4) = *(undefined1 *)(lVar1 + lVar4);
        pcVar2 = *(code **)(lVar1 + 0x60 + lVar4);
        if (pcVar2 != (code *)0x0) {
          (*pcVar2)(lVar3 + 0x17 + lVar4 & 0xfffffffffffffff0,
                    lVar1 + 0x17 + lVar4 & 0xfffffffffffffff0);
        }
        *(undefined8 *)(lVar3 + 0x58 + lVar4) = *(undefined8 *)(lVar1 + 0x58 + lVar4);
        *(code **)(lVar3 + 0x60 + lVar4) = pcVar2;
        *(undefined8 *)(lVar3 + 0x68 + lVar4) = *(undefined8 *)(lVar1 + 0x68 + lVar4);
        *(undefined8 *)(lVar3 + 0x70 + lVar4) = *(undefined8 *)(lVar1 + 0x70 + lVar4);
      }
      lVar4 = lVar4 + 0x78;
    } while (lVar5 - lVar4 != 0);
    lVar4 = 0;
    do {
      pcVar2 = *(code **)(lVar1 + 0x68 + lVar4);
      if (pcVar2 != (code *)0x0) {
        (*pcVar2)(lVar1 + 0x17 + lVar4 & 0xfffffffffffffff0);
      }
      lVar4 = lVar4 + 0x78;
    } while (lVar5 - lVar4 != 0);
  }
  if (*(longlong *)(param_1 + 2) != 0) {
    func_0x000144d9c130();
  }
  *(longlong *)(param_1 + 2) = lVar3;
  *param_1 = param_2;
  return;
}

