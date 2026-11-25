// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14012e610  size: 271 bytes
// Name:    FUN_14012e610
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14012e730, FUN_14012eb00, FUN_145309330, FUN_144eb3750, FUN_14012e7f0, FUN_1456a7be0, FUN_14032a110
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Removing unreachable block (ram,0x00014012e79c) */
/* WARNING: Removing unreachable block (ram,0x00014012e7d3) */
/* WARNING: Removing unreachable block (ram,0x00014012e7dd) */
/* WARNING: Removing unreachable block (ram,0x00014012e7e8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14012e610(longlong param_1)

{
  ushort uVar1;
  undefined4 uVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  ulonglong uVar15;
  undefined8 uVar16;
  undefined1 auVar17 [16];
  undefined8 uVar18;
  undefined8 in_stack_ffffffffffffff88;
  uint uVar19;
  undefined8 auStack_68 [2];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  byte bStack_38;
  int aiStack_34 [3];
  
  uVar19 = (uint)((ulonglong)in_stack_ffffffffffffff88 >> 0x20);
  if ((*(longlong *)(param_1 + 0x48) == 0) ||
     (lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x48) + 0x18), lVar4 == 0)) {
    return;
  }
  if (*(longlong *)(param_1 + 0xd0) == 0) {
    uStack_50 = 0x14012e649;
    func_0x00014012e720(lVar4);
  }
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  uVar2 = *(undefined4 *)(param_1 + 200);
  uStack_50 = 0x14012e65d;
  uVar7 = func_0x00014032a160(uVar2);
  uStack_50 = 0x14012e66a;
  uVar8 = FUN_14032a110(lVar4,uVar7,1);
  uVar13 = *(undefined8 *)(param_1 + 0xc0);
  uStack_50 = 0x14012e67d;
  lVar10 = func_0x000144fdec40(uVar13,uVar2);
  if (lVar10 != 0) {
    uStack_50 = 0x14012e6b6;
    lVar11 = FUN_14012eb00(uVar13,uVar2);
    if (lVar11 != 0) {
      uStack_50 = 0x14012e6c6;
      lVar11 = FUN_144eb3750(*(undefined4 *)(lVar11 + 0x9c));
      if (lVar11 == lVar10) {
        lVar10 = *(longlong *)
                  (*(longlong *)(*(longlong *)(lVar4 + 0x78) + (ulonglong)uVar8 * 8) + 0x58);
        uStack_50 = 0x14012e6e5;
        cVar6 = FUN_145309330(*(undefined4 *)(lVar10 + 0xc),*(undefined8 *)(lVar10 + 0x10));
        if (cVar6 == '\0') {
          uStack_50 = 0x14012e6f3;
          iVar9 = FUN_1456a7be0(lVar4,uVar8);
          if (-1 < iVar9) {
            uStack_50 = 0x14012e701;
            FUN_14012e7f0(param_1);
            *(undefined8 *)(param_1 + 0x14) = 0xffffffff;
            *(undefined1 *)(param_1 + 0x2e) = 0;
            *(undefined1 *)(param_1 + 0x40) = 0;
            return;
          }
        }
      }
    }
  }
  uStack_50 = 0x14012e68c;
  FUN_14012e7f0(param_1,(ulonglong)uVar8);
  uStack_50 = 0x14012e694;
  FUN_14012e730(param_1);
  uVar8 = *(uint *)(param_1 + 200);
  if (uVar8 != 0x1ffff) {
    uVar3 = *(uint *)(_DAT_14a9ec8f0[5] + (ulonglong)(uVar8 & 0x1ffff) * 4);
    if ((((uVar8 ^ uVar3) < 0x20000) &&
        ((uVar3 & *(uint *)(_DAT_14a9ec8f0 + 6)) == *(uint *)(_DAT_14a9ec8f0 + 6))) &&
       (lVar4 = *_DAT_14a9ec8f0, lVar4 != 0)) {
      uVar15 = (ulonglong)((uVar8 & 0x1ffff) * (int)_DAT_14a9ec8f0[1]);
      lVar10 = *(longlong *)(lVar4 + 0x38 + uVar15);
      lVar4 = *(longlong *)(lVar4 + 0x40 + uVar15);
      if (lVar10 != 0) {
        if (*(int *)(lVar10 + 0xf0) != 6) {
          aiStack_34[1] = 0x4012eac9;
          aiStack_34[2] = 1;
          FUN_1413b1110(lVar10);
        }
        lVar4 = *(longlong *)(lVar10 + 0x20);
        aiStack_34[1] = 0x4012eada;
        aiStack_34[2] = 1;
        lVar10 = func_0x0001401503e0(*(undefined8 *)(*(longlong *)(lVar4 + 0x28) + 0x48));
        if ((lVar10 != 0) && (iVar9 = *(int *)(lVar10 + 0x28), iVar9 != 0)) {
          lVar4 = *(longlong *)(lVar4 + 0x50);
          *(int *)(lVar4 + 0x14) = iVar9;
          if ((*(longlong *)(lVar4 + 0x180) != 0) &&
             (lVar10 = *(longlong *)(*(longlong *)(lVar4 + 0x180) + 0x38), lVar10 != 0)) {
            FUN_142855760(lVar10);
            func_0x0001412e8ba0(lVar10,aiStack_34);
            if (aiStack_34[0] != 0) {
              func_0x0001412e8ba0(lVar10,&uStack_40);
              if ((bStack_38 & 0xe) == 2) {
                FUN_142855800(lVar10);
              }
            }
          }
          uVar1 = *(ushort *)(lVar4 + 0x138);
          if ((ulonglong)uVar1 != 0) {
            uVar15 = 0;
            do {
              FUN_1428556b0(*(undefined8 *)(*(longlong *)(lVar4 + 0x130) + uVar15 * 8),iVar9,0);
              uVar15 = uVar15 + 1;
            } while (uVar1 != uVar15);
          }
          return;
        }
        return;
      }
      if (lVar4 == 0) {
        return;
      }
      if (*(int *)(lVar4 + 200) != 5) {
        if ((*(byte *)(lVar4 + 0x104) & 2) == 0) {
          cVar6 = func_0x0001413b19e0(*(undefined4 *)(lVar4 + 200));
          if (cVar6 == '\0') {
            auVar17._0_12_ = ZEXT812(0);
            auVar17._12_4_ = 0;
            *(undefined4 *)(lVar4 + 200) = 0;
            *(undefined8 *)(lVar4 + 0xe0) = 0;
            *(undefined1 (*) [16])(lVar4 + 0xd0) = auVar17;
          }
          FUN_140e95370(*(undefined8 *)(lVar4 + 0x28));
          cVar6 = FUN_145307fe0(*(undefined8 *)
                                 (*(longlong *)(*(longlong *)(lVar4 + 0x20) + 0x28) + 0x58),
                                *(undefined8 *)(*(longlong *)(lVar4 + 0x20) + 0x50));
          if (((cVar6 == '\0') &&
              (lVar10 = *(longlong *)(*(longlong *)(lVar4 + 0x28) + 0x48), lVar10 != 0)) &&
             (lVar10 = *(longlong *)(lVar10 + 0x18), lVar10 != 0)) {
            FUN_14012e730();
            lVar11 = FUN_1413b19f0(lVar10);
            if (((lVar11 == 0) ||
                (plVar12 = (longlong *)FUN_1413b1ae0(*(undefined8 *)(lVar11 + 0x58)),
                plVar12 == (longlong *)0x0)) || (lVar11 = plVar12[9], lVar11 == 0)) {
              if (*(int *)(lVar10 + 0x44) < 1) {
                lVar10 = *(longlong *)(*(longlong *)(lVar4 + 0x28) + 0xd0);
                if (lVar10 == 0) {
                  return;
                }
                if ((ulonglong)*(ushort *)(lVar10 + 0x20) == 0) {
                  return;
                }
                lVar11 = 0;
                while ((lVar5 = *(longlong *)
                                 (*(longlong *)(*(longlong *)(lVar10 + 0x18) + 0xb0 + lVar11) + 0x18
                                 ), lVar5 == 0 || (*(int *)(lVar5 + 0x44) < 1))) {
                  lVar11 = lVar11 + 0xb8;
                  if ((ulonglong)*(ushort *)(lVar10 + 0x20) * 0xb8 - lVar11 == 0) {
                    return;
                  }
                }
                lVar11 = *(longlong *)(lVar5 + 0x48);
                uVar13 = *(undefined8 *)(lVar11 + 0x10);
                uVar18 = *(undefined8 *)(lVar11 + 0x18);
                uVar16 = func_0x0001413b1aa0(*(undefined4 *)(lVar11 + 0x20));
                puVar14 = auStack_68;
              }
              else {
                lVar11 = *(longlong *)(lVar10 + 0x48);
                uVar13 = *(undefined8 *)(lVar11 + 0x10);
                uVar18 = *(undefined8 *)(lVar11 + 0x18);
                uVar16 = func_0x0001413b1aa0(*(undefined4 *)(lVar11 + 0x20));
                puVar14 = &uStack_58;
              }
              *puVar14 = uVar13;
              puVar14[1] = uVar18;
              func_0x000140e8fec0(lVar4,puVar14,uVar16,1,(ulonglong)uVar19 << 0x20);
              uVar13 = *(undefined8 *)(lVar4 + 0x28);
              plVar12 = (longlong *)0x0;
            }
            else {
              uVar13 = *(undefined8 *)(lVar11 + 0x10);
              uVar18 = *(undefined8 *)(lVar11 + 0x18);
              uVar16 = func_0x0001413b1aa0(*(undefined4 *)(lVar11 + 0x20));
              uStack_48 = uVar13;
              uStack_40 = uVar18;
              func_0x000140e8fec0(lVar4,&uStack_48,uVar16,1,(ulonglong)uVar19 << 0x20);
              uVar13 = *(undefined8 *)(lVar4 + 0x28);
              cVar6 = (**(code **)(*plVar12 + 8))(plVar12,0x3eb43c60);
              if (cVar6 == '\0') {
                plVar12 = (longlong *)0x0;
              }
            }
            FUN_140e95480(uVar13,lVar11,plVar12,0,0);
          }
        }
        return;
      }
      return;
    }
  }
  return;
}

