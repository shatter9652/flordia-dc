// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140087040  size: 2630 bytes
// Name:    FUN_140087040
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140087040(longlong *param_1,longlong param_2,longlong param_3)

{
  byte bVar1;
  undefined1 uVar2;
  uint uVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  undefined *puVar11;
  longlong unaff_GS_OFFSET;
  bool bVar12;
  uint uStack_e0;
  undefined4 uStack_dc;
  longlong lStack_d8;
  undefined *puStack_d0;
  longlong *aplStack_c8 [7];
  undefined4 uStack_90;
  undefined4 uStack_88;
  
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    func_0x0001455db994();
  }
  if ((*(ushort *)(*(longlong *)(param_3 + 8) + 0x20) & *(ushort *)(param_1 + 3)) != 0) {
    param_1[1] = param_2;
    lVar9 = *(longlong *)(param_3 + 8);
    switch(*(undefined1 *)(lVar9 + 0x1c)) {
    case 0:
      (**(code **)(*param_1 + 0x30))(param_1,param_2 + *(longlong *)(lVar9 + 0x10),param_3);
      break;
    case 1:
      (**(code **)(*param_1 + 0x38))(param_1,param_2 + *(longlong *)(lVar9 + 0x10),param_3);
      break;
    case 2:
      (**(code **)(*param_1 + 0x40))(param_1,param_2 + *(longlong *)(lVar9 + 0x10),param_3);
      break;
    case 3:
      (**(code **)(*param_1 + 0x48))(param_1,param_2 + *(longlong *)(lVar9 + 0x10),param_3);
      break;
    case 4:
      (**(code **)(*param_1 + 0x50))(param_1,param_2 + *(longlong *)(lVar9 + 0x10),param_3);
      break;
    case 5:
      (**(code **)(*param_1 + 0x60))(param_1,param_2 + *(longlong *)(lVar9 + 0x10),param_3);
      break;
    case 6:
      (**(code **)(*param_1 + 0x70))(param_1,param_2 + *(longlong *)(lVar9 + 0x10),param_3);
      break;
    case 7:
      (**(code **)(*param_1 + 0x78))(param_1,param_2 + *(longlong *)(lVar9 + 0x10),param_3);
      break;
    case 0xb:
      switch(*(undefined1 *)(lVar9 + 0x1d)) {
      case 0:
        (**(code **)(*param_1 + 0x130))(param_1,param_2 + *(longlong *)(lVar9 + 0x10),param_3);
        break;
      case 1:
        (**(code **)(*param_1 + 0x138))(param_1,param_2 + *(longlong *)(lVar9 + 0x10),param_3);
        break;
      case 2:
        (**(code **)(*param_1 + 0x140))(param_1,param_2 + *(longlong *)(lVar9 + 0x10),param_3);
        break;
      case 3:
        (**(code **)(*param_1 + 0x148))(param_1,param_2 + *(longlong *)(lVar9 + 0x10),param_3);
        break;
      case 4:
        (**(code **)(*param_1 + 0x1a0))(param_1,param_2 + *(longlong *)(lVar9 + 0x10),param_3);
        break;
      case 5:
        (**(code **)(*param_1 + 0x1a8))(param_1,param_2 + *(longlong *)(lVar9 + 0x10),param_3);
        break;
      case 6:
        (**(code **)(*param_1 + 0x1b0))(param_1,param_2 + *(longlong *)(lVar9 + 0x10),param_3);
        break;
      case 7:
        (**(code **)(*param_1 + 0x150))(param_1,param_2 + *(longlong *)(lVar9 + 0x10),param_3);
        break;
      case 8:
        (**(code **)(*param_1 + 0x158))(param_1,param_2 + *(longlong *)(lVar9 + 0x10),param_3);
        break;
      case 9:
        (**(code **)(*param_1 + 0x160))(param_1,param_2 + *(longlong *)(lVar9 + 0x10),param_3);
        break;
      case 10:
        (**(code **)(*param_1 + 0x168))(param_1,param_2 + *(longlong *)(lVar9 + 0x10),param_3);
        break;
      case 0xb:
        (**(code **)(*param_1 + 0x180))(param_1,param_2 + *(longlong *)(lVar9 + 0x10),param_3);
        break;
      case 0xc:
        (**(code **)(*param_1 + 400))(param_1,param_2 + *(longlong *)(lVar9 + 0x10),param_3);
        break;
      case 0xd:
        (**(code **)(*param_1 + 0x170))(param_1,param_2 + *(longlong *)(lVar9 + 0x10),param_3);
        break;
      case 0xe:
        (**(code **)(*param_1 + 0x178))(param_1,param_2 + *(longlong *)(lVar9 + 0x10),param_3);
        break;
      case 0xf:
        (**(code **)(*param_1 + 0x188))(param_1,param_2 + *(longlong *)(lVar9 + 0x10),param_3);
      }
      break;
    case 0xc:
      switch(*(undefined1 *)(lVar9 + 0x1d)) {
      case 0:
        uVar6 = func_0x000144f836d0();
        cVar4 = (**(code **)(*param_1 + 0x1c0))(param_1,uVar6,param_3);
        if (cVar4 != '\0') {
          uVar7 = FUN_14019ae30(*(undefined8 *)(param_3 + 8),uVar6);
          (**(code **)(*param_1 + 8))(param_1,uVar6,uVar7);
        }
        (**(code **)(*param_1 + 0x1c8))(param_1,uVar6,param_3);
        break;
      case 1:
      case 2:
      case 5:
        (**(code **)(*param_1 + 0x1b8))(param_1,param_2 + *(longlong *)(lVar9 + 0x10),param_3);
        break;
      case 3:
      case 4:
        plVar8 = (longlong *)(param_2 + *(longlong *)(lVar9 + 0x10));
        cVar4 = (**(code **)(*param_1 + 0x1d0))(param_1,plVar8,param_3);
        if ((cVar4 != '\0') && (*plVar8 != 0)) {
          uVar6 = FUN_14019ae30(*(undefined8 *)(param_3 + 8),*plVar8);
          (**(code **)(*param_1 + 8))(param_1,*plVar8,uVar6);
        }
        (**(code **)(*param_1 + 0x1d8))(param_1,plVar8,param_3);
        break;
      case 6:
        plVar8 = (longlong *)(param_2 + *(longlong *)(lVar9 + 0x10));
        cVar4 = (**(code **)(*param_1 + 0x1e0))(param_1,plVar8,param_3);
        if ((cVar4 != '\0') && (*plVar8 != 1)) {
          uVar6 = FUN_14019ae30(*(undefined8 *)(param_3 + 8),*plVar8 + (longlong)plVar8);
          lVar9 = 0;
          if (*plVar8 != 1) {
            lVar9 = (longlong)plVar8 + *plVar8;
          }
          (**(code **)(*param_1 + 8))(param_1,lVar9,uVar6);
        }
        (**(code **)(*param_1 + 0x1e8))(param_1,plVar8,param_3);
      }
      break;
    case 0xd:
      if (*(char *)(lVar9 + 0x1d) != '\t') {
        FUN_140293fd0(param_3,param_2,&puStack_d0,&uStack_e0);
        puVar11 = puStack_d0;
        uVar6 = CONCAT44(uStack_dc,uStack_e0);
        lVar10 = *(longlong *)(*(longlong *)(param_3 + 8) + 0x10) + param_2;
        cVar4 = (**(code **)(*param_1 + 0x200))(param_1,lVar10,puStack_d0,uVar6,param_3);
        lVar9 = param_1[2];
        if ((cVar4 != '\0') &&
           (bVar1 = *(byte *)(*(longlong *)(*(longlong *)(param_3 + 0x10) + 8) + 0x1c),
           (*(uint *)((longlong)param_1 + (ulonglong)(bVar1 >> 5) * 4 + 0x1c) >> (bVar1 & 0x1f) & 1)
           != 0)) {
          lStack_d8 = lVar9;
          FUN_140293fd0(param_3,param_2,&puStack_d0,&uStack_e0);
          uVar2 = *(undefined1 *)((longlong)param_1 + 0x24);
          *(undefined1 *)((longlong)param_1 + 0x24) = 0;
          uVar6 = CONCAT44(uStack_dc,uStack_e0);
          if (0 < (int)uStack_e0) {
            lVar9 = 0;
            do {
              uVar7 = func_0x0001451612c0(*(undefined8 *)(param_3 + 8),puStack_d0,lVar9);
              (**(code **)(*param_1 + 0x238))(param_1,uVar7,*(undefined8 *)(param_3 + 0x10));
              if ((*(char *)((longlong)param_1 + 0x24) != '\0') ||
                 (*(char *)((longlong)param_1 + 0x25) != '\0')) break;
              bVar12 = (ulonglong)(uStack_e0 & 0x7fffffff) - 1 != lVar9;
              lVar9 = lVar9 + 1;
            } while (bVar12);
          }
          *(undefined1 *)((longlong)param_1 + 0x24) = uVar2;
          lVar9 = lStack_d8;
          puVar11 = puStack_d0;
        }
        param_1[1] = param_2;
        param_1[2] = lVar9;
        (**(code **)(*param_1 + 0x208))(param_1,lVar10,puVar11,uVar6,param_3);
      }
      break;
    case 0xe:
      (**(code **)(*param_1 + 0x118))(param_1,param_2 + *(longlong *)(lVar9 + 0x10),param_3);
      break;
    case 0xf:
      func_0x000144f83300(param_3,param_2,&puStack_d0,&uStack_e0);
      (**(code **)(*param_1 + 0x120))
                (param_1,param_2 + *(longlong *)(*(longlong *)(param_3 + 8) + 0x10),puStack_d0,
                 uStack_e0,param_3);
      break;
    case 0x10:
      lVar9 = *(longlong *)(lVar9 + 0x10);
      cVar4 = (**(code **)(*param_1 + 0x210))(param_1,param_2,param_3);
      lVar10 = param_1[2];
      if ((cVar4 != '\0') &&
         ((bVar1 = *(byte *)(*(longlong *)(*(longlong *)(param_3 + 0x10) + 8) + 0x1c),
          (*(uint *)((longlong)param_1 + (ulonglong)(bVar1 >> 5) * 4 + 0x1c) >> (bVar1 & 0x1f) & 1)
          != 0 || (bVar1 = *(byte *)(*(longlong *)(*(longlong *)(param_3 + 0x18) + 8) + 0x1c),
                  (*(uint *)((longlong)param_1 + (ulonglong)(bVar1 >> 5) * 4 + 0x1c) >>
                   (bVar1 & 0x1f) & 1) != 0)))) {
        uVar2 = *(undefined1 *)((longlong)param_1 + 0x24);
        *(undefined1 *)((longlong)param_1 + 0x24) = 0;
        FUN_14405dd00(&puStack_d0,param_3,lVar9 + param_2);
        while (cVar4 = (**(code **)(*aplStack_c8[0] + 0x28))(aplStack_c8[0]), cVar4 == '\0') {
          uVar6 = (**(code **)(*aplStack_c8[0] + 0x20))(aplStack_c8[0]);
          uVar7 = (**(code **)(*aplStack_c8[0] + 0x18))(aplStack_c8[0]);
          (**(code **)(*param_1 + 0x220))(param_1,param_2,uVar7,uVar6,param_3);
          if ((*(char *)((longlong)param_1 + 0x24) != '\0') ||
             (*(char *)((longlong)param_1 + 0x25) != '\0')) break;
          (**(code **)(*aplStack_c8[0] + 0x10))(aplStack_c8[0]);
        }
        *(undefined1 *)((longlong)param_1 + 0x24) = uVar2;
        FUN_140930510(&puStack_d0);
      }
      param_1[1] = param_2;
      param_1[2] = lVar10;
      (**(code **)(*param_1 + 0x218))(param_1,param_2,param_3);
      break;
    case 0x11:
      (**(code **)(*param_1 + 0xe0))(param_1,param_2 + *(longlong *)(lVar9 + 0x10),param_3);
      break;
    case 0x12:
      (**(code **)(*param_1 + 0xe8))(param_1,param_2 + *(longlong *)(lVar9 + 0x10),param_3);
      break;
    case 0x13:
      (**(code **)(*param_1 + 0xb0))(param_1,param_2 + *(longlong *)(lVar9 + 0x10),param_3);
      break;
    case 0x14:
      (**(code **)(*param_1 + 0xb8))(param_1,param_2 + *(longlong *)(lVar9 + 0x10),param_3);
      break;
    case 0x15:
      (**(code **)(*param_1 + 0xc0))(param_1,param_2 + *(longlong *)(lVar9 + 0x10),param_3);
      break;
    case 0x16:
      (**(code **)(*param_1 + 0xf0))(param_1,param_2 + *(longlong *)(lVar9 + 0x10),param_3);
      break;
    case 0x17:
      (**(code **)(*param_1 + 0xf8))(param_1,param_2 + *(longlong *)(lVar9 + 0x10),param_3);
      break;
    case 0x18:
      (**(code **)(*param_1 + 0x100))(param_1,param_2 + *(longlong *)(lVar9 + 0x10),param_3);
      break;
    case 0x19:
      (**(code **)(*param_1 + 0x88))(param_1,param_2 + *(longlong *)(lVar9 + 0x10),param_3);
      break;
    case 0x1a:
      (**(code **)(*param_1 + 0x90))(param_1,param_2 + *(longlong *)(lVar9 + 0x10),param_3);
      break;
    case 0x1b:
      (**(code **)(*param_1 + 0xd8))(param_1,param_2 + *(longlong *)(lVar9 + 0x10),param_3);
      break;
    case 0x1c:
    case 0x1f:
      (**(code **)(*param_1 + 0x58))(param_1,param_2 + *(longlong *)(lVar9 + 0x10),param_3);
      break;
    case 0x1d:
    case 0x20:
      (**(code **)(*param_1 + 0x68))(param_1,param_2 + *(longlong *)(lVar9 + 0x10),param_3);
      break;
    case 0x1e:
      (**(code **)(*param_1 + 0x80))(param_1,param_2 + *(longlong *)(lVar9 + 0x10),param_3);
      break;
    case 0x21:
      (**(code **)(*param_1 + 0x98))(param_1,param_2 + *(longlong *)(lVar9 + 0x10),param_3);
      break;
    case 0x22:
      (**(code **)(*param_1 + 0x108))(param_1,param_2 + *(longlong *)(lVar9 + 0x10),param_3);
      break;
    case 0x23:
      (**(code **)(*param_1 + 0xa0))(param_1,param_2 + *(longlong *)(lVar9 + 0x10),param_3);
      break;
    case 0x24:
      (**(code **)(*param_1 + 0xd0))(param_1,param_2 + *(longlong *)(lVar9 + 0x10),param_3);
      break;
    case 0x25:
      (**(code **)(*param_1 + 200))(param_1,param_2 + *(longlong *)(lVar9 + 0x10),param_3);
      break;
    case 0x26:
      lVar10 = *(longlong *)(lVar9 + 0x10) + param_2;
      cVar4 = (**(code **)(*param_1 + 0x228))(param_1,param_2,param_3);
      lVar9 = param_1[2];
      if ((cVar4 != '\0') &&
         (bVar1 = *(byte *)(*(longlong *)(*(longlong *)(param_3 + 0x10) + 8) + 0x1c),
         uVar3 = *(uint *)((longlong)param_1 + (ulonglong)(bVar1 >> 5) * 4 + 0x1c),
         (uVar3 >> (bVar1 & 0x1f) & 1) != 0)) {
        uVar2 = *(undefined1 *)((longlong)param_1 + 0x24);
        *(undefined1 *)((longlong)param_1 + 0x24) = 0;
        iVar5 = func_0x00014083e670(CONCAT31((int3)(uVar3 >> 8),
                                             *(undefined1 *)(*(longlong *)(param_3 + 8) + 0x1d)));
        if (iVar5 == 1) {
          puStack_d0 = &UNK_1465a1930;
          FUN_1411a1f20(aplStack_c8,param_3,lVar10);
          uStack_88 = 0xffffffff;
          FUN_1411a1f90(&puStack_d0);
          cVar4 = func_0x0001411a1ff0(&puStack_d0);
          if (cVar4 == '\0') {
            do {
              uVar6 = *(undefined8 *)(param_3 + 0x10);
              uVar7 = func_0x00014405de30(&puStack_d0);
              (**(code **)(*param_1 + 0x238))(param_1,uVar7,uVar6);
              if ((*(char *)((longlong)param_1 + 0x24) != '\0') ||
                 (*(char *)((longlong)param_1 + 0x25) != '\0')) break;
              FUN_14405de40(&puStack_d0);
              cVar4 = func_0x0001411a1ff0(&puStack_d0);
            } while (cVar4 == '\0');
          }
        }
        else if (iVar5 == 0) {
          puStack_d0 = &UNK_1465a1900;
          FUN_1411a1e10(aplStack_c8,param_3,lVar10);
          uStack_90 = 0xffffffff;
          FUN_1411a2280(&puStack_d0);
          cVar4 = func_0x0001411a2300(&puStack_d0);
          if (cVar4 == '\0') {
            do {
              uVar6 = *(undefined8 *)(param_3 + 0x10);
              uVar7 = func_0x00014405ddb0(&puStack_d0);
              (**(code **)(*param_1 + 0x238))(param_1,uVar7,uVar6);
              if ((*(char *)((longlong)param_1 + 0x24) != '\0') ||
                 (*(char *)((longlong)param_1 + 0x25) != '\0')) break;
              FUN_14405ddd0(&puStack_d0);
              cVar4 = func_0x0001411a2300(&puStack_d0);
            } while (cVar4 == '\0');
          }
        }
        *(undefined1 *)((longlong)param_1 + 0x24) = uVar2;
      }
      param_1[1] = param_2;
      param_1[2] = lVar9;
      (**(code **)(*param_1 + 0x230))(param_1,param_2,param_3);
      break;
    case 0x27:
      (**(code **)(*param_1 + 0x110))(param_1,param_2 + *(longlong *)(lVar9 + 0x10),param_3);
      break;
    case 0x28:
      (**(code **)(*param_1 + 0xa8))(param_1,param_2 + *(longlong *)(lVar9 + 0x10),param_3);
    }
    param_1[1] = 0;
  }
  return;
}

