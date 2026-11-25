// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14012d760  size: 522 bytes
// Name:    FUN_14012d760
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1424da5f0, FUN_14311a340, FUN_1424da570, FUN_1424d5010, FUN_14012eb00, FUN_1406b6070
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14012d760(longlong param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong unaff_GS_OFFSET;
  undefined4 uStack_cc;
  undefined8 uStack_c8;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_98;
  uint uStack_94;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined8 uStack_74;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [40];
  
  lVar3 = func_0x00014012d970(*(undefined4 *)(param_1 + 0x38));
  if ((lVar3 == 0) &&
     (lVar3 = FUN_14012eb00(*(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0xc0),
                            *(undefined4 *)(*(longlong *)(param_1 + 0x40) + 200)), lVar3 == 0)) {
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x80);
    if (((lVar3 != 0) || (0 < *(int *)(*(longlong *)(param_1 + 0x10) + 0x4c))) &&
       (lVar4 = func_0x000144fdec40(*(undefined8 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x38))
       , lVar4 != 0)) {
      if ((*(int *)(param_1 + 0xd0) == 0) && (lVar5 = FUN_1424da570(param_1), lVar5 != 0)) {
LAB_14012d81b:
        plVar2 = *(longlong **)((ulonglong)*(byte *)(lVar5 + 0x30) * 8 + 0x14abbe7c0);
        if (*(char *)(*(longlong *)
                       (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8) ==
            '\0') {
          auStack_58._8_8_ = &UNK_1424d4d35;
          func_0x0001455db994(*(longlong *)(unaff_GS_OFFSET + 0x58),
                              (ulonglong)(lVar5 - *plVar2) % (ulonglong)*(uint *)(plVar2 + 1));
          if (*(char *)(*(longlong *)
                         (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8)
              == '\0') {
            auStack_58._8_8_ = &UNK_1424d4d60;
            func_0x0001455db994();
          }
        }
        auStack_58._8_8_ = &UNK_1424d4d29;
        FUN_1418175e0();
        return;
      }
      if (lVar3 != 0) {
        if (*(char *)(param_1 + 0x80) == '\x01') {
          func_0x0001453085a0(param_1 + 0x60);
          lVar5 = func_0x000140bc0170(*(undefined4 *)(param_1 + 200));
          if (lVar5 != 0) goto LAB_14012d81b;
        }
        else {
          FUN_1424da5f0(&uStack_98);
          auStack_58._0_32_ = ZEXT1232(ZEXT812(0));
          FUN_1406b6070(lVar3,&uStack_cc,auStack_58,0);
          uStack_98 = uStack_cc;
          uStack_94 = (uint)((ulonglong)(lVar4 - *_DAT_14abb6918) /
                            (ulonglong)*(uint *)(_DAT_14abb6918 + 1)) & 0x1ffff;
          uStack_94 = *(uint *)(_DAT_14abb6918[5] + (ulonglong)uStack_94 * 4) & 0xfffe0000 |
                      uStack_94;
          lVar3 = *(longlong *)(param_1 + 0x10);
          uVar1 = *(undefined8 *)(lVar3 + 0x70);
          uStack_68 = *(undefined8 *)(lVar4 + 0x70);
          uStack_60 = *(undefined8 *)(lVar4 + 0x78);
          uStack_74 = uVar1;
          func_0x000144dc3790(&uStack_68,&uStack_88);
          uStack_a8 = FUN_1424d5010(*(undefined4 *)(lVar3 + 0x24));
          uStack_c8 = CONCAT44(uStack_94,uStack_98);
          uStack_b8 = uStack_88;
          uStack_b0 = uStack_80;
          uStack_78 = uStack_a8;
          if (*(char *)(*(longlong *)
                         (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8)
              == '\0') {
            func_0x0001455db994();
            uStack_a4 = (undefined4)uStack_74;
            if (*(char *)(*(longlong *)
                           (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8)
                == '\0') {
              func_0x0001455db994();
            }
          }
          else {
            uStack_a4 = (undefined4)uVar1;
          }
          uStack_a0 = uStack_74._4_4_;
          FUN_14311a340(param_1 + 0x60);
        }
      }
    }
  }
  return;
}

