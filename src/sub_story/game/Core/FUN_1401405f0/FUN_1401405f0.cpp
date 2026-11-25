// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401405f0  size: 331 bytes
// Name:    FUN_1401405f0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145233050, FUN_140056cb0, FUN_140037a50
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401405f0(void)

{
  longlong lVar1;
  uint *puVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  longlong unaff_GS_OFFSET;
  bool bVar7;
  
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    func_0x0001455db994();
  }
  if (*(int *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x950) != 0) {
    if ((*(byte *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x8a0) & 1) != 0) {
      FUN_145233050(1);
      bVar4 = *(byte *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x8a0);
      if ((bVar4 & 8) != 0) {
        if ((bVar4 & 0x10) == 0) {
          if (*(char *)(*(longlong *)
                         (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8)
              == '\0') {
            func_0x0001455db994();
          }
          lVar1 = *(longlong *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x12a8);
          puVar2 = *(uint **)(lVar1 + 0x12198);
          uVar6 = *puVar2;
          do {
            LOCK();
            uVar5 = *puVar2;
            if (uVar6 == uVar5) {
              *puVar2 = uVar6 + 0xfc000000;
              uVar5 = uVar6;
            }
            UNLOCK();
            bVar7 = uVar6 != uVar5;
            uVar6 = uVar5;
          } while (bVar7);
          cVar3 = func_0x000144e88f60(lVar1);
          if (cVar3 != '\0') {
            while ((*puVar2 & 0xe000000) != 0x2000000) {
              FUN_140037a50(puVar2,0,1);
            }
            FUN_140056cb0(lVar1);
          }
        }
        bVar4 = *(byte *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x8a0) & 0xe7;
      }
      *(byte *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x8a0) = bVar4 & 0xfe;
    }
    *(undefined4 *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x950) = 0;
  }
  return;
}

