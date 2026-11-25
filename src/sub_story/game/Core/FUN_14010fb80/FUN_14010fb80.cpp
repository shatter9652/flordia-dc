// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14010fb80  size: 735 bytes
// Name:    FUN_14010fb80
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_141551060, FUN_14048b180
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14010fb80(ulonglong param_1,undefined1 (*param_2) [16])

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong unaff_GS_OFFSET;
  undefined1 auVar11 [16];
  
  if ((param_2[0x19][5] & 2) == 0) {
    param_1 = param_1 & 0xfffffffffffffff0;
    if (param_1 == 0) {
      return;
    }
    uVar3 = *(undefined4 *)(param_1 + 0x9c);
    cVar2 = func_0x000144eda060(uVar3);
    if (cVar2 == '\0') {
      return;
    }
    uVar5 = *(uint *)(param_2[2] + 8);
    uVar9 = (ulonglong)uVar5 & 0x1ffff;
    if ((((uVar9 != 0x1ffff) &&
         (plVar6 = *(longlong **)((ulonglong)(uVar5 >> 0x11 & 0x1f) * 8 + 0x14abbe7c0),
         plVar6 != (longlong *)0x0)) &&
        (uVar4 = *(uint *)(plVar6[5] + uVar9 * 4), (uVar4 >> 0x11 & 0x3ff) == uVar5 >> 0x16)) &&
       (((uVar4 & *(uint *)(plVar6 + 6)) == *(uint *)(plVar6 + 6) && (lVar7 = *plVar6, lVar7 != 0)))
       ) {
      lVar10 = plVar6[1];
      puVar8 = *(undefined8 **)(param_2[0x18] + 8);
      if (puVar8 == (undefined8 *)0x0) {
        puVar8 = (undefined8 *)FUN_141551060();
        if (puVar8 != (undefined8 *)0x0) {
          *puVar8 = 0xffffffffffffffff;
          if (*(char *)(*(longlong *)
                         (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8)
              == '\0') {
            func_0x0001455db994();
          }
          if (*(longlong *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1448) == 0) {
            *(undefined4 *)(puVar8 + 1) = 0;
          }
          *(undefined8 *)((longlong)puVar8 + 0xc) = 0x1ffff0001ffff;
          *(undefined4 *)((longlong)puVar8 + 0x14) = 0x1ffff;
          *(byte *)(puVar8 + 3) = *(byte *)(puVar8 + 3) & 0xfc;
        }
        *(undefined8 **)(param_2[0x18] + 8) = puVar8;
        uVar3 = *(undefined4 *)(param_1 + 0x9c);
      }
      FUN_14048b180(puVar8,lVar7 + (ulonglong)(uint)((int)uVar9 * (int)lVar10),uVar3,0xc);
      puVar8 = *(undefined8 **)(param_2[0x18] + 8);
      if (puVar8 == (undefined8 *)0x0) {
        puVar8 = (undefined8 *)FUN_141551060();
        if (puVar8 != (undefined8 *)0x0) {
          *puVar8 = 0xffffffffffffffff;
          if (*(char *)(*(longlong *)
                         (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8)
              == '\0') {
            func_0x0001455db994();
          }
          if (*(longlong *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1448) == 0) {
            *(undefined4 *)(puVar8 + 1) = 0;
          }
          *(undefined8 *)((longlong)puVar8 + 0xc) = 0x1ffff0001ffff;
          *(undefined4 *)((longlong)puVar8 + 0x14) = 0x1ffff;
          *(byte *)(puVar8 + 3) = *(byte *)(puVar8 + 3) & 0xfc;
        }
        *(undefined8 **)(param_2[0x18] + 8) = puVar8;
      }
      func_0x00014062ea80(puVar8,6);
      param_2[0x19][5] = param_2[0x19][5] | 2;
    }
  }
  lVar7 = *(longlong *)(param_2[0x18] + 8);
  if (lVar7 != 0) {
    if ((*(byte *)(lVar7 + 0x18) & 1) == 0) {
      plVar6 = (longlong *)func_0x000144ed0b20(*(undefined4 *)(lVar7 + 0xc));
      if ((plVar6 == (longlong *)0x0) || (lVar7 = (**(code **)(*plVar6 + 0x10))(), lVar7 == 0))
      goto LAB_14010fc72;
      cVar2 = *(char *)((longlong)plVar6 + 0x204);
      if (cVar2 != '\x02') {
        iVar1 = *(int *)((longlong)plVar6 + 0x54);
        if (iVar1 == 0) {
          uVar5 = 0;
        }
        else {
          uVar3 = func_0x000144fd53c0();
          uVar4 = func_0x000144dc06d0(iVar1,uVar3);
          uVar5 = 0;
          if (uVar4 < 0x240c8400) {
            uVar5 = uVar4;
          }
        }
        if (cVar2 == '\x01') {
          param_2[1][0] = param_2[1][0] & 0x80;
          param_2[1][4] = param_2[1][4] & 0xfe;
          uVar5 = *(uint *)(param_2[2] + 8);
          uVar9 = (ulonglong)uVar5 & 0x1ffff;
          if ((uVar9 == 0x1ffff) ||
             (plVar6 = *(longlong **)((ulonglong)(uVar5 >> 0x11 & 0x1f) * 8 + 0x14abbe7c0),
             plVar6 == (longlong *)0x0)) {
            lVar10 = 0;
          }
          else {
            uVar4 = *(uint *)(plVar6[5] + uVar9 * 4);
            lVar10 = 0;
            if (uVar5 >> 0x16 == (uVar4 >> 0x11 & 0x3ff) &&
                (uVar4 & *(uint *)(plVar6 + 6)) == *(uint *)(plVar6 + 6)) {
              lVar10 = (ulonglong)(uint)((int)plVar6[1] * (int)uVar9) + *plVar6;
            }
          }
          if (lVar10 != lVar7) {
            if (lVar7 == 0) {
              uVar5 = 0x1ffff;
            }
            else {
              plVar6 = *(longlong **)((ulonglong)*(byte *)(lVar7 + 0x30) * 8 + 0x14abbe7c0);
              uVar5 = (uint)((ulonglong)(lVar7 - *plVar6) / (ulonglong)*(uint *)(plVar6 + 1)) &
                      0x1ffff;
              uVar5 = (*(byte *)(lVar7 + 0x30) & 0x1f) << 0x11 | uVar5 |
                      (*(uint *)(plVar6[5] + (ulonglong)uVar5 * 4) & 0x7fe0000) << 5;
            }
            *(uint *)(param_2[2] + 8) = uVar5;
          }
          *(undefined8 *)param_2[3] = 0;
          *(undefined8 *)*param_2 = 0;
          *(undefined8 *)(*param_2 + 8) = 0;
          return;
        }
        if (*(uint *)(param_2[0x1d] + 4) < uVar5) goto LAB_14010fc72;
        auVar11 = vcmpps_avx(ZEXT816(0),*(undefined1 (*) [16])(plVar6 + 2),0);
        uVar3 = vmovmskps_avx(auVar11);
        if ((~(byte)uVar3 & 7) != 0) {
          func_0x000145338810(param_2);
        }
      }
    }
    return;
  }
LAB_14010fc72:
  uVar5 = *(uint *)(param_2[2] + 8);
  auVar11._0_12_ = ZEXT812(0);
  auVar11._12_4_ = 0;
  *(uint *)param_2[1] = *(uint *)param_2[1] & 0xffffff80 | 5;
  *param_2 = auVar11;
  if ((((((ulonglong)uVar5 & 0x1ffff) != 0x1ffff) &&
       (plVar6 = *(longlong **)((ulonglong)(uVar5 >> 0x11 & 0x1f) * 8 + 0x14abbe7c0),
       plVar6 != (longlong *)0x0)) &&
      (uVar4 = *(uint *)(plVar6[5] + ((ulonglong)uVar5 & 0x1ffff) * 4),
      (uVar4 >> 0x11 & 0x3ff) == uVar5 >> 0x16)) &&
     (((uVar4 & *(uint *)(plVar6 + 6)) == *(uint *)(plVar6 + 6) && (*plVar6 != 0)))) {
    *(undefined4 *)(param_2[2] + 8) = 0x1ffff;
  }
  *(undefined8 *)param_2[3] = 0;
  return;
}

