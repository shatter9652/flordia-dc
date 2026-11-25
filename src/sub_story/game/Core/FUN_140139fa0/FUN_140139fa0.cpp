// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140139fa0  size: 1574 bytes
// Name:    FUN_140139fa0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140056a20, FUN_144dbce00, FUN_140056cb0, FUN_140037a50
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140139fa0(void)

{
  longlong *plVar1;
  undefined2 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  uint *puVar6;
  ushort uVar7;
  char cVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong unaff_GS_OFFSET;
  uint uStack_48;
  int iStack_44;
  undefined8 uStack_40;
  
  lVar3 = **(longlong **)(unaff_GS_OFFSET + 0x58);
  if (*(char *)(lVar3 + 0x95c) == '\x01') {
    uVar10 = *(uint *)(lVar3 + 0x958) & 0xf;
    cVar8 = *(char *)(*(longlong *)
                       (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8);
    if (uVar10 != 0) {
      if (cVar8 == '\0') {
        func_0x0001455db994();
      }
      lVar4 = **(longlong **)(unaff_GS_OFFSET + 0x58);
      if ((_DAT_148406260 != 0) &&
         (lVar5 = *(longlong *)(_DAT_148406260 + 8),
         (ushort)(*(short *)(lVar5 + 0x12) - 1U) < _DAT_14a943ab8)) {
        uVar2 = *(undefined2 *)(_DAT_148406260 + 0x16);
        lVar9 = *(longlong *)(lVar4 + 0x12a8);
        iStack_44 = CONCAT22(iStack_44._2_2_,uVar2);
        uStack_48 = *(uint *)(_DAT_148406260 + 0x12);
        *(undefined1 *)(lVar9 + 0x121a4) = 1;
        FUN_144dbce00(lVar9,CONCAT71((uint7)(byte)((ushort)uVar2 >> 8),1),lVar5,&uStack_48,0x105);
      }
      if (*(char *)(*(longlong *)
                     (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8) ==
          '\0') {
        func_0x0001455db994();
      }
      uVar7 = _DAT_148406268;
      plVar1 = (longlong *)(lVar4 + 0x12a8);
      if (_DAT_148406268 != 0) {
        lVar4 = *plVar1;
        if (*(longlong *)(lVar4 + 0x39c0 + (ulonglong)(_DAT_148406268 >> 2) * 8) != _DAT_148406260)
        {
          *(longlong *)(lVar4 + 0x39c0 + (ulonglong)(_DAT_148406268 >> 2) * 8) = _DAT_148406260;
          *(ulonglong *)(lVar4 + 0x20) = *(ulonglong *)(lVar4 + 0x20) | 0x10L << ((byte)uVar7 & 3);
        }
      }
      if (*(char *)(*(longlong *)
                     (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8) ==
          '\0') {
        func_0x0001455db994();
      }
      uVar7 = _DAT_1484062b0;
      if (_DAT_1484062b0 != 0) {
        lVar4 = *plVar1;
        if (*(longlong *)(lVar4 + 0x39c0 + (ulonglong)(_DAT_1484062b0 >> 2) * 8) != _DAT_1484062a8)
        {
          *(longlong *)(lVar4 + 0x39c0 + (ulonglong)(_DAT_1484062b0 >> 2) * 8) = _DAT_1484062a8;
          *(ulonglong *)(lVar4 + 0x20) = *(ulonglong *)(lVar4 + 0x20) | 0x10L << ((byte)uVar7 & 3);
        }
      }
      if (*(char *)(*(longlong *)
                     (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8) ==
          '\0') {
        func_0x0001455db994();
      }
      uVar7 = _DAT_148406280;
      if (_DAT_148406280 != 0) {
        lVar4 = *plVar1;
        if (*(longlong *)(lVar4 + 0x39c0 + (ulonglong)(_DAT_148406280 >> 2) * 8) != _DAT_148406278)
        {
          *(longlong *)(lVar4 + 0x39c0 + (ulonglong)(_DAT_148406280 >> 2) * 8) = _DAT_148406278;
          *(ulonglong *)(lVar4 + 0x20) = *(ulonglong *)(lVar4 + 0x20) | 0x10L << ((byte)uVar7 & 3);
        }
      }
      lVar4 = _DAT_148406248;
      uVar11 = (ulonglong)DAT_146adb3b6;
      if (*(char *)(*(longlong *)
                     (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8) ==
          '\0') {
        func_0x0001455db994();
      }
      lVar9 = *plVar1;
      lVar5 = *(longlong *)(lVar4 + 0xc70) + 0x18 +
              (ulonglong)(*(uint *)(*(longlong *)(lVar4 + 0xc68) + uVar11 * 4) >> 0xf & 0x1ff) *
              0x18;
      *(longlong *)(lVar9 + 0x12298) = lVar5;
      lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0xc60) + (ulonglong)*(byte *)(lVar5 + 5) * 8);
      lVar5 = *(longlong *)(lVar9 + 0x10);
      if (lVar5 != lVar4) {
        uVar11 = 0x700002f0ff;
        if ((lVar4 != 0) && (lVar5 != 0)) {
          if ((*(longlong **)(lVar5 + 0xe8) == (longlong *)0x0) ||
             (((*(longlong **)(lVar4 + 0xe8) == (longlong *)0x0 ||
               (**(longlong **)(lVar5 + 0xe8) != **(longlong **)(lVar4 + 0xe8))) ||
              (*(char *)(lVar4 + 0x108) != *(char *)(lVar5 + 0x108))))) {
            uVar11 = 0x1011;
          }
          else {
            uVar11 = 0;
          }
          if (((*(longlong **)(lVar5 + 0xf0) == (longlong *)0x0) ||
              (*(longlong **)(lVar4 + 0xf0) == (longlong *)0x0)) ||
             ((**(longlong **)(lVar5 + 0xf0) != **(longlong **)(lVar4 + 0xf0) ||
              (*(char *)(lVar4 + 0x109) != *(char *)(lVar5 + 0x109))))) {
            uVar11 = uVar11 | 0x2022;
          }
          if (((*(longlong **)(lVar5 + 0xf8) == (longlong *)0x0) ||
              (*(longlong **)(lVar4 + 0xf8) == (longlong *)0x0)) ||
             ((**(longlong **)(lVar5 + 0xf8) != **(longlong **)(lVar4 + 0xf8) ||
              (*(char *)(lVar4 + 0x10a) != *(char *)(lVar5 + 0x10a))))) {
            uVar11 = uVar11 | 0x4044;
          }
          if ((((*(longlong **)(lVar5 + 0x100) == (longlong *)0x0) ||
               (*(longlong **)(lVar4 + 0x100) == (longlong *)0x0)) ||
              (**(longlong **)(lVar5 + 0x100) != **(longlong **)(lVar4 + 0x100))) ||
             (*(char *)(lVar4 + 0x10b) != *(char *)(lVar5 + 0x10b))) {
            uVar11 = uVar11 | 0x8088;
          }
          uVar11 = uVar11 | 0x20000;
        }
        *(longlong *)(lVar9 + 0x10) = lVar4;
        *(ulonglong *)(lVar9 + 0x20) = *(ulonglong *)(lVar9 + 0x20) | uVar11;
      }
      if (*(char *)(*(longlong *)
                     (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8) ==
          '\0') {
        func_0x0001455db994();
        lVar9 = *plVar1;
      }
      iStack_44 = *(uint *)(lVar3 + 0x958) - uVar10;
      uStack_48 = uVar10 | 0x100000;
      uStack_40 = 0x200001134f;
      func_0x000144e89080(lVar9,&uStack_48,4,0);
      if (*(char *)(*(longlong *)
                     (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8) ==
          '\0') {
        func_0x0001455db994();
      }
      lVar4 = *plVar1;
      *(undefined1 *)(lVar4 + 0x121a4) = 1;
      FUN_140056a20(lVar4,1,1,1);
      if ((**(uint **)(lVar4 + 0x12198) & 0xc000000) == 0) {
        cVar8 = func_0x000144e88f60(lVar4);
        if (cVar8 != '\0') {
          puVar6 = *(uint **)(lVar4 + 0x12198);
          while ((*puVar6 & 0xe000000) != 0x2000000) {
            FUN_140037a50(puVar6,0,1);
          }
          FUN_140056cb0(lVar4);
        }
      }
      if (*(char *)(*(longlong *)
                     (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8) ==
          '\0') {
        func_0x0001455db994();
      }
      if ((_DAT_148406260 != 0) &&
         (lVar4 = *(longlong *)(_DAT_148406260 + 8),
         (ushort)(*(short *)(lVar4 + 0x12) - 1U) < _DAT_14a943ab8)) {
        uVar2 = *(undefined2 *)(_DAT_148406260 + 0x16);
        lVar5 = *plVar1;
        iStack_44 = CONCAT22(iStack_44._2_2_,uVar2);
        uStack_48 = *(uint *)(_DAT_148406260 + 0x12);
        *(undefined1 *)(lVar5 + 0x121a4) = 1;
        FUN_144dbce00(lVar5,CONCAT71((uint7)(byte)((ushort)uVar2 >> 8),1),lVar4,&uStack_48,0x105);
      }
      cVar8 = *(char *)(*(longlong *)
                         (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8);
    }
    if (cVar8 == '\0') {
      func_0x0001455db994();
    }
    lVar4 = **(longlong **)(unaff_GS_OFFSET + 0x58);
    if ((_DAT_148406278 != 0) &&
       (lVar5 = *(longlong *)(_DAT_148406278 + 8),
       (ushort)(*(short *)(lVar5 + 0x12) - 1U) < _DAT_14a943ab8)) {
      uVar2 = *(undefined2 *)(_DAT_148406278 + 0x16);
      lVar9 = *(longlong *)(lVar4 + 0x12a8);
      iStack_44 = CONCAT22(iStack_44._2_2_,uVar2);
      uStack_48 = *(uint *)(_DAT_148406278 + 0x12);
      *(undefined1 *)(lVar9 + 0x121a4) = 1;
      FUN_144dbce00(lVar9,CONCAT71((uint7)(byte)((ushort)uVar2 >> 8),1),lVar5,&uStack_48,0x101);
    }
    if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8)
                 + 8) == '\0') {
      func_0x0001455db994();
    }
    plVar1 = (longlong *)(lVar4 + 0x12a8);
    if ((_DAT_1484062a8 != 0) &&
       (lVar4 = *(longlong *)(_DAT_1484062a8 + 8),
       (ushort)(*(short *)(lVar4 + 0x12) - 1U) < _DAT_14a943ab8)) {
      uVar2 = *(undefined2 *)(_DAT_1484062a8 + 0x16);
      lVar5 = *plVar1;
      iStack_44 = CONCAT22(iStack_44._2_2_,uVar2);
      uStack_48 = *(uint *)(_DAT_1484062a8 + 0x12);
      *(undefined1 *)(lVar5 + 0x121a4) = 1;
      FUN_144dbce00(lVar5,CONCAT71((uint7)(byte)((ushort)uVar2 >> 8),1),lVar4,&uStack_48,0x106);
    }
    if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8)
                 + 8) == '\0') {
      func_0x0001455db994();
    }
    if ((_DAT_148406290 != 0) &&
       (lVar4 = *(longlong *)(_DAT_148406290 + 8),
       (ushort)(*(short *)(lVar4 + 0x12) - 1U) < _DAT_14a943ab8)) {
      uVar2 = *(undefined2 *)(_DAT_148406290 + 0x16);
      lVar5 = *plVar1;
      iStack_44 = CONCAT22(iStack_44._2_2_,uVar2);
      uStack_48 = *(uint *)(_DAT_148406290 + 0x12);
      *(undefined1 *)(lVar5 + 0x121a4) = 1;
      FUN_144dbce00(lVar5,CONCAT71((uint7)(byte)((ushort)uVar2 >> 8),1),lVar4,&uStack_48,0x105);
    }
    *(undefined1 *)(lVar3 + 0x95c) = 0;
  }
  return;
}

