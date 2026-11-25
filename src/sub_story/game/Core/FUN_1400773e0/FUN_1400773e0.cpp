// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400773e0  size: 142 bytes
// Name:    FUN_1400773e0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1401899d0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400773e0(undefined8 *param_1)

{
  byte *pbVar1;
  undefined1 auVar2 [12];
  undefined1 auVar3 [12];
  longlong *plVar4;
  char cVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ushort uVar10;
  longlong lVar11;
  undefined8 *puVar12;
  bool bVar13;
  longlong lStack_20;
  
  *param_1 = &UNK_14652c220;
  lVar6 = param_1[9];
  if ((ulonglong)*(uint *)((longlong)param_1 + 0x44) != 0) {
    lVar11 = lVar6 + (ulonglong)*(uint *)((longlong)param_1 + 0x44) * 4;
    do {
      FUN_1401899d0(param_1,lVar11);
      lVar6 = param_1[9];
      lVar11 = lVar11 + -4;
    } while (lVar11 != lVar6);
  }
  *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  if (param_1[0xb] != 0) {
    func_0x000144d9c130(param_1[0xb]);
    lVar6 = param_1[9];
  }
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0xb] = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  if (lVar6 != 0) {
    func_0x000144d9c130();
  }
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  *param_1 = &UNK_1466c7160;
  if (*(short *)(param_1 + 1) != -1) {
    FUN_140004b40(0x14abbf350);
    uVar10 = *(ushort *)(param_1 + 1);
    if (uVar10 != 0xffff) {
      do {
        puVar12 = (undefined8 *)
                  ((ulonglong)((uint)uVar10 * (int)_DAT_14abbf370[1]) + *_DAT_14abbf370);
        if ((*(byte *)(_DAT_14abbf370[5] + (ulonglong)(uVar10 >> 3)) >> (uVar10 & 7) & 1) == 0) {
          puVar12 = (undefined8 *)0x0;
        }
        *(undefined8 *)*puVar12 = 0;
        plVar4 = _DAT_14abbf370;
        uVar10 = *(ushort *)((longlong)puVar12 + 10);
        auVar2._4_8_ = 0;
        auVar2._0_4_ = *(uint *)(_DAT_14abbf370 + 1);
        auVar3._8_4_ = 0;
        auVar3._0_8_ = (longlong)puVar12 - *_DAT_14abbf370;
        auVar3 = auVar3 / auVar2;
        LOCK();
        pbVar1 = (byte *)(_DAT_14abbf370[5] + (auVar3._0_8_ >> 3 & 0x1fffffff));
        *pbVar1 = *pbVar1 & ~(byte)(1 << (auVar3[0] & 7));
        UNLOCK();
        LOCK();
        *(int *)(plVar4 + 2) = (int)plVar4[2] + -1;
        UNLOCK();
        uVar8 = plVar4[4];
        do {
          *(int *)(*plVar4 + (ulonglong)(uint)((int)plVar4[1] * auVar3._0_4_)) = (int)uVar8;
          LOCK();
          uVar9 = plVar4[4];
          bVar13 = uVar8 == uVar9;
          if (bVar13) {
            plVar4[4] = (uVar8 & 0xffffffff00000000 | auVar3._0_8_ & 0xffffffff) + 0x100000000;
            uVar9 = uVar8;
          }
          UNLOCK();
          uVar8 = uVar9;
        } while (!bVar13);
        if (plVar4[3] != 0) {
          FUN_140189080(plVar4,puVar12);
        }
      } while (uVar10 != 0xffff);
    }
    *(undefined2 *)(param_1 + 1) = 0xffff;
    iRam000000014abbf360 = iRam000000014abbf360 + -1;
    uVar8 = uRam000000014abbf350;
    if (iRam000000014abbf360 == 0) {
      do {
        uVar7 = uVar8;
        LOCK();
        uVar8 = uVar7;
        uVar9 = (ulonglong)((int)uVar7 - 1) | 0xffffffff00000000;
        if (uVar7 != uRam000000014abbf350) {
          uVar8 = uRam000000014abbf350;
          uVar9 = uRam000000014abbf350;
        }
        uRam000000014abbf350 = uVar9;
        UNLOCK();
      } while (uVar7 != uVar8);
      if ((uVar7 & 0xfffffffe) != 0) {
        lStack_20 = lRam000000014abbf358;
        iRam000000014abbf360 = 0;
        do {
          while (lStack_20 < 0) {
            cVar5 = FUN_1400062d0(0x14abbf358,1,&lStack_20);
            if (cVar5 != '\0') {
              return;
            }
          }
          LOCK();
          lVar6 = lStack_20;
          lVar11 = lStack_20 + 0x100000000;
          if (lStack_20 != lRam000000014abbf358) {
            lVar6 = lRam000000014abbf358;
            lVar11 = lRam000000014abbf358;
          }
          lRam000000014abbf358 = lVar11;
          UNLOCK();
          bVar13 = lStack_20 != lVar6;
          lStack_20 = lVar6;
        } while (bVar13);
        return;
      }
    }
    return;
  }
  return;
}

