// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400702f0  size: 79 bytes
// Name:    FUN_1400702f0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140070340
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


ulonglong FUN_1400702f0(longlong *param_1,longlong param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  ulonglong in_RAX;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined8 uStack_40;
  
  if ((*(int *)(param_2 + 0x20) == 2) && (param_1 != (longlong *)0x0)) {
    uStack_40 = 0x14007030f;
    uVar1 = FUN_140070340(param_2);
    uStack_40 = 0x140070321;
    in_RAX = (**(code **)(*param_1 + 8))(param_1,uVar1,2);
    if ((char)in_RAX != '\0') {
      uStack_40._4_4_ = 1;
      iVar3 = *(int *)(param_2 + 0x20);
      if ((iVar3 == 1) || (*(char *)(param_2 + 0x40) != '\0')) {
        uVar7 = 0;
      }
      else {
        uVar7 = 0;
        if (*(char *)(*(longlong *)(param_2 + 0x18) + 0x40) == '\x01') {
          lVar4 = *(longlong *)(param_2 + 0x38);
          uVar5 = *(uint *)(param_2 + 0x30) << 4;
          if (uVar5 != 0) {
            uVar7 = 0;
            do {
              if (!SBORROW1('\0',*(char *)((ulonglong)((uint)uVar7 & 0xf) +
                                          (uVar7 >> 4) * 0x710 + lVar4))) goto code_r0x000144ed069a;
              uVar6 = (uint)uVar7 + 1;
              uVar7 = (ulonglong)uVar6;
            } while (uVar5 != uVar6);
            uVar7 = (ulonglong)uVar5;
          }
code_r0x000144ed069a:
          lVar9 = (uVar7 >> 4) * 0x710;
          uVar10 = (ulonglong)(((uint)uVar7 & 0xf) * 0x70);
          if (lVar9 + uVar10 != (ulonglong)(*(uint *)(param_2 + 0x30) & 0xfffffff) * 0x710) {
            lVar9 = lVar9 + 0x10 + uVar10 + lVar4;
            do {
              (**(code **)(lVar9 + 0x58))
                        (lVar9 + 0x17U & 0xfffffffffffffff0,(int *)(param_2 + 0x20),
                         (longlong)&uStack_40 + 4);
              uVar6 = (uint)uVar7;
              while (uVar2 = uVar5, uVar6 != uVar5) {
                while (uVar2 = uVar6 + 1, uVar6 = uVar2, uVar2 < uVar5) {
                  if (!SBORROW1('\0',*(char *)((ulonglong)(uVar2 & 0xf) +
                                              (ulonglong)(uVar2 >> 4) * 0x710 + lVar4)))
                  goto code_r0x000144ed072f;
                }
              }
code_r0x000144ed072f:
              uVar7 = (ulonglong)uVar2;
              lVar11 = (ulonglong)(uVar2 & 0xf) * 0x70;
              lVar8 = (ulonglong)(uVar2 >> 4) * 0x710 + lVar4;
              lVar9 = lVar11 + 0x10 + lVar8;
            } while (lVar8 + lVar11 !=
                     (ulonglong)(*(uint *)(param_2 + 0x30) & 0xfffffff) * 0x710 +
                     *(longlong *)(param_2 + 0x38));
            iVar3 = *(int *)(param_2 + 0x20);
          }
          *(int *)(param_2 + 0x24) = iVar3;
          *(undefined4 *)(param_2 + 0x20) = uStack_40._4_4_;
          if (*(longlong *)(param_2 + 0x28) != 0) {
            func_0x000140070440(*(undefined8 *)(*(longlong *)(param_2 + 0x28) + 0x10),param_2);
            FUN_1400705e0(*(undefined1 *)(*(longlong *)(param_2 + 0x28) + 9),param_2);
          }
          lVar4 = func_0x000144ecff10(*(undefined8 *)(param_2 + 8));
          uVar7 = CONCAT71((int7)(uVar7 >> 8),1);
          if ((lVar4 != 0) &&
             (lVar4 = func_0x00014074f4f0(*(undefined4 *)(lVar4 + 0x9c)), lVar4 != 0)) {
            func_0x0001400702b0(lVar4);
          }
        }
      }
      return uVar7;
    }
  }
  return in_RAX;
}

