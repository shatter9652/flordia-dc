// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14012f540  size: 427 bytes
// Name:    FUN_14012f540
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140130720, FUN_145309330, FUN_14012f6f0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_14012f540(uint param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  char cVar8;
  longlong *plVar9;
  undefined8 unaff_RBX;
  longlong *plVar10;
  int iVar11;
  longlong lVar12;
  
  plVar10 = (longlong *)CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
  if (param_1 != 0x1ffff) {
    uVar1 = *(uint *)(_DAT_14a9ec8f0[5] + (ulonglong)(param_1 & 0x1ffff) * 4);
    if ((((param_1 ^ uVar1) < 0x20000) &&
        ((uVar1 & *(uint *)(_DAT_14a9ec8f0 + 6)) == *(uint *)(_DAT_14a9ec8f0 + 6))) &&
       (lVar4 = *_DAT_14a9ec8f0, lVar4 != 0)) {
      lVar5 = *(longlong *)(param_2 + 0x18);
      if (lVar5 != 0) {
        lVar12 = _DAT_14a9ec8f0[1];
        if ((*(longlong *)(param_2 + 0x20) == 0) ||
           (*(longlong *)(*(longlong *)(param_2 + 0x20) + 0xd0) == 0)) {
          cVar8 = FUN_14012f6f0(param_2);
        }
        else {
          cVar8 = FUN_140130720();
        }
        lVar4 = *(longlong *)(lVar4 + 0x50 + (ulonglong)((param_1 & 0x1ffff) * (int)lVar12));
        if ((cVar8 != '\0') ||
           ((*(int *)(lVar4 + 0x30) == 0 && *(int *)(lVar4 + 0x104) == 0) &&
            (*(longlong *)(lVar4 + 0x20) == 0 && *(int *)(lVar4 + 0x28) == 0))) {
          iVar2 = *(int *)(lVar5 + 0x74);
          if (0 < (longlong)iVar2) {
            lVar12 = 0;
            do {
              lVar6 = *(longlong *)(*(longlong *)(*(longlong *)(lVar5 + 0x78) + lVar12 * 8) + 0x58);
              cVar8 = FUN_145309330(*(undefined4 *)(lVar6 + 0xc),*(undefined8 *)(lVar6 + 0x10));
              if (cVar8 == '\0') {
                lVar6 = *(longlong *)(lVar6 + 0x18);
                if (((lVar6 != 0) && (*(char *)(lVar6 + 0x38) == '\x01')) &&
                   (*(int *)(lVar6 + 0x1c) < 1)) goto LAB_14012f6c8;
              }
              else {
                iVar3 = *(int *)(lVar6 + 0xc);
                if (0 < iVar3) {
                  iVar11 = 0;
                  do {
                    plVar9 = (longlong *)
                             func_0x000140578db0(*(undefined4 *)(lVar6 + 0xc),
                                                 *(undefined8 *)(lVar6 + 0x10),iVar11);
                    if (plVar9 != (longlong *)0x0) {
                      cVar8 = (**(code **)(*plVar9 + 8))(plVar9,0x3eb43c60);
                      plVar10 = plVar9;
                      if (((cVar8 != '\0') && (lVar7 = plVar9[9], lVar7 != 0)) &&
                         ((*(int *)(lVar7 + 0x68) != 0 ||
                          (((*(int *)(lVar7 + 0x74) == 0 && (*(longlong *)(lVar4 + 0x20) == 0)) &&
                           ((*(int *)(lVar4 + 0x28) == 0 &&
                            ((*(int *)(lVar4 + 0x30) == 0 && (*(int *)(lVar4 + 0x104) == 0))))))))))
                      goto LAB_14012f6c8;
                    }
                    iVar11 = iVar11 + 1;
                  } while (iVar3 != iVar11);
                }
              }
              lVar12 = lVar12 + 1;
            } while (lVar12 != iVar2);
            plVar10 = (longlong *)CONCAT71((int7)((ulonglong)plVar10 >> 8),1);
          }
          goto LAB_14012f6ce;
        }
      }
LAB_14012f6c8:
      plVar10 = (longlong *)0x0;
    }
  }
LAB_14012f6ce:
  return (ulonglong)plVar10 & 0xffffffff;
}

