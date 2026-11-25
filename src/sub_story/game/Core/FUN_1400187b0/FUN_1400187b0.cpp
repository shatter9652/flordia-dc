// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400187b0  size: 503 bytes
// Name:    FUN_1400187b0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140004b40
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400187b0(longlong param_1,longlong param_2)

{
  ulonglong *puVar1;
  uint uVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  char cVar5;
  int *piVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong *plVar10;
  ulonglong uVar11;
  uint uVar12;
  int iVar13;
  bool bVar14;
  
  if (param_2 == 0) {
    return;
  }
  puVar1 = (ulonglong *)(param_1 + 0x1260);
  FUN_140004b40(puVar1);
  cVar5 = func_0x000144d9f9d0(param_1,param_2);
  if (cVar5 == '\0') {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  lVar8 = param_2 + -0x10;
  if ((*(ushort *)(param_2 + -2) >> 10 & 1) == 0) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  *(ushort *)(param_2 + -2) = *(ushort *)(param_2 + -2) & 0xfbff;
  uVar12 = *(uint *)(param_2 + -0xc) & 0xfffffffe;
  uVar9 = (ulonglong)uVar12;
  *(uint *)(param_2 + -0xc) = uVar12;
  if (*(int *)(param_2 + -0x10) == (int)lVar8) {
    *(longlong *)(param_1 + 0x1240) = *(longlong *)(param_1 + 0x1240) + uVar9;
    *(longlong *)(param_1 + 0x1238) = *(longlong *)(param_1 + 0x1238) - uVar9;
    piVar6 = (int *)func_0x0001455aa4a0(*(undefined8 *)(param_1 + 0x20),
                                        *(undefined8 *)(param_1 + 0x1230),lVar8);
    if (piVar6 != (int *)0x0) {
      if (*piVar6 != (int)piVar6) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((*(byte *)((longlong)piVar6 + 0xf) & 4) == 0) {
        uVar2 = piVar6[1];
        uVar12 = uVar12 + 0x10 + (uVar2 & 0xfffffffe);
        uVar9 = (ulonglong)uVar12;
        *(uint *)(param_2 + -0xc) = uVar12;
        uVar12 = uVar2 >> 4;
        if (0xfff < uVar2) {
          uVar12 = 0x11f - LZCOUNT(uVar2 & 0xfffffffe);
        }
        auVar4 = vpaddq_avx(*(undefined1 (*) [16])(param_1 + 0x1238),_DAT_146159e40);
        *(undefined1 (*) [16])(param_1 + 0x1238) = auVar4;
        func_0x0001455aa4c0(param_1,piVar6,uVar12);
        lVar7 = func_0x0001455aa4a0(*(undefined8 *)(param_1 + 0x20),
                                    *(undefined8 *)(param_1 + 0x1230),piVar6);
        if (lVar7 != 0) {
          *(int *)(lVar7 + 8) = (int)lVar7 - (int)lVar8;
        }
      }
    }
    lVar7 = lVar8 - (ulonglong)*(uint *)(param_2 + -8);
    if ((lVar7 != 0 && (ulonglong)*(uint *)(param_2 + -8) != 0) &&
       ((*(byte *)(lVar7 + 0xf) & 4) == 0)) {
      uVar12 = *(uint *)(lVar7 + 4);
      uVar2 = uVar12 >> 4;
      if (0xfff < uVar12) {
        uVar2 = 0x11f - LZCOUNT(uVar12 & 0xfffffffe);
      }
      func_0x0001455aa4c0(param_1,lVar7,uVar2);
      iVar13 = (int)uVar9 + 0x10;
      *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + iVar13;
      auVar4 = vpaddq_avx(*(undefined1 (*) [16])(param_1 + 0x1238),_DAT_146159e40);
      *(undefined1 (*) [16])(param_1 + 0x1238) = auVar4;
      lVar8 = func_0x0001455aa4a0(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x1230),
                                  lVar8);
      if (lVar8 != 0) {
        *(int *)(lVar8 + 8) = (int)lVar8 - (int)lVar7;
      }
      uVar9 = (ulonglong)(iVar13 + (uVar12 & 0xfffffffe));
      lVar8 = lVar7;
    }
    uVar11 = uVar9 >> 4;
    if (0xfff < (uint)uVar9) {
      uVar11 = (ulonglong)(0x11f - LZCOUNT((uint)uVar9));
    }
    func_0x0001455aa500(param_1,lVar8,uVar11);
    piVar6 = (int *)(param_1 + 0x1270);
    *piVar6 = *piVar6 + -1;
    uVar9 = *puVar1;
    if (*piVar6 == 0) {
      do {
        uVar11 = uVar9;
        LOCK();
        uVar9 = *puVar1;
        if (uVar11 == uVar9) {
          *puVar1 = (ulonglong)((int)uVar11 - 1) | 0xffffffff00000000;
          uVar9 = uVar11;
        }
        UNLOCK();
      } while (uVar11 != uVar9);
      if ((uVar11 & 0xfffffffe) != 0) {
        plVar10 = (longlong *)(param_1 + 0x1268);
        lVar8 = *(longlong *)(param_1 + 0x1268);
        do {
          while (lVar8 < 0) {
            cVar5 = FUN_1400062d0(plVar10,1,&stack0xffffffffffffffe0);
            if (cVar5 != '\0') {
              return;
            }
          }
          LOCK();
          lVar7 = *plVar10;
          if (lVar8 == lVar7) {
            *plVar10 = lVar8 + 0x100000000;
            lVar7 = lVar8;
          }
          UNLOCK();
          bVar14 = lVar8 != lVar7;
          lVar8 = lVar7;
        } while (bVar14);
        return;
      }
    }
    return;
  }
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

