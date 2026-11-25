// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400560b0  size: 2353 bytes
// Name:    FUN_1400560b0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14256fe30, FUN_145647140, FUN_144e53470, FUN_14004c030, FUN_140189080
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400560b0(longlong param_1,longlong *param_2,undefined4 param_3,undefined4 param_4)

{
  ulonglong *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined2 *puVar4;
  undefined1 auVar5 [16];
  undefined8 uVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  undefined4 *puVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint *puVar14;
  uint *puVar15;
  longlong *plVar16;
  longlong lVar17;
  uint uVar18;
  undefined4 uVar19;
  ulonglong uVar20;
  uint *puVar21;
  bool bVar22;
  undefined8 uStack_48;
  
  uStack_48 = 0x1400560c6;
  lVar10 = FUN_145647140();
  lVar10 = -lVar10;
  *(undefined4 *)(&stack0xfffffffffffffff4 + lVar10) = param_3;
  if (param_2 != (longlong *)0x0) {
    *param_2 = 0;
  }
  if ((*(longlong *)(param_1 + 0xa88) == 0) && (*(int *)(param_1 + 0x87c) == 0)) {
    if (*(int *)(param_1 + 0x66c) == 0 && *(int *)(param_1 + 0x45c) == 0) {
      if (*(int *)(param_1 + 4) == 0) {
LAB_1400562ac:
        *(undefined8 *)(param_1 + 0xa90) = 0;
        return;
      }
    }
    else if (*(int *)(param_1 + 4) == 0) {
      *(undefined8 *)((longlong)&uStack_48 + lVar10) = 0x1400562ac;
      FUN_14256fe30(param_1);
      goto LAB_1400562ac;
    }
  }
  *(undefined8 *)(&stack0xfffffffffffffff8 + lVar10) = 0x100;
  *(undefined4 *)(&stack0xfffffffffffffff0 + lVar10) = param_4;
  lVar2 = *(longlong *)(param_1 + 0xa90);
  LOCK();
  bVar22 = *(int *)(lVar2 + 0x308) == 0;
  if (bVar22) {
    *(int *)(lVar2 + 0x308) = 1;
  }
  UNLOCK();
  if (!bVar22) {
    do {
      plVar16 = _DAT_14764a8e8;
      if (*(int *)(param_1 + 0x66c) == 0 && *(int *)(param_1 + 0x45c) == 0) {
        uVar12 = _DAT_14764a8e8[4];
        goto LAB_1400561b2;
      }
      *(undefined8 *)((longlong)&uStack_48 + lVar10) = 0x14005615f;
      FUN_14256fe30(param_1);
      LOCK();
      bVar22 = *(int *)(lVar2 + 0x308) == 0;
      if (bVar22) {
        *(int *)(lVar2 + 0x308) = 1;
      }
      UNLOCK();
    } while (!bVar22);
  }
  uVar19 = *(undefined4 *)(&stack0xfffffffffffffff0 + lVar10);
  *(undefined4 *)(&stack0xffffffffffffffe0 + lVar10) = uVar19;
  *(undefined8 *)((longlong)&uStack_48 + lVar10) = 0x140056189;
  FUN_144e53470(param_1,&stack0xfffffffffffffff8 + lVar10,param_2,
                *(undefined4 *)(&stack0xfffffffffffffff4 + lVar10));
  bVar22 = true;
  if (param_2 == (longlong *)0x0) {
    param_2 = (longlong *)0x0;
  }
  else if (*param_2 != 0) {
    param_2 = (longlong *)0x0;
  }
  goto LAB_140056447;
  while( true ) {
    uVar20 = uVar12 & 0xffffffff;
    LOCK();
    uVar13 = plVar16[4];
    bVar22 = uVar12 == uVar13;
    if (bVar22) {
      plVar16[4] = (ulonglong)(*(uint *)(plVar16[5] + uVar20 * 4) & 0x1ffff) |
                   uVar12 & 0xffffffff00000000;
      uVar13 = uVar12;
    }
    UNLOCK();
    uVar12 = uVar13;
    if (bVar22) break;
LAB_1400561b2:
    iVar8 = (int)uVar12;
    if (iVar8 == 0x1fffe) goto LAB_140056232;
  }
  LOCK();
  *(int *)(plVar16 + 2) = (int)plVar16[2] + 1;
  UNLOCK();
  puVar21 = (uint *)(plVar16[5] + uVar20 * 4);
  *puVar21 = *puVar21 | *(uint *)(plVar16 + 6);
  lVar17 = *plVar16;
  puVar21 = (uint *)((ulonglong)(uint)((int)plVar16[1] * iVar8) + lVar17);
  if ((lVar17 == 0) || (plVar16[3] == 0)) {
    if (lVar17 == 0) {
LAB_140056232:
      do {
        *(undefined8 *)((longlong)&uStack_48 + lVar10) = 0x140056237;
        func_0x000144f4b620();
        plVar16 = _DAT_14764a8e8;
        uVar12 = _DAT_14764a8e8[4];
        do {
          iVar8 = (int)uVar12;
          if (iVar8 == 0x1fffe) goto LAB_140056232;
          uVar20 = uVar12 & 0xffffffff;
          LOCK();
          uVar13 = plVar16[4];
          bVar22 = uVar12 == uVar13;
          if (bVar22) {
            plVar16[4] = (ulonglong)(*(uint *)(plVar16[5] + uVar20 * 4) & 0x1ffff) |
                         uVar12 & 0xffffffff00000000;
            uVar13 = uVar12;
          }
          UNLOCK();
          uVar12 = uVar13;
        } while (!bVar22);
        LOCK();
        *(int *)(plVar16 + 2) = (int)plVar16[2] + 1;
        UNLOCK();
        puVar21 = (uint *)(plVar16[5] + uVar20 * 4);
        *puVar21 = *puVar21 | *(uint *)(plVar16 + 6);
        lVar17 = *plVar16;
        if ((lVar17 != 0) && (plVar16[3] != 0)) {
          puVar21 = (uint *)(lVar17 + (ulonglong)(uint)((int)plVar16[1] * iVar8));
          goto LAB_140056211;
        }
      } while (lVar17 == 0);
      puVar21 = (uint *)(lVar17 + (ulonglong)(uint)((int)plVar16[1] * iVar8));
    }
  }
  else {
LAB_140056211:
    *(undefined8 *)((longlong)&uStack_48 + lVar10) = 0x140056219;
    FUN_14004c030(plVar16,puVar21);
  }
  puVar15 = puVar21 + 4;
  *(uint **)(puVar21 + 2) = puVar15;
  puVar21[0] = 0x78;
  puVar21[1] = 0;
  uVar18 = *(uint *)(param_1 + 4);
  if ((ulonglong)uVar18 != 0) {
    puVar3 = *(undefined8 **)(param_1 + 8);
    lVar17 = (ulonglong)uVar18 << 3;
    if (0x78 < uVar18) {
      *(uint **)(&stack0xffffffffffffffe8 + lVar10) = puVar15;
      *(undefined8 *)((longlong)&uStack_48 + lVar10) = 0x14005692d;
      puVar15 = (uint *)func_0x000144d9c140(8,lVar17);
      if (puVar15 == (uint *)0x0) {
        puVar15 = *(uint **)(&stack0xffffffffffffffe8 + lVar10);
      }
      *(uint **)(puVar21 + 2) = puVar15;
      *puVar21 = uVar18;
    }
    if (uVar18 == 1) {
      *(undefined8 *)puVar15 = *puVar3;
    }
    else if (uVar18 == 2) {
      uVar6 = puVar3[1];
      *(undefined8 *)puVar15 = *puVar3;
      *(undefined8 *)(puVar15 + 2) = uVar6;
    }
    else {
      *(undefined8 *)((longlong)&uStack_48 + lVar10) = 0x140056815;
      func_0x000145f40560(puVar15,puVar3,lVar17);
    }
    puVar21[1] = uVar18;
  }
  puVar15 = puVar21 + 0xf8;
  *(uint **)(puVar21 + 0xf6) = puVar15;
  puVar21[0xf4] = 0x78;
  puVar21[0xf5] = 0;
  uVar18 = *(uint *)(param_1 + 0x3d4);
  if (uVar18 != 0) {
    puVar4 = *(undefined2 **)(param_1 + 0x3d8);
    puVar14 = puVar15;
    if (0x78 < uVar18) {
      *(undefined8 *)((longlong)&uStack_48 + lVar10) = 0x140056960;
      puVar14 = (uint *)func_0x000144d9c140(1,uVar18);
      if (puVar14 == (uint *)0x0) {
        puVar14 = puVar15;
      }
      *(uint **)(puVar21 + 0xf6) = puVar14;
      puVar21[0xf4] = uVar18;
    }
    if (uVar18 == 1) {
      *(undefined1 *)puVar14 = *(undefined1 *)puVar4;
    }
    else {
      if (uVar18 != 2) {
        if (uVar18 != 3) {
          *(undefined8 *)((longlong)&uStack_48 + lVar10) = 0x14005682c;
          func_0x000145f40560(puVar14,puVar4,uVar18);
          goto LAB_14005634c;
        }
        *(undefined1 *)((longlong)puVar14 + 2) = *(undefined1 *)(puVar4 + 1);
      }
      *(undefined2 *)puVar14 = *puVar4;
    }
LAB_14005634c:
    puVar21[0xf5] = uVar18;
  }
  puVar15 = puVar21 + 0x11a;
  *(uint **)(puVar21 + 0x118) = puVar15;
  puVar21[0x116] = 0x40;
  puVar21[0x117] = 0;
  uVar18 = *(uint *)(param_1 + 0x45c);
  if ((ulonglong)uVar18 != 0) {
    lVar17 = (ulonglong)uVar18 << 3;
    *(undefined8 *)(&stack0xffffffffffffffe8 + lVar10) = *(undefined8 *)(param_1 + 0x460);
    puVar14 = puVar15;
    if (0x40 < uVar18) {
      *(uint **)(puVar21 + 0x118) = puVar15;
      puVar21[0x116] = 0x40;
      *(undefined8 *)((longlong)&uStack_48 + lVar10) = 0x14005686a;
      puVar14 = (uint *)func_0x000144d9c140(8,lVar17);
      if (puVar14 == (uint *)0x0) {
        puVar14 = puVar15;
      }
      *(uint **)(puVar21 + 0x118) = puVar14;
      puVar21[0x116] = uVar18;
    }
    *(undefined8 *)((longlong)&uStack_48 + lVar10) = 0x140056896;
    func_0x000145f40560(puVar14,*(undefined8 *)(&stack0xffffffffffffffe8 + lVar10),lVar17);
    puVar21[0x117] = uVar18;
  }
  puVar15 = puVar21 + 0x19e;
  *(uint **)(puVar21 + 0x19c) = puVar15;
  puVar21[0x19a] = 0x40;
  puVar21[0x19b] = 0;
  uVar18 = *(uint *)(param_1 + 0x66c);
  if ((ulonglong)uVar18 != 0) {
    lVar17 = (ulonglong)uVar18 << 3;
    *(undefined8 *)(&stack0xffffffffffffffe8 + lVar10) = *(undefined8 *)(param_1 + 0x670);
    puVar14 = puVar15;
    if (0x40 < uVar18) {
      *(uint **)(puVar21 + 0x19c) = puVar15;
      puVar21[0x19a] = 0x40;
      *(undefined8 *)((longlong)&uStack_48 + lVar10) = 0x1400568dc;
      puVar14 = (uint *)func_0x000144d9c140(8,lVar17);
      if (puVar14 == (uint *)0x0) {
        puVar14 = puVar15;
      }
      *(uint **)(puVar21 + 0x19c) = puVar14;
      puVar21[0x19a] = uVar18;
    }
    *(undefined8 *)((longlong)&uStack_48 + lVar10) = 0x140056908;
    func_0x000145f40560(puVar14,*(undefined8 *)(&stack0xffffffffffffffe8 + lVar10),lVar17);
    puVar21[0x19b] = uVar18;
  }
  puVar15 = puVar21 + 0x222;
  *(uint **)(puVar21 + 0x220) = puVar15;
  puVar21[0x21e] = 0x40;
  puVar21[0x21f] = 0;
  uVar18 = *(uint *)(param_1 + 0x87c);
  if ((ulonglong)uVar18 != 0) {
    puVar3 = *(undefined8 **)(param_1 + 0x880);
    lVar17 = (ulonglong)uVar18 << 3;
    if (0x40 < uVar18) {
      *(uint **)(&stack0xffffffffffffffe8 + lVar10) = puVar15;
      *(undefined8 *)((longlong)&uStack_48 + lVar10) = 0x140056998;
      puVar15 = (uint *)func_0x000144d9c140(8,lVar17);
      if (puVar15 == (uint *)0x0) {
        puVar15 = *(uint **)(&stack0xffffffffffffffe8 + lVar10);
      }
      *(uint **)(puVar21 + 0x220) = puVar15;
      puVar21[0x21e] = uVar18;
    }
    if (uVar18 == 1) {
      *(undefined8 *)puVar15 = *puVar3;
    }
    else if (uVar18 == 2) {
      uVar6 = puVar3[1];
      *(undefined8 *)puVar15 = *puVar3;
      *(undefined8 *)(puVar15 + 2) = uVar6;
    }
    else {
      *(undefined8 *)((longlong)&uStack_48 + lVar10) = 0x14005680e;
      func_0x000145f40560(puVar15,puVar3,lVar17);
    }
    puVar21[0x21f] = uVar18;
  }
  bVar22 = false;
  *(undefined1 *)(puVar21 + 0x2a6) = *(undefined1 *)(param_1 + 0xa98);
  uVar6 = *(undefined8 *)(param_1 + 0xa90);
  *(undefined8 *)(puVar21 + 0x2a2) = *(undefined8 *)*(undefined1 (*) [16])(param_1 + 0xa88);
  *(undefined8 *)(puVar21 + 0x2a4) = uVar6;
  *(undefined4 *)(param_1 + 0x87c) = 0;
  *(undefined4 *)(param_1 + 0x45c) = 0;
  *(undefined4 *)(param_1 + 0x66c) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 0x3d4) = 0;
  *(undefined1 (*) [16])(param_1 + 0xa88) = ZEXT816(0) << 0x20;
  *(undefined8 *)((longlong)&uStack_48 + lVar10) = 0x140056429;
  func_0x0001455ad990(lVar2);
  uVar19 = *(undefined4 *)(&stack0xfffffffffffffff0 + lVar10);
LAB_140056447:
  do {
    if (!bVar22) {
      LOCK();
      bVar22 = *(int *)(lVar2 + 0x308) == 0;
      if (bVar22) {
        *(int *)(lVar2 + 0x308) = 1;
      }
      UNLOCK();
      if (!bVar22) {
        return;
      }
    }
    while (*(int *)(&stack0xfffffffffffffffc + lVar10) == 0) {
      *(undefined8 *)((longlong)&uStack_48 + lVar10) = 0x140056476;
      puVar11 = (undefined4 *)func_0x0001455ad9d0(lVar2);
      if (puVar11 == (undefined4 *)0x0) break;
      *(undefined4 *)(&stack0xffffffffffffffe0 + lVar10) = uVar19;
      *(undefined8 *)((longlong)&uStack_48 + lVar10) = 0x14005649b;
      FUN_144e53470(puVar11,&stack0xfffffffffffffff8 + lVar10,param_2,
                    *(undefined4 *)(&stack0xfffffffffffffff4 + lVar10));
      if (param_2 == (longlong *)0x0) {
        param_2 = (longlong *)0x0;
      }
      else if (*param_2 != 0) {
        param_2 = (longlong *)0x0;
      }
      puVar11[0x21f] = 0;
      if ((puVar11 + 0x222 != *(undefined4 **)(puVar11 + 0x220)) &&
         (*(undefined4 **)(puVar11 + 0x220) != (undefined4 *)0x0)) {
        *(undefined8 *)((longlong)&uStack_48 + lVar10) = 0x1400566aa;
        func_0x000144d9c130();
      }
      puVar11[0x21e] = 0x40;
      *(undefined8 *)(puVar11 + 0x220) = 0;
      puVar11[0x19b] = 0;
      if ((puVar11 + 0x19e != *(undefined4 **)(puVar11 + 0x19c)) &&
         (*(undefined4 **)(puVar11 + 0x19c) != (undefined4 *)0x0)) {
        *(undefined8 *)((longlong)&uStack_48 + lVar10) = 0x14005665e;
        func_0x000144d9c130();
      }
      puVar11[0x19a] = 0x40;
      *(undefined8 *)(puVar11 + 0x19c) = 0;
      puVar11[0x117] = 0;
      if ((puVar11 + 0x11a != *(undefined4 **)(puVar11 + 0x118)) &&
         (*(undefined4 **)(puVar11 + 0x118) != (undefined4 *)0x0)) {
        *(undefined8 *)((longlong)&uStack_48 + lVar10) = 0x140056671;
        func_0x000144d9c130();
      }
      puVar11[0x116] = 0x40;
      *(undefined8 *)(puVar11 + 0x118) = 0;
      puVar11[0xf5] = 0;
      if ((puVar11 + 0xf8 != *(undefined4 **)(puVar11 + 0xf6)) &&
         (*(undefined4 **)(puVar11 + 0xf6) != (undefined4 *)0x0)) {
        *(undefined8 *)((longlong)&uStack_48 + lVar10) = 0x140056684;
        func_0x000144d9c130();
      }
      puVar11[0xf4] = 0x78;
      *(undefined8 *)(puVar11 + 0xf6) = 0;
      puVar11[1] = 0;
      if ((puVar11 + 4 != *(undefined4 **)(puVar11 + 2)) &&
         (*(undefined4 **)(puVar11 + 2) != (undefined4 *)0x0)) {
        *(undefined8 *)((longlong)&uStack_48 + lVar10) = 0x140056697;
        func_0x000144d9c130();
      }
      *puVar11 = 0x78;
      *(undefined8 *)(puVar11 + 2) = 0;
      plVar16 = _DAT_14764a8e8;
      auVar5._8_8_ = 0;
      auVar5._0_8_ = (longlong)puVar11 - *_DAT_14764a8e8;
      uVar18 = SUB164(auVar5 / ZEXT416(*(uint *)(_DAT_14764a8e8 + 1)),0);
      uVar9 = *(uint *)(_DAT_14764a8e8[5] +
                       (SUB168(auVar5 / ZEXT416(*(uint *)(_DAT_14764a8e8 + 1)),0) & 0xffffffff) * 4)
              & 0xfffe0000 | uVar18;
      puVar1 = (ulonglong *)(_DAT_14764a8e8 + 4);
      uVar18 = uVar18 & 0x1ffff | 0x20000;
      if (uVar9 < 0xfffe0000) {
        uVar18 = uVar9 + 0x20000;
      }
      LOCK();
      *(int *)(_DAT_14764a8e8 + 2) = (int)_DAT_14764a8e8[2] + -1;
      UNLOCK();
      uVar12 = *puVar1;
      do {
        *(uint *)(plVar16[5] + (ulonglong)(uVar18 & 0x1ffff) * 4) =
             (uint)uVar12 & 0x1ffff | uVar18 & 0xfffe0000;
        LOCK();
        uVar13 = plVar16[4];
        bVar22 = uVar12 == uVar13;
        if (bVar22) {
          plVar16[4] = (uVar12 & 0xffffffff00000000) + (ulonglong)(uVar18 & 0x1ffff) + 0x100000000;
          uVar13 = uVar12;
        }
        UNLOCK();
        uVar12 = uVar13;
      } while (!bVar22);
      if (plVar16[3] != 0) {
        *(undefined8 *)((longlong)&uStack_48 + lVar10) = 0x14005664b;
        FUN_140189080();
      }
    }
    LOCK();
    *(undefined4 *)(lVar2 + 0x308) = 0;
    UNLOCK();
    *(undefined8 *)((longlong)&uStack_48 + lVar10) = 0x1400566c0;
    cVar7 = func_0x0001455ada30();
    uVar18 = *(uint *)(&stack0xfffffffffffffffc + lVar10);
    if ((ulonglong)uVar18 != 0) {
      lVar17 = 0;
      *(undefined4 *)(&stack0x00000800 + lVar10) = 0x100;
      uVar12 = 0;
      do {
        uVar13 = uVar12;
        if (*(char *)(*(longlong *)(&stack0x00000000 + lVar17 + lVar10) + 0xb) == '\0') {
          uVar13 = (ulonglong)((int)uVar12 + 1);
          *(longlong *)(&stack0x00000808 + uVar12 * 8 + lVar10) =
               *(longlong *)(&stack0x00000000 + lVar17 + lVar10);
        }
        lVar17 = lVar17 + 8;
        uVar12 = uVar13;
      } while ((ulonglong)uVar18 << 3 != lVar17);
      *(int *)(&stack0x00000804 + lVar10) = (int)uVar13;
      *(undefined8 *)((longlong)&uStack_48 + lVar10) = 0x140056718;
      func_0x000144da40e0();
      uVar18 = *(uint *)(&stack0xfffffffffffffffc + lVar10);
      *(undefined4 *)(&stack0x00000804 + lVar10) = 0;
      if ((ulonglong)uVar18 != 0) {
        lVar17 = 0;
        uVar12 = 0;
        do {
          uVar13 = uVar12;
          if (*(char *)(*(longlong *)(&stack0x00000000 + lVar17 + lVar10) + 0xb) == '\x01') {
            uVar13 = (ulonglong)((int)uVar12 + 1);
            *(longlong *)(&stack0x00000808 + uVar12 * 8 + lVar10) =
                 *(longlong *)(&stack0x00000000 + lVar17 + lVar10);
          }
          lVar17 = lVar17 + 8;
          uVar12 = uVar13;
        } while ((ulonglong)uVar18 << 3 != lVar17);
        *(int *)(&stack0x00000804 + lVar10) = (int)uVar13;
      }
      *(undefined8 *)((longlong)&uStack_48 + lVar10) = 0x14005676e;
      func_0x000144da40e0(&stack0x00000808 + lVar10);
      *(undefined4 *)(&stack0xfffffffffffffffc + lVar10) = 0;
    }
    uVar19 = *(undefined4 *)(&stack0xfffffffffffffff0 + lVar10);
    if (cVar7 != '\0') {
      return;
    }
    *(undefined8 *)((longlong)&uStack_48 + lVar10) = 0x140056787;
    cVar7 = func_0x0001455ada30(lVar2);
    bVar22 = false;
    if (cVar7 != '\0') {
      return;
    }
  } while( true );
}

