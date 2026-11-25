// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140122ce0  size: 1072 bytes
// Name:    FUN_140122ce0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1443c4830, FUN_1401941b0, FUN_14221c130, FUN_1443c4850, FUN_1443c4d90, FUN_14034bc70, FUN_144ed31e0, FUN_145204d60
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140122ce0(undefined8 *param_1)

{
  ulonglong *puVar1;
  ushort uVar2;
  uint uVar3;
  longlong lVar4;
  code *pcVar5;
  undefined8 *puVar6;
  uint uVar7;
  undefined4 uVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  uint *puVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  ulonglong uVar18;
  longlong lVar19;
  uint *puVar20;
  undefined1 auVar21 [64];
  int iStack_b4;
  undefined8 *puStack_b0;
  uint uStack_a8;
  uint uStack_a4;
  longlong lStack_a0;
  undefined1 auStack_98 [16];
  longlong lStack_88;
  ulonglong uStack_80;
  undefined4 uStack_78;
  undefined1 uStack_74;
  undefined1 aauStack_68 [2] [16];
  
  iStack_b4 = 0;
  uVar14 = *(uint *)(param_1 + 0xd);
  uVar16 = *(uint *)((longlong)param_1 + 0x6c);
  puStack_b0 = param_1;
  if (uVar16 != uVar14) {
    uVar17 = *(uint *)((longlong *)param_1[0xc] + 2);
    lVar4 = *(longlong *)param_1[0xc];
    do {
      uVar10 = *(ulonglong *)(lVar4 + (ulonglong)uVar14 * 0x10);
      if (((byte)(uVar10 >> 0x3d) < ((byte)uVar10 & 7)) &&
         ((uVar10 < 0x2000000000000000 ||
          ((*(byte *)((ulonglong)(*(uint *)(uVar10 & 0x1ffffffffffffff8) & 0xfff) * 0x38 +
                     0x149c3e1d7) & 7) < (uint)(uVar10 >> 0x3d))))) {
        FUN_1443c4d90((uint *)(uVar10 & 0x1ffffffffffffff8),(ulonglong)uVar14 * 0x10 + lVar4,
                      &iStack_b4);
      }
      uVar14 = uVar14 + 1;
      if (uVar14 == uVar17) {
        uVar14 = 0;
      }
    } while (uVar16 != uVar14);
  }
  puVar6 = puStack_b0;
  if (*(int *)((longlong)puStack_b0 + 0x7c) < 0) {
    FUN_14221c130((longlong)(*(int *)((longlong)puStack_b0 + 0x7c) * -0x10000));
  }
  uVar14 = *(uint *)(puVar6 + 0xd);
  uVar16 = *(uint *)((longlong)puVar6 + 0x6c);
  if (uVar16 != uVar14) {
    auVar21 = ZEXT1264(ZEXT812(0));
    uVar17 = *(uint *)((longlong *)puStack_b0[0xc] + 2);
    lVar4 = *(longlong *)puStack_b0[0xc];
    uStack_a8 = uVar17;
    uStack_a4 = uVar16;
    do {
      uVar10 = *(ulonglong *)(lVar4 + (ulonglong)uVar14 * 0x10);
      puVar1 = (ulonglong *)(lVar4 + (ulonglong)uVar14 * 0x10);
      puVar13 = (uint *)(uVar10 & 0x1ffffffffffffff8);
      lVar19 = (ulonglong)(*puVar13 & 0xfff) * 0x38;
      puVar20 = (uint *)(lVar19 + 0x149c3e1d0);
      uVar7 = (uint)(uVar10 >> 0x3d);
      if (((byte)uVar10 & 7) < (byte)(uVar10 >> 0x3d)) {
        uVar3 = *(uint *)(lVar19 + 0x149c3e1d4);
        uVar15 = uVar3 >> 0x18 & 7;
        if ((uVar10 & 7) == 0) {
          if (uVar15 < uVar7) {
            lStack_88 = FUN_1443c4830(*(undefined4 *)(lVar19 + 0x149c3e1fc));
            auStack_98 = auVar21._0_16_;
            lStack_88 = lStack_88 + (ulonglong)*(ushort *)(lVar19 + 0x149c3e200);
            uStack_80 = (ulonglong)
                        (*(int *)(lVar19 + 0x149c3e1fc) - (uint)*(ushort *)(lVar19 + 0x149c3e200));
            uStack_78 = 0;
            uStack_74 = 0;
            uVar7 = *puVar13;
            aauStack_68[0] = auStack_98;
            uVar12 = func_0x0001450e2130(puVar13);
            uVar10 = func_0x000145204e60(uVar12,(ulonglong)(uVar7 & 0xfff) * 0x38 + 0x149c3e1d8,1,2,
                                         auStack_98,8,0,aauStack_68,auVar21._0_16_);
          }
          else {
            uVar8 = func_0x000144fd2840((ulonglong)
                                        *(ushort *)
                                         (lVar19 + 0x149c3e1f0 +
                                         (ulonglong)
                                         ((((uVar3 & 7) - uVar7) + 1) -
                                         (uint)(*puVar20 < 0x10000000)) * 2) << 0xc);
            uVar10 = FUN_145204d60(puVar13,uVar8,*(undefined4 *)(lVar19 + 0x149c3e1fc));
          }
          if (uVar10 == 0) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
LAB_140123063:
          puVar1[1] = uVar10;
          puVar13 = (uint *)(*puVar1 & 0x1ffffffffffffff8);
        }
        else {
          if (uVar7 <= uVar15) {
            uVar8 = func_0x000144fd2840((ulonglong)
                                        *(ushort *)
                                         (lVar19 + 0x149c3e1f0 +
                                         (ulonglong)
                                         ((((uVar3 & 7) - uVar7) + 1) -
                                         (uint)(*puVar20 < 0x10000000)) * 2) << 0xc);
            uVar10 = FUN_14034bc70(uVar8,&iStack_b4);
            goto LAB_140123063;
          }
          if (((uint)uVar10 & 7) <= uVar15) {
            lVar9 = FUN_1443c4830(*(undefined4 *)(lVar19 + 0x149c3e1fc));
            uVar10 = (ulonglong)*(ushort *)(lVar19 + 0x149c3e200) + lVar9;
            goto LAB_140123063;
          }
        }
        FUN_1443c4850(puVar13,puVar1);
      }
      else if ((0x1fffffffffffffff < uVar10) &&
              (uVar7 <= (*(uint *)(lVar19 + 0x149c3e1d4) >> 0x18 & 7))) {
        uVar2 = *(ushort *)((longlong)puVar13 + 6);
        lStack_a0 = _DAT_149c3e108;
        uVar18 = (ulonglong)
                 ((((*(uint *)(lVar19 + 0x149c3e1d4) & 7) - uVar7) + 1) -
                 (uint)(*puVar20 < 0x10000000));
        lVar19 = (ulonglong)*(ushort *)(lVar19 + 0x149c3e1f0 + uVar18 * 2) << 0xc;
        uVar8 = func_0x000144fd2840(lVar19);
        uVar10 = FUN_14034bc70(uVar8,&iStack_b4);
        puVar1[1] = uVar10;
        uVar12 = FUN_144ed31e0(puVar13,uVar18);
        uVar16 = uStack_a4;
        uVar11 = func_0x0001455c4fe0((char)puVar13[1]);
        uVar17 = uStack_a8;
        FUN_1401941b0(uVar11,uVar12,uVar10,0,lVar19);
        *(byte *)(lStack_a0 + 0xc + (ulonglong)uVar2 * 0x10) = (byte)(*puVar1 >> 0x3d);
      }
      uVar14 = uVar14 + 1;
      if (uVar14 == uVar17) {
        uVar14 = 0;
      }
    } while (uVar16 != uVar14);
  }
  puVar6 = puStack_b0;
  FUN_14221c130((longlong)(*(int *)(puStack_b0 + 0xf) << 0x10) - (longlong)iStack_b4);
  puVar6[0xb] = 0xffffffffffffffff;
  _DAT_149c3d808 = (undefined8 *)*_DAT_149c3d808;
  *puVar6 = 0;
  if (_DAT_149c3d818 == 0) {
    _DAT_149c3d820 = (undefined8 *)&DAT_149c3d818;
  }
  *_DAT_149c3d820 = puVar6;
  _DAT_149c3d820 = puVar6;
  uVar12 = func_0x0001401940c0();
  puVar6[0xb] = uVar12;
  return;
}

