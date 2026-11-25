// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140186170  size: 742 bytes
// Name:    FUN_140186170
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144037590, FUN_145392460, FUN_1440376c0, FUN_14501f4a0, FUN_1415608e0, FUN_140cc2840, FUN_141335a20
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_140186170(longlong *param_1)

{
  byte bVar1;
  undefined1 uVar2;
  ushort uVar3;
  longlong lVar4;
  bool bVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  ulonglong unaff_RBP;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined8 *puVar12;
  bool bVar13;
  undefined1 auVar14 [64];
  uint in_stack_ffffffffffffff40;
  undefined1 in_stack_ffffffffffffff58 [16];
  undefined1 auStack_98 [16];
  uint uStack_80;
  undefined8 uStack_7c;
  undefined4 uStack_74;
  undefined1 uStack_70;
  undefined4 uStack_6c;
  undefined8 auStack_66 [4];
  
  if ((*(byte *)(param_1 + 9) & 4) != 0) {
    func_0x000144f16940(param_1[0xc] + 0xc,auStack_98);
    if ((~auStack_98._0_4_ & 0xfffffff) == 0) {
      auStack_98._0_4_ = 0x3fffff;
    }
    else {
      func_0x000144f16940(param_1[0xc] + 0xc,&uStack_6c);
      func_0x000144da2470(_DAT_14ab42e90,_DAT_14ab42e94,auStack_98,uStack_6c);
    }
    lVar11 = *(longlong *)param_1[0xc];
    if (lVar11 == 0) {
      if ((int)((longlong *)param_1[0xc])[1] == 0) {
        return 0;
      }
      uVar8 = FUN_1440376c0(param_1);
      return uVar8;
    }
    uVar8 = FUN_144037590(param_1,lVar11,auStack_98._0_4_);
    return uVar8;
  }
  uVar6 = (**(code **)(*param_1 + 0x28))(param_1);
  if (((int)param_1[8] != 3) && (bVar1 = *(byte *)((longlong)param_1 + 0x45), (ulonglong)bVar1 != 0)
     ) {
    uVar10 = 0;
    puVar12 = (undefined8 *)(param_1[0xc] + 0x28);
    do {
      func_0x00014455a5e0(auStack_98,uVar6,(int)param_1[7],*(undefined4 *)((longlong)param_1 + 0x3c)
                          ,uVar10 & 0xffffffff);
      uVar10 = uVar10 + 1;
      *puVar12 = auStack_98._0_8_;
      puVar12 = puVar12 + 6;
    } while (bVar1 != uVar10);
  }
  uVar3 = *(ushort *)((longlong)param_1 + 0x46);
  if ((uVar3 & 2) != 0) {
LAB_14018639d:
    (**(code **)(*param_1 + 0x60))(param_1,1);
    if ((int)param_1[8] != 3) {
      *(undefined4 *)(param_1 + 8) = 1;
    }
    return 0;
  }
  if (*(char *)((longlong)param_1 + 0x45) == '\0') {
    if (param_1[6] == 0) goto LAB_140186424;
  }
  else {
    bVar5 = true;
    lVar11 = 0x2c;
    auVar14 = ZEXT1264(ZEXT812(0));
    uVar9 = uVar3 >> 5 & 0x20 | 0x108;
    uStack_80 = (uint)(int)(short)(uVar3 << 5) >> 0xf;
    uVar10 = 1;
    do {
      lVar4 = param_1[0xc];
      uVar2 = *(undefined1 *)(param_1[0xb] + 0xc);
      unaff_RBP = CONCAT71((int7)(unaff_RBP >> 8),uVar2);
      in_stack_ffffffffffffff58[0] = 1;
      in_stack_ffffffffffffff40 = in_stack_ffffffffffffff40 & 0xffffff00;
      FUN_14501f4a0(auStack_66,unaff_RBP & 0xffffffff,*(undefined4 *)(lVar4 + -4 + lVar11),
                    *(undefined4 *)(lVar4 + lVar11),*(undefined1 *)((longlong)param_1 + 0x44),
                    in_stack_ffffffffffffff40,(char)uStack_80,1,in_stack_ffffffffffffff58);
      auStack_98 = auVar14._0_16_;
      lVar7 = FUN_145392460();
      if ((lVar7 == 0) || (DAT_14a9437a8 != '\x01')) {
        in_stack_ffffffffffffff58 = auVar14._0_16_;
        in_stack_ffffffffffffff40 = uVar9;
        lVar7 = func_0x000145204e60(0,auStack_66,1,2,0,uVar9,1,auStack_98,in_stack_ffffffffffffff58)
        ;
      }
      else {
        lVar7 = FUN_1415608e0(lVar7,0,auStack_66,uVar9,auStack_98);
      }
      *(longlong *)(lVar4 + -0x2c + lVar11) = lVar7;
      if (lVar7 == 0) {
        bVar5 = false;
      }
      if ((*(byte *)((longlong)param_1 + 0x47) & 4) != 0) {
        uStack_7c = 0;
        uStack_74 = 0xfff;
        uStack_70 = uVar2;
        lVar7 = FUN_140cc2840(*(undefined8 *)param_1[0xc],&uStack_7c,
                              *(undefined8 *)(lVar4 + -0x14 + lVar11));
        *(longlong *)(lVar4 + -0x14 + lVar11) = lVar7;
        if (lVar7 == 0) {
          bVar5 = false;
        }
      }
      if (!bVar5) break;
      lVar11 = lVar11 + 0x30;
      bVar13 = uVar10 < *(byte *)((longlong)param_1 + 0x45);
      uVar10 = uVar10 + 1;
    } while (bVar13);
    if ((!bVar5) || (param_1[6] == 0)) {
      if (!bVar5) goto LAB_14018639d;
      goto LAB_140186424;
    }
  }
  FUN_141335a20(param_1);
LAB_140186424:
  func_0x0001445842f0(param_1);
  *(undefined4 *)(param_1 + 8) = 2;
  return 1;
}

