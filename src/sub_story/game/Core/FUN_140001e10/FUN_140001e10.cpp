// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140001e10  size: 606 bytes
// Name:    FUN_140001e10
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1411595e0, FUN_14361f860, FUN_14134a100, FUN_14361f920, FUN_1459e0bb0, FUN_141adc3c0, FUN_14582edd0, FUN_1455db8cc, FUN_14361eaf0, FUN_1455db934, FUN_14361f900, FUN_14361f960
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140001e10(longlong param_1)

{
  undefined4 *puVar1;
  char cVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong unaff_GS_OFFSET;
  undefined1 auStack_38 [24];
  
  puVar1 = *(undefined4 **)(param_1 + 0x18);
  if ((puVar1 == (undefined4 *)0x0) ||
     (plVar6 = *(longlong **)(puVar1 + 2), plVar6 == (longlong *)0x0)) {
LAB_140001e72:
    plVar6 = (longlong *)0x0;
  }
  else if (*plVar6 != 0) {
    cVar2 = func_0x000145311e80(*plVar6 + 0x10);
    cVar3 = func_0x00014501bbd0((int)plVar6[0xe],(char)plVar6[0x18]);
    if ((cVar2 == '\0') || (cVar3 == '\0')) {
      FUN_14361eaf0(param_1,*puVar1);
      if (*(longlong *)(param_1 + 0x18) == 0) goto LAB_140001e72;
      plVar6 = *(longlong **)(*(longlong *)(param_1 + 0x18) + 8);
    }
  }
  auStack_38._0_12_ = ZEXT812(0);
  auStack_38._12_4_ = 0;
  FUN_1411595e0(param_1,auStack_38);
  if (auStack_38._4_4_ == 0) {
    if (*(short *)(param_1 + 8) == 0) {
      *(undefined8 *)(param_1 + 0x18) = 0;
      goto LAB_140001f72;
    }
    lVar4 = FUN_14134a100(param_1);
  }
  else if (auStack_38._4_4_ == 1) {
    lVar4 = *(longlong *)auStack_38._8_8_;
  }
  else {
    lVar4 = FUN_14361f860(param_1,auStack_38);
  }
  *(longlong *)(param_1 + 0x18) = lVar4;
  if ((lVar4 != 0) && (*(longlong **)(lVar4 + 8) != plVar6)) {
    if (*(int *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
                4) < _DAT_148ef9ac8) {
      FUN_1455db8cc(&DAT_148ef9ac8);
      if (_DAT_148ef9ac8 == -1) {
        DAT_148ef9ac4 = func_0x0001409d3e70(0x7012be1,1);
        FUN_1455db934(&DAT_148ef9ac8);
      }
    }
    lVar4 = func_0x000144da6540(*(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x9c));
    if ((lVar4 == 0) || (*(longlong *)(lVar4 + 0x10c0) == 0)) {
      lVar4 = 0;
    }
    else {
      lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0x10c0) + 0x10);
    }
    if ((plVar6 != (longlong *)0x0) && (*plVar6 != 0)) {
      FUN_1459e0bb0(*plVar6,plVar6 + 2);
      if (lVar4 != 0) {
        FUN_14361f900(plVar6[1]);
        if (DAT_148ef9ac4 == '\x01') {
          FUN_14361f920(lVar4,plVar6[1]);
        }
      }
    }
    lVar5 = *(longlong *)(param_1 + 0x18);
    plVar6 = *(longlong **)(lVar5 + 8);
    if ((plVar6 != (longlong *)0x0) && (*plVar6 != 0)) {
      FUN_14582edd0(*plVar6,plVar6 + 2);
      lVar5 = *(longlong *)(param_1 + 0x18);
      if (lVar4 != 0) {
        if (*(char *)(**(longlong **)(lVar5 + 8) + 0xd7) == '\0') {
          FUN_14361f960((*(longlong **)(lVar5 + 8))[1]);
          lVar5 = *(longlong *)(param_1 + 0x18);
          if ((DAT_148ef9ac4 == '\x01') && (*(char *)(**(longlong **)(lVar5 + 8) + 0xd8) == '\x01'))
          {
            func_0x00014361f9b0(lVar4,(*(longlong **)(lVar5 + 8))[1]);
            lVar5 = *(longlong *)(param_1 + 0x18);
          }
        }
      }
    }
    FUN_141adc3c0(*(undefined8 *)(param_1 + 0x10),0x59b103a2,*(longlong *)(lVar5 + 8) + 0x130,0x8000
                 );
  }
LAB_140001f72:
  auStack_38._4_4_ = 0;
  if (auStack_38._8_8_ != 0) {
    func_0x000144d9c130();
  }
  return;
}

