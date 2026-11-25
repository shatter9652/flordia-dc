// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140140740  size: 1110 bytes
// Name:    FUN_140140740
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_140140740(longlong *param_1,longlong param_2,longlong *param_3,longlong param_4)

{
  longlong *plVar1;
  ushort uVar2;
  longlong lVar3;
  byte bVar4;
  uint uVar5;
  ulonglong uVar6;
  byte bVar7;
  longlong lVar8;
  longlong unaff_GS_OFFSET;
  undefined1 uStack_12e;
  undefined2 uStack_12d;
  undefined7 uStack_12b;
  undefined4 uStack_124;
  undefined8 uStack_120;
  undefined4 uStack_118;
  undefined8 uStack_114;
  undefined4 uStack_10c;
  undefined2 uStack_108;
  undefined1 auStack_106 [16];
  undefined4 uStack_f6;
  undefined2 uStack_f2;
  undefined4 uStack_f0;
  undefined2 uStack_ec;
  undefined7 uStack_ea;
  undefined4 uStack_e3;
  undefined2 uStack_df;
  undefined1 uStack_dd;
  undefined8 uStack_dc;
  undefined1 uStack_d4;
  undefined1 auStack_d3 [32];
  undefined1 auStack_b3 [32];
  undefined1 auStack_93 [24];
  undefined8 uStack_7b;
  undefined1 auStack_73 [24];
  undefined8 uStack_5b;
  undefined1 uStack_53;
  undefined2 uStack_52;
  undefined1 uStack_50;
  undefined8 uStack_4f;
  undefined8 uStack_47;
  undefined8 uStack_3f;
  undefined2 uStack_37;
  undefined1 uStack_35;
  undefined4 uStack_34;
  
  if (param_3 == (longlong *)0x0) {
    return 0xd;
  }
  if (param_2 == 0) {
    return 10;
  }
  param_1[3] = param_2;
  param_1[0xf] = *param_3;
  uStack_12e = 0xff;
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    func_0x0001455db994();
  }
  lVar8 = *(longlong *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1448);
  if (lVar8 == 0) {
    uStack_12d = 0;
  }
  plVar1 = (longlong *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1448);
  lVar3 = *(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8);
  if (*(char *)(lVar3 + 8) == '\0') {
    func_0x0001455db994(lVar3,param_2);
    lVar8 = *plVar1;
  }
  if (lVar8 == 0) {
    uStack_12b = 0;
    uStack_124 = 0;
  }
  uStack_120 = 0xaaaaaaaaaaaaaaaa;
  lVar3 = *(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8);
  if (*(char *)(lVar3 + 8) == '\0') {
    func_0x0001455db994(lVar3,param_2);
    lVar8 = *plVar1;
  }
  if (lVar8 == 0) {
    uStack_118 = 0;
  }
  auStack_106._0_12_ = ZEXT812(0);
  auStack_106._12_4_ = 0;
  uStack_10c = 0;
  uStack_114 = 0;
  uStack_108 = 0xffff;
  uStack_f6 = 0xffffffff;
  uStack_f2 = 100;
  uStack_f0 = 0;
  uStack_ec = 24000;
  uStack_ea = 0;
  uStack_e3 = 0;
  uStack_df = 100;
  uStack_dd = 0;
  uStack_dc = 0xffffffff0096001e;
  lVar3 = *(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8);
  if (*(char *)(lVar3 + 8) == '\0') {
    func_0x0001455db994(lVar3,param_2);
    lVar8 = *plVar1;
  }
  if (lVar8 == 0) {
    uStack_d4 = 0;
  }
  auStack_93._0_12_ = ZEXT812(0);
  auStack_93._12_4_ = 0;
  auStack_73 = ZEXT424(0);
  auStack_93._16_8_ = 0;
  uStack_7b = 0;
  auStack_d3 = ZEXT1632(auStack_93._0_16_);
  uStack_5b = 0x64006400640064;
  uStack_53 = 0;
  uStack_52 = 0x47;
  uStack_50 = 0;
  uStack_4f = _DAT_14615bec0;
  uStack_47 = _UNK_14615bec8;
  uStack_3f = 0xffffffff00640064;
  uStack_37 = 100;
  uStack_35 = 0;
  uStack_34 = 0;
  uStack_12b = 0xffffffffffffff;
  uStack_124 = 0xffffffff;
  uStack_12d = 0xfff;
  auStack_b3 = auStack_d3;
  (**(code **)(*param_1 + 0xa8))(param_1,param_2,0,&uStack_12e);
  (**(code **)(*param_1 + 0x60))(param_1,param_4,&uStack_12e);
  bVar7 = *(byte *)((longlong)param_1 + 0xfa);
  bVar4 = (*(byte *)(param_4 + 0x90) & 1) << 3;
  *(byte *)((longlong)param_1 + 0xfa) = bVar7 & 0xf7 | bVar4;
  *(byte *)((longlong)param_1 + 0xfa) = bVar7 & 0xe7 | bVar4 | (*(byte *)(param_4 + 0x90) & 2) << 3;
  if (*(ushort *)(param_1 + 0x1c) == 0xffff) {
    uVar2 = *(ushort *)((longlong)param_1 + 0xd4);
    if (uVar2 == 0xffff) {
      return 0x10;
    }
    *(ushort *)(param_4 + 0x80) = uVar2;
    *(ushort *)((longlong)param_1 + 0xd6) = uVar2;
    uVar6 = (ulonglong)((uint)uVar2 * _DAT_14ab73a8c);
    lVar8 = *(longlong *)
             (_DAT_14ab73aa0 + 0x8ac0 + (ulonglong)*(byte *)((longlong)param_1 + 0x7e) * 0x8ad0);
    lVar3 = *(longlong *)(lVar8 + 800 + uVar6);
    if ((lVar3 != 0) && ((*(byte *)(lVar8 + 0x63a + uVar6) & 0x20) == 0)) {
      *(undefined2 *)(lVar8 + 0x62e + uVar6) = *(undefined2 *)(lVar3 + 0xa2);
      func_0x0001404ccdb0();
    }
    if ((~*(byte *)((longlong)param_1 + 0x7f) & 0x1f) == 0) {
      bVar7 = 0;
      switch(*(byte *)((longlong)param_1 + 0xf2)) {
      case 0:
        uVar5 = (uint)*(short *)(param_4 + 0x7e);
        if (((uVar5 == 0xffffffff) || (*(int *)(lRam0000000149f148e0 + 0x18) <= (int)uVar5)) ||
           ((*(uint *)(*(longlong *)(lRam0000000149f148e0 + 0x40) + (ulonglong)(uVar5 >> 5) * 4) >>
             (uVar5 & 0x1f) & 1) == 0)) {
          lVar8 = 0;
        }
        else {
          lVar8 = (longlong)(int)uVar5 * *(longlong *)(lRam0000000149f148e0 + 0x28) +
                  *(longlong *)(lRam0000000149f148e0 + 0x10);
        }
        FUN_140624ce0(param_1,lVar8);
        goto LAB_140140a0a;
      case 2:
        bVar7 = 1;
        break;
      case 3:
        bVar7 = 2;
        break;
      case 4:
        bVar7 = 3;
        break;
      case 5:
        bVar7 = 4;
        break;
      case 6:
      case 7:
        bVar7 = *(byte *)((longlong)param_1 + 0xf2);
      }
      *(byte *)((longlong)param_1 + 0x7f) = *(byte *)((longlong)param_1 + 0x7f) & 0xe0 | bVar7;
    }
  }
  else {
    *(byte *)((longlong)param_1 + 0x7f) =
         *(byte *)((longlong)param_1 + 0x7f) & 0xe0 |
         *(byte *)(*(longlong *)
                    (_DAT_14ab73aa0 + 0x8ab8 +
                    (ulonglong)*(byte *)((longlong)param_1 + 0x7e) * 0x8ad0) + 0x7f +
                  (ulonglong)((uint)*(ushort *)(param_1 + 0x1c) * _DAT_14ab73a88)) & 0x1f;
    *(undefined2 *)((longlong)param_1 + 0xd6) = *(undefined2 *)(param_4 + 0x80);
  }
LAB_140140a0a:
  *(byte *)(param_1 + 0x1f) =
       *(byte *)(param_1 + 0x1f) & 0x7f | *(char *)((longlong)param_3 + 7) * '\x02' & 0x80U;
  return 0;
}

