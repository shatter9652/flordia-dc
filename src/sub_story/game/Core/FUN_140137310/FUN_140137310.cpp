// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140137310  size: 268 bytes
// Name:    FUN_140137310
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


ulonglong FUN_140137310(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  short sVar2;
  longlong lVar3;
  short sVar4;
  undefined8 uVar5;
  short sVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong unaff_GS_OFFSET;
  bool bVar11;
  
  if (*(char *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x870) == '\x01') {
    uVar7 = *(ulonglong *)(param_1 + 0x16920);
    if ((~uVar7 & 0xffff00000000) != 0) {
      do {
        uVar9 = ((uint)(uVar7 >> 0x20) & 0xffff) * *(int *)(param_1 + 0x16934);
        LOCK();
        uVar8 = *(ulonglong *)(param_1 + 0x16920);
        bVar11 = uVar7 == uVar8;
        if (bVar11) {
          *(ulonglong *)(param_1 + 0x16920) =
               (ulonglong)((int)uVar7 + 1) | (uVar7 & 0xffff000000000000) - 0x1000000000000 |
               (ulonglong)*(ushort *)(*(longlong *)(param_1 + 0x16928) + (ulonglong)uVar9) << 0x20;
          uVar8 = uVar7;
        }
        UNLOCK();
        if (bVar11) {
          lVar3 = *(longlong *)(param_1 + 0x16928);
          uVar10 = 0;
          uVar7 = (ulonglong)(((int)*(longlong *)(param_1 + 0x16928) + uVar9) - (int)lVar3) /
                  (ulonglong)*(uint *)(param_1 + 0x16934);
          sVar4 = (short)uVar7;
          if (sVar4 != -1) {
            uVar7 = uVar7 & 0xffff;
            if (lVar3 != 0) {
              uVar5 = param_2[1];
              puVar1 = (undefined8 *)
                       (lVar3 + (ulonglong)(*(uint *)(param_1 + 0x16934) * (int)uVar7));
              *puVar1 = *param_2;
              puVar1[1] = uVar5;
            }
            sVar6 = *(short *)(param_1 + 0x16938);
            do {
              lVar3 = *(longlong *)(param_1 + 0x16940);
              *(short *)(lVar3 + uVar7 * 2) = sVar6;
              uVar10 = CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
              LOCK();
              sVar2 = *(short *)(param_1 + 0x16938);
              bVar11 = sVar6 == sVar2;
              if (bVar11) {
                *(short *)(param_1 + 0x16938) = sVar4;
                sVar2 = sVar6;
              }
              sVar6 = sVar2;
              UNLOCK();
            } while (!bVar11);
          }
          break;
        }
        uVar10 = 0;
        uVar7 = uVar8;
      } while ((~uVar8 & 0xffff00000000) != 0);
      goto LAB_14013732d;
    }
  }
  uVar10 = 0;
LAB_14013732d:
  return uVar10 & 0xffffffff;
}

