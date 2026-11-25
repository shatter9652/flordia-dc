// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401b1440  size: 584 bytes
// Name:    FUN_1401b1440
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_141207a30, FUN_144f9fed0, FUN_1436e5880, FUN_1430b8fc0, FUN_140c84110
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1401b1440(longlong param_1,longlong *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  bool bVar4;
  bool bVar5;
  char cVar6;
  byte bVar7;
  undefined4 uVar8;
  longlong lVar9;
  int iVar10;
  bool bVar11;
  bool bVar12;
  ulonglong uVar13;
  longlong *plVar14;
  undefined1 auVar15 [16];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [16];
  
  lVar9 = func_0x000140d20fd0(*(undefined8 *)(param_1 + 0x1c0));
  cVar6 = FUN_140c84110(lVar9);
  if (cVar6 == '\0') {
    return 0x47;
  }
  lVar9 = *(longlong *)(lVar9 + 0x28);
  if (lVar9 == 0) {
    return 0x47;
  }
  if (*(int *)(param_1 + 0xfc) == 0) {
    return 1;
  }
  uVar13 = 0;
  bVar5 = false;
  bVar4 = false;
  bVar11 = false;
  bVar12 = false;
  do {
    uVar1 = *(uint *)(*(longlong *)(param_1 + 0x100) + uVar13 * 4);
    if (uVar1 != 0x1ffff) {
      uVar2 = *(uint *)(_DAT_14a9b3f48[5] + (ulonglong)(uVar1 & 0x1ffff) * 4);
      if ((((uVar1 ^ uVar2) < 0x20000) &&
          ((uVar2 & *(uint *)(_DAT_14a9b3f48 + 6)) == *(uint *)(_DAT_14a9b3f48 + 6))) &&
         (*_DAT_14a9b3f48 != 0)) {
        plVar14 = (longlong *)
                  (*_DAT_14a9b3f48 + (ulonglong)((uVar1 & 0x1ffff) * (int)_DAT_14a9b3f48[1]));
        cVar6 = (**(code **)(*plVar14 + 8))(plVar14,0x8210f51b);
        if (cVar6 == '\0') {
          cVar6 = (**(code **)(*plVar14 + 8))(plVar14,0x36054df1);
          if (cVar6 == '\0') {
            cVar6 = (**(code **)(*plVar14 + 8))(plVar14,0x2fbf46ed);
            if (cVar6 == '\0') goto LAB_1401b151a;
            cVar6 = *(char *)((longlong)plVar14 + 0xc0c);
          }
          else {
            cVar6 = *(char *)((longlong)plVar14 + 0xeed);
          }
          if (cVar6 != '\0') {
            bVar4 = true;
          }
          cVar6 = FUN_144f9fed0(plVar14);
          bVar12 = bVar11;
          bVar5 = bVar4;
          if (cVar6 != '\0') {
            bVar12 = true;
            bVar11 = bVar12;
          }
        }
        else {
          bVar4 = bVar5;
          if ((char)plVar14[0x13a] == '\0') {
            bVar4 = true;
            bVar5 = true;
          }
        }
LAB_1401b151a:
        if ((bVar4) && (bVar12)) break;
      }
    }
    uVar13 = uVar13 + 1;
  } while (uVar13 < *(uint *)(param_1 + 0xfc));
  if (!bVar4) {
    return 1;
  }
  cVar6 = FUN_141207a30(lVar9);
  if ((cVar6 != '\0') || (bVar7 = FUN_1430b8fc0(lVar9), (bVar7 & 1) != 0 || bVar12)) {
    uStack_78 = *(undefined8 *)(*param_2 + 0x70);
    uStack_70 = *(undefined8 *)(*param_2 + 0x78);
    func_0x000144dc3790(&uStack_78,auStack_58);
    func_0x000144fa06a0(param_1 + 0x180,auStack_68);
    auVar3 = vsubps_avx(auStack_58,auStack_68);
    auVar15._0_4_ = auVar3._0_4_ * auVar3._0_4_;
    auVar15._4_4_ = auVar3._4_4_ * auVar3._4_4_;
    auVar15._8_4_ = auVar3._8_4_ * auVar3._8_4_;
    auVar15._12_4_ = auVar3._12_4_ * auVar3._12_4_;
    auVar3 = vhaddps_avx(auVar15,auVar15);
    if (_DAT_14615b8a0 <= auVar3._0_4_) {
      *(undefined4 *)(param_1 + 0x1cc) = 0;
    }
    else if ((*(int *)(param_1 + 0x1cc) != 0) ||
            (iVar10 = _DAT_14abbef40 + 2000, *(int *)(param_1 + 0x1cc) = iVar10, iVar10 != 0)) {
      uVar8 = func_0x000144db7770();
      goto LAB_1401b164f;
    }
  }
  uVar8 = 0;
LAB_1401b164f:
  cVar6 = FUN_1436e5880(lVar9,*param_2,uVar8);
  if (cVar6 != '\0') {
    return 1;
  }
  return 0x20;
}

