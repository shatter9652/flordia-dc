// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140070460  size: 95 bytes
// Name:    FUN_140070460
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140070340
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


ulonglong FUN_140070460(longlong *param_1,longlong param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  ulonglong in_RAX;
  ulonglong uVar4;
  longlong lVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  undefined8 uStack_40;
  
  iVar3 = *(int *)(param_2 + 0x20);
  if (iVar3 == 2) {
    return in_RAX;
  }
  if (param_1 != (longlong *)0x0) {
    uStack_40 = 0x140070482;
    uVar1 = FUN_140070340(param_2);
    uStack_40 = 0x140070491;
    uVar4 = (**(code **)(*param_1 + 8))(param_1,uVar1,iVar3);
    if ((char)uVar4 != '\0') {
      if (iVar3 == 1) {
        return uVar4;
      }
      iVar6 = 1;
      if (iVar3 == 0) goto LAB_1400704b0;
    }
  }
  iVar6 = 2;
LAB_1400704b0:
  iVar3 = *(int *)(param_2 + 0x20);
  if ((iVar3 == iVar6) || (*(char *)(param_2 + 0x40) != '\0')) {
    uVar4 = 0;
  }
  else {
    uVar4 = 0;
    if (*(char *)(*(longlong *)(param_2 + 0x18) + 0x40) == '\x01') {
      lVar5 = *(longlong *)(param_2 + 0x38);
      uVar7 = *(uint *)(param_2 + 0x30) << 4;
      if (uVar7 != 0) {
        uVar4 = 0;
        do {
          if (!SBORROW1('\0',*(char *)((ulonglong)((uint)uVar4 & 0xf) + (uVar4 >> 4) * 0x710 + lVar5
                                      ))) goto code_r0x000144ed069a;
          uVar8 = (uint)uVar4 + 1;
          uVar4 = (ulonglong)uVar8;
        } while (uVar7 != uVar8);
        uVar4 = (ulonglong)uVar7;
      }
code_r0x000144ed069a:
      lVar10 = (uVar4 >> 4) * 0x710;
      uVar11 = (ulonglong)(((uint)uVar4 & 0xf) * 0x70);
      uStack_40._4_4_ = iVar6;
      if (lVar10 + uVar11 != (ulonglong)(*(uint *)(param_2 + 0x30) & 0xfffffff) * 0x710) {
        lVar10 = lVar10 + 0x10 + uVar11 + lVar5;
        do {
          (**(code **)(lVar10 + 0x58))
                    (lVar10 + 0x17U & 0xfffffffffffffff0,(int *)(param_2 + 0x20),
                     (longlong)&uStack_40 + 4);
          uVar8 = (uint)uVar4;
          while (uVar2 = uVar7, uVar8 != uVar7) {
            while (uVar2 = uVar8 + 1, uVar8 = uVar2, uVar2 < uVar7) {
              if (!SBORROW1('\0',*(char *)((ulonglong)(uVar2 & 0xf) +
                                          (ulonglong)(uVar2 >> 4) * 0x710 + lVar5)))
              goto code_r0x000144ed072f;
            }
          }
code_r0x000144ed072f:
          uVar4 = (ulonglong)uVar2;
          lVar12 = (ulonglong)(uVar2 & 0xf) * 0x70;
          lVar9 = (ulonglong)(uVar2 >> 4) * 0x710 + lVar5;
          lVar10 = lVar12 + 0x10 + lVar9;
        } while (lVar9 + lVar12 !=
                 (ulonglong)(*(uint *)(param_2 + 0x30) & 0xfffffff) * 0x710 +
                 *(longlong *)(param_2 + 0x38));
        iVar3 = *(int *)(param_2 + 0x20);
      }
      *(int *)(param_2 + 0x24) = iVar3;
      *(int *)(param_2 + 0x20) = uStack_40._4_4_;
      if (*(longlong *)(param_2 + 0x28) != 0) {
        func_0x000140070440(*(undefined8 *)(*(longlong *)(param_2 + 0x28) + 0x10),param_2);
        FUN_1400705e0(*(undefined1 *)(*(longlong *)(param_2 + 0x28) + 9),param_2);
      }
      lVar5 = func_0x000144ecff10(*(undefined8 *)(param_2 + 8));
      uVar4 = CONCAT71((int7)(uVar4 >> 8),1);
      if ((lVar5 != 0) && (lVar5 = func_0x00014074f4f0(*(undefined4 *)(lVar5 + 0x9c)), lVar5 != 0))
      {
        func_0x0001400702b0(lVar5);
      }
    }
  }
  return uVar4;
}

