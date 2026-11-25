// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401b20c0  size: 475 bytes
// Name:    FUN_1401b20c0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14202a4b0, FUN_145324240, FUN_1401bd1f0, FUN_14004c030, FUN_140004b40, FUN_141fb19c0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1401b20c0(longlong *param_1,undefined8 *param_2)

{
  uint *puVar1;
  code *pcVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  bool bVar12;
  undefined1 auVar13 [16];
  
  FUN_140004b40(0x1499aaa48);
  *param_2 = 0;
  plVar3 = _DAT_148766388;
  uVar9 = 0xffffffff;
  if ((_DAT_148766388 != (longlong *)0x0) &&
     (((*param_1 == 0 || (lVar6 = FUN_145324240(), lVar6 == 0)) &&
      (plVar4 = _DAT_148766388, *(int *)((longlong)plVar3 + 0xc) != (int)plVar3[2])))) {
    uVar8 = _DAT_148766388[4];
    do {
      iVar5 = (int)uVar8;
      if (iVar5 == 0x1fffe) goto LAB_1401b2282;
      uVar10 = uVar8 & 0xffffffff;
      LOCK();
      uVar7 = plVar4[4];
      bVar12 = uVar8 == uVar7;
      if (bVar12) {
        plVar4[4] = (ulonglong)(*(uint *)(plVar4[5] + uVar10 * 4) & 0x1ffff) |
                    uVar8 & 0xffffffff00000000;
        uVar7 = uVar8;
      }
      UNLOCK();
      uVar8 = uVar7;
    } while (!bVar12);
    LOCK();
    *(int *)(plVar4 + 2) = (int)plVar4[2] + 1;
    UNLOCK();
    puVar1 = (uint *)(plVar4[5] + uVar10 * 4);
    *puVar1 = *puVar1 | *(uint *)(plVar4 + 6);
    if (*plVar4 == 0) {
LAB_1401b2282:
      pcVar2 = (code *)swi(3);
      uVar8 = (*pcVar2)();
      return uVar8;
    }
    puVar11 = (undefined8 *)(*plVar4 + (ulonglong)(uint)((int)plVar4[1] * iVar5));
    if (plVar4[3] != 0) {
      FUN_14004c030(plVar4,puVar11);
    }
    func_0x000145f40580(puVar11,0,0x120);
    *puVar11 = &UNK_146419a50;
    *(undefined1 (*) [32])(puVar11 + 2) = ZEXT1232(ZEXT812(0));
    FUN_1401bd1f0(puVar11 + 6,0,0);
    auVar13._0_12_ = ZEXT812(0);
    auVar13._12_4_ = 0;
    puVar11[0x10] = 0;
    *(undefined4 *)(puVar11 + 0x11) = 0;
    *(undefined1 *)((longlong)puVar11 + 0x8d) = 0;
    *(undefined2 *)((longlong)puVar11 + 0x8f) = 0;
    puVar11[10] = 0;
    *(undefined1 (*) [16])(puVar11 + 8) = auVar13;
    *(undefined1 (*) [16])(puVar11 + 0x15) = auVar13;
    *(undefined1 (*) [16])(puVar11 + 0x18) = auVar13;
    puVar11[0x1a] = 0x10001ffff;
    puVar11[0x1c] = 0;
    *(undefined4 *)(puVar11 + 0x1b) = 0;
    *(undefined1 *)((longlong)puVar11 + 0xdc) = 0;
    puVar11[0x1f] = 0;
    *(undefined4 *)(puVar11 + 0x20) = 0;
    puVar11[0x21] = 0xffffffffffffffff;
    *(undefined1 *)(puVar11 + 0x22) = 0;
    puVar11[0x1e] = &UNK_1466fe130;
    FUN_14202a4b0(puVar11);
    *puVar11 = &UNK_1462f9ca0;
    FUN_141fb19c0(puVar11,param_1);
    *param_2 = puVar11;
    uVar9 = *(uint *)(param_1 + 7);
  }
  func_0x000144d9dab0(0x1499aaa48);
  return (ulonglong)uVar9;
}

