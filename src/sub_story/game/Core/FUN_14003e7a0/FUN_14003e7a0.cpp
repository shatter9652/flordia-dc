// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14003e7a0  size: 1738 bytes
// Name:    FUN_14003e7a0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145030220, FUN_145d97a80, FUN_145769450, FUN_1401d7580, FUN_144e3dcc0, FUN_1412d7890, FUN_1425ced50, FUN_1438a4710, FUN_144f8d430, FUN_145523fd0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_14003e7a0(longlong param_1,longlong *param_2,undefined8 param_3,longlong param_4,
                       int *param_5,undefined8 param_6,undefined8 param_7,byte param_8,uint param_9,
                       undefined4 param_10,undefined4 param_11)

{
  longlong *plVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  undefined4 *puVar7;
  char cVar8;
  undefined1 uVar9;
  uint uVar10;
  int iVar11;
  ulonglong uVar12;
  undefined8 uVar13;
  longlong lVar14;
  undefined7 uVar15;
  undefined8 uVar16;
  longlong unaff_GS_OFFSET;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  undefined8 in_stack_ffffffffffffff70;
  undefined4 uVar20;
  undefined8 in_stack_ffffffffffffff78;
  undefined4 uVar21;
  undefined8 in_stack_ffffffffffffff90;
  undefined4 uVar22;
  
  uVar22 = (undefined4)((ulonglong)in_stack_ffffffffffffff90 >> 0x20);
  uVar21 = (undefined4)((ulonglong)in_stack_ffffffffffffff78 >> 0x20);
  uVar20 = (undefined4)((ulonglong)in_stack_ffffffffffffff70 >> 0x20);
  if ((param_9 < 4) && (*(longlong *)(param_4 + 0x50 + (ulonglong)param_9 * 8) != 0)) {
    uVar3 = param_5[3];
    uVar16 = param_3;
    if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8)
                 + 8) == '\0') {
      func_0x0001455db994();
    }
    bVar17 = false;
    bVar18 = *(longlong *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1298) == 0;
    bVar19 = (uVar3 & 0x60) == 0;
    if (((*(byte *)(param_1 + 0xb16) & 4) != 0) && (param_5[9] == -1)) {
      iVar4 = *param_5;
      bVar17 = true;
      if ((iVar4 != 0x23) && (iVar4 != 0x53)) {
        bVar17 = iVar4 - 0x41U < 0x12;
      }
    }
    lVar14 = *(longlong *)(param_4 + 0x10);
    if (lVar14 != 0) {
      uVar16 = 0x6863ee2e;
      cVar8 = FUN_1401d7580(*(undefined8 *)(lVar14 + 0x10),*(undefined2 *)(lVar14 + 0x18));
      if (cVar8 != '\0') {
        FUN_144e3dcc0((int)param_2[10]);
      }
    }
    if (((uVar3 != 0x40 || (bVar19 || bVar18)) | param_8) == 1) {
      uVar10 = *param_5 - 0x15;
      uVar12 = (ulonglong)uVar10;
      if (uVar10 < 8) {
LAB_14003e8ce:
        uVar16 = CONCAT71((int7)((ulonglong)uVar16 >> 8),1);
      }
      else {
        uVar16 = 0;
        uVar10 = *param_5 - 0x30;
        if ((uVar10 < 0x26) &&
           (uVar12 = 0x3000000001, (0x3000000001U >> ((ulonglong)uVar10 & 0x3f) & 1) != 0))
        goto LAB_14003e8ce;
      }
      uVar10 = (uint)param_3;
      uVar15 = (undefined7)((ulonglong)param_4 >> 8);
      if (!bVar19 && !bVar18) {
        if ((short)param_3 < 0) {
          FUN_145d97a80(CONCAT71((int7)(uVar12 >> 8),*(undefined1 *)((longlong)param_2 + 0x5d)),
                        param_4,CONCAT71((int7)((ulonglong)uVar16 >> 8),param_8),uVar3 == 0x40,
                        param_6,param_7,CONCAT44(uVar21,param_9),param_10,bVar17,param_11);
        }
        else {
          FUN_1438a4710(param_2,param_4,uVar10 & 7,param_8,uVar3 == 0x40,param_6,param_7,param_9,
                        param_10,bVar17,param_11);
          FUN_1438a4710(param_2,param_4,uVar10 >> 3 & 7,param_8,uVar3 == 0x40,param_6,param_7,
                        param_9,param_10,bVar17,param_11);
          FUN_1438a4710(param_2,param_4,uVar10 >> 6 & 7,param_8,uVar3 == 0x40,param_6,param_7,
                        param_9,param_10,bVar17,param_11);
        }
        uVar12 = CONCAT71(uVar15,1);
        goto LAB_14003ec01;
      }
      uVar13 = param_7;
      iVar11 = (**(code **)(*param_2 + 0x68))(param_2);
      iVar4 = *(int *)(param_1 + 0xb34);
      if (*(char *)(*(longlong *)
                     (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8) ==
          '\0') {
        func_0x0001455db994();
      }
      plVar1 = (longlong *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x12a8);
      uVar2 = *(undefined1 *)(*plVar1 + 0x12742);
      if ((DAT_14908f6f9 == '\x01') &&
         (*(int *)(param_1 + 0xb34) != 0 || *(int *)(param_1 + 0xb30) != 0)) {
        iVar5 = *param_5;
        if ((iVar5 != 0x23) && (iVar5 != 0x53)) {
          uVar3 = iVar5 - 0x41;
          uVar13 = CONCAT71((int7)((ulonglong)uVar13 >> 8),0x11 < uVar3);
          if ((iVar5 != 0x2d && 0x11 < uVar3) ||
             ((uVar3 < 0xb && ((0x501U >> (uVar3 & 0x1f) & 1) != 0)))) goto LAB_14003ebc3;
        }
        if (*(char *)(*(longlong *)
                       (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8) ==
            '\0') {
          func_0x0001455db994();
        }
        if (*(char *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0xa34) != '\0') goto LAB_14003ebc3;
        if (*(char *)(*(longlong *)
                       (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8) ==
            '\0') {
          func_0x0001455db994();
        }
        if (*(int *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0xac0) == 5) goto LAB_14003ebc3;
        if (*(char *)(*(longlong *)
                       (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8) ==
            '\0') {
          func_0x0001455db994();
        }
        *(undefined2 *)(*plVar1 + 0x12741) = 0x200;
        uVar9 = FUN_145523fd0(*(undefined4 *)
                               (param_1 + 0xb30 + (ulonglong)(iVar11 == 7 && iVar4 != 0) * 4));
        lVar14 = *(longlong *)(unaff_GS_OFFSET + 0x58);
        if (*(char *)(*(longlong *)(lVar14 + (ulonglong)__tls_index * 8) + 8) == '\0') {
          func_0x0001455db994();
        }
        lVar6 = *plVar1;
        uVar13 = CONCAT71((int7)((ulonglong)lVar14 >> 8),uVar2);
        bVar18 = true;
        *(undefined1 *)(lVar6 + 0x12740) = uVar2;
        *(undefined1 *)(lVar6 + 0x12741) = 1;
        *(undefined1 *)(lVar6 + 0x12742) = uVar9;
      }
      else {
LAB_14003ebc3:
        bVar18 = false;
      }
      cVar8 = FUN_1425ced50(param_1,CONCAT71((int7)((ulonglong)uVar13 >> 8),
                                             *(undefined1 *)((longlong)param_2 + 0x5e)) &
                                    0xffffffffffffff0f,param_9,*(undefined1 *)(param_1 + 0xb1a),
                            (*(byte *)(param_1 + 0xb16) & 0x10) >> 4);
      if (cVar8 != '\0') goto LAB_14003ebff;
      puVar7 = (undefined4 *)param_2[1];
      if (puVar7 == (undefined4 *)0x0) {
LAB_14003ec47:
        if ((uVar10 >> 0x10 & 1) == 0) {
          uVar16 = 0;
        }
        else {
          uVar16 = FUN_1412d7890(param_2,param_4);
        }
      }
      else {
        lVar14 = *(longlong *)(puVar7 + 2);
        uVar12 = FUN_145769450(*puVar7,lVar14,param_4);
        if (((uint)uVar12 == 0xffffffff) ||
           ((char)uVar16 != '\0' || (*(byte *)(param_1 + 0xb17) & 0x10) == 0)) goto LAB_14003ec47;
        uVar16 = *(undefined8 *)
                  ((ulonglong)(((uint)uVar12 & 0xf) << 4) + 0x18 +
                  lVar14 + (uVar12 >> 4 & 0xfffffff) * 0x110);
      }
      if ((short)param_3 < 0) {
        FUN_145030220(param_2,param_4,param_8,param_6,param_7,CONCAT44(uVar20,param_9),
                      CONCAT44(uVar21,param_10),bVar17,uVar16,CONCAT44(uVar22,param_11));
      }
      else {
        FUN_144f8d430(param_2,param_4,uVar10 & 7,param_8,param_6,param_7,CONCAT44(uVar21,param_9),
                      param_10,bVar17,uVar16,param_11);
        FUN_144f8d430(param_2,param_4,uVar10 >> 3 & 7,param_8,param_6,param_7,param_9,param_10,
                      bVar17,uVar16,param_11);
        FUN_144f8d430(param_2,param_4,uVar10 >> 6 & 7,param_8,param_6,param_7,param_9,param_10,
                      bVar17,uVar16,param_11);
      }
      uVar12 = CONCAT71(uVar15,1);
      if (bVar18) {
        if (*(char *)(*(longlong *)
                       (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8) ==
            '\0') {
          func_0x0001455db994();
        }
        lVar14 = *plVar1;
        *(undefined1 *)(lVar14 + 0x12741) = 0;
        *(undefined1 *)(lVar14 + 0x12742) = uVar2;
      }
      goto LAB_14003ec01;
    }
  }
LAB_14003ebff:
  uVar12 = 0;
LAB_14003ec01:
  return uVar12 & 0xffffffff;
}

