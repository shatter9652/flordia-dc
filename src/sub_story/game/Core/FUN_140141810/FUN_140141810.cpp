// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140141810  size: 1441 bytes
// Name:    FUN_140141810
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145647140, FUN_140142310, FUN_1401434d0, FUN_1456a83e0, FUN_1401432d0, FUN_145009350, FUN_140142420, FUN_1401423b0, FUN_140141dc0, FUN_140145ca0, FUN_1456a8300, FUN_1401422e0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140141810(longlong *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  longlong lVar4;
  code *pcVar5;
  undefined8 uVar6;
  char cVar7;
  uint uVar8;
  longlong lVar9;
  ulonglong *puVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong unaff_GS_OFFSET;
  undefined1 auVar16 [64];
  undefined8 auStackX_8 [2];
  undefined8 auStackX_18 [2];
  undefined8 uStack_38;
  
  uStack_38 = 0x140141823;
  lVar9 = FUN_145647140();
  lVar9 = -lVar9;
  iVar12 = *(int *)((longlong)param_1 + 0x3c);
  if (0 < (longlong)iVar12) {
    lVar13 = param_1[8];
    uVar14 = 0;
    do {
      lVar11 = *(longlong *)(lVar13 + uVar14 * 8);
      if ((*(byte *)(lVar11 + 0xd9) & 4) != 0) {
        uVar3 = *(undefined4 *)(lVar11 + 0x88);
        uVar6 = *(undefined8 *)(*(longlong *)(lVar11 + 0x80) + 0x20);
        *(undefined8 *)((longlong)&uStack_38 + lVar9) = 0x14014187a;
        puVar10 = (ulonglong *)func_0x000144f2e340(uVar6,uVar3);
        *puVar10 = *puVar10 | 0x1000000000;
        puVar10[8] = puVar10[8] | 0x1000000000;
        puVar10[0x10] = puVar10[0x10] | 0x1000000000;
        puVar10[0x18] = puVar10[0x18] & 0xffffffefffffffff;
        puVar10[0x20] = puVar10[0x20] & 0xffffffefffffffff;
        puVar10[0x28] = puVar10[0x28] & 0xffffffefffffffff;
      }
      uVar14 = uVar14 + 1;
    } while (uVar14 < (ulonglong)(longlong)iVar12);
  }
  *(undefined8 *)((longlong)&uStack_38 + lVar9) = 0x1401418a7;
  FUN_140142310(param_1);
  uVar14 = (ulonglong)*(int *)((longlong)param_1 + 0x3c);
  if (0 < (longlong)uVar14) {
    lVar13 = param_1[8];
    uVar15 = 0;
    do {
      lVar11 = *(longlong *)(lVar13 + uVar15 * 8);
      iVar12 = *(int *)(lVar11 + 0xdc);
      if (iVar12 < 0x2275677d) {
        if (iVar12 < -0x66f287e4) {
          if (iVar12 != -0x6e187053) goto LAB_14014193a;
        }
        else if (iVar12 < -0x56bb76b2) {
          if (iVar12 != -0x66f287e4) goto LAB_14014193a;
        }
        else if (((iVar12 != -0x56bb76b2) && (iVar12 != -0x2324fb93)) && (iVar12 != 0x1c1e250e))
        goto LAB_14014193a;
      }
      else if (iVar12 < 0x60bc51dd) {
        if (((iVar12 != 0x2275677d) && (iVar12 != 0x5326a251)) && (iVar12 != 0x4d71ca64)) {
LAB_14014193a:
          uVar3 = *(undefined4 *)(lVar11 + 0x88);
          uVar6 = *(undefined8 *)(*(longlong *)(lVar11 + 0x80) + 0x20);
          *(undefined8 *)((longlong)&uStack_38 + lVar9) = 0x140141950;
          lVar11 = func_0x000144f2e340(uVar6,uVar3);
          if (((*(byte *)(lVar11 + 0xb) & 1) != 0) &&
             (((uint)*(ulonglong *)(lVar11 + 200) >> 0x18 & 1) != 0)) {
            *(ulonglong *)(lVar11 + 200) = *(ulonglong *)(lVar11 + 200) & 0xfffffffffeffffff;
            *(byte *)(lVar11 + 0x10b) = *(byte *)(lVar11 + 0x10b) & 0xfe;
            *(byte *)(lVar11 + 0x14b) = *(byte *)(lVar11 + 0x14b) & 0xfe;
          }
          if (((*(byte *)(lVar11 + 0x18b) & 1) != 0) &&
             (((uint)*(ulonglong *)(lVar11 + 0x248) >> 0x18 & 1) != 0)) {
            *(ulonglong *)(lVar11 + 0x248) = *(ulonglong *)(lVar11 + 0x248) & 0xfffffffffeffffff;
            *(byte *)(lVar11 + 0x28b) = *(byte *)(lVar11 + 0x28b) & 0xfe;
            *(byte *)(lVar11 + 0x2cb) = *(byte *)(lVar11 + 0x2cb) & 0xfe;
          }
          if (((*(byte *)(lVar11 + 0x30b) & 1) != 0) &&
             (((uint)*(ulonglong *)(lVar11 + 0x3c8) >> 0x18 & 1) != 0)) {
            *(ulonglong *)(lVar11 + 0x3c8) = *(ulonglong *)(lVar11 + 0x3c8) & 0xfffffffffeffffff;
            *(byte *)(lVar11 + 0x40b) = *(byte *)(lVar11 + 0x40b) & 0xfe;
            *(byte *)(lVar11 + 1099) = *(byte *)(lVar11 + 1099) & 0xfe;
          }
          if (((*(byte *)(lVar11 + 0x48b) & 1) != 0) &&
             (((uint)*(ulonglong *)(lVar11 + 0x548) >> 0x18 & 1) != 0)) {
            *(ulonglong *)(lVar11 + 0x548) = *(ulonglong *)(lVar11 + 0x548) & 0xfffffffffeffffff;
            *(byte *)(lVar11 + 0x58b) = *(byte *)(lVar11 + 0x58b) & 0xfe;
            *(byte *)(lVar11 + 0x5cb) = *(byte *)(lVar11 + 0x5cb) & 0xfe;
          }
          if (((*(byte *)(lVar11 + 0x60b) & 1) != 0) &&
             (((uint)*(ulonglong *)(lVar11 + 0x6c8) >> 0x18 & 1) != 0)) {
            *(ulonglong *)(lVar11 + 0x6c8) = *(ulonglong *)(lVar11 + 0x6c8) & 0xfffffffffeffffff;
            *(byte *)(lVar11 + 0x70b) = *(byte *)(lVar11 + 0x70b) & 0xfe;
            *(byte *)(lVar11 + 0x74b) = *(byte *)(lVar11 + 0x74b) & 0xfe;
          }
        }
      }
      else if (((iVar12 != 0x672fd9d1) && (iVar12 != 0x71fa0087)) && (iVar12 != 0x60bc51dd))
      goto LAB_14014193a;
      uVar15 = uVar15 + 1;
    } while (uVar15 < uVar14);
  }
  plVar1 = (longlong *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1448);
  if (*(char *)((*(longlong **)(unaff_GS_OFFSET + 0x58))[__tls_index] + 8) == '\0') {
    cVar7 = '\0';
    auVar16 = ZEXT864(0);
    lVar13 = 0;
    do {
      if (cVar7 == '\0') {
        *(undefined8 *)((longlong)&uStack_38 + lVar9) = 0x140141d46;
        func_0x0001455db994();
        auVar16 = ZEXT1264(ZEXT812(0));
        cVar7 = *(char *)(*(longlong *)
                           (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8)
        ;
      }
      if (*plVar1 == 0) {
        ((undefined1 (*) [32])(&stack0xfffffffffffffff8 + lVar13 + lVar9))[1] = auVar16._0_32_;
        *(undefined1 (*) [32])(&stack0xfffffffffffffff8 + lVar13 + lVar9) = auVar16._0_32_;
      }
      lVar13 = lVar13 + 0x40;
    } while (lVar13 != 0x74c0);
    uVar14 = (ulonglong)*(uint *)((longlong)param_1 + 0x3c);
  }
  else {
    lVar13 = *plVar1;
    lVar11 = 0;
    do {
      if (lVar13 == 0) {
        puVar2 = (undefined8 *)((longlong)auStackX_18 + lVar11 + lVar9);
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2[2] = 0;
        puVar2[3] = 0;
        puVar2 = (undefined8 *)(&stack0xfffffffffffffff8 + lVar11 + lVar9);
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2[2] = 0;
        puVar2[3] = 0;
      }
      lVar11 = lVar11 + 0x40;
    } while (lVar11 != 0x74c0);
  }
  *(undefined8 *)((longlong)&uStack_38 + lVar9) = 0x140141b09;
  FUN_1401434d0(&stack0xfffffffffffffff8 + lVar9);
  if (0 < (int)uVar14) {
    iVar12 = 0;
    do {
      lVar13 = param_1[8];
      *(undefined8 *)((longlong)&uStack_38 + lVar9) = 0x140141b22;
      FUN_140141dc0(lVar13,iVar12,&stack0xfffffffffffffff8 + lVar9);
      uVar14 = (ulonglong)*(uint *)((longlong)param_1 + 0x3c);
      iVar12 = iVar12 + 1;
    } while (iVar12 < (int)*(uint *)((longlong)param_1 + 0x3c));
  }
  *(undefined8 *)((longlong)&uStack_38 + lVar9) = 0x140141b36;
  func_0x0001401422b0(uVar14 & 0xffffffff);
  if (0 < *(int *)((longlong)param_1 + 0x2ac)) {
    lVar13 = 0;
    do {
      lVar11 = *(longlong *)(param_1[0x56] + lVar13 * 8);
      lVar4 = *(longlong *)(lVar11 + 0xf0);
      if (lVar4 != 0) {
        if (*(int *)(lVar11 + 0x114) == 0) {
          if ((*(uint *)(lVar4 + 0xd8) >> 0x11 & 1) != 0) {
            *(undefined8 *)((longlong)&uStack_38 + lVar9) = 0x140141d72;
            func_0x0001412ec4f0();
            if (*(int *)(lVar11 + 0x114) != 0) {
              uVar8 = *(uint *)(lVar4 + 0xd8);
              goto LAB_140141b7f;
            }
          }
        }
        else {
          uVar8 = *(uint *)(lVar4 + 0xd8) | 0x20000;
          *(uint *)(lVar4 + 0xd8) = uVar8;
LAB_140141b7f:
          if ((uVar8 & 0x18000) == 0x8000) {
            *(undefined8 *)((longlong)&uStack_38 + lVar9) = 0x140141d98;
            func_0x0001412ec4f0();
          }
        }
      }
      if (*(short *)(lVar11 + 0x20) == 0) {
        *(undefined8 *)((longlong)&uStack_38 + lVar9) = 0x140141b9b;
        FUN_145009350();
      }
      lVar13 = lVar13 + 1;
    } while (lVar13 < *(int *)((longlong)param_1 + 0x2ac));
  }
  *(undefined8 *)((longlong)&uStack_38 + lVar9) = 0x140141bb2;
  FUN_1401422e0(param_1);
  if (0 < *(int *)((longlong)param_1 + 0x2ac)) {
    if ((ulonglong)_DAT_1471277cc != 0) {
      uVar14 = 0;
      do {
        if (*(longlong **)(_DAT_1471277d0 + uVar14 * 8) == param_1) goto LAB_140141bbb;
        uVar14 = uVar14 + 1;
      } while (_DAT_1471277cc != uVar14);
    }
    if (_DAT_1471277cc == _DAT_1471277c8) {
      uVar8 = 1;
      if (1 < _DAT_1471277cc) {
        uVar8 = _DAT_1471277cc >> 1;
      }
      *(undefined8 *)((longlong)&uStack_38 + lVar9) = 0x140141c52;
      FUN_1456a8300(uVar8 + _DAT_1471277cc);
    }
    uVar14 = (ulonglong)_DAT_1471277cc;
    _DAT_1471277cc = _DAT_1471277cc + 1;
    *(longlong **)(_DAT_1471277d0 + uVar14 * 8) = param_1;
  }
LAB_140141bbb:
  pcVar5 = *(code **)(*param_1 + 0x50);
  *(undefined8 *)((longlong)&uStack_38 + lVar9) = 0x140141bc4;
  (*pcVar5)(param_1);
  *(undefined8 *)((longlong)&uStack_38 + lVar9) = 0x140141bcc;
  FUN_140142420(param_1);
  pcVar5 = *(code **)(*param_1 + 0x70);
  *(undefined8 *)((longlong)&uStack_38 + lVar9) = 0x140141bd5;
  (*pcVar5)(param_1);
  iVar12 = *(int *)((longlong)param_1 + 0x44c);
  if (0 < iVar12) {
    lVar13 = 0;
    do {
      lVar11 = *(longlong *)(param_1[0x8a] + lVar13 * 8);
      if (*(char *)(lVar11 + 0x58) == '\x01') {
        if (_DAT_147127820 != 0) {
          *(undefined8 *)((longlong)&uStack_38 + lVar9) = 0x140141cf1;
          cVar7 = FUN_1456a83e0();
          if (cVar7 == '\0') {
            *(undefined8 *)((longlong)&uStack_38 + lVar9) = 0x140141dac;
            FUN_140145ca0(_DAT_147127820);
          }
          _DAT_147127820 = *(longlong *)(param_1[0x8a] + lVar13 * 8);
          goto LAB_140141c86;
        }
      }
      else {
LAB_140141c86:
        *(undefined8 *)((longlong)&uStack_38 + lVar9) = 0x140141c8b;
        FUN_140145ca0();
        iVar12 = *(int *)((longlong)param_1 + 0x44c);
        lVar11 = _DAT_147127820;
      }
      _DAT_147127820 = lVar11;
      lVar13 = lVar13 + 1;
    } while (lVar13 < iVar12);
  }
  *(undefined8 *)((longlong)&uStack_38 + lVar9) = 0x140141beb;
  FUN_1401423b0(param_1);
  if ((*(char *)((longlong)param_1 + 0xd5) == '\0') && (0 < *(int *)((longlong)param_1 + 0x44c))) {
    lVar13 = 0;
    do {
      lVar11 = *(longlong *)(param_1[0x8a] + lVar13 * 8);
      uVar3 = *(undefined4 *)(lVar11 + 0x24);
      uVar6 = *(undefined8 *)(lVar11 + 0x28);
      *(undefined8 *)((longlong)&uStack_38 + lVar9) = 0x140141d29;
      FUN_1401432d0(uVar3,uVar6);
      lVar13 = lVar13 + 1;
    } while (lVar13 < *(int *)((longlong)param_1 + 0x44c));
  }
  return;
}

