// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400093e0  size: 355 bytes
// Name:    FUN_1400093e0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1421158d0, FUN_14559da00, FUN_140006180, FUN_140323580
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_1400093e0(longlong param_1,undefined8 param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined *puVar7;
  ulonglong uVar8;
  uint uVar9;
  bool bVar10;
  undefined *puStack_78;
  longlong lStack_70;
  longlong lStack_48;
  
  if ((*(byte *)(param_1 + 0x134) & 1) != 0) {
    puVar1 = (uint *)(param_1 + 0x108);
    puVar2 = (ulonglong *)(param_1 + 0x110);
    uVar5 = *(uint *)(param_1 + 0x108);
LAB_140009431:
    do {
      uVar4 = uVar5;
      if ((uVar4 & 0x1ff0000) != 0) {
        LOCK();
        uVar5 = *puVar1;
        bVar10 = uVar4 == uVar5;
        if (bVar10) {
          *puVar1 = uVar4 + 0x100;
          uVar5 = uVar4;
        }
        UNLOCK();
        if (bVar10) {
          uVar9 = (uint)(*puVar2 >> 7) & 0xffffff;
          uVar8 = *puVar2;
          if ((*puVar2 >> 7 & 0xffffff) != 0) {
            do {
              if ((longlong)uVar8 < 0x100000000) {
                uVar6 = *puVar2;
              }
              else {
                LOCK();
                uVar6 = *puVar2;
                if (uVar8 == uVar6) {
                  *puVar2 = uVar8 - 0x100000000;
                  uVar6 = uVar8;
                }
                UNLOCK();
                uVar5 = uVar4;
                if (uVar8 == uVar6) goto LAB_140009431;
              }
              uVar9 = uVar9 - 1;
              uVar8 = uVar6;
            } while (uVar9 != 0);
          }
          puVar7 = (undefined *)*puVar2;
          do {
            while (puStack_78 = puVar7, 0xffffffff < (longlong)puStack_78) {
              LOCK();
              puVar7 = (undefined *)*puVar2;
              if (puStack_78 == puVar7) {
                *puVar2 = (ulonglong)(puStack_78 + -0x100000000);
                puVar7 = puStack_78;
              }
              UNLOCK();
              uVar5 = uVar4;
              if (puStack_78 == puVar7) goto LAB_140009431;
            }
            cVar3 = FUN_140006180(puVar2,1);
            uVar5 = uVar4;
            puVar7 = puStack_78;
          } while (cVar3 == '\0');
        }
        goto LAB_140009431;
      }
      LOCK();
      uVar5 = *puVar1;
      bVar10 = uVar4 == uVar5;
      if (bVar10) {
        *puVar1 = uVar4 + 1;
        uVar5 = uVar4;
      }
      UNLOCK();
    } while (!bVar10);
    func_0x000145121fe0(&puStack_78,1,0,0x14abbebc8);
    puStack_78 = &UNK_14667aca0;
    lStack_70 = param_1 + 0x20;
    lStack_48 = param_1 + 0x120;
    FUN_14559da00(&puStack_78);
    LOCK();
    *(byte *)(param_1 + 0x134) = *(byte *)(param_1 + 0x134) & 0xfe;
    UNLOCK();
    FUN_140323580(puVar1);
  }
  FUN_1421158d0(param_2,param_1 + 0x20);
  return 1;
}

