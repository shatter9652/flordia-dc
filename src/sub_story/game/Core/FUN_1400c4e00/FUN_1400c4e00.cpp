// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400c4e00  size: 804 bytes
// Name:    FUN_1400c4e00
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1455a4fb0, FUN_144ed1510
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400c4e00(longlong *param_1)

{
  byte bVar1;
  byte bVar2;
  undefined1 auVar3 [16];
  char cVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 (*pauVar7) [16];
  uint uVar8;
  longlong lVar9;
  longlong *plVar10;
  ulonglong uVar11;
  longlong unaff_GS_OFFSET;
  undefined1 auVar12 [16];
  undefined1 auVar13 [64];
  undefined1 auVar14 [64];
  longlong alStack_348 [3];
  code *pcStack_330;
  
  bVar1 = *(byte *)(_DAT_14a943ab0 + 1);
  lVar5 = (ulonglong)bVar1 * 0x1e0;
  if (*(char *)((longlong)param_1 + lVar5 + 0xe37) != '\0') {
    return;
  }
  plVar10 = *(longlong **)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1288);
  if (plVar10 == (longlong *)0x0) {
    if ((*(byte *)((longlong)param_1 + lVar5 + 0xe36) & 4) != 0) {
      return;
    }
  }
  else {
    cVar4 = (**(code **)(*plVar10 + 0x48))(plVar10,param_1);
    if (cVar4 == '\0') {
      return;
    }
  }
  if (_DAT_14a942c30 != 0 || _DAT_14a942c20 != 0) {
    alStack_348[0] = _DAT_14a942c20;
    alStack_348[1] = uRam000000014a942c28;
    alStack_348[2] = _DAT_14a942c30;
    pcStack_330 = pcRam000000014a942c38;
    (*pcRam000000014a942c38)(alStack_348,param_1);
  }
  lVar5 = *param_1;
  if (*(char *)(lVar5 + 0x54) == '\0') {
    if (*(short *)(lVar5 + 0x40) != 0) {
      plVar10 = param_1 + 1;
      uVar11 = 0;
      do {
        if (((*(int *)(*(longlong *)(*(longlong *)(lVar5 + 0x38) + uVar11 * 8) + 0xc) == 0) &&
            (plVar6 = (longlong *)FUN_144ed1510((int)*plVar10), plVar6 != (longlong *)0x0)) &&
           (cVar4 = (**(code **)(*plVar6 + 0x40))(plVar6,0), cVar4 != '\0')) {
          plVar6 = *(longlong **)(*(longlong *)(*param_1 + 0x38) + uVar11 * 8);
          (**(code **)(*plVar6 + 0x48))(plVar6,param_1,plVar10);
        }
        lVar5 = *param_1;
        uVar11 = uVar11 + 1;
        plVar10 = (longlong *)((longlong)plVar10 + 0xc);
      } while (uVar11 < *(ushort *)(lVar5 + 0x40));
    }
    goto LAB_1400c50d9;
  }
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    func_0x0001455db994();
    lVar5 = **(longlong **)(unaff_GS_OFFSET + 0x58);
    cVar4 = *(char *)((*(longlong **)(unaff_GS_OFFSET + 0x58))[__tls_index] + 8);
    bVar2 = *(byte *)(lVar5 + 0x1294);
    uVar8 = (uint)bVar2;
    if (*(char *)((ulonglong)bVar2 + 0x14a942f20) != '\0') {
      if (cVar4 == '\0') {
        func_0x0001455db994();
        uVar8 = (uint)*(byte *)(lVar5 + 0x1294);
      }
      goto LAB_1400c4fb5;
    }
    if (cVar4 == '\0') {
      func_0x0001455db994();
    }
LAB_1400c4fcd:
    pauVar7 = (undefined1 (*) [16])
              (*(longlong *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x12b8) + 0xf0);
  }
  else {
    bVar2 = *(byte *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1294);
    uVar8 = (uint)bVar2;
    if (*(char *)((ulonglong)bVar2 + 0x14a942f20) == '\0') goto LAB_1400c4fcd;
LAB_1400c4fb5:
    pauVar7 = (undefined1 (*) [16])((ulonglong)(uVar8 << 4) + 0x14a942f30);
  }
  lVar5 = *param_1;
  if (*(short *)(lVar5 + 0x40) == 0) {
    uVar8 = 0;
  }
  else {
    auVar13 = ZEXT1664(*pauVar7);
    plVar10 = param_1 + 1;
    auVar14 = ZEXT1264(ZEXT812(0));
    uVar11 = 0;
    uVar8 = 0;
    do {
      if (((*(int *)(*(longlong *)(*(longlong *)(lVar5 + 0x38) + uVar11 * 8) + 0xc) == 0) &&
          (plVar6 = (longlong *)FUN_144ed1510((int)*plVar10), plVar6 != (longlong *)0x0)) &&
         (cVar4 = (**(code **)(*plVar6 + 0x40))(plVar6,0), cVar4 != '\0')) {
        lVar5 = FUN_144ed1510((int)*plVar10);
        lVar9 = (longlong)(int)uVar8;
        auVar3 = vsubps_avx(auVar13._0_16_,
                            *(undefined1 (*) [16])(lVar5 + 0x2b0 + (ulonglong)bVar1 * 0x80));
        uVar8 = uVar8 + 1;
        auVar12._0_4_ = auVar3._0_4_ * auVar3._0_4_;
        auVar12._4_4_ = auVar3._4_4_ * auVar3._4_4_;
        auVar12._8_4_ = auVar3._8_4_ * auVar3._8_4_;
        auVar12._12_4_ = auVar3._12_4_ * auVar3._12_4_;
        auVar3 = vblendps_avx(auVar12,auVar14._0_16_,8);
        auVar3 = vhaddps_avx(auVar3,auVar3);
        auVar3 = vhaddps_avx(auVar3,auVar3);
        *(int *)(alStack_348 + lVar9 * 3) = auVar3._0_4_;
        alStack_348[lVar9 * 3 + 1] = (longlong)plVar10;
        alStack_348[lVar9 * 3 + 2] = *(longlong *)(*(longlong *)(*param_1 + 0x38) + uVar11 * 8);
      }
      lVar5 = *param_1;
      uVar11 = uVar11 + 1;
      plVar10 = (longlong *)((longlong)plVar10 + 0xc);
    } while (uVar11 < *(ushort *)(lVar5 + 0x40));
  }
  FUN_1455a4fb0(alStack_348,alStack_348 + (longlong)(int)uVar8 * 3,(longlong)(int)uVar8);
  if (0 < (int)uVar8) {
    lVar5 = 0;
    do {
      plVar10 = *(longlong **)((longlong)alStack_348 + lVar5 + 0x10);
      (**(code **)(*plVar10 + 0x48))
                (plVar10,param_1,*(undefined8 *)((longlong)alStack_348 + lVar5 + 8));
      lVar5 = lVar5 + 0x18;
    } while ((ulonglong)uVar8 * 0x18 != lVar5);
  }
LAB_1400c50d9:
  if (_DAT_14a942c70 != 0 || _DAT_14a942c60 != 0) {
    alStack_348[0] = _DAT_14a942c60;
    alStack_348[1] = uRam000000014a942c68;
    alStack_348[2] = _DAT_14a942c70;
    pcStack_330 = pcRam000000014a942c78;
    (*pcRam000000014a942c78)(alStack_348,param_1);
  }
  return;
}

