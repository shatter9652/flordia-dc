// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14007ee40  size: 495 bytes
// Name:    FUN_14007ee40
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14007b360, FUN_141633970, FUN_1420cdde0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14007ee40(longlong param_1,longlong param_2,undefined4 param_3,undefined4 param_4,
                  longlong *param_5,longlong *param_6)

{
  undefined2 uVar1;
  ulonglong uVar2;
  longlong lVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  longlong unaff_GS_OFFSET;
  bool bVar13;
  longlong lStack_98;
  longlong lStack_90;
  undefined1 auStack_88 [16];
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [16];
  
  if (*(uint *)(param_1 + 0x7cc) < 0x10) {
    if (*(uint *)(param_1 + 0x7cc) != 0) {
      uVar12 = 0;
      do {
        if ((*(short *)(param_1 + 0x4e8 + (longlong)(int)uVar12 * 2) != -1) &&
           (plVar8 = (longlong *)func_0x000144dccae0(),
           (uint)*(byte *)((longlong)plVar8 + 0x1a) == *(uint *)(param_2 + 0x7d4))) {
          if (*(char *)(*(longlong *)
                         (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8)
              == '\0') {
            func_0x0001455db994();
          }
          if (*plVar8 == *param_5) {
            if (*(char *)(*(longlong *)
                           (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8)
                == '\0') {
              func_0x0001455db994();
            }
            if (plVar8[1] == *param_6) {
              return;
            }
          }
        }
        uVar12 = uVar12 + 1;
      } while (uVar12 < *(uint *)(param_1 + 0x7cc));
    }
    if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8)
                 + 8) == '\0') {
      func_0x0001455db994();
      lStack_98 = *param_6;
      if (*(char *)(*(longlong *)
                     (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8) ==
          '\0') {
        func_0x0001455db994();
      }
    }
    else {
      lStack_98 = *param_6;
    }
    lStack_90 = *param_5;
    lVar9 = FUN_141633970(param_1,param_2,param_3,&lStack_90,&lStack_98);
    uVar5 = func_0x000144eee0e0(lVar9);
    cVar4 = FUN_1420cdde0(param_2,uVar5,param_4);
    if (cVar4 == '\0') {
      if (lVar9 == 0) {
        return;
      }
      if (*(short *)(lVar9 + 0x14) != -1) {
        FUN_14007d030((int)*(short *)(lVar9 + 0x14));
      }
      if (*(short *)(lVar9 + 0x16) != -1) {
        FUN_14007d030((int)*(short *)(lVar9 + 0x16));
      }
      *(undefined4 *)(lVar9 + 0x10) = 0xffffffff;
      FUN_140004b40(0x149ae88f0);
      uVar1 = (undefined2)iRam0000000149ae88c8;
      iRam0000000149ae88c8 = (int)(lVar9 - 0x149ac81c0U >> 5);
      *(undefined2 *)((longlong)iRam0000000149ae88c8 * 2 + 0x149ac61c0) = uVar1;
      LOCK();
      iRam0000000149ae88c0 = iRam0000000149ae88c0 + -1;
      UNLOCK();
      iRam0000000149ae8900 = iRam0000000149ae8900 + -1;
      uVar11 = uRam0000000149ae88f0;
      if (iRam0000000149ae8900 == 0) {
        do {
          uVar10 = uVar11;
          LOCK();
          uVar11 = uVar10;
          uVar2 = (ulonglong)((int)uVar10 - 1) | 0xffffffff00000000;
          if (uVar10 != uRam0000000149ae88f0) {
            uVar11 = uRam0000000149ae88f0;
            uVar2 = uRam0000000149ae88f0;
          }
          uRam0000000149ae88f0 = uVar2;
          UNLOCK();
        } while (uVar10 != uVar11);
        if ((uVar10 & 0xfffffffe) != 0) {
          iRam0000000149ae8900 = 0;
          lVar9 = lRam0000000149ae88f8;
          do {
            while (lVar9 < 0) {
              auStack_58._8_8_ = 0x140019c89;
              cVar4 = FUN_1400062d0(0x149ae88f8,1,&stack0xffffffffffffffe0);
              if (cVar4 != '\0') {
                return;
              }
            }
            LOCK();
            lVar7 = lVar9;
            lVar3 = lVar9 + 0x100000000;
            if (lVar9 != lRam0000000149ae88f8) {
              lVar7 = lRam0000000149ae88f8;
              lVar3 = lRam0000000149ae88f8;
            }
            lRam0000000149ae88f8 = lVar3;
            UNLOCK();
            bVar13 = lVar9 != lVar7;
            lVar9 = lVar7;
          } while (bVar13);
          return;
        }
      }
      return;
    }
    iVar6 = *(int *)(param_1 + 0x7cc);
    *(short *)(param_1 + 0x4e8 + (longlong)iVar6 * 2) = (short)uVar5;
    if ((char)param_3 != '\0') {
      auStack_88._4_4_ = _DAT_145fc6ed8;
      auStack_88._0_4_ = _DAT_145fc6ed8;
      auStack_88._8_4_ = _DAT_145fc6ed8;
      auStack_88._12_4_ = _DAT_145fc6ed8;
      auStack_78 = auStack_88;
      auStack_68 = auStack_88;
      auStack_58 = auStack_88;
      FUN_14007b360(lVar9);
      iVar6 = *(int *)(param_1 + 0x7cc);
    }
    *(int *)(param_1 + 0x7cc) = iVar6 + 1;
  }
  return;
}

