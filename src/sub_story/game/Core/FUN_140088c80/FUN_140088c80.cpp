// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140088c80  size: 604 bytes
// Name:    FUN_140088c80
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144da60a0, FUN_140008c80, FUN_144f046d0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140088c80(longlong param_1,undefined1 *param_2,longlong param_3,undefined1 *param_4)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  float fVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  int unaff_R15D;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  int iStack_7c;
  longlong lStack_78;
  undefined1 auStack_6c [4];
  undefined1 auStack_68 [4];
  undefined1 auStack_64 [4];
  undefined1 auStack_60 [8];
  longlong lStack_58;
  char cStack_3f;
  
  *param_2 = 1;
  *(undefined4 *)(param_2 + 4) = 0x3f800000;
  *param_4 = 1;
  if ((*(char *)(param_3 + 0x1c) == '\x1a') && (*(int *)(param_3 + 0x18) == 0x687ad00d)) {
    FUN_144f046d0(**(undefined8 **)(param_3 + 8),*(undefined4 *)(param_3 + 0x10),&lStack_78,
                  auStack_64,auStack_68,&iStack_7c,auStack_6c);
    if ((*(longlong *)(param_1 + 0x38) != 0) &&
       (FUN_144da60a0(auStack_60,*(longlong *)(param_1 + 0x38) + 0x18,0x1a), lVar1 = lStack_78,
       cStack_3f == '\0')) {
      do {
        if (*(char *)(lStack_58 + 0xf) == '\x1a') {
          unaff_R15D = *(int *)(lStack_58 + 0x10);
        }
        if ((unaff_R15D == iStack_7c) && (*(longlong *)(lStack_58 + 0x28) == lVar1)) {
          return;
        }
        func_0x000144db7670(auStack_60);
      } while (cStack_3f == '\0');
    }
    FUN_140008c80(lStack_78);
    fVar3 = _DAT_14615af54;
    lVar1 = *(longlong *)(param_1 + 0x30);
    uVar4 = *(int *)(param_1 + 0x28) << 4;
    if (uVar4 == 0) {
      uVar6 = 0;
    }
    else {
      uVar5 = 0;
      do {
        uVar6 = uVar5;
        if (!SBORROW1('\0',*(char *)((ulonglong)(uVar5 & 0xf) +
                                    (ulonglong)(uVar5 >> 4) * 0x90 + lVar1))) break;
        uVar5 = uVar5 + 1;
        uVar6 = uVar4;
      } while (uVar4 != uVar5);
    }
    uVar7 = (ulonglong)(uint)(*(int *)(param_1 + 0x28) << 4);
    lVar8 = (ulonglong)(uVar6 >> 4) * 0x90;
    if (lVar8 + (ulonglong)(uVar6 & 0xf) * 8 != uVar7 * 9) {
      lVar8 = lVar8 + 0x10 + (ulonglong)(uVar6 & 0xf) * 8;
      do {
        if (lStack_58 != 0) {
          lVar10 = 0;
          if (*(longlong *)(lStack_58 + 8) != 1) {
            lVar10 = *(longlong *)(lStack_58 + 8) + lStack_58 + 8;
          }
          if ((*(uint *)(lStack_58 + 4) & 0x7fffffff) != 0) {
            lVar9 = 0;
            do {
              if (*(int *)(lVar10 + lVar9) == *(int *)(lVar1 + lVar8)) goto LAB_140088e8a;
              lVar9 = lVar9 + 4;
            } while (((ulonglong)*(uint *)(lStack_58 + 4) & 0x7fffffff) * 4 != lVar9);
          }
        }
        uVar5 = uVar6;
        if (*(int *)(lVar1 + lVar8) == 0x2c7fd7de) {
LAB_140088e8a:
          auVar12._4_4_ = _DAT_145fc6ed8;
          auVar12._0_4_ = _DAT_145fc6ed8;
          auVar12._8_4_ = _DAT_145fc6ed8;
          auVar12._12_4_ = _DAT_145fc6ed8;
          auVar11 = ZEXT416(*(uint *)(lVar1 + lVar8 + 4));
          auVar2 = vminss_avx(ZEXT416((uint)_DAT_145fc6ed8),auVar11);
          auVar11 = vcmpss_avx(auVar11,ZEXT816(0) << 0x20,1);
          auVar11 = vblendvps_avx(ZEXT416((uint)(_DAT_145fc6ed8 - auVar2._0_4_)),auVar12,auVar11);
          *(float *)(param_2 + 4) = auVar11._0_4_;
          *param_2 = fVar3 < auVar11._0_4_;
          return;
        }
        while (uVar6 = uVar4, uVar5 != uVar4) {
          while (uVar6 = uVar5 + 1, uVar5 = uVar6, uVar6 < uVar4) {
            if (!SBORROW1('\0',*(char *)((ulonglong)(uVar6 & 0xf) +
                                        (ulonglong)(uVar6 >> 4) * 0x90 + lVar1)))
            goto LAB_140088e66;
          }
        }
LAB_140088e66:
        lVar8 = (ulonglong)(uVar6 >> 4) * 0x90 + 0x10 + (ulonglong)(uVar6 & 0xf) * 8;
      } while (lVar8 != uVar7 * 9 + 0x10);
    }
  }
  return;
}

