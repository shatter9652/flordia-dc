// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14007bf70  size: 663 bytes
// Name:    FUN_14007bf70
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1443ab750, FUN_1423d1f20, FUN_1450267e0, FUN_14007c2a0, FUN_141077250, FUN_14007c4d0, FUN_144f13100
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14007bf70(longlong param_1,int param_2,undefined4 param_3,char *param_4,byte param_5)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char cVar7;
  int iVar8;
  int *piVar9;
  longlong lVar10;
  undefined1 (*pauVar11) [16];
  longlong lVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  undefined1 auVar16 [64];
  undefined4 auStack_5c [7];
  
  if (*(int *)(param_1 + 0x94) == param_2) {
    uVar4 = *(undefined8 *)param_4;
    uVar5 = *(undefined8 *)(param_4 + 8);
    uVar6 = *(undefined8 *)(param_4 + 0x15);
    *(undefined8 *)(param_1 + 0x15) = *(undefined8 *)(param_4 + 0xd);
    *(undefined8 *)(param_1 + 0x1d) = uVar6;
    *(undefined8 *)(param_1 + 8) = uVar4;
    *(undefined8 *)(param_1 + 0x10) = uVar5;
    *(undefined4 *)(param_1 + 0xa8) = param_3;
  }
  else if ((-1 < *(int *)(param_1 + 0x19c)) &&
          (cVar7 = FUN_14007c4d0(param_1 + 0x28,*(int *)(param_1 + 0x19c),param_2), cVar7 != '\0'))
  {
    *(undefined4 *)(param_1 + 0xa8) = param_3;
    uVar4 = *(undefined8 *)param_4;
    uVar5 = *(undefined8 *)(param_4 + 8);
    uVar6 = *(undefined8 *)(param_4 + 0x15);
    *(undefined8 *)(param_1 + 0x15) = *(undefined8 *)(param_4 + 0xd);
    *(undefined8 *)(param_1 + 0x1d) = uVar6;
    *(undefined8 *)(param_1 + 8) = uVar4;
    *(undefined8 *)(param_1 + 0x10) = uVar5;
    *(byte *)(param_1 + 0xac) = param_5;
    auStack_5c[0] = 0;
    if ((*param_4 == '\x01') &&
       (piVar9 = (int *)FUN_144f13100(param_1 + 0x78,0x252c20d9,auStack_5c), piVar9 != (int *)0x0))
    {
      iVar8 = *piVar9;
    }
    else {
      piVar9 = (int *)0x0;
      iVar8 = 0;
    }
    uVar13 = (uint)param_5 + iVar8;
    if (*(uint *)(param_1 + 0xb0) < uVar13) {
      lVar10 = func_0x000144d9c140(8,(ulonglong)uVar13 * 0x90);
      if ((ulonglong)*(uint *)(param_1 + 0xb4) != 0) {
        lVar12 = *(longlong *)(param_1 + 0xb8);
        lVar15 = 0;
        auVar16 = ZEXT1264(ZEXT812(0));
        lVar14 = (ulonglong)*(uint *)(param_1 + 0xb4) * 0x90;
        do {
          pauVar11 = (undefined1 (*) [16])(lVar10 + lVar15);
          if (pauVar11 != (undefined1 (*) [16])0x0) {
            *pauVar11 = auVar16._0_16_;
            auVar16 = ZEXT1664(auVar16._0_16_);
            FUN_1443ab750(pauVar11,lVar12 + lVar15);
            *(undefined1 (*) [16])(lVar10 + 0x10 + lVar15) = auVar16._0_16_;
            FUN_141077250(lVar10 + 0x10 + lVar15,lVar12 + 0x10 + lVar15);
            lVar1 = lVar12 + 0x20 + lVar15;
            *(undefined1 (*) [16])(lVar10 + 0x20 + lVar15) = auVar16._0_16_;
            FUN_1423d1f20(lVar10 + 0x20 + lVar15,lVar1);
            uVar4 = *(undefined8 *)(lVar1 + 0x18);
            uVar5 = *(undefined8 *)(lVar1 + 0x20);
            uVar6 = *(undefined8 *)(lVar1 + 0x28);
            lVar2 = lVar12 + 0x50 + lVar15;
            puVar3 = (undefined8 *)(lVar10 + 0x30 + lVar15);
            *puVar3 = *(undefined8 *)(lVar1 + 0x10);
            puVar3[1] = uVar4;
            puVar3[2] = uVar5;
            puVar3[3] = uVar6;
            auVar16 = ZEXT1664(auVar16._0_16_);
            func_0x0001443aac50(lVar10 + 0x50 + lVar15,lVar2);
            uVar4 = *(undefined8 *)(lVar2 + 0xc);
            uVar5 = *(undefined8 *)(lVar2 + 0x14);
            uVar6 = *(undefined8 *)(lVar2 + 0x1c);
            puVar3 = (undefined8 *)(lVar10 + 0x54 + lVar15);
            *puVar3 = *(undefined8 *)(lVar2 + 4);
            puVar3[1] = uVar4;
            puVar3[2] = uVar5;
            puVar3[3] = uVar6;
            *(undefined8 *)(lVar10 + 0x71 + lVar15) = *(undefined8 *)(lVar2 + 0x21);
            *(undefined8 *)(lVar10 + 0x80 + lVar15) = *(undefined8 *)(lVar2 + 0x30);
            *(undefined1 *)(lVar10 + 0x88 + lVar15) = *(undefined1 *)(lVar2 + 0x38);
          }
          lVar15 = lVar15 + 0x90;
        } while (lVar14 != lVar15);
        lVar12 = lVar12 + 0x50;
        do {
          FUN_1450267e0(lVar12);
          *(undefined4 *)(lVar12 + -0x2c) = 0;
          if (*(longlong *)(lVar12 + -0x28) != 0) {
            func_0x000144d9c130();
          }
          *(undefined8 *)(lVar12 + -0x28) = 0;
          lVar14 = lVar14 + -0x90;
          *(undefined1 (*) [32])(lVar12 + -0x50) = ZEXT1232(ZEXT812(0));
          *(undefined4 *)(lVar12 + -0x30) = 0;
          lVar12 = lVar12 + 0x90;
        } while (lVar14 != 0);
      }
      if (*(longlong *)(param_1 + 0xb8) != 0) {
        func_0x000144d9c130();
      }
      *(longlong *)(param_1 + 0xb8) = lVar10;
      *(uint *)(param_1 + 0xb0) = uVar13;
    }
    FUN_14007c2a0(param_1,piVar9);
    func_0x00014007c210(*(undefined4 *)(param_1 + 0xb4),*(undefined8 *)(param_1 + 0xb8));
    func_0x00014007c230(param_1);
  }
  return;
}

