// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14010a790  size: 931 bytes
// Name:    FUN_14010a790
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1453469c0, FUN_1455a3370, FUN_144e06070, FUN_144f8a590, FUN_144955090
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14010a790(longlong *param_1,longlong *param_2,longlong *param_3)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  bool bVar13;
  longlong *plStack_128;
  undefined4 uStack_120;
  longlong lStack_118;
  longlong lStack_110;
  longlong *plStack_108;
  int iStack_100;
  undefined4 uStack_fc;
  longlong lStack_f8;
  undefined4 uStack_f0;
  int iStack_ec;
  undefined4 uStack_e8;
  undefined8 uStack_e4;
  undefined1 auStack_dc [4];
  undefined4 uStack_d8;
  undefined1 uStack_d4;
  longlong *plStack_c8;
  int iStack_c0;
  longlong alStack_58 [2];
  int iStack_48;
  
  cVar6 = (**(code **)(*param_1 + 0x58))();
  if (cVar6 != '\0') {
    lVar2 = *param_2;
    lVar3 = *(longlong *)param_1[4];
    plStack_108 = param_3;
    func_0x000144f8bc00(*(undefined8 *)(lVar2 + 8),&plStack_128);
    FUN_144f8a590(alStack_58,param_1);
    lVar10 = *(longlong *)(lVar3 + 8);
    iVar7 = func_0x000144db6ef0(*(undefined4 *)(lVar10 + 0x20));
    if (iVar7 == 0) {
      iVar8 = func_0x000144f8a660(*(undefined8 *)(lVar10 + 0x18));
      bVar13 = true;
      iVar7 = iStack_48;
      if (iVar8 != 1) {
        iVar7 = func_0x000144f8a660(*(undefined8 *)(*(longlong *)(lVar3 + 8) + 0x18));
        bVar13 = iVar7 == 2;
        iVar7 = -1;
        if (bVar13) {
          iVar7 = iStack_48;
        }
      }
    }
    else {
      bVar13 = false;
      iVar7 = -1;
    }
    if (alStack_58[0] != 0) {
      cVar6 = (**(code **)(**(longlong **)(*(longlong *)(lVar3 + 8) + 0x18) + 0x108))();
      if ((cVar6 != '\0') && (!(bool)(bVar13 & iStack_48 == -1))) {
        func_0x000140019da0((int)param_2[1],&uStack_fc);
        lVar10 = func_0x000140117a50(*(undefined8 *)(alStack_58[0] + 0x78),uStack_fc);
        if (lVar10 != 0) {
          lVar4 = *(longlong *)(alStack_58[0] + 8);
          if (iStack_48 != 0) {
            lVar11 = func_0x000144da1090(*(undefined8 *)(*(longlong *)(lVar4 + 0x80) + 0x40),
                                         iStack_48,&plStack_c8);
            uVar1 = *(ushort *)(lVar11 + 0x48);
            if (uVar1 <= *(ushort *)(lVar11 + 0x48 + (ulonglong)uVar1 * -0x50)) {
              return;
            }
            if (*(ushort *)(lVar11 + 0x4e + (ulonglong)uVar1 * -0x50) <= uVar1) {
              return;
            }
          }
          plVar5 = plStack_128;
          lVar11 = *(longlong *)(plStack_128[0x766] + 0x10);
          cVar6 = func_0x000144da4370(*(undefined1 *)((longlong)param_2 + 0xc));
          if ((lVar4 == lVar11) || (cVar6 == '\0')) {
            lStack_118 = lVar11;
            if (lVar4 == lVar11) {
              iVar8 = (**(code **)(*plVar5 + 0xf0))(plVar5,uStack_120);
              if (iStack_48 == iVar8) {
                return;
              }
              lVar11 = plVar5[1];
              uVar9 = (**(code **)(*plStack_128 + 0xf0))(plStack_128,uStack_120);
              cVar6 = FUN_144e06070(lVar11,iStack_48,uVar9);
              if (cVar6 != '\0') {
                return;
              }
              lVar11 = plVar5[1];
              uVar9 = (**(code **)(*plStack_128 + 0xf0))(plStack_128,uStack_120);
              cVar6 = FUN_144e06070(lVar11,uVar9,iStack_48);
              if (cVar6 != '\0') {
                return;
              }
            }
            plVar12 = (longlong *)func_0x000144e3bfa0(lVar2);
            iVar8 = *(int *)((longlong)plVar12 + 0x14);
            if (*(int *)((longlong)plVar12 + 0x14) == 0) {
              lStack_110 = _DAT_14ab7ef10;
              cVar6 = func_0x000144da4370(*(undefined1 *)(_DAT_14ab7ef10 + 0x244));
              iVar8 = 0;
              if (cVar6 == '\0') {
                (**(code **)(**(longlong **)(lStack_110 + 0x18) + 0x590))
                          (*(longlong **)(lStack_110 + 0x18),&plStack_c8);
                if (lVar4 == lStack_118) {
                  plStack_c8 = plVar5;
                  if (iStack_48 == -1) {
                    plStack_c8 = (longlong *)0x0;
                  }
                  iStack_c0 = iStack_48;
                  FUN_144955090(&lStack_f8,&plStack_c8,&plStack_128);
                  if (lStack_f8 == 0) {
                    return;
                  }
                  func_0x0001401a1510(lStack_f8,uStack_f0,&iStack_100);
                  iVar8 = iStack_100;
                }
                else {
                  iVar8 = (int)plStack_c8;
                }
              }
            }
            lStack_f8 = *plVar12;
            uStack_e4 = *(undefined8 *)((longlong)plVar12 + 0x14);
            uStack_e8 = (undefined4)((ulonglong)*(undefined8 *)((longlong)plVar12 + 0xc) >> 0x20);
            uStack_f0 = (undefined4)plVar12[1];
            iStack_ec = (int)((ulonglong)plVar12[1] >> 0x20);
            func_0x000144df8490(auStack_dc,*(undefined4 *)((longlong)plVar12 + 0x1c));
            uStack_d8 = (undefined4)plVar12[4];
            uStack_d4 = *(undefined1 *)((longlong)plVar12 + 0x24);
            iStack_ec = iVar8;
            FUN_1455a3370(&plStack_c8,lVar3,&lStack_f8,*(undefined8 *)(lVar2 + 0xc0),
                          *(undefined4 *)(lVar2 + 200),iVar7);
            if (*plStack_108 == 0) {
              (*(code *)plStack_108[1])(&plStack_c8);
            }
            else {
              (*(code *)plStack_108[1])(*plStack_108,&plStack_c8);
            }
            uVar9 = func_0x000144da4370(*(undefined1 *)((longlong)param_2 + 0xc));
            FUN_1453469c0(lVar10 + 0x178,&plStack_c8,uVar9);
          }
        }
      }
    }
  }
  return;
}

