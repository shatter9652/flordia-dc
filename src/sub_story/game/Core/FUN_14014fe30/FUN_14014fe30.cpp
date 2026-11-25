// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14014fe30  size: 577 bytes
// Name:    FUN_14014fe30
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14501c300, FUN_145590c50, FUN_14501c2d0, FUN_14501c540
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_14014fe30(longlong param_1,short param_2,uint param_3,ulonglong param_4)

{
  short *psVar1;
  short sVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  uint uVar11;
  ulonglong uVar12;
  byte bVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong in_stack_fffffffffffff4c8;
  undefined1 auStack_b08 [32];
  short asStack_ad8 [32];
  short asStack_a98 [36];
  char acStack_a50 [520];
  short asStack_848 [516];
  short asStack_440 [512];
  
  uVar11 = 0;
  auStack_b08 = ZEXT1232(ZEXT812(0));
  lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x78) + 0xf60);
  func_0x000145f40580(acStack_a50,0,(longlong)*(int *)(lVar4 + 0x14));
  uVar15 = 1;
  uVar12 = 0;
  asStack_ad8[0] = param_2;
  acStack_a50[param_2] = '\x01';
  uVar14 = 1;
  do {
    uVar9 = uVar14;
    uVar15 = (ulonglong)((int)uVar15 - 1);
    sVar2 = asStack_ad8[uVar15];
    if ((*(byte *)(*(longlong *)(param_1 + 0x60) + 1 +
                  (ulonglong)
                  ((int)*(short *)(*(longlong *)(param_1 + 0x50) + (ulonglong)(uint)(int)sVar2 * 2)
                   * *(int *)(param_1 + 0x68) + param_3) * 2) & 2) == 0) {
      cVar6 = FUN_145590c50(param_1,(int)sVar2);
      if (cVar6 == '\0') {
        if (0 < (int)uVar11) {
          uVar14 = 0;
          do {
            func_0x000143f2c130(param_1,asStack_848[uVar14]);
            uVar14 = uVar14 + 1;
          } while (uVar11 != uVar14);
        }
        return 0;
      }
      uVar14 = (ulonglong)uVar11;
      uVar11 = uVar11 + 1;
      asStack_848[uVar14] = sVar2;
    }
    in_stack_fffffffffffff4c8 = in_stack_fffffffffffff4c8 & 0xffffffffffffff00;
    asStack_440[uVar12] = sVar2;
    uVar7 = FUN_14501c540(lVar4,asStack_a98,(int)sVar2,0x60,in_stack_fffffffffffff4c8,auStack_b08);
    if (0 < (int)uVar7) {
      uVar16 = 0;
      uVar14 = uVar15;
      do {
        sVar2 = asStack_a98[uVar16];
        uVar15 = uVar14;
        if (acStack_a50[sVar2] == '\0') {
          if ((auStack_b08[uVar16] & 0x20) == 0) {
            uVar10 = FUN_14501c2d0(param_1,sVar2,param_3);
            in_stack_fffffffffffff4c8 = param_4;
            cVar6 = FUN_14501c300(param_1,uVar10,sVar2,param_3,param_4);
            if (cVar6 == '\0') goto LAB_14014ffa6;
          }
          uVar15 = (ulonglong)((int)uVar14 + 1);
          acStack_a50[sVar2] = '\x01';
          asStack_ad8[uVar14] = sVar2;
        }
LAB_14014ffa6:
        uVar16 = uVar16 + 1;
        uVar14 = uVar15;
      } while (uVar7 != uVar16);
    }
    uVar7 = (uint)uVar12;
    uVar12 = (ulonglong)(uVar7 + 1);
    uVar8 = (int)uVar9 + 1;
    uVar14 = (ulonglong)uVar8;
    if ((int)uVar15 == 0) {
      if (uVar7 < 0x7fffffff) {
        lVar4 = *(longlong *)(param_1 + 0x50);
        iVar3 = *(int *)(param_1 + 0x68);
        lVar5 = *(longlong *)(param_1 + 0x60);
        psVar1 = (short *)(*(longlong *)(param_1 + 0x10) + 6 + (ulonglong)param_3 * 0xc);
        uVar14 = 0;
        do {
          uVar15 = (ulonglong)
                   (*(short *)(lVar4 + (ulonglong)(uint)(int)asStack_440[uVar14] * 2) * iVar3 +
                   param_3);
          bVar13 = *(byte *)(lVar5 + 1 + uVar15 * 2);
          if ((bVar13 & 2) == 0) {
            *(undefined1 *)(lVar5 + uVar15 * 2) = 1;
            *psVar1 = *psVar1 + 1;
            bVar13 = bVar13 | 2;
          }
          uVar14 = uVar14 + 1;
          *(byte *)(lVar5 + 1 + uVar15 * 2) = bVar13 & 0xd7 | 0x20;
        } while (uVar9 != uVar14);
      }
      return CONCAT71((uint7)(uint3)(uVar8 >> 8),1);
    }
  } while( true );
}

