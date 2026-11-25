// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400e8960  size: 156 bytes
// Name:    FUN_1400e8960
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144f65910, FUN_144f658c0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_1400e8960(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  char cVar3;
  undefined4 *puVar4;
  longlong lVar5;
  
  do {
    if (*(char *)(param_2 + 0x78) == '\x01') {
      if (*(int *)(param_2 + 100) == 0) {
LAB_1400e8994:
        uVar1 = *(uint *)(param_2 + 0x6c);
        if ((ulonglong)uVar1 != 0) {
          lVar2 = *(longlong *)(param_2 + 0x70);
          lVar5 = 0;
          do {
            FUN_144f65910(*(undefined4 *)(lVar2 + lVar5),0);
            lVar5 = lVar5 + 4;
          } while ((ulonglong)uVar1 << 2 != lVar5);
        }
        *(undefined4 *)(param_2 + 0x6c) = 0;
        puVar4 = *(undefined4 **)(param_2 + 0x20);
        if (puVar4 != *(undefined4 **)(param_2 + 0x28)) {
          do {
            FUN_144f658c0(*puVar4);
            puVar4 = puVar4 + 1;
          } while (puVar4 != *(undefined4 **)(param_2 + 0x28));
          *(undefined8 *)(param_2 + 0x28) = *(undefined8 *)(param_2 + 0x20);
        }
        *(undefined4 *)(param_2 + 100) = 0;
        *(undefined1 *)(param_2 + 0x78) = 0;
        return 1;
      }
      cVar3 = (**(code **)(**(longlong **)(param_2 + 0x30) + 0x18))
                        (*(longlong **)(param_2 + 0x30),0);
      if (cVar3 != '\0') goto LAB_1400e8994;
    }
    func_0x00014092eca0(1);
  } while( true );
}

