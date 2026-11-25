// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14018a7e0  size: 67 bytes
// Name:    FUN_14018a7e0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_14018a7e0(uint param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  uint uVar6;
  int iVar8;
  ulonglong uVar7;
  
  if ((~param_1 & 0x3fffff) != 0) {
    plVar4 = (longlong *)func_0x00014003b530(0x14ab42e88,param_1);
    lVar5 = *plVar4;
    if ((lVar5 != 0) && (*(short *)(lVar5 + 0x28) != 0)) {
      do {
        if (*(ushort *)(lVar5 + 0x28) != 0) {
          iVar3 = *(ushort *)(lVar5 + 0x28) - 1;
          iVar8 = 0;
          do {
            uVar6 = (uint)(iVar8 + iVar3) >> 1;
            uVar7 = (ulonglong)uVar6;
            uVar1 = *(uint *)(*(longlong *)(lVar5 + 0x20) + uVar7 * 4);
            if (uVar1 == param_2) goto code_r0x0001455436fd;
            iVar2 = uVar6 - 1;
            if (uVar1 < param_2) {
              iVar2 = iVar3;
              iVar8 = uVar6 + 1;
            }
            iVar3 = iVar2;
          } while (iVar8 <= iVar3);
        }
        lVar5 = *(longlong *)(lVar5 + 0x10);
      } while (lVar5 != 0);
      if (lRam000000014ab83b08 == 0) {
        return 0;
      }
      if (*(ushort *)(lRam000000014ab83b08 + 0x28) == 0) {
        return 0;
      }
      iVar3 = *(ushort *)(lRam000000014ab83b08 + 0x28) - 1;
      iVar8 = 0;
      while( true ) {
        uVar6 = (uint)(iVar8 + iVar3) >> 1;
        uVar7 = (ulonglong)uVar6;
        uVar1 = *(uint *)(*(longlong *)(lRam000000014ab83b08 + 0x20) + uVar7 * 4);
        lVar5 = lRam000000014ab83b08;
        if (uVar1 == param_2) break;
        iVar2 = uVar6 - 1;
        if (uVar1 < param_2) {
          iVar8 = uVar6 + 1;
          iVar2 = iVar3;
        }
        iVar3 = iVar2;
        if (iVar3 < iVar8) {
          return 0;
        }
      }
code_r0x0001455436fd:
      return *(undefined8 *)(*(longlong *)(lVar5 + 0x30) + uVar7 * 8);
    }
  }
  return 0;
}

