// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140128470  size: 667 bytes
// Name:    FUN_140128470
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145547480, FUN_144ead9e0, FUN_140128710, FUN_1456a7b40, FUN_142f50910, FUN_142f50950
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_140128470(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  ushort uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  char cVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined8 uVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [64];
  undefined1 auVar17 [64];
  undefined1 auVar18 [64];
  undefined1 auVar19 [64];
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined1 auStack_b8 [16];
  undefined1 auStack_a8 [16];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_50;
  
  plVar7 = (longlong *)FUN_145547480(param_2);
  uVar12 = (uint)plVar7;
  if (uVar12 == 0xffffffff) {
    return plVar7;
  }
  plVar7 = (longlong *)((ulonglong)(uVar12 >> 4) * 0x550 + _DAT_147f035c0);
  if (*(char *)((ulonglong)(uVar12 & 0xf) * 0x54 + 0x46 + (longlong)plVar7) != '\x01') {
    return plVar7;
  }
  if (param_2 == 0x28) {
    uVar3 = *(undefined4 *)(param_1 + 0x2a78);
    plVar7 = (longlong *)FUN_140128710(uVar3,*(undefined1 *)(param_1 + 0xb21b));
    if ((char)plVar7 == '\0') {
      return plVar7;
    }
    uVar11 = 4;
  }
  else {
    if (param_2 == 0x38) {
      plVar7 = (longlong *)
               FUN_142f50910(*(undefined4 *)(param_1 + 0x2a78),*(undefined1 *)(param_1 + 0xb21b));
      if ((char)plVar7 == '\0') {
        return plVar7;
      }
      goto LAB_14012850b;
    }
    if (param_2 != 0x39) goto LAB_14012850b;
    uVar3 = *(undefined4 *)(param_1 + 0x2a78);
    plVar7 = (longlong *)FUN_142f50950(uVar3);
    if ((char)plVar7 == '\0') {
      return plVar7;
    }
    uVar11 = 5;
  }
  FUN_1456a7b40(uVar3,uVar11);
LAB_14012850b:
  lVar8 = func_0x0001451ad2b0(*(undefined4 *)(param_1 + 0x2a78));
  if (lVar8 == 0) {
    return (longlong *)0x0;
  }
  uStack_98 = *(undefined8 *)(lVar8 + 0x70);
  uStack_90 = *(undefined8 *)(lVar8 + 0x78);
  plVar7 = (longlong *)func_0x000144dc3790(&uStack_98,auStack_a8);
  uVar2 = *(ushort *)(param_1 + 0x20);
  if (uVar2 != 0) {
    auVar16 = ZEXT1664(auStack_a8);
    plVar7 = (longlong *)0x0;
    auVar18 = ZEXT1264(ZEXT812(0));
    auVar17 = ZEXT1264(ZEXT812(0));
    uVar12 = 0;
    do {
      plVar9 = (longlong *)func_0x0001454382e0(*(undefined8 *)(param_1 + 0x18),uVar2,uVar12);
      plVar10 = (longlong *)0x0;
      if (((plVar9 != (longlong *)0x0) &&
          (plVar10 = (longlong *)(**(code **)(*plVar9 + 0x18))(plVar9), (char)plVar10 != '\0')) &&
         (uVar13 = *(uint *)(plVar9 + 0xb), uVar13 != 0x1ffff)) {
        uVar4 = *(uint *)(_DAT_14abb6918[5] + (ulonglong)(uVar13 & 0x1ffff) * 4);
        plVar10 = _DAT_14abb6918;
        if ((((~uVar4 & *(uint *)(_DAT_14abb6918 + 6)) == 0) &&
            ((uVar4 & 0x7fe0000) == (uVar13 & 0xfffe0000))) && (lVar8 = *_DAT_14abb6918, lVar8 != 0)
           ) {
          uVar14 = (ulonglong)((uVar13 & 0x1ffff) * (int)_DAT_14abb6918[1]);
          plVar10 = (longlong *)
                    FUN_144ead9e0(*(undefined4 *)(*(longlong *)(lVar8 + 0x20 + uVar14) + 0x264));
          if ((char)plVar10 != '\0') {
            puVar1 = (undefined8 *)(lVar8 + 0x70 + uVar14);
            uStack_c8 = *puVar1;
            uStack_c0 = puVar1[1];
            plVar10 = (longlong *)func_0x000144dc3790(&uStack_c8,auStack_b8);
            auVar5 = vsubps_avx(auStack_b8,auVar16._0_16_);
            auVar15._0_4_ = auVar5._0_4_ * auVar5._0_4_;
            auVar15._4_4_ = auVar5._4_4_ * auVar5._4_4_;
            auVar15._8_4_ = auVar5._8_4_ * auVar5._8_4_;
            auVar15._12_4_ = auVar5._12_4_ * auVar5._12_4_;
            auVar5 = vblendps_avx(auVar15,auVar17._0_16_,8);
            auVar5 = vhaddps_avx(auVar5,auVar5);
            auVar5 = vhaddps_avx(auVar5,auVar5);
            auVar19 = ZEXT1664(auVar5);
            if (auVar18._0_4_ < auVar5._0_4_) {
              plVar10 = (longlong *)func_0x000141460980(*(undefined4 *)(lVar8 + 0x9c + uVar14));
              auVar18 = ZEXT1664(auVar19._0_16_);
              plVar7 = plVar10;
            }
          }
        }
      }
      uVar2 = *(ushort *)(param_1 + 0x20);
      uVar12 = uVar12 + 1;
    } while (uVar12 < uVar2);
    if (plVar7 != (longlong *)0x0) {
      puStack_50 = &UNK_14195f613;
      plVar7 = (longlong *)func_0x000144fce000(*(undefined4 *)((longlong)plVar7 + 0x14));
      if (plVar7 != (longlong *)0x0) {
        puStack_50 = &UNK_14195f628;
        cVar6 = (**(code **)(*plVar7 + 0x18))(plVar7);
        if ((cVar6 != '\0') && (uVar12 = *(uint *)(plVar7 + 0xb), uVar12 != 0x1ffff)) {
          uVar13 = *(uint *)(_DAT_14abb6918[5] + (ulonglong)(uVar12 & 0x1ffff) * 4);
          if ((~uVar13 & *(uint *)(_DAT_14abb6918 + 6)) == 0) {
            uVar13 = uVar13 & 0x7fe0000;
            if ((uVar13 == (uVar12 & 0xfffe0000)) && (*_DAT_14abb6918 != 0)) {
              lVar8 = *_DAT_14abb6918 + (ulonglong)((uVar12 & 0x1ffff) * (int)_DAT_14abb6918[1]);
              puStack_50 = &UNK_14195f686;
              cVar6 = FUN_144ead9e0(*(undefined4 *)(*(longlong *)(lVar8 + 0x20) + 0x264),
                                    uVar12 & 0xfffe0000,uVar13,0);
              if (cVar6 != '\0') {
                puStack_50 = &UNK_14195f692;
                cVar6 = FUN_144ef6160(lVar8);
                if (cVar6 != '\0') {
                  puStack_50 = &UNK_14195f6a3;
                  FUN_14074a0f0(plVar7,param_2,0);
                  return (longlong *)0x1;
                }
              }
            }
          }
        }
      }
      return (longlong *)0x0;
    }
    return plVar10;
  }
  return plVar7;
}

