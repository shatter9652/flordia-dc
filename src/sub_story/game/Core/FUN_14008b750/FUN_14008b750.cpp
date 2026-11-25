// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14008b750  size: 164 bytes
// Name:    FUN_14008b750
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144f10b40, FUN_144f109a0, FUN_144f10930, FUN_144f10f80
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14008b750(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  short *psVar6;
  
  if (((*(longlong *)(param_1 + 0x20) == 0) || (*(int *)(param_1 + 8) == 0)) ||
     (*(int *)(param_1 + 0x18) == 0)) {
    return;
  }
  func_0x00014008b800();
  FUN_144f10930(param_1);
  FUN_144f10f80(param_1);
  FUN_144f10b40(param_1);
  FUN_144f109a0(param_1);
  func_0x00014008b800(param_1);
  FUN_144f10930(param_1);
  FUN_144f10f80(param_1);
  FUN_144f10b40(param_1);
  FUN_144f109a0(param_1);
  func_0x00014008b800(param_1);
  FUN_144f10930(param_1);
  FUN_144f10f80(param_1);
  FUN_144f10b40(param_1);
  lVar1 = *(longlong *)(param_1 + 0xc0);
  uVar5 = *(int *)(param_1 + 0xb8) << 4;
  if (uVar5 == 0) {
    uVar3 = 0;
joined_r0x000144f10af3:
    while ((uVar2 = uVar5, uVar3 != uVar5 &&
           (uVar2 = uVar3,
           SBORROW1('\0',*(char *)((ulonglong)(uVar3 & 0xf) + (ulonglong)(uVar3 >> 4) * 0x90 + lVar1
                                  ))))) {
      uVar3 = uVar3 + 1;
    }
  }
  else {
    uVar3 = 0;
    do {
      if (!SBORROW1('\0',*(char *)((ulonglong)(uVar3 & 0xf) + (ulonglong)(uVar3 >> 4) * 0x90 + lVar1
                                  ))) goto joined_r0x000144f10af3;
      uVar3 = uVar3 + 1;
      uVar2 = uVar5;
    } while (uVar5 != uVar3);
  }
  lVar4 = (ulonglong)(uVar2 >> 4) * 0x90;
  if (lVar4 + (ulonglong)(uVar2 & 0xf) * 8 != (ulonglong)(uint)(*(int *)(param_1 + 0xb8) << 4) * 9)
  {
    psVar6 = (short *)(lVar4 + 0x10 + (ulonglong)(uVar2 & 0xf) * 8 + lVar1);
    do {
      if (*psVar6 != -1) {
        func_0x00014008ba10();
      }
      uVar3 = uVar2;
      if (psVar6[1] != -1) {
        func_0x00014008ba10();
      }
      while (uVar2 = uVar5, uVar3 != uVar5) {
        while (uVar2 = uVar3 + 1, uVar3 = uVar2, uVar2 < uVar5) {
          if (!SBORROW1('\0',*(char *)((ulonglong)(uVar2 & 0xf) +
                                      (ulonglong)(uVar2 >> 4) * 0x90 + lVar1)))
          goto code_r0x000144f10a8e;
        }
      }
code_r0x000144f10a8e:
      lVar4 = (ulonglong)(uVar2 >> 4) * 0x90 + lVar1;
      psVar6 = (short *)(lVar4 + 0x10 + (ulonglong)(uVar2 & 0xf) * 8);
    } while (lVar4 + (ulonglong)(uVar2 & 0xf) * 8 !=
             (ulonglong)(*(uint *)(param_1 + 0xb8) & 0xfffffff) * 0x90 +
             *(longlong *)(param_1 + 0xc0));
  }
  return;
}

