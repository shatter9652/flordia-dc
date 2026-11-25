// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14006fdf0  size: 96 bytes
// Name:    FUN_14006fdf0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145589db0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


ulonglong FUN_14006fdf0(longlong *param_1)

{
  char cVar1;
  uint uVar2;
  ulonglong in_RAX;
  byte bVar3;
  ulonglong uVar4;
  bool bVar5;
  
  if ((*(byte *)((longlong)param_1 + 0x204) & 4) == 0) {
    uVar4 = param_1[1] & 0xfffffffffffffff0;
    cVar1 = FUN_145589db0(uVar4);
    bVar3 = 1;
    if ((cVar1 != '\0') && ((*(byte *)(uVar4 + 0x37) & 1) == 0)) {
      bVar3 = *(byte *)(uVar4 + 0xe8) & 1;
    }
    in_RAX = (**(code **)(*param_1 + 0x28))(param_1);
    if (((char)in_RAX == '\0') || (bVar3 != 0)) {
      uVar4 = 0;
      LOCK();
      bVar3 = *(byte *)((longlong)param_1 + 0x204);
      if (bVar3 == 0) {
        *(byte *)((longlong)param_1 + 0x204) = 2;
      }
      else {
        uVar4 = (ulonglong)bVar3;
      }
      UNLOCK();
      if (bVar3 == 0) {
        FUN_144ecd250();
        uVar4 = (ulonglong)uRam00000001490908ac;
        do {
          uVar2 = (uint)uVar4;
          if (uVar2 == uRam00000001490908a8) {
            return uVar4;
          }
          LOCK();
          bVar5 = uVar2 != uRam00000001490908ac;
          uVar2 = uVar2 + 1;
          if (bVar5) {
            uVar4 = (ulonglong)uRam00000001490908ac;
            uVar2 = uRam00000001490908ac;
          }
          uRam00000001490908ac = uVar2;
          UNLOCK();
        } while (bVar5);
        *(longlong **)(uVar4 * 8 + 0x1490908b0) = param_1;
        return uVar4;
      }
      return uVar4;
    }
  }
  return in_RAX;
}

