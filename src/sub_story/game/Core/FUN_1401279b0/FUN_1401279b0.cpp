// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401279b0  size: 489 bytes
// Name:    FUN_1401279b0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144ddb0e0, FUN_140c40cf0, FUN_1420f5e50
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401279b0(longlong param_1,double *param_2)

{
  byte *pbVar1;
  uint uVar2;
  char cVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined2 uVar6;
  uint uVar7;
  double dVar8;
  double dVar9;
  undefined2 auStack_4a [21];
  
  if (param_2 != (double *)0x0) {
    dVar9 = *(double *)(param_1 + 0x1f0);
    if (((dVar9 != 0.0) || (NAN(dVar9))) &&
       (dVar8 = (double)func_0x0001409d2080(*(undefined8 *)(param_1 + 0x218)),
       (double)*(uint *)(param_1 + 0x1f8) * _DAT_14615bcc0 + dVar9 <= dVar8)) {
      return;
    }
    uVar7 = *(uint *)(param_2 + 1);
    if (uVar7 == 0xffffffff) {
      uVar7 = 0;
    }
    dVar8 = *param_2;
    uVar2 = *(uint *)((longlong)param_2 + 0xc);
    if (((dVar9 == 0.0) && (!NAN(dVar9))) ||
       (_DAT_14615bcc0 * (double)uVar7 + dVar8 <
        _DAT_14615bcc0 * (double)*(uint *)(param_1 + 0x1f8) + dVar9)) {
      *(double *)(param_1 + 0x1f0) = dVar8;
      *(uint *)(param_1 + 0x1f8) = uVar7;
      *(uint *)(param_1 + 0x1fc) = uVar2;
      lVar4 = func_0x000144da31b0(param_1 + 0x230);
      if (lVar4 != 0) {
        dVar8 = (double)uVar7 * _DAT_14615bcc0 + dVar8;
        if (uVar7 == 0) {
          uVar5 = (ulonglong)((uint)*(ushort *)(lVar4 + 0xd4) * _DAT_14ab73a8c);
          lVar4 = *(longlong *)
                   (_DAT_14ab73aa0 + 0x8ac0 + (ulonglong)*(byte *)(lVar4 + 0x7e) * 0x8ad0);
          pbVar1 = (byte *)(lVar4 + 0x63b + uVar5);
          *pbVar1 = *pbVar1 | 0x80;
          if ((uVar2 & 1) == 0) {
            dVar8 = dVar8 + _DAT_14617d820;
            *(undefined4 *)(lVar4 + 0x5fc + uVar5) = 0x10;
          }
          else {
            *(undefined4 *)(lVar4 + 0x5fc + uVar5) = 0x100;
          }
        }
        func_0x000144ddb0d0((double)uVar7);
        FUN_140c40cf0(auStack_4a);
        uVar6 = auStack_4a[0];
        cVar3 = func_0x000144ddb170(auStack_4a[0]);
        if (cVar3 != '\0') {
          FUN_1420f5e50(*(undefined2 *)(*(longlong *)(param_1 + 0x218) + 0x5f4),uVar6,dVar8);
          lVar4 = func_0x000144da31b0(param_1 + 0x230);
          FUN_144ddb0e0(*(longlong *)
                         (_DAT_14ab73aa0 + 0x8ac0 + (ulonglong)*(byte *)(lVar4 + 0x7e) * 0x8ad0) +
                        0x62c + (ulonglong)((uint)*(ushort *)(lVar4 + 0xd4) * _DAT_14ab73a8c),
                        auStack_4a[0]);
          uVar6 = auStack_4a[0];
        }
        func_0x000144ddb0c0(uVar6);
      }
    }
  }
  return;
}

