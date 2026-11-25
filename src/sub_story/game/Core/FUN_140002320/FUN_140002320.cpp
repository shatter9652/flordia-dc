// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140002320  size: 816 bytes
// Name:    FUN_140002320
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1407caee0, FUN_144fdb1c0, FUN_1452e2b10, FUN_1402e5b80, FUN_145454950, FUN_145414f10
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140002320(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  code *pcVar10;
  bool bVar11;
  undefined8 uStack_98;
  undefined8 uStack_90;
  longlong lStack_80;
  uint *puStack_78;
  code *pcStack_70;
  uint *puStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [24];
  
  lVar8 = *(longlong *)(param_1 + 0x268);
  lVar5 = func_0x000144da6540(*(undefined4 *)(lVar8 + 0x9c));
  if (*(short *)(*(longlong *)(lVar5 + 0x1068) + 0x58) != 0) {
    if ((*(int *)(param_1 + 0x1ac) < 0) ||
       (cVar4 = FUN_1407caee0(*(undefined4 *)(param_1 + 0x1a8)), cVar4 != '\0')) {
      *(undefined4 *)(param_1 + 0x1a8) = _DAT_14a9ae17c;
      *(undefined4 *)(param_1 + 0x1ac) = _DAT_14abbef40;
      uVar7 = *(uint *)(param_1 + 0x1b4);
      if ((ulonglong)uVar7 != 0) {
        lVar8 = 0;
        do {
          lVar5 = *(longlong *)(param_1 + 0x1c0 + lVar8);
          if (lVar5 != 0) {
            FUN_1452e2b10(lVar5,*(undefined2 *)(param_1 + 0x1b8 + lVar8));
          }
          *(undefined8 *)(param_1 + 0x1c0 + lVar8) = 0;
          lVar8 = lVar8 + 0x10;
        } while ((ulonglong)uVar7 << 4 != lVar8);
        lVar8 = *(longlong *)(param_1 + 0x268);
      }
      *(undefined8 *)(param_1 + 0x1b0) = 10;
      lVar8 = func_0x000144f20050(*(undefined4 *)(lVar8 + 0x9c));
      if ((lVar8 != 0) && (FUN_145454950(lVar8,&puStack_78), pcStack_70 != (code *)puStack_68)) {
        pcVar10 = pcStack_70;
LAB_140002434:
        uVar7 = *(uint *)pcVar10;
        uVar9 = (ulonglong)uVar7 & 0x1ffff;
        if ((((uVar9 == 0x1ffff) ||
             (plVar3 = *(longlong **)((ulonglong)(uVar7 >> 0x11 & 0x1f) * 8 + 0x14abbe7c0),
             plVar3 == (longlong *)0x0)) ||
            (uVar1 = *(uint *)(plVar3[5] + uVar9 * 4), (uVar1 >> 0x11 & 0x3ff) != uVar7 >> 0x16)) ||
           (((uVar1 & *(uint *)(plVar3 + 6)) != *(uint *)(plVar3 + 6) || (*plVar3 == 0))))
        goto LAB_14000247b;
        lVar8 = *plVar3 + (ulonglong)(uint)((int)uVar9 * (int)plVar3[1]);
        uVar7 = 0;
        puStack_78 = (uint *)pcVar10;
        do {
          uStack_98 = *(undefined8 *)(lVar8 + 0x70);
          uStack_90 = *(undefined8 *)(lVar8 + 0x78);
          func_0x000144dc3790(&uStack_98,auStack_58);
          cVar4 = FUN_145414f10(*(undefined4 *)(*(longlong *)(param_1 + 0x268) + 0x9c),auStack_58,0)
          ;
          if (cVar4 != '\0') {
            lVar5 = (ulonglong)*(uint *)(param_1 + 0x1b4) * 0x10;
            *(uint *)(param_1 + 0x1b4) = *(uint *)(param_1 + 0x1b4) + 1;
            *(undefined8 *)(param_1 + 0x1c0 + lVar5) = 0;
            FUN_144fdb1c0(param_1 + 0x1b8 + lVar5,lVar8);
          }
          do {
            pcVar10 = (code *)((longlong)pcVar10 + 4);
            if (pcVar10 == (code *)puStack_68) goto LAB_140002484;
            uVar1 = *(uint *)pcVar10;
            uVar9 = (ulonglong)uVar1 & 0x1ffff;
            iVar6 = (int)uVar9;
            if (((uVar9 == 0x1ffff) ||
                (plVar3 = *(longlong **)((ulonglong)(uVar1 >> 0x11 & 0x1f) * 8 + 0x14abbe7c0),
                plVar3 == (longlong *)0x0)) ||
               (uVar2 = *(uint *)(plVar3[5] + uVar9 * 4), (uVar2 >> 0x11 & 0x3ff) != uVar1 >> 0x16))
            {
              lVar8 = 0;
            }
            else {
              lVar8 = 0;
              if ((uVar2 & *(uint *)(plVar3 + 6)) == *(uint *)(plVar3 + 6)) {
                lVar8 = (ulonglong)(uint)((int)plVar3[1] * iVar6) + *plVar3;
              }
            }
          } while (lVar8 == 0);
        } while (((((iVar6 != 0x1ffff) &&
                   (plVar3 = *(longlong **)((ulonglong)(uVar1 >> 0x11 & 0x1f) * 8 + 0x14abbe7c0),
                   plVar3 != (longlong *)0x0)) &&
                  (uVar2 = *(uint *)(plVar3[5] + uVar9 * 4),
                  (uVar2 >> 0x11 & 0x3ff) == uVar1 >> 0x16)) &&
                 (((uVar2 & *(uint *)(plVar3 + 6)) == *(uint *)(plVar3 + 6) && (*plVar3 != 0)))) &&
                (lVar8 = *plVar3 + (ulonglong)(uint)((int)plVar3[1] * iVar6), bVar11 = uVar7 < 9,
                uVar7 = uVar7 + 1, bVar11));
      }
    }
LAB_140002484:
    if (*(int *)(param_1 + 0x1b4) != 0) {
      puStack_78 = (uint *)&lStack_80;
      pcStack_70 = FUN_14283fd90;
      puStack_68 = (uint *)&UNK_1401167b0;
      puStack_60 = &SUB_140004380;
      lStack_80 = param_1;
      FUN_1402e5b80(4);
    }
  }
  return;
LAB_14000247b:
  pcVar10 = (code *)((longlong)pcVar10 + 4);
  if (pcVar10 == (code *)puStack_68) goto LAB_140002484;
  goto LAB_140002434;
}

