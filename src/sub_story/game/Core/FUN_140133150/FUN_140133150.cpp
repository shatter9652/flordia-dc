// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140133150  size: 148 bytes
// Name:    FUN_140133150
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145335cc0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140133150(longlong param_1,ulonglong param_2,char param_3,longlong param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  ulonglong *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  bool bVar6;
  ulonglong uStack_30;
  
  if (param_3 != '\0') {
    uVar1 = *(undefined8 *)(param_4 + 0x38);
    puVar2 = *(undefined8 **)(param_4 + 0x40);
    puVar3 = *(ulonglong **)(param_4 + 0x48);
    FUN_145335cc0(&uStack_30,param_2,param_4);
    *puVar2 = uVar1;
    LOCK();
    uVar5 = *puVar3;
    *puVar3 = uStack_30;
    UNLOCK();
    uVar5 = uVar5 & 0xffffffffffffff;
    if (uVar5 != 0) {
      do {
        uVar4 = -uVar5 & uVar5;
        func_0x000140005930(*(undefined8 *)
                             (param_1 + 0x830 + (ulonglong)(0x3f - (int)LZCOUNT(uVar4)) * 8));
        bVar6 = uVar4 != uVar5;
        uVar5 = uVar4 ^ uVar5;
      } while (bVar6);
    }
    return;
  }
  uVar1 = *(undefined8 *)((param_2 & 0xff) * 8 + 0x1468929d0);
  FUN_1401f6130(uVar1,param_4);
  FUN_1450bb280(uVar1,&stack0xfffffffffffffff0);
  return;
}

